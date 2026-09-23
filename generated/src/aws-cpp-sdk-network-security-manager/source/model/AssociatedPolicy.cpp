/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AssociatedPolicy.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AssociatedPolicy::AssociatedPolicy(JsonView jsonValue) { *this = jsonValue; }

AssociatedPolicy& AssociatedPolicy::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyArn")) {
    m_policyArn = jsonValue.GetString("policyArn");
    m_policyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedPolicy::Jsonize() const {
  JsonValue payload;

  if (m_policyArnHasBeenSet) {
    payload.WithString("policyArn", m_policyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
