/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/RcsAgentInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

RcsAgentInformation::RcsAgentInformation(JsonView jsonValue) { *this = jsonValue; }

RcsAgentInformation& RcsAgentInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RcsAgentArn")) {
    m_rcsAgentArn = jsonValue.GetString("RcsAgentArn");
    m_rcsAgentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RcsAgentId")) {
    m_rcsAgentId = jsonValue.GetString("RcsAgentId");
    m_rcsAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RcsAgentStatusMapper::GetRcsAgentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTimestamp")) {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");
    m_createdTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("DeletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptOutListName")) {
    m_optOutListName = jsonValue.GetString("OptOutListName");
    m_optOutListNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelfManagedOptOutsEnabled")) {
    m_selfManagedOptOutsEnabled = jsonValue.GetBool("SelfManagedOptOutsEnabled");
    m_selfManagedOptOutsEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayChannelArn")) {
    m_twoWayChannelArn = jsonValue.GetString("TwoWayChannelArn");
    m_twoWayChannelArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayChannelRole")) {
    m_twoWayChannelRole = jsonValue.GetString("TwoWayChannelRole");
    m_twoWayChannelRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TwoWayEnabled")) {
    m_twoWayEnabled = jsonValue.GetBool("TwoWayEnabled");
    m_twoWayEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PoolId")) {
    m_poolId = jsonValue.GetString("PoolId");
    m_poolIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestingAgent")) {
    m_testingAgent = jsonValue.GetObject("TestingAgent");
    m_testingAgentHasBeenSet = true;
  }
  return *this;
}

JsonValue RcsAgentInformation::Jsonize() const {
  JsonValue payload;

  if (m_rcsAgentArnHasBeenSet) {
    payload.WithString("RcsAgentArn", m_rcsAgentArn);
  }

  if (m_rcsAgentIdHasBeenSet) {
    payload.WithString("RcsAgentId", m_rcsAgentId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RcsAgentStatusMapper::GetNameForRcsAgentStatus(m_status));
  }

  if (m_createdTimestampHasBeenSet) {
    payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("DeletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  if (m_optOutListNameHasBeenSet) {
    payload.WithString("OptOutListName", m_optOutListName);
  }

  if (m_selfManagedOptOutsEnabledHasBeenSet) {
    payload.WithBool("SelfManagedOptOutsEnabled", m_selfManagedOptOutsEnabled);
  }

  if (m_twoWayChannelArnHasBeenSet) {
    payload.WithString("TwoWayChannelArn", m_twoWayChannelArn);
  }

  if (m_twoWayChannelRoleHasBeenSet) {
    payload.WithString("TwoWayChannelRole", m_twoWayChannelRole);
  }

  if (m_twoWayEnabledHasBeenSet) {
    payload.WithBool("TwoWayEnabled", m_twoWayEnabled);
  }

  if (m_poolIdHasBeenSet) {
    payload.WithString("PoolId", m_poolId);
  }

  if (m_testingAgentHasBeenSet) {
    payload.WithObject("TestingAgent", m_testingAgent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
