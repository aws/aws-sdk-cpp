/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateMembershipRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMembershipRequest::SerializePayload() const {
  JsonValue payload;

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_membershipIdHasBeenSet) {
    payload.WithString("membershipId", m_membershipId);
  }

  if (m_memberTypeHasBeenSet) {
    payload.WithString("memberType", MembershipTypeMapper::GetNameForMembershipType(m_memberType));
  }

  if (m_configHasBeenSet) {
    payload.WithObject("config", m_config.Jsonize());
  }

  return payload.View().WriteReadable();
}
