/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SpecializationDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SpecializationDetail::SpecializationDetail(JsonView jsonValue) { *this = jsonValue; }

SpecializationDetail& SpecializationDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("specialization")) {
    m_specialization = jsonValue.GetObject("specialization");
    m_specializationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specializationCategory")) {
    m_specializationCategory = jsonValue.GetObject("specializationCategory");
    m_specializationCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue SpecializationDetail::Jsonize() const {
  JsonValue payload;

  if (m_specializationHasBeenSet) {
    payload.WithObject("specialization", m_specialization.Jsonize());
  }

  if (m_specializationCategoryHasBeenSet) {
    payload.WithObject("specializationCategory", m_specializationCategory.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
