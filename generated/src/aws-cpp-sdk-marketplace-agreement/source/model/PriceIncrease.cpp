/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/PriceIncrease.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

PriceIncrease::PriceIncrease(JsonView jsonValue) { *this = jsonValue; }

PriceIncrease& PriceIncrease::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fixedPercentage")) {
    m_fixedPercentage = jsonValue.GetObject("fixedPercentage");
    m_fixedPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentageRange")) {
    m_percentageRange = jsonValue.GetObject("percentageRange");
    m_percentageRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue PriceIncrease::Jsonize() const {
  JsonValue payload;

  if (m_fixedPercentageHasBeenSet) {
    payload.WithObject("fixedPercentage", m_fixedPercentage.Jsonize());
  }

  if (m_percentageRangeHasBeenSet) {
    payload.WithObject("percentageRange", m_percentageRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
