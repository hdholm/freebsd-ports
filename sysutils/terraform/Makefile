PORTNAME=	terraform
DISTVERSIONPREFIX=	v
DISTVERSION=	1.7.4
PORTREVISION=	1
CATEGORIES=	sysutils

MAINTAINER=	dutra@FreeBSD.org
COMMENT=	Provides a common configuration to launch infrastructure
WWW=		https://terraform.io/

USES=		cpe go:1.21,modules

LICENSE_NAME=	Business Source License 1.1
LICENSE_FILE=	${WRKSRC}/LICENSE
LICENSE_PERMS=	dist-mirror pkg-mirror pkg-sell auto-accept

CPE_VENDOR=	hashicorp
GO_MODULE=	github.com/hashicorp/terraform

PLIST_FILES=	bin/${PORTNAME}

.include <bsd.port.mk>
