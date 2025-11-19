/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/ListedRouterInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

ListedRouterInput::ListedRouterInput(JsonView jsonValue) { *this = jsonValue; }

ListedRouterInput& ListedRouterInput::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("inputType")) {
    m_inputType = RouterInputTypeMapper::GetRouterInputTypeForName(jsonValue.GetString("inputType"));
    m_inputTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = RouterInputStateMapper::GetRouterInputStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routedOutputs")) {
    m_routedOutputs = jsonValue.GetInteger("routedOutputs");
    m_routedOutputsHasBeenSet = true;
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
  if (jsonValue.ValueExists("messageCount")) {
    m_messageCount = jsonValue.GetInteger("messageCount");
    m_messageCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceArn")) {
    m_networkInterfaceArn = jsonValue.GetString("networkInterfaceArn");
    m_networkInterfaceArnHasBeenSet = true;
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

JsonValue ListedRouterInput::Jsonize() const {
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

  if (m_inputTypeHasBeenSet) {
    payload.WithString("inputType", RouterInputTypeMapper::GetNameForRouterInputType(m_inputType));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", RouterInputStateMapper::GetNameForRouterInputState(m_state));
  }

  if (m_routedOutputsHasBeenSet) {
    payload.WithInteger("routedOutputs", m_routedOutputs);
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

  if (m_routingScopeHasBeenSet) {
    payload.WithString("routingScope", RoutingScopeMapper::GetNameForRoutingScope(m_routingScope));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_messageCountHasBeenSet) {
    payload.WithInteger("messageCount", m_messageCount);
  }

  if (m_networkInterfaceArnHasBeenSet) {
    payload.WithString("networkInterfaceArn", m_networkInterfaceArn);
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
