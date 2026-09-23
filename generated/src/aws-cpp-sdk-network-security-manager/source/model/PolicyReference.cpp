/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/PolicyReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

PolicyReference::PolicyReference(JsonView jsonValue) { *this = jsonValue; }

PolicyReference& PolicyReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyIdentifier")) {
    m_policyIdentifier = jsonValue.GetString("policyIdentifier");
    m_policyIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyReference::Jsonize() const {
  JsonValue payload;

  if (m_policyIdentifierHasBeenSet) {
    payload.WithString("policyIdentifier", m_policyIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
