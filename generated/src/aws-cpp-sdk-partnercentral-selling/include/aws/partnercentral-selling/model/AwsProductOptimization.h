/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>

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
 * <p>Details for a specific optimization recommendation</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsProductOptimization">AWS
 * API Reference</a></p>
 */
class AwsProductOptimization {
 public:
  AWS_PARTNERCENTRALSELLING_API AwsProductOptimization() = default;
  AWS_PARTNERCENTRALSELLING_API AwsProductOptimization(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AwsProductOptimization& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Human-readable explanation of the optimization strategy</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AwsProductOptimization& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Quantified cost savings achievable by implementing this optimization</p>
   */
  inline const Aws::String& GetSavingsAmount() const { return m_savingsAmount; }
  inline bool SavingsAmountHasBeenSet() const { return m_savingsAmountHasBeenSet; }
  template <typename SavingsAmountT = Aws::String>
  void SetSavingsAmount(SavingsAmountT&& value) {
    m_savingsAmountHasBeenSet = true;
    m_savingsAmount = std::forward<SavingsAmountT>(value);
  }
  template <typename SavingsAmountT = Aws::String>
  AwsProductOptimization& WithSavingsAmount(SavingsAmountT&& value) {
    SetSavingsAmount(std::forward<SavingsAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_savingsAmount;
  bool m_descriptionHasBeenSet = false;
  bool m_savingsAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
