--- chrome/browser/component_updater/widevine_cdm_component_installer.cc.orig	2024-02-23 21:04:38 UTC
+++ chrome/browser/component_updater/widevine_cdm_component_installer.cc
@@ -40,7 +40,7 @@
 #include "third_party/widevine/cdm/buildflags.h"
 #include "third_party/widevine/cdm/widevine_cdm_common.h"
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #include "chrome/common/media/component_widevine_cdm_hint_file_linux.h"
 #endif
 
@@ -78,7 +78,7 @@ static_assert(std::size(kWidevineSha2Hash) == crypto::
 const char ImageLoaderComponentName[] = "WidevineCdm";
 #endif
 
-#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 // On Linux and ChromeOS the Widevine CDM is loaded at startup before the
 // zygote is locked down. As a result there is no need to register the CDM
 // with Chrome as it can't be used until Chrome is restarted.
@@ -364,7 +364,7 @@ void WidevineCdmComponentInstallerPolicy::UpdateCdmPat
     return;
   }
 
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
   VLOG(1) << "Updating hint file with Widevine CDM " << cdm_version;
 
   // This is running on a thread that allows IO, so simply update the hint file.
