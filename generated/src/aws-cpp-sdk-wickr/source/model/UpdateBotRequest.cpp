/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/model/UpdateBotRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateBotRequest::SerializePayload() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_groupIdHasBeenSet) {
    payload.WithString("groupId", m_groupId);
  }

  if (m_challengeHasBeenSet) {
    payload.WithString("challenge", m_challenge);
  }

  if (m_suspendHasBeenSet) {
    payload.WithBool("suspend", m_suspend);
  }

  return payload.View().WriteReadable();
}
