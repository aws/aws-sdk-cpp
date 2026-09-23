/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ScopeReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ScopeReference::ScopeReference(JsonView jsonValue) { *this = jsonValue; }

ScopeReference& ScopeReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scopeIdentifier")) {
    m_scopeIdentifier = jsonValue.GetString("scopeIdentifier");
    m_scopeIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeReference::Jsonize() const {
  JsonValue payload;

  if (m_scopeIdentifierHasBeenSet) {
    payload.WithString("scopeIdentifier", m_scopeIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
