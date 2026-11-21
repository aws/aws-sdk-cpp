/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchPutPolicyAssignmentByPolicyRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchPutPolicyAssignmentByPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("PolicyArn", m_policyArn);
  }

  if (m_assignmentsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assignmentsJsonList(m_assignments.size());
    for (unsigned assignmentsIndex = 0; assignmentsIndex < assignmentsJsonList.GetLength(); ++assignmentsIndex) {
      assignmentsJsonList[assignmentsIndex].AsObject(m_assignments[assignmentsIndex].Jsonize());
    }
    payload.WithArray("Assignments", std::move(assignmentsJsonList));
  }

  return payload.View().WriteReadable();
}
