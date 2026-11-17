/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/AzureSubscriptionScope.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

AzureSubscriptionScope::AzureSubscriptionScope(JsonView jsonValue) { *this = jsonValue; }

AzureSubscriptionScope& AzureSubscriptionScope::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("All")) {
    m_all = jsonValue.GetObject("All");
    m_allHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Ids")) {
    Aws::Utils::Array<JsonView> idsJsonList = jsonValue.GetArray("Ids");
    for (unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex) {
      m_ids.push_back(idsJsonList[idsIndex].AsString());
    }
    m_idsHasBeenSet = true;
  }
  return *this;
}

JsonValue AzureSubscriptionScope::Jsonize() const {
  JsonValue payload;

  if (m_allHasBeenSet) {
    payload.WithObject("All", m_all.Jsonize());
  }

  if (m_idsHasBeenSet) {
    Aws::Utils::Array<JsonValue> idsJsonList(m_ids.size());
    for (unsigned idsIndex = 0; idsIndex < idsJsonList.GetLength(); ++idsIndex) {
      idsJsonList[idsIndex].AsString(m_ids[idsIndex]);
    }
    payload.WithArray("Ids", std::move(idsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
