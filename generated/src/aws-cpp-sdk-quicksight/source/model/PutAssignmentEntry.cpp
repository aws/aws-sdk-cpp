/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PutAssignmentEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

PutAssignmentEntry::PutAssignmentEntry(JsonView jsonValue) { *this = jsonValue; }

PutAssignmentEntry& PutAssignmentEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrincipalArn")) {
    m_principalArn = jsonValue.GetString("PrincipalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExistingPolicyArn")) {
    m_existingPolicyArn = jsonValue.GetString("ExistingPolicyArn");
    m_existingPolicyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetInt64("Revision");
    m_revisionHasBeenSet = true;
  }
  return *this;
}

JsonValue PutAssignmentEntry::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  if (m_existingPolicyArnHasBeenSet) {
    payload.WithString("ExistingPolicyArn", m_existingPolicyArn);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("Revision", m_revision);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
