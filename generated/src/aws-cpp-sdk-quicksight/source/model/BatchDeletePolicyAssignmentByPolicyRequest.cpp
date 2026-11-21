/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentByPolicyRequest.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeletePolicyAssignmentByPolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("PolicyArn", m_policyArn);
  }

  if (m_principalArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> principalArnsJsonList(m_principalArns.size());
    for (unsigned principalArnsIndex = 0; principalArnsIndex < principalArnsJsonList.GetLength(); ++principalArnsIndex) {
      principalArnsJsonList[principalArnsIndex].AsString(m_principalArns[principalArnsIndex]);
    }
    payload.WithArray("PrincipalArns", std::move(principalArnsJsonList));
  }

  return payload.View().WriteReadable();
}
