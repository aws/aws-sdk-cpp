/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/PolicyStoreAliasItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

PolicyStoreAliasItem::PolicyStoreAliasItem(JsonView jsonValue) { *this = jsonValue; }

PolicyStoreAliasItem& PolicyStoreAliasItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aliasName")) {
    m_aliasName = jsonValue.GetString("aliasName");
    m_aliasNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policyStoreId")) {
    m_policyStoreId = jsonValue.GetString("policyStoreId");
    m_policyStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aliasArn")) {
    m_aliasArn = jsonValue.GetString("aliasArn");
    m_aliasArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = AliasStateMapper::GetAliasStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyStoreAliasItem::Jsonize() const {
  JsonValue payload;

  if (m_aliasNameHasBeenSet) {
    payload.WithString("aliasName", m_aliasName);
  }

  if (m_policyStoreIdHasBeenSet) {
    payload.WithString("policyStoreId", m_policyStoreId);
  }

  if (m_aliasArnHasBeenSet) {
    payload.WithString("aliasArn", m_aliasArn);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", AliasStateMapper::GetNameForAliasState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
