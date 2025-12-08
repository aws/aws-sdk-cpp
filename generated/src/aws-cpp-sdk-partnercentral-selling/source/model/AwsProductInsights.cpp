/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsProductInsights.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsProductInsights::AwsProductInsights(JsonView jsonValue) { *this = jsonValue; }

AwsProductInsights& AwsProductInsights::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CurrencyCode")) {
    m_currencyCode =
        AwsProductInsightsCurrencyCodeEnumMapper::GetAwsProductInsightsCurrencyCodeEnumForName(jsonValue.GetString("CurrencyCode"));
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Frequency")) {
    m_frequency = PaymentFrequencyMapper::GetPaymentFrequencyForName(jsonValue.GetString("Frequency"));
    m_frequencyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalAmount")) {
    m_totalAmount = jsonValue.GetString("TotalAmount");
    m_totalAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalOptimizedAmount")) {
    m_totalOptimizedAmount = jsonValue.GetString("TotalOptimizedAmount");
    m_totalOptimizedAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalPotentialSavingsAmount")) {
    m_totalPotentialSavingsAmount = jsonValue.GetString("TotalPotentialSavingsAmount");
    m_totalPotentialSavingsAmountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TotalAmountByCategory")) {
    Aws::Map<Aws::String, JsonView> totalAmountByCategoryJsonMap = jsonValue.GetObject("TotalAmountByCategory").GetAllObjects();
    for (auto& totalAmountByCategoryItem : totalAmountByCategoryJsonMap) {
      m_totalAmountByCategory[totalAmountByCategoryItem.first] = totalAmountByCategoryItem.second.AsString();
    }
    m_totalAmountByCategoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AwsProducts")) {
    Aws::Utils::Array<JsonView> awsProductsJsonList = jsonValue.GetArray("AwsProducts");
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      m_awsProducts.push_back(awsProductsJsonList[awsProductsIndex].AsObject());
    }
    m_awsProductsHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsProductInsights::Jsonize() const {
  JsonValue payload;

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("CurrencyCode",
                       AwsProductInsightsCurrencyCodeEnumMapper::GetNameForAwsProductInsightsCurrencyCodeEnum(m_currencyCode));
  }

  if (m_frequencyHasBeenSet) {
    payload.WithString("Frequency", PaymentFrequencyMapper::GetNameForPaymentFrequency(m_frequency));
  }

  if (m_totalAmountHasBeenSet) {
    payload.WithString("TotalAmount", m_totalAmount);
  }

  if (m_totalOptimizedAmountHasBeenSet) {
    payload.WithString("TotalOptimizedAmount", m_totalOptimizedAmount);
  }

  if (m_totalPotentialSavingsAmountHasBeenSet) {
    payload.WithString("TotalPotentialSavingsAmount", m_totalPotentialSavingsAmount);
  }

  if (m_totalAmountByCategoryHasBeenSet) {
    JsonValue totalAmountByCategoryJsonMap;
    for (auto& totalAmountByCategoryItem : m_totalAmountByCategory) {
      totalAmountByCategoryJsonMap.WithString(totalAmountByCategoryItem.first, totalAmountByCategoryItem.second);
    }
    payload.WithObject("TotalAmountByCategory", std::move(totalAmountByCategoryJsonMap));
  }

  if (m_awsProductsHasBeenSet) {
    Aws::Utils::Array<JsonValue> awsProductsJsonList(m_awsProducts.size());
    for (unsigned awsProductsIndex = 0; awsProductsIndex < awsProductsJsonList.GetLength(); ++awsProductsIndex) {
      awsProductsJsonList[awsProductsIndex].AsObject(m_awsProducts[awsProductsIndex].Jsonize());
    }
    payload.WithArray("AwsProducts", std::move(awsProductsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
