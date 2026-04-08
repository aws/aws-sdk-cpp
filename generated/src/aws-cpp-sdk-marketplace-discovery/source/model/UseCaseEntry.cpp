/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/UseCaseEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

UseCaseEntry::UseCaseEntry(JsonView jsonValue) { *this = jsonValue; }

UseCaseEntry& UseCaseEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("useCase")) {
    m_useCase = jsonValue.GetObject("useCase");
    m_useCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue UseCaseEntry::Jsonize() const {
  JsonValue payload;

  if (m_useCaseHasBeenSet) {
    payload.WithObject("useCase", m_useCase.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
