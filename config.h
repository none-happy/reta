#ifndef QB_CONFIG_H__
#define QB_CONFIG_H__

#define PACKAGE_NAME "retroarch"
#define HAVE_7ZIP 1
#define HAVE_ACCESSIBILITY 1
/* #undef HAVE_AL */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_ALSA 1
#endif
/* #undef HAVE_ANGLE */
/* #undef HAVE_AUDIOIO */
#define HAVE_AUDIOMIXER 1
/* #undef HAVE_AV_CHANNEL_LAYOUT */
/* #undef HAVE_AVCODEC */
/* #undef HAVE_AVDEVICE */
/* #undef HAVE_AVFORMAT */
/* #undef HAVE_AVUTIL */
/* #undef HAVE_BLISSBOX */
/* #undef HAVE_BLUETOOTH */
#define HAVE_BSV_MOVIE 1
/* #undef HAVE_BUILTINBEARSSL */
#define HAVE_BUILTINFLAC 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_BUILTINGLSLANG 1
#endif
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_BUILTINMBEDTLS 1
#endif
#define HAVE_BUILTINZLIB 1
#define HAVE_C99 1
/* #undef HAVE_CACA */
#define HAVE_CC 1
#define HAVE_CC_RESAMPLER 1
#define HAVE_CDROM 1
/* #undef HAVE_CG */
#ifndef CXX_BUILD
#define HAVE_CHD 1
#endif
#define HAVE_CHEATS 1
/* #undef HAVE_CHECK */
#define HAVE_CHEEVOS 1
#define HAVE_COMMAND 1
#define HAVE_CONFIGFILE 1
/* #undef HAVE_COREAUDIO3 */
#define HAVE_CORE_INFO_CACHE 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_CRTSWITCHRES 1
#endif
#define HAVE_CXX 1
#define HAVE_CXX11 1
/* #undef HAVE_D3D8 */
/* #undef HAVE_D3D9 */
/* #undef HAVE_D3DX8 */
/* #undef HAVE_D3DX9 */
/* #undef HAVE_DBUS */
/* #undef HAVE_DEBUG */
/* #undef HAVE_DINPUT */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_DISCORD 1
#endif
/* #undef HAVE_DISPMANX */
/* #undef HAVE_DRM */
/* #undef HAVE_DRMINGW */
#define HAVE_DR_MP3 1
/* #undef HAVE_DSOUND */
#define HAVE_DSP_FILTER 1
#define HAVE_DYLIB 1
#define HAVE_DYNAMIC 1
/* #undef HAVE_DYNAMIC_EGL */
#define HAVE_EGL 1
/* #undef HAVE_EXYNOS */
/* #undef HAVE_FFMPEG */
/* #undef HAVE_FLAC */
/* #undef HAVE_FLOATHARD */
/* #undef HAVE_FLOATSOFTFP */
/* #undef HAVE_FONTCONFIG */
#define HAVE_FREETYPE 1
/* #undef HAVE_GBM */
#define HAVE_GDI 1
#define HAVE_GETADDRINFO 1
#define HAVE_GETOPT_LONG 1
#define HAVE_GFX_WIDGETS 1
#define HAVE_GLSL 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_GLSLANG 1
#endif
/* #undef HAVE_GLSLANG_HLSL */
/* #undef HAVE_GLSLANG_OGLCOMPILER */
/* #undef HAVE_GLSLANG_OSDEPENDENT */
/* #undef HAVE_GLSLANG_SPIRV */
/* #undef HAVE_GLSLANG_SPIRV_TOOLS */
/* #undef HAVE_GLSLANG_SPIRV_TOOLS_OPT */
#define HAVE_HID 1
/* #undef HAVE_HLSL */
#define HAVE_IBXM 1
#define HAVE_IFINFO 1
#define HAVE_IMAGEVIEWER 1
/* #undef HAVE_JACK */
/* #undef HAVE_KMS */
#define HAVE_LANGEXTRA 1
/* #undef HAVE_LIBCHECK */
/* #undef HAVE_LIBDECOR */
#define HAVE_LIBRETRODB 1
/* #undef HAVE_LIBSHAKE */
/* #undef HAVE_LIBUSB */
/* #undef HAVE_LUA */
/* #undef HAVE_MALI_FBDEV */
#define HAVE_MEMFD_CREATE 1
#define HAVE_MENU 1
/* #undef HAVE_METAL */
/* #undef HAVE_MIST */
#define HAVE_MMAP 1
/* #undef HAVE_MOC */
/* #undef HAVE_MPV */
#define HAVE_NEAREST_RESAMPLER 1
/* #undef HAVE_NEON */
#define HAVE_NETPLAYDISCOVERY 1
#define HAVE_NETPLAYDISCOVERY 1
#define HAVE_NETWORK_CMD 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_NETWORKGAMEPAD 1
#endif
#define HAVE_NETWORKING 1
/* #undef HAVE_NETWORK_VIDEO */
#define HAVE_NOUNUSED 1
#define HAVE_NOUNUSED_VARIABLE 1
#define HAVE_NVDA 1
/* #undef HAVE_ODROIDGO2 */
/* #undef HAVE_OMAP */
#define HAVE_ONLINE_UPDATER 1
/* #undef HAVE_OPENDINGUX_FBDEV */
#define HAVE_OPENGL 1
#define HAVE_OPENGL1 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_OPENGL_CORE 1
#endif
/* #undef HAVE_OPENGLES */
/* #undef HAVE_OPENGLES3 */
/* #undef HAVE_OPENGLES3_1 */
/* #undef HAVE_OPENGLES3_2 */
#define HAVE_OPENSSL 1
/* #undef HAVE_OSMESA */
#define HAVE_OSS 1
/* #undef HAVE_OSS_BSD */
/* #undef HAVE_OSS_LIB */
#define HAVE_OVERLAY 1
#define HAVE_PARPORT 1
#define HAVE_PATCH 1
/* #undef HAVE_PLAIN_DRM */
/* #undef HAVE_PRESERVE_DYLIB */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_PULSE 1
#endif
/* #undef HAVE_QT */
/* #undef HAVE_QT5CONCURRENT */
/* #undef HAVE_QT5CORE */
/* #undef HAVE_QT5GUI */
/* #undef HAVE_QT5NETWORK */
/* #undef HAVE_QT5WIDGETS */
#define HAVE_RBMP 1
#define HAVE_REWIND 1
#define HAVE_RJPEG 1
/* #undef HAVE_ROAR */
#define HAVE_RPILED 1
#define HAVE_RPNG 1
/* #undef HAVE_RSOUND */
#define HAVE_RTGA 1
#define HAVE_RUNAHEAD 1
#define HAVE_RWAV 1
/* #undef HAVE_SAPI */
#define HAVE_SCREENSHOTS 1
/* #undef HAVE_SDL */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_SDL2 1
#endif
/* #undef HAVE_SDL_DINGUX */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_SHADERPIPELINE 1
#endif
/* #undef HAVE_SIXEL */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_SLANG 1
#endif
/* #undef HAVE_SOCKET_LEGACY */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_SPIRV_CROSS 1
#endif
#define HAVE_SR2 1
/* #undef HAVE_SSA */
/* #undef HAVE_SSE */
#if __cplusplus || __STDC_VERSION__ >= 199901L
#define HAVE_SSL 1
#endif
#define HAVE_STB_FONT 1
#define HAVE_STB_IMAGE 1
#define HAVE_STB_VORBIS 1
#define HAVE_STDIN_CMD 1
/* #undef HAVE_STEAM */
#define HAVE_STRCASESTR 1
/* #undef HAVE_SUNXI */
/* #undef HAVE_SWRESAMPLE */
/* #undef HAVE_SWSCALE */
/* #undef HAVE_SYSTEMD */
/* #undef HAVE_SYSTEMMBEDTLS */
#define HAVE_THREADS 1
#define HAVE_THREAD_STORAGE 1
#define HAVE_TINYALSA 1
#define HAVE_TRANSLATE 1
#define HAVE_UDEV 1
#define HAVE_UPDATE_ASSETS 1
#define HAVE_UPDATE_CORES 1
/* #undef HAVE_V4L2 */
/* #undef HAVE_VC_TEST */
/* #undef HAVE_VG */
/* #undef HAVE_VIDEOCORE */
#define HAVE_VIDEO_FILTER 1
#define HAVE_VIDEO_LAYOUT 1
/* #undef HAVE_VIDEOPROCESSOR */
/* #undef HAVE_VIVANTE_FBDEV */
/* #undef HAVE_VULKAN */
#define HAVE_VULKAN_DISPLAY 1
#if __cplusplus || __STDC_VERSION__ >= 199901L
#ifndef CXX_BUILD
#define HAVE_WAYLAND 1
#endif
#endif
#define HAVE_WAYLAND_CURSOR 1
/* #undef HAVE_WAYLAND_PROTOS */
#define HAVE_WAYLAND_SCANNER 1
/* #undef HAVE_WIFI */
#define HAVE_WINRAWINPUT 1
#define HAVE_X11 1
#define HAVE_XCB 1
#define HAVE_XEXT 1
#define HAVE_XF86VM 1
#define HAVE_XINERAMA 1
/* #undef HAVE_XINPUT */
#define HAVE_XKBCOMMON 1
#define HAVE_XRANDR 1
#define HAVE_XSHM 1
#define HAVE_XVIDEO 1
#define HAVE_ZLIB 1
#endif
