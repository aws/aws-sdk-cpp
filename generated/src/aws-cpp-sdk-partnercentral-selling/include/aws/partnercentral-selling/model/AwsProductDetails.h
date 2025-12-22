/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AwsProductOptimization.h>

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
 * <p>AWS services with program eligibility indicators (MAP, modernization
 * pathways), cost estimates, and optimization recommendations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsProductDetails">AWS
 * API Reference</a></p>
 */
class AwsProductDetails {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsProductDetails() = default;
  AWS_PARTNERCENTRALSELLING_API AwsProductDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsProductDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS Partner Central product identifier used for opportunity association</p>
   */
  inline const Aws::String& GetProductCode() const { return m_productCode; }
  inline bool ProductCodeHasBeenSet() const { return m_productCodeHasBeenSet; }
  template <typename ProductCodeT = Aws::String>
  void SetProductCode(ProductCodeT&& value) {
    m_productCodeHasBeenSet = true;
    m_productCode = std::forward<ProductCodeT>(value);
  }
  template <typename ProductCodeT = Aws::String>
  AwsProductDetails& WithProductCode(ProductCodeT&& value) {
    SetProductCode(std::forward<ProductCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pricing Calculator service code (links to original calculator URL)</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  AwsProductDetails& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of program and pathway categories this product is eligible for</p>
   */
  inline const Aws::Vector<Aws::String>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<Aws::String>>
  AwsProductDetails& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  template <typename CategoriesT = Aws::String>
  AwsProductDetails& AddCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories.emplace_back(std::forward<CategoriesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Baseline service cost before optimizations (may be null for AWS-sourced
   * predictions)</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  AwsProductDetails& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service cost after applying optimizations (may be null for AWS-sourced
   * predictions)</p>
   */
  inline const Aws::String& GetOptimizedAmount() const { return m_optimizedAmount; }
  inline bool OptimizedAmountHasBeenSet() const { return m_optimizedAmountHasBeenSet; }
  template <typename OptimizedAmountT = Aws::String>
  void SetOptimizedAmount(OptimizedAmountT&& value) {
    m_optimizedAmountHasBeenSet = true;
    m_optimizedAmount = std::forward<OptimizedAmountT>(value);
  }
  template <typename OptimizedAmountT = Aws::String>
  AwsProductDetails& WithOptimizedAmount(OptimizedAmountT&& value) {
    SetOptimizedAmount(std::forward<OptimizedAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service-specific cost reduction through optimizations (may be null for
   * AWS-sourced predictions)</p>
   */
  inline const Aws::String& GetPotentialSavingsAmount() const { return m_potentialSavingsAmount; }
  inline bool PotentialSavingsAmountHasBeenSet() const { return m_potentialSavingsAmountHasBeenSet; }
  template <typename PotentialSavingsAmountT = Aws::String>
  void SetPotentialSavingsAmount(PotentialSavingsAmountT&& value) {
    m_potentialSavingsAmountHasBeenSet = true;
    m_potentialSavingsAmount = std::forward<PotentialSavingsAmountT>(value);
  }
  template <typename PotentialSavingsAmountT = Aws::String>
  AwsProductDetails& WithPotentialSavingsAmount(PotentialSavingsAmountT&& value) {
    SetPotentialSavingsAmount(std::forward<PotentialSavingsAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of specific optimization recommendations for this product</p>
   */
  inline const Aws::Vector<AwsProductOptimization>& GetOptimizations() const { return m_optimizations; }
  inline bool OptimizationsHasBeenSet() const { return m_optimizationsHasBeenSet; }
  template <typename OptimizationsT = Aws::Vector<AwsProductOptimization>>
  void SetOptimizations(OptimizationsT&& value) {
    m_optimizationsHasBeenSet = true;
    m_optimizations = std::forward<OptimizationsT>(value);
  }
  template <typename OptimizationsT = Aws::Vector<AwsProductOptimization>>
  AwsProductDetails& WithOptimizations(OptimizationsT&& value) {
    SetOptimizations(std::forward<OptimizationsT>(value));
    return *this;
  }
  template <typename OptimizationsT = AwsProductOptimization>
  AwsProductDetails& AddOptimizations(OptimizationsT&& value) {
    m_optimizationsHasBeenSet = true;
    m_optimizations.emplace_back(std::forward<OptimizationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_productCode;

  Aws::String m_serviceCode;

  Aws::Vector<Aws::String> m_categories;

  Aws::String m_amount;

  Aws::String m_optimizedAmount;

  Aws::String m_potentialSavingsAmount;

  Aws::Vector<AwsProductOptimization> m_optimizations;
  bool m_productCodeHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_optimizedAmountHasBeenSet = false;
  bool m_potentialSavingsAmountHasBeenSet = false;
  bool m_optimizationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
