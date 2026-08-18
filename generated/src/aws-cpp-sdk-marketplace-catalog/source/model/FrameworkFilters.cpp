/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/FrameworkFilters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

FrameworkFilters::FrameworkFilters(JsonView jsonValue) { *this = jsonValue; }

FrameworkFilters& FrameworkFilters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AMISecurityFilters")) {
    m_aMISecurityFilters = jsonValue.GetObject("AMISecurityFilters");
    m_aMISecurityFiltersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContainerSecurityFilters")) {
    m_containerSecurityFilters = jsonValue.GetObject("ContainerSecurityFilters");
    m_containerSecurityFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameworkFilters::Jsonize() const {
  JsonValue payload;

  if (m_aMISecurityFiltersHasBeenSet) {
    payload.WithObject("AMISecurityFilters", m_aMISecurityFilters.Jsonize());
  }

  if (m_containerSecurityFiltersHasBeenSet) {
    payload.WithObject("ContainerSecurityFilters", m_containerSecurityFilters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
