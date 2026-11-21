/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentSuccess.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchDeletePolicyAssignmentSuccess::BatchDeletePolicyAssignmentSuccess(JsonView jsonValue) { *this = jsonValue; }

BatchDeletePolicyAssignmentSuccess& BatchDeletePolicyAssignmentSuccess::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrincipalArn")) {
    m_principalArn = jsonValue.GetString("PrincipalArn");
    m_principalArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeletePolicyAssignmentSuccess::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
