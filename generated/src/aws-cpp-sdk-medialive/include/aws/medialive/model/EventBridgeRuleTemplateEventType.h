/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class EventBridgeRuleTemplateEventType
  {
    NOT_SET,
    MEDIALIVE_MULTIPLEX_ALERT,
    MEDIALIVE_MULTIPLEX_STATE_CHANGE,
    MEDIALIVE_CHANNEL_ALERT,
    MEDIALIVE_CHANNEL_INPUT_CHANGE,
    MEDIALIVE_CHANNEL_STATE_CHANGE,
    MEDIAPACKAGE_INPUT_NOTIFICATION,
    MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION,
    MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION,
    SIGNAL_MAP_ACTIVE_ALARM,
    MEDIACONNECT_ALERT,
    MEDIACONNECT_SOURCE_HEALTH,
    MEDIACONNECT_OUTPUT_HEALTH,
    MEDIACONNECT_FLOW_STATUS_CHANGE
  };

namespace EventBridgeRuleTemplateEventTypeMapper
{
AWS_MEDIALIVE_API EventBridgeRuleTemplateEventType GetEventBridgeRuleTemplateEventTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEventBridgeRuleTemplateEventType(EventBridgeRuleTemplateEventType value);
} // namespace EventBridgeRuleTemplateEventTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
