/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/networkflowmonitor/model/AccountToAdd.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

AccountToAdd::AccountToAdd(JsonView jsonValue) { *this = jsonValue; }

AccountToAdd& AccountToAdd::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountId")) {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("membership")) {
    m_membership = OrgMembershipStatusMapper::GetOrgMembershipStatusForName(jsonValue.GetString("membership"));
    m_membershipHasBeenSet = true;
  }
  return *this;
}

JsonValue AccountToAdd::Jsonize() const {
  JsonValue payload;

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_membershipHasBeenSet) {
    payload.WithString("membership", OrgMembershipStatusMapper::GetNameForOrgMembershipStatus(m_membership));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
