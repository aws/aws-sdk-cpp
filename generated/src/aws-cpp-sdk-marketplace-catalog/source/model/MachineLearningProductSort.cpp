﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-catalog/model/MachineLearningProductSort.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceCatalog {
namespace Model {

MachineLearningProductSort::MachineLearningProductSort(JsonView jsonValue) { *this = jsonValue; }

MachineLearningProductSort& MachineLearningProductSort::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SortBy")) {
    m_sortBy = MachineLearningProductSortByMapper::GetMachineLearningProductSortByForName(jsonValue.GetString("SortBy"));
    m_sortByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SortOrder")) {
    m_sortOrder = SortOrderMapper::GetSortOrderForName(jsonValue.GetString("SortOrder"));
    m_sortOrderHasBeenSet = true;
  }
  return *this;
}

JsonValue MachineLearningProductSort::Jsonize() const {
  JsonValue payload;

  if (m_sortByHasBeenSet) {
    payload.WithString("SortBy", MachineLearningProductSortByMapper::GetNameForMachineLearningProductSortBy(m_sortBy));
  }

  if (m_sortOrderHasBeenSet) {
    payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
