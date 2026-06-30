/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/UpdateRcsAgentRequest.h>

#include <utility>

using namespace Aws::PinpointSMSVoiceV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRcsAgentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_rcsAgentIdHasBeenSet) {
    payload.WithString("RcsAgentId", m_rcsAgentId);
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

  if (m_twoWayMediaS3BucketNameHasBeenSet) {
    payload.WithString("TwoWayMediaS3BucketName", m_twoWayMediaS3BucketName);
  }

  if (m_twoWayMediaS3KeyPrefixHasBeenSet) {
    payload.WithString("TwoWayMediaS3KeyPrefix", m_twoWayMediaS3KeyPrefix);
  }

  if (m_twoWayMediaS3RoleHasBeenSet) {
    payload.WithString("TwoWayMediaS3Role", m_twoWayMediaS3Role);
  }

  if (m_twoWayRcsEventsEnabledHasBeenSet) {
    Aws::Utils::Array<JsonValue> twoWayRcsEventsEnabledJsonList(m_twoWayRcsEventsEnabled.size());
    for (unsigned twoWayRcsEventsEnabledIndex = 0; twoWayRcsEventsEnabledIndex < twoWayRcsEventsEnabledJsonList.GetLength();
         ++twoWayRcsEventsEnabledIndex) {
      twoWayRcsEventsEnabledJsonList[twoWayRcsEventsEnabledIndex].AsString(m_twoWayRcsEventsEnabled[twoWayRcsEventsEnabledIndex]);
    }
    payload.WithArray("TwoWayRcsEventsEnabled", std::move(twoWayRcsEventsEnabledJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRcsAgentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PinpointSMSVoiceV2.UpdateRcsAgent"));
  return headers;
}
