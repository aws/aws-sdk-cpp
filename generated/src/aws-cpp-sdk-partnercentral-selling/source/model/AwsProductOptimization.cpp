/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsProductOptimization.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsProductOptimization::AwsProductOptimization(JsonView jsonValue) { *this = jsonValue; }

AwsProductOptimization& AwsProductOptimization::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SavingsAmount")) {
    m_savingsAmount = jsonValue.GetString("SavingsAmount");
    m_savingsAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsProductOptimization::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_savingsAmountHasBeenSet) {
    payload.WithString("SavingsAmount", m_savingsAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
