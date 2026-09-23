/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/WafConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

WafConfig::WafConfig(JsonView jsonValue) { *this = jsonValue; }

WafConfig& WafConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("existingCustomerWebACLResolution")) {
    m_existingCustomerWebACLResolution = ExistingCustomerWebACLResolutionMapper::GetExistingCustomerWebACLResolutionForName(
        jsonValue.GetString("existingCustomerWebACLResolution"));
    m_existingCustomerWebACLResolutionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("conflictResolution")) {
    m_conflictResolution =
        WAFConflictResolutionOptionsMapper::GetWAFConflictResolutionOptionsForName(jsonValue.GetString("conflictResolution"));
    m_conflictResolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue WafConfig::Jsonize() const {
  JsonValue payload;

  if (m_existingCustomerWebACLResolutionHasBeenSet) {
    payload.WithString(
        "existingCustomerWebACLResolution",
        ExistingCustomerWebACLResolutionMapper::GetNameForExistingCustomerWebACLResolution(m_existingCustomerWebACLResolution));
  }

  if (m_conflictResolutionHasBeenSet) {
    payload.WithString("conflictResolution",
                       WAFConflictResolutionOptionsMapper::GetNameForWAFConflictResolutionOptions(m_conflictResolution));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
