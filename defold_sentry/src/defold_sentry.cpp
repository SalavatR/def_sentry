#define LIB_NAME "DefoldSentry"
#define MODULE_NAME "defold_sentry"

#include <dmsdk/sdk.h>

static void LuaInit(lua_State* L){}

dmExtension::Result AppInitializeDefoldSentry(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result InitializeDefoldSentry(dmExtension::Params* params){LuaInit(params->m_L);return dmExtension::RESULT_OK;}
dmExtension::Result AppFinalizeDefoldSentry(dmExtension::AppParams* params){return dmExtension::RESULT_OK;}
dmExtension::Result FinalizeDefoldSentry(dmExtension::Params* params){return dmExtension::RESULT_OK;}
dmExtension::Result OnUpdateDefoldSentry(dmExtension::Params* params){return dmExtension::RESULT_OK;}
void OnEventDefoldSentry(dmExtension::Params* params, const dmExtension::Event* event){}

DM_DECLARE_EXTENSION(DefoldSentry,
LIB_NAME,
AppInitializeDefoldSentry,
AppFinalizeDefoldSentry,
InitializeDefoldSentry,
OnUpdateDefoldSentry,
OnEventDefoldSentry,
FinalizeDefoldSentry)