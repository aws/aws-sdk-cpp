/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/BatchPutPolicyAssignmentSuccess.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

BatchPutPolicyAssignmentSuccess::BatchPutPolicyAssignmentSuccess(JsonView jsonValue) { *this = jsonValue; }

BatchPutPolicyAssignmentSuccess& BatchPutPolicyAssignmentSuccess::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrincipalArn")) {
    m_principalArn = jsonValue.GetString("PrincipalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReplacedPolicyArn")) {
    m_replacedPolicyArn = jsonValue.GetString("ReplacedPolicyArn");
    m_replacedPolicyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetInt64("Revision");
    m_revisionHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutPolicyAssignmentSuccess::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  if (m_replacedPolicyArnHasBeenSet) {
    payload.WithString("ReplacedPolicyArn", m_replacedPolicyArn);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("Revision", m_revision);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
