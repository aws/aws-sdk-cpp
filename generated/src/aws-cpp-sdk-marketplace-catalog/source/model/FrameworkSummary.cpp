/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/FrameworkSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

FrameworkSummary::FrameworkSummary(JsonView jsonValue) { *this = jsonValue; }

FrameworkSummary& FrameworkSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AMISecuritySummary")) {
    m_aMISecuritySummary = jsonValue.GetObject("AMISecuritySummary");
    m_aMISecuritySummaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContainerSecuritySummary")) {
    m_containerSecuritySummary = jsonValue.GetObject("ContainerSecuritySummary");
    m_containerSecuritySummaryHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameworkSummary::Jsonize() const {
  JsonValue payload;

  if (m_aMISecuritySummaryHasBeenSet) {
    payload.WithObject("AMISecuritySummary", m_aMISecuritySummary.Jsonize());
  }

  if (m_containerSecuritySummaryHasBeenSet) {
    payload.WithObject("ContainerSecuritySummary", m_containerSecuritySummary.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
