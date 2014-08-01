#ifndef BEYOND_ENGINE_RENDER_RENDEREVENTTYPE_H__INCLUDE
#define BEYOND_ENGINE_RENDER_RENDEREVENTTYPE_H__INCLUDE

#include "Event/EventType.h"

enum ERenderEventType
{
    eRET_RENDER_MANAGER = eET_EVENT_RENDER + (1 << 16),
    eRET_RENDER_WINDOW = eET_EVENT_RENDER + (2 << 16),
};

#endif