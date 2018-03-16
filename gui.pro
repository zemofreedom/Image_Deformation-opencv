#-------------------------------------------------
#
# Project created by QtCreator 2018-03-03T15:17:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = gui
TEMPLATE = app


SOURCES += main.cpp\
        deformwin.cpp \
    myimage.cpp \
    pointspaint.cpp \
    projfile.cpp \
    singlephotoview.cpp\
    lib\delaunay.cpp\
    lib\imgwarp_mls.cpp\
    lib\imgwarp_mls_rigid.cpp\
    lib\imgwarp_mls_similarity.cpp\
    lib\imgwarp_piecewiseaffine.cpp

HEADERS  += deformwin.h \
    myimage.h \
    pointspaint.h \
    projfile.h \
    singlephotoview.h\
    lib\delaunay.h\
    lib\imgwarp_mls.h\
    lib\imgwarp_mls_rigid.h\
    lib\imgwarp_mls_similarity.h\
    lib\imgwarp_piecewiseaffine.h

OPENCV_PATH     = F:\opencv # 你的opencv folder
INCLUDEPATH += $${OPENCV_PATH}/include \
               $${OPENCV_PATH}/include/opencv \
               $${OPENCV_PATH}/include/opencv2

FORMS    += deformwin.ui

LIBS+=F:\opencv\lib\libopencv_calib3d249.dll.a\
F:\opencv\lib\libopencv_contrib249.dll.a\
F:\opencv\lib\libopencv_core249.dll.a\
F:\opencv\lib\libopencv_features2d249.dll.a\
F:\opencv\lib\libopencv_flann249.dll.a\
F:\opencv\lib\libopencv_gpu249.dll.a\
F:\opencv\lib\libopencv_highgui249.dll.a\
F:\opencv\lib\libopencv_imgproc249.dll.a\
F:\opencv\lib\libopencv_legacy249.dll.a\
F:\opencv\lib\libopencv_ml249.dll.a\
F:\opencv\lib\libopencv_objdetect249.dll.a\
F:\opencv\lib\libopencv_video249.dll.a
