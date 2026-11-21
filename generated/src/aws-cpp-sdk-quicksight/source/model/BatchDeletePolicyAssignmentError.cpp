/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchDeletePolicyAssignmentError::BatchDeletePolicyAssignmentError(JsonView jsonValue) { *this = jsonValue; }

BatchDeletePolicyAssignmentError& BatchDeletePolicyAssignmentError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrincipalArn")) {
    m_principalArn = jsonValue.GetString("PrincipalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorCode")) {
    m_errorCode = jsonValue.GetString("ErrorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchDeletePolicyAssignmentError::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("ErrorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
