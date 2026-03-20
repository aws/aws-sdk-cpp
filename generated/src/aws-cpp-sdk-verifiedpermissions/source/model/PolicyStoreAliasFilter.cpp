/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/model/PolicyStoreAliasFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace VerifiedPermissions {
namespace Model {

PolicyStoreAliasFilter::PolicyStoreAliasFilter(JsonView jsonValue) { *this = jsonValue; }

PolicyStoreAliasFilter& PolicyStoreAliasFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyStoreId")) {
    m_policyStoreId = jsonValue.GetString("policyStoreId");
    m_policyStoreIdHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyStoreAliasFilter::Jsonize() const {
  JsonValue payload;

  if (m_policyStoreIdHasBeenSet) {
    payload.WithString("policyStoreId", m_policyStoreId);
  }

  return payload;
}

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
