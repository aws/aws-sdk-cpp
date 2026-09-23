/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/AssociatedScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

AssociatedScope::AssociatedScope(JsonView jsonValue) { *this = jsonValue; }

AssociatedScope& AssociatedScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeArn")) {
    m_scopeArn = jsonValue.GetString("scopeArn");
    m_scopeArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedScope::Jsonize() const {
  JsonValue payload;

  if (m_scopeArnHasBeenSet) {
    payload.WithString("scopeArn", m_scopeArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
