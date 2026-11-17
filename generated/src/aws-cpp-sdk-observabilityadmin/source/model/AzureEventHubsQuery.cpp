/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureEventHubsQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureEventHubsQuery::AzureEventHubsQuery(JsonView jsonValue) { *this = jsonValue; }

AzureEventHubsQuery& AzureEventHubsQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NamespaceName")) {
    m_namespaceName = jsonValue.GetString("NamespaceName");
    m_namespaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureEventHubsQuery::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  if (m_namespaceNameHasBeenSet) {
    payload.WithString("NamespaceName", m_namespaceName);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
