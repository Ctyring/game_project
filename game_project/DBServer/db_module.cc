#include "my_module.h"
#include "sylar/config.h"
#include "sylar/log.h"

namespace game_project {

static sylar::Logger::ptr g_logger = SYLAR_LOG_ROOT();

DBModule::DBModule()
    :sylar::Module("game_project", "1.0", "") {
}

bool DBModule::onLoad() {
    SYLAR_LOG_INFO(g_logger) << "onLoad";
    return true;
}

bool DBModule::onUnload() {
    SYLAR_LOG_INFO(g_logger) << "onUnload";
    return true;
}

bool DBModule::onServerReady() {
    SYLAR_LOG_INFO(g_logger) << "onServerReady";
    return true;
}

bool DBModule::onServerUp() {
    SYLAR_LOG_INFO(g_logger) << "onServerUp";
    return true;
}

}

extern "C" {

sylar::Module* CreateModule() {
    sylar::Module* module = new game_project::DBModule;
    SYLAR_LOG_INFO(game_project::g_logger) << "CreateModule " << module;
    return module;
}

void DestoryModule(sylar::Module* module) {
    SYLAR_LOG_INFO(game_project::g_logger) << "CreateModule " << module;
    delete module;
}

}
