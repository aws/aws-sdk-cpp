/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PinpointSMSVoiceV2
  {
    namespace Model
    {
      namespace ConfigurationSetFilterNameMapper
      {

        static constexpr uint32_t event_destination_name_HASH = ConstExprHashingUtils::HashString("event-destination-name");
        static constexpr uint32_t matching_event_types_HASH = ConstExprHashingUtils::HashString("matching-event-types");
        static constexpr uint32_t default_message_type_HASH = ConstExprHashingUtils::HashString("default-message-type");
        static constexpr uint32_t default_sender_id_HASH = ConstExprHashingUtils::HashString("default-sender-id");


        ConfigurationSetFilterName GetConfigurationSetFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == event_destination_name_HASH)
          {
            return ConfigurationSetFilterName::event_destination_name;
          }
          else if (hashCode == matching_event_types_HASH)
          {
            return ConfigurationSetFilterName::matching_event_types;
          }
          else if (hashCode == default_message_type_HASH)
          {
            return ConfigurationSetFilterName::default_message_type;
          }
          else if (hashCode == default_sender_id_HASH)
          {
            return ConfigurationSetFilterName::default_sender_id;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfigurationSetFilterName>(hashCode);
          }

          return ConfigurationSetFilterName::NOT_SET;
        }

        Aws::String GetNameForConfigurationSetFilterName(ConfigurationSetFilterName enumValue)
        {
          switch(enumValue)
          {
          case ConfigurationSetFilterName::NOT_SET:
            return {};
          case ConfigurationSetFilterName::event_destination_name:
            return "event-destination-name";
          case ConfigurationSetFilterName::matching_event_types:
            return "matching-event-types";
          case ConfigurationSetFilterName::default_message_type:
            return "default-message-type";
          case ConfigurationSetFilterName::default_sender_id:
            return "default-sender-id";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfigurationSetFilterNameMapper
    } // namespace Model
  } // namespace PinpointSMSVoiceV2
} // namespace Aws
