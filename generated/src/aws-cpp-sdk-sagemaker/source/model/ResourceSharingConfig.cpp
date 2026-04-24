/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/ResourceSharingConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

ResourceSharingConfig::ResourceSharingConfig(JsonView jsonValue) { *this = jsonValue; }

ResourceSharingConfig& ResourceSharingConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Strategy")) {
    m_strategy = ResourceSharingStrategyMapper::GetResourceSharingStrategyForName(jsonValue.GetString("Strategy"));
    m_strategyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BorrowLimit")) {
    m_borrowLimit = jsonValue.GetInteger("BorrowLimit");
    m_borrowLimitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AbsoluteBorrowLimits")) {
    Aws::Utils::Array<JsonView> absoluteBorrowLimitsJsonList = jsonValue.GetArray("AbsoluteBorrowLimits");
    for (unsigned absoluteBorrowLimitsIndex = 0; absoluteBorrowLimitsIndex < absoluteBorrowLimitsJsonList.GetLength();
         ++absoluteBorrowLimitsIndex) {
      m_absoluteBorrowLimits.push_back(absoluteBorrowLimitsJsonList[absoluteBorrowLimitsIndex].AsObject());
    }
    m_absoluteBorrowLimitsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceSharingConfig::Jsonize() const {
  JsonValue payload;

  if (m_strategyHasBeenSet) {
    payload.WithString("Strategy", ResourceSharingStrategyMapper::GetNameForResourceSharingStrategy(m_strategy));
  }

  if (m_borrowLimitHasBeenSet) {
    payload.WithInteger("BorrowLimit", m_borrowLimit);
  }

  if (m_absoluteBorrowLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> absoluteBorrowLimitsJsonList(m_absoluteBorrowLimits.size());
    for (unsigned absoluteBorrowLimitsIndex = 0; absoluteBorrowLimitsIndex < absoluteBorrowLimitsJsonList.GetLength();
         ++absoluteBorrowLimitsIndex) {
      absoluteBorrowLimitsJsonList[absoluteBorrowLimitsIndex].AsObject(m_absoluteBorrowLimits[absoluteBorrowLimitsIndex].Jsonize());
    }
    payload.WithArray("AbsoluteBorrowLimits", std::move(absoluteBorrowLimitsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
