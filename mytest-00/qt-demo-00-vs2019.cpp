#include "qtffmpegdemo01.h"
#include <QDateTime>
extern "C"
{
#include "libavcodec/avcodec.h" 
#include "libavformat/avformat.h" 
#include "libavfilter/avfilter.h" 
#include "libavfilter/buffersink.h" 
#include "libavfilter/buffersrc.h" 
#include "libavutil/avutil.h" 
#include "libavutil/opt.h" 
#include "libavutil/pixdesc.h" 
#include "libswscale/swscale.h" 
};

qtffmpegdemo01::qtffmpegdemo01(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	int t1 = avcodec_version();
	QString current_version = QString::number(t1);
	ui.versionlabel->setText(current_version);
	//int tmp = avcodec_version();
}