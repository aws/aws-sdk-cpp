/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/PolicyPrincipal.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

PolicyPrincipal::PolicyPrincipal(JsonView jsonValue) { *this = jsonValue; }

PolicyPrincipal& PolicyPrincipal::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PrincipalArn")) {
    m_principalArn = jsonValue.GetString("PrincipalArn");
    m_principalArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrincipalType")) {
    m_principalType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("PrincipalType"));
    m_principalTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetInt64("Revision");
    m_revisionHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyPrincipal::Jsonize() const {
  JsonValue payload;

  if (m_principalArnHasBeenSet) {
    payload.WithString("PrincipalArn", m_principalArn);
  }

  if (m_principalTypeHasBeenSet) {
    payload.WithString("PrincipalType", PrincipalTypeMapper::GetNameForPrincipalType(m_principalType));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("Revision", m_revision);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
