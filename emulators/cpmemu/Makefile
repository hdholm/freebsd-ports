PORTNAME=	cpmemu
PORTVERSION=	0.2.1.1
CATEGORIES=	emulators
MASTER_SITES=	SUNSITE/system/emulators
DISTNAME=	cpm-0.2.1

PATCH_SITES=	SUNSITE/system/emulators
PATCHFILES=	cpm-0.2.1-glibc-rjm.patch.gz
PATCH_DIST_STRIP=	-p1

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Cpm emulator

DEPRECATED=	BROKEN on all versions since last year
EXPIRATION_DATE=	2024-03-18
BROKEN=	incorrect register `%esi' used with `w' suffix
ONLY_FOR_ARCHS=	i386

USES=		compiler

.include <bsd.port.pre.mk>

.if ${COMPILER_TYPE} == "clang"
USE_BINUTILS=	yes
CPPFLAGS+=	-no-integrated-as
.endif

.include <bsd.port.post.mk>
