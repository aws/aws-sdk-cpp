/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsProductDetails.h>
#include <aws/partnercentral-selling/model/AwsProductInsightsCurrencyCodeEnum.h>
#include <aws/partnercentral-selling/model/PaymentFrequency.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Comprehensive spend analysis for a single source (AWS or Partner) including
 * total amounts, optimization savings, program category breakdowns, and detailed
 * product-level insights.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsProductInsights">AWS
 * API Reference</a></p>
 */
class AwsProductInsights {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsProductInsights() = default;
  AWS_PARTNERCENTRALSELLING_API AwsProductInsights(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsProductInsights& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ISO 4217 currency code (e.g., &quot;USD&quot;) ensuring consistent
   * representation across calculations</p>
   */
  inline AwsProductInsightsCurrencyCodeEnum GetCurrencyCode() const { return m_currencyCode; }
  inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
  inline void SetCurrencyCode(AwsProductInsightsCurrencyCodeEnum value) {
    m_currencyCodeHasBeenSet = true;
    m_currencyCode = value;
  }
  inline AwsProductInsights& WithCurrencyCode(AwsProductInsightsCurrencyCodeEnum value) {
    SetCurrencyCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time period for spend amounts: &quot;Monthly&quot; or
   * &quot;Annually&quot;</p>
   */
  inline PaymentFrequency GetFrequency() const { return m_frequency; }
  inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
  inline void SetFrequency(PaymentFrequency value) {
    m_frequencyHasBeenSet = true;
    m_frequency = value;
  }
  inline AwsProductInsights& WithFrequency(PaymentFrequency value) {
    SetFrequency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total estimated spend for this source before optimizations</p>
   */
  inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
  inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
  template <typename TotalAmountT = Aws::String>
  void SetTotalAmount(TotalAmountT&& value) {
    m_totalAmountHasBeenSet = true;
    m_totalAmount = std::forward<TotalAmountT>(value);
  }
  template <typename TotalAmountT = Aws::String>
  AwsProductInsights& WithTotalAmount(TotalAmountT&& value) {
    SetTotalAmount(std::forward<TotalAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total estimated spend after applying recommended optimizations</p>
   */
  inline const Aws::String& GetTotalOptimizedAmount() const { return m_totalOptimizedAmount; }
  inline bool TotalOptimizedAmountHasBeenSet() const { return m_totalOptimizedAmountHasBeenSet; }
  template <typename TotalOptimizedAmountT = Aws::String>
  void SetTotalOptimizedAmount(TotalOptimizedAmountT&& value) {
    m_totalOptimizedAmountHasBeenSet = true;
    m_totalOptimizedAmount = std::forward<TotalOptimizedAmountT>(value);
  }
  template <typename TotalOptimizedAmountT = Aws::String>
  AwsProductInsights& WithTotalOptimizedAmount(TotalOptimizedAmountT&& value) {
    SetTotalOptimizedAmount(std::forward<TotalOptimizedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Quantified savings achievable through implementing optimizations</p>
   */
  inline const Aws::String& GetTotalPotentialSavingsAmount() const { return m_totalPotentialSavingsAmount; }
  inline bool TotalPotentialSavingsAmountHasBeenSet() const { return m_totalPotentialSavingsAmountHasBeenSet; }
  template <typename TotalPotentialSavingsAmountT = Aws::String>
  void SetTotalPotentialSavingsAmount(TotalPotentialSavingsAmountT&& value) {
    m_totalPotentialSavingsAmountHasBeenSet = true;
    m_totalPotentialSavingsAmount = std::forward<TotalPotentialSavingsAmountT>(value);
  }
  template <typename TotalPotentialSavingsAmountT = Aws::String>
  AwsProductInsights& WithTotalPotentialSavingsAmount(TotalPotentialSavingsAmountT&& value) {
    SetTotalPotentialSavingsAmount(std::forward<TotalPotentialSavingsAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Spend amounts mapped to AWS programs and modernization pathways</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTotalAmountByCategory() const { return m_totalAmountByCategory; }
  inline bool TotalAmountByCategoryHasBeenSet() const { return m_totalAmountByCategoryHasBeenSet; }
  template <typename TotalAmountByCategoryT = Aws::Map<Aws::String, Aws::String>>
  void SetTotalAmountByCategory(TotalAmountByCategoryT&& value) {
    m_totalAmountByCategoryHasBeenSet = true;
    m_totalAmountByCategory = std::forward<TotalAmountByCategoryT>(value);
  }
  template <typename TotalAmountByCategoryT = Aws::Map<Aws::String, Aws::String>>
  AwsProductInsights& WithTotalAmountByCategory(TotalAmountByCategoryT&& value) {
    SetTotalAmountByCategory(std::forward<TotalAmountByCategoryT>(value));
    return *this;
  }
  template <typename TotalAmountByCategoryKeyT = Aws::String, typename TotalAmountByCategoryValueT = Aws::String>
  AwsProductInsights& AddTotalAmountByCategory(TotalAmountByCategoryKeyT&& key, TotalAmountByCategoryValueT&& value) {
    m_totalAmountByCategoryHasBeenSet = true;
    m_totalAmountByCategory.emplace(std::forward<TotalAmountByCategoryKeyT>(key), std::forward<TotalAmountByCategoryValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Product-level details including costs and optimization recommendations</p>
   */
  inline const Aws::Vector<AwsProductDetails>& GetAwsProducts() const { return m_awsProducts; }
  inline bool AwsProductsHasBeenSet() const { return m_awsProductsHasBeenSet; }
  template <typename AwsProductsT = Aws::Vector<AwsProductDetails>>
  void SetAwsProducts(AwsProductsT&& value) {
    m_awsProductsHasBeenSet = true;
    m_awsProducts = std::forward<AwsProductsT>(value);
  }
  template <typename AwsProductsT = Aws::Vector<AwsProductDetails>>
  AwsProductInsights& WithAwsProducts(AwsProductsT&& value) {
    SetAwsProducts(std::forward<AwsProductsT>(value));
    return *this;
  }
  template <typename AwsProductsT = AwsProductDetails>
  AwsProductInsights& AddAwsProducts(AwsProductsT&& value) {
    m_awsProductsHasBeenSet = true;
    m_awsProducts.emplace_back(std::forward<AwsProductsT>(value));
    return *this;
  }
  ///@}
 private:
  AwsProductInsightsCurrencyCodeEnum m_currencyCode{AwsProductInsightsCurrencyCodeEnum::NOT_SET};

  PaymentFrequency m_frequency{PaymentFrequency::NOT_SET};

  Aws::String m_totalAmount;

  Aws::String m_totalOptimizedAmount;

  Aws::String m_totalPotentialSavingsAmount;

  Aws::Map<Aws::String, Aws::String> m_totalAmountByCategory;

  Aws::Vector<AwsProductDetails> m_awsProducts;
  bool m_currencyCodeHasBeenSet = false;
  bool m_frequencyHasBeenSet = false;
  bool m_totalAmountHasBeenSet = false;
  bool m_totalOptimizedAmountHasBeenSet = false;
  bool m_totalPotentialSavingsAmountHasBeenSet = false;
  bool m_totalAmountByCategoryHasBeenSet = false;
  bool m_awsProductsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
