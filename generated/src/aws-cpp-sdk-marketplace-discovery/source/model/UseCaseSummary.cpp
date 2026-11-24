/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/UseCaseSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

UseCaseSummary::UseCaseSummary(JsonView jsonValue) { *this = jsonValue; }

UseCaseSummary& UseCaseSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("useCases")) {
    Aws::Utils::Array<JsonView> useCasesJsonList = jsonValue.GetArray("useCases");
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      m_useCases.push_back(useCasesJsonList[useCasesIndex].AsObject());
    }
    m_useCasesHasBeenSet = true;
  }
  return *this;
}

JsonValue UseCaseSummary::Jsonize() const {
  JsonValue payload;

  if (m_useCasesHasBeenSet) {
    Aws::Utils::Array<JsonValue> useCasesJsonList(m_useCases.size());
    for (unsigned useCasesIndex = 0; useCasesIndex < useCasesJsonList.GetLength(); ++useCasesIndex) {
      useCasesJsonList[useCasesIndex].AsObject(m_useCases[useCasesIndex].Jsonize());
    }
    payload.WithArray("useCases", std::move(useCasesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
