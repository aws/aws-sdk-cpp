/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PutPolicyAssignmentRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutPolicyAssignmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("PolicyArn", m_policyArn);
  }

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  if (m_existingPolicyArnHasBeenSet) {
    payload.WithString("ExistingPolicyArn", m_existingPolicyArn);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("Revision", m_revision);
  }

  return payload.View().WriteReadable();
}
