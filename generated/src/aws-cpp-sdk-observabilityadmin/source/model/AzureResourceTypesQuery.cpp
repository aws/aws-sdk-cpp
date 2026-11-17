/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureResourceTypesQuery.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureResourceTypesQuery::AzureResourceTypesQuery(JsonView jsonValue) { *this = jsonValue; }

AzureResourceTypesQuery& AzureResourceTypesQuery::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureResourceTypesQuery::Jsonize() const {
  JsonValue payload;

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
