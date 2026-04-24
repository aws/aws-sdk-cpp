/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/RouterInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

RouterInput::RouterInput(JsonView jsonValue) { *this = jsonValue; }

RouterInput& RouterInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RouterInputStateMapper::GetRouterInputStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputType")) {
    m_inputType = RouterInputTypeMapper::GetRouterInputTypeForName(jsonValue.GetString("inputType"));
    m_inputTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routedOutputs")) {
    m_routedOutputs = jsonValue.GetInteger("routedOutputs");
    m_routedOutputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumRoutedOutputs")) {
    m_maximumRoutedOutputs = jsonValue.GetInteger("maximumRoutedOutputs");
    m_maximumRoutedOutputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("regionName")) {
    m_regionName = jsonValue.GetString("regionName");
    m_regionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZone")) {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maximumBitrate")) {
    m_maximumBitrate = jsonValue.GetInt64("maximumBitrate");
    m_maximumBitrateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tier")) {
    m_tier = RouterInputTierMapper::GetRouterInputTierForName(jsonValue.GetString("tier"));
    m_tierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routingScope")) {
    m_routingScope = RoutingScopeMapper::GetRoutingScopeForName(jsonValue.GetString("routingScope"));
    m_routingScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("messages")) {
    Aws::Utils::Array<JsonView> messagesJsonList = jsonValue.GetArray("messages");
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      m_messages.push_back(messagesJsonList[messagesIndex].AsObject());
    }
    m_messagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("transitEncryption")) {
    m_transitEncryption = jsonValue.GetObject("transitEncryption");
    m_transitEncryptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("streamDetails")) {
    m_streamDetails = jsonValue.GetObject("streamDetails");
    m_streamDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ipAddress")) {
    m_ipAddress = jsonValue.GetString("ipAddress");
    m_ipAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceType")) {
    m_maintenanceType = MaintenanceTypeMapper::GetMaintenanceTypeForName(jsonValue.GetString("maintenanceType"));
    m_maintenanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceConfiguration")) {
    m_maintenanceConfiguration = jsonValue.GetObject("maintenanceConfiguration");
    m_maintenanceConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceScheduleType")) {
    m_maintenanceScheduleType =
        MaintenanceScheduleTypeMapper::GetMaintenanceScheduleTypeForName(jsonValue.GetString("maintenanceScheduleType"));
    m_maintenanceScheduleTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maintenanceSchedule")) {
    m_maintenanceSchedule = jsonValue.GetObject("maintenanceSchedule");
    m_maintenanceScheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterInput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RouterInputStateMapper::GetNameForRouterInputState(m_state));
  }

  if (m_inputTypeHasBeenSet) {
    payload.WithString("inputType", RouterInputTypeMapper::GetNameForRouterInputType(m_inputType));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_routedOutputsHasBeenSet) {
    payload.WithInteger("routedOutputs", m_routedOutputs);
  }

  if (m_maximumRoutedOutputsHasBeenSet) {
    payload.WithInteger("maximumRoutedOutputs", m_maximumRoutedOutputs);
  }

  if (m_regionNameHasBeenSet) {
    payload.WithString("regionName", m_regionName);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_maximumBitrateHasBeenSet) {
    payload.WithInt64("maximumBitrate", m_maximumBitrate);
  }

  if (m_tierHasBeenSet) {
    payload.WithString("tier", RouterInputTierMapper::GetNameForRouterInputTier(m_tier));
  }

  if (m_routingScopeHasBeenSet) {
    payload.WithString("routingScope", RoutingScopeMapper::GetNameForRoutingScope(m_routingScope));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_messagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
    for (unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex) {
      messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
    }
    payload.WithArray("messages", std::move(messagesJsonList));
  }

  if (m_transitEncryptionHasBeenSet) {
    payload.WithObject("transitEncryption", m_transitEncryption.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_streamDetailsHasBeenSet) {
    payload.WithObject("streamDetails", m_streamDetails.Jsonize());
  }

  if (m_ipAddressHasBeenSet) {
    payload.WithString("ipAddress", m_ipAddress);
  }

  if (m_maintenanceTypeHasBeenSet) {
    payload.WithString("maintenanceType", MaintenanceTypeMapper::GetNameForMaintenanceType(m_maintenanceType));
  }

  if (m_maintenanceConfigurationHasBeenSet) {
    payload.WithObject("maintenanceConfiguration", m_maintenanceConfiguration.Jsonize());
  }

  if (m_maintenanceScheduleTypeHasBeenSet) {
    payload.WithString("maintenanceScheduleType",
                       MaintenanceScheduleTypeMapper::GetNameForMaintenanceScheduleType(m_maintenanceScheduleType));
  }

  if (m_maintenanceScheduleHasBeenSet) {
    payload.WithObject("maintenanceSchedule", m_maintenanceSchedule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
