/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/UseCaseSummaryEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

UseCaseSummaryEntry::UseCaseSummaryEntry(JsonView jsonValue) { *this = jsonValue; }

UseCaseSummaryEntry& UseCaseSummaryEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("useCase")) {
    m_useCase = jsonValue.GetObject("useCase");
    m_useCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue UseCaseSummaryEntry::Jsonize() const {
  JsonValue payload;

  if (m_useCaseHasBeenSet) {
    payload.WithObject("useCase", m_useCase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
