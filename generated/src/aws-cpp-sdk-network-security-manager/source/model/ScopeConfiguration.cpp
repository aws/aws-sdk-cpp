/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/ScopeConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

ScopeConfiguration::ScopeConfiguration(JsonView jsonValue) { *this = jsonValue; }

ScopeConfiguration& ScopeConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("accountFilter")) {
    m_accountFilter = jsonValue.GetObject("accountFilter");
    m_accountFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceScopes")) {
    Aws::Map<Aws::String, JsonView> resourceScopesJsonMap = jsonValue.GetObject("resourceScopes").GetAllObjects();
    for (auto& resourceScopesItem : resourceScopesJsonMap) {
      m_resourceScopes[ScopeResourceTypeMapper::GetScopeResourceTypeForName(resourceScopesItem.first)] =
          resourceScopesItem.second.AsObject();
    }
    m_resourceScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_accountFilterHasBeenSet) {
    payload.WithObject("accountFilter", m_accountFilter.Jsonize());
  }

  if (m_resourceScopesHasBeenSet) {
    JsonValue resourceScopesJsonMap;
    for (auto& resourceScopesItem : m_resourceScopes) {
      resourceScopesJsonMap.WithObject(ScopeResourceTypeMapper::GetNameForScopeResourceType(resourceScopesItem.first),
                                       resourceScopesItem.second.Jsonize());
    }
    payload.WithObject("resourceScopes", std::move(resourceScopesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
