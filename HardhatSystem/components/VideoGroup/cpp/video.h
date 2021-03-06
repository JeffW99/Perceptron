#ifndef GROUP_VIDEOGROUP_CPP_VIDEO_H_
#define GROUP_VIDEOGROUP_CPP_VIDEO_H_

// JQToolsLibrary import
#include <JQToolsLibrary>

#define VIDEO_INITIALIZA                                               \
{                                                                       \
    qmlRegisterType<Video::Manage>("Video", 1, 0, "VideoManage"); \
}

namespace Video
{

class Manage: public AbstractTool
{
    Q_OBJECT
    Q_DISABLE_COPY(Manage)

public:
    Manage() = default;

    ~Manage() = default;

public slots:
    void openGitHubLink();

    void openLatestVersionDownloadLink();
};

}

#endif//GROUP_VIDEOGROUP_CPP_VIDEO_H_
