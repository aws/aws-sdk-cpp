/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/SpecializationCategory.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

SpecializationCategory::SpecializationCategory(JsonView jsonValue) { *this = jsonValue; }

SpecializationCategory& SpecializationCategory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("specializationCategoryId")) {
    m_specializationCategoryId = jsonValue.GetString("specializationCategoryId");
    m_specializationCategoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("specializationCategoryName")) {
    m_specializationCategoryName = jsonValue.GetString("specializationCategoryName");
    m_specializationCategoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("parentSpecializationId")) {
    m_parentSpecializationId = jsonValue.GetString("parentSpecializationId");
    m_parentSpecializationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SpecializationCategory::Jsonize() const {
  JsonValue payload;

  if (m_specializationCategoryIdHasBeenSet) {
    payload.WithString("specializationCategoryId", m_specializationCategoryId);
  }

  if (m_specializationCategoryNameHasBeenSet) {
    payload.WithString("specializationCategoryName", m_specializationCategoryName);
  }

  if (m_parentSpecializationIdHasBeenSet) {
    payload.WithString("parentSpecializationId", m_parentSpecializationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
