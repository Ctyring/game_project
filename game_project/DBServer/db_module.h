#include "sylar/module.h"

namespace game_project {

class DBModule : public sylar::Module {
public:
    typedef std::shared_ptr<DBModule> ptr;
    DBModule();
    bool onLoad() override;
    bool onUnload() override;
    bool onServerReady() override;
    bool onServerUp() override;
};

}
