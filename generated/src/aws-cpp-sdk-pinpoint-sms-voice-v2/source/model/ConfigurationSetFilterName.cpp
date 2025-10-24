﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pinpoint-sms-voice-v2/model/ConfigurationSetFilterName.h>

using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {
namespace ConfigurationSetFilterNameMapper {

static const int event_destination_name_HASH = HashingUtils::HashString("event-destination-name");
static const int matching_event_types_HASH = HashingUtils::HashString("matching-event-types");
static const int default_message_type_HASH = HashingUtils::HashString("default-message-type");
static const int default_sender_id_HASH = HashingUtils::HashString("default-sender-id");
static const int default_message_feedback_enabled_HASH = HashingUtils::HashString("default-message-feedback-enabled");
static const int protect_configuration_id_HASH = HashingUtils::HashString("protect-configuration-id");

ConfigurationSetFilterName GetConfigurationSetFilterNameForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == event_destination_name_HASH) {
    return ConfigurationSetFilterName::event_destination_name;
  } else if (hashCode == matching_event_types_HASH) {
    return ConfigurationSetFilterName::matching_event_types;
  } else if (hashCode == default_message_type_HASH) {
    return ConfigurationSetFilterName::default_message_type;
  } else if (hashCode == default_sender_id_HASH) {
    return ConfigurationSetFilterName::default_sender_id;
  } else if (hashCode == default_message_feedback_enabled_HASH) {
    return ConfigurationSetFilterName::default_message_feedback_enabled;
  } else if (hashCode == protect_configuration_id_HASH) {
    return ConfigurationSetFilterName::protect_configuration_id;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConfigurationSetFilterName>(hashCode);
  }

  return ConfigurationSetFilterName::NOT_SET;
}

Aws::String GetNameForConfigurationSetFilterName(ConfigurationSetFilterName enumValue) {
  switch (enumValue) {
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
    case ConfigurationSetFilterName::default_message_feedback_enabled:
      return "default-message-feedback-enabled";
    case ConfigurationSetFilterName::protect_configuration_id:
      return "protect-configuration-id";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConfigurationSetFilterNameMapper
}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
