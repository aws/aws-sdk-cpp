/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/EventBridgeRuleTemplateEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace EventBridgeRuleTemplateEventTypeMapper
      {

        static const int MEDIALIVE_MULTIPLEX_ALERT_HASH = HashingUtils::HashString("MEDIALIVE_MULTIPLEX_ALERT");
        static const int MEDIALIVE_MULTIPLEX_STATE_CHANGE_HASH = HashingUtils::HashString("MEDIALIVE_MULTIPLEX_STATE_CHANGE");
        static const int MEDIALIVE_CHANNEL_ALERT_HASH = HashingUtils::HashString("MEDIALIVE_CHANNEL_ALERT");
        static const int MEDIALIVE_CHANNEL_INPUT_CHANGE_HASH = HashingUtils::HashString("MEDIALIVE_CHANNEL_INPUT_CHANGE");
        static const int MEDIALIVE_CHANNEL_STATE_CHANGE_HASH = HashingUtils::HashString("MEDIALIVE_CHANNEL_STATE_CHANGE");
        static const int MEDIAPACKAGE_INPUT_NOTIFICATION_HASH = HashingUtils::HashString("MEDIAPACKAGE_INPUT_NOTIFICATION");
        static const int MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION_HASH = HashingUtils::HashString("MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION");
        static const int MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION_HASH = HashingUtils::HashString("MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION");
        static const int SIGNAL_MAP_ACTIVE_ALARM_HASH = HashingUtils::HashString("SIGNAL_MAP_ACTIVE_ALARM");
        static const int MEDIACONNECT_ALERT_HASH = HashingUtils::HashString("MEDIACONNECT_ALERT");
        static const int MEDIACONNECT_SOURCE_HEALTH_HASH = HashingUtils::HashString("MEDIACONNECT_SOURCE_HEALTH");
        static const int MEDIACONNECT_OUTPUT_HEALTH_HASH = HashingUtils::HashString("MEDIACONNECT_OUTPUT_HEALTH");
        static const int MEDIACONNECT_FLOW_STATUS_CHANGE_HASH = HashingUtils::HashString("MEDIACONNECT_FLOW_STATUS_CHANGE");


        EventBridgeRuleTemplateEventType GetEventBridgeRuleTemplateEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MEDIALIVE_MULTIPLEX_ALERT_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIALIVE_MULTIPLEX_ALERT;
          }
          else if (hashCode == MEDIALIVE_MULTIPLEX_STATE_CHANGE_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIALIVE_MULTIPLEX_STATE_CHANGE;
          }
          else if (hashCode == MEDIALIVE_CHANNEL_ALERT_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_ALERT;
          }
          else if (hashCode == MEDIALIVE_CHANNEL_INPUT_CHANGE_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_INPUT_CHANGE;
          }
          else if (hashCode == MEDIALIVE_CHANNEL_STATE_CHANGE_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_STATE_CHANGE;
          }
          else if (hashCode == MEDIAPACKAGE_INPUT_NOTIFICATION_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIAPACKAGE_INPUT_NOTIFICATION;
          }
          else if (hashCode == MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION;
          }
          else if (hashCode == MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION;
          }
          else if (hashCode == SIGNAL_MAP_ACTIVE_ALARM_HASH)
          {
            return EventBridgeRuleTemplateEventType::SIGNAL_MAP_ACTIVE_ALARM;
          }
          else if (hashCode == MEDIACONNECT_ALERT_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIACONNECT_ALERT;
          }
          else if (hashCode == MEDIACONNECT_SOURCE_HEALTH_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIACONNECT_SOURCE_HEALTH;
          }
          else if (hashCode == MEDIACONNECT_OUTPUT_HEALTH_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIACONNECT_OUTPUT_HEALTH;
          }
          else if (hashCode == MEDIACONNECT_FLOW_STATUS_CHANGE_HASH)
          {
            return EventBridgeRuleTemplateEventType::MEDIACONNECT_FLOW_STATUS_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventBridgeRuleTemplateEventType>(hashCode);
          }

          return EventBridgeRuleTemplateEventType::NOT_SET;
        }

        Aws::String GetNameForEventBridgeRuleTemplateEventType(EventBridgeRuleTemplateEventType enumValue)
        {
          switch(enumValue)
          {
          case EventBridgeRuleTemplateEventType::NOT_SET:
            return {};
          case EventBridgeRuleTemplateEventType::MEDIALIVE_MULTIPLEX_ALERT:
            return "MEDIALIVE_MULTIPLEX_ALERT";
          case EventBridgeRuleTemplateEventType::MEDIALIVE_MULTIPLEX_STATE_CHANGE:
            return "MEDIALIVE_MULTIPLEX_STATE_CHANGE";
          case EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_ALERT:
            return "MEDIALIVE_CHANNEL_ALERT";
          case EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_INPUT_CHANGE:
            return "MEDIALIVE_CHANNEL_INPUT_CHANGE";
          case EventBridgeRuleTemplateEventType::MEDIALIVE_CHANNEL_STATE_CHANGE:
            return "MEDIALIVE_CHANNEL_STATE_CHANGE";
          case EventBridgeRuleTemplateEventType::MEDIAPACKAGE_INPUT_NOTIFICATION:
            return "MEDIAPACKAGE_INPUT_NOTIFICATION";
          case EventBridgeRuleTemplateEventType::MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION:
            return "MEDIAPACKAGE_KEY_PROVIDER_NOTIFICATION";
          case EventBridgeRuleTemplateEventType::MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION:
            return "MEDIAPACKAGE_HARVEST_JOB_NOTIFICATION";
          case EventBridgeRuleTemplateEventType::SIGNAL_MAP_ACTIVE_ALARM:
            return "SIGNAL_MAP_ACTIVE_ALARM";
          case EventBridgeRuleTemplateEventType::MEDIACONNECT_ALERT:
            return "MEDIACONNECT_ALERT";
          case EventBridgeRuleTemplateEventType::MEDIACONNECT_SOURCE_HEALTH:
            return "MEDIACONNECT_SOURCE_HEALTH";
          case EventBridgeRuleTemplateEventType::MEDIACONNECT_OUTPUT_HEALTH:
            return "MEDIACONNECT_OUTPUT_HEALTH";
          case EventBridgeRuleTemplateEventType::MEDIACONNECT_FLOW_STATUS_CHANGE:
            return "MEDIACONNECT_FLOW_STATUS_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventBridgeRuleTemplateEventTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
