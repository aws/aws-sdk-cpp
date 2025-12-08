/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsProductDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsProductDetails::AwsProductDetails(JsonView jsonValue) { *this = jsonValue; }

AwsProductDetails& AwsProductDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProductCode")) {
    m_productCode = jsonValue.GetString("ProductCode");
    m_productCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ServiceCode")) {
    m_serviceCode = jsonValue.GetString("ServiceCode");
    m_serviceCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Categories")) {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsString());
    }
    m_categoriesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Amount")) {
    m_amount = jsonValue.GetString("Amount");
    m_amountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OptimizedAmount")) {
    m_optimizedAmount = jsonValue.GetString("OptimizedAmount");
    m_optimizedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PotentialSavingsAmount")) {
    m_potentialSavingsAmount = jsonValue.GetString("PotentialSavingsAmount");
    m_potentialSavingsAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Optimizations")) {
    Aws::Utils::Array<JsonView> optimizationsJsonList = jsonValue.GetArray("Optimizations");
    for (unsigned optimizationsIndex = 0; optimizationsIndex < optimizationsJsonList.GetLength(); ++optimizationsIndex) {
      m_optimizations.push_back(optimizationsJsonList[optimizationsIndex].AsObject());
    }
    m_optimizationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsProductDetails::Jsonize() const {
  JsonValue payload;

  if (m_productCodeHasBeenSet) {
    payload.WithString("ProductCode", m_productCode);
  }

  if (m_serviceCodeHasBeenSet) {
    payload.WithString("ServiceCode", m_serviceCode);
  }

  if (m_categoriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
    for (unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex) {
      categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
    }
    payload.WithArray("Categories", std::move(categoriesJsonList));
  }

  if (m_amountHasBeenSet) {
    payload.WithString("Amount", m_amount);
  }

  if (m_optimizedAmountHasBeenSet) {
    payload.WithString("OptimizedAmount", m_optimizedAmount);
  }

  if (m_potentialSavingsAmountHasBeenSet) {
    payload.WithString("PotentialSavingsAmount", m_potentialSavingsAmount);
  }

  if (m_optimizationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> optimizationsJsonList(m_optimizations.size());
    for (unsigned optimizationsIndex = 0; optimizationsIndex < optimizationsJsonList.GetLength(); ++optimizationsIndex) {
      optimizationsJsonList[optimizationsIndex].AsObject(m_optimizations[optimizationsIndex].Jsonize());
    }
    payload.WithArray("Optimizations", std::move(optimizationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
