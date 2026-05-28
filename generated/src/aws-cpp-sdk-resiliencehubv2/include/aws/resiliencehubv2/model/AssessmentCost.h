/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/CostCurrency.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents the cost of running a failure mode assessment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/AssessmentCost">AWS
 * API Reference</a></p>
 */
class AssessmentCost {
 public:
  AWS_RESILIENCEHUBV2_API AssessmentCost() = default;
  AWS_RESILIENCEHUBV2_API AssessmentCost(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API AssessmentCost& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The cost amount for the assessment.</p>
   */
  inline double GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  inline void SetAmount(double value) {
    m_amountHasBeenSet = true;
    m_amount = value;
  }
  inline AssessmentCost& WithAmount(double value) {
    SetAmount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The currency of the assessment cost.</p>
   */
  inline CostCurrency GetCurrency() const { return m_currency; }
  inline bool CurrencyHasBeenSet() const { return m_currencyHasBeenSet; }
  inline void SetCurrency(CostCurrency value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline AssessmentCost& WithCurrency(CostCurrency value) {
    SetCurrency(value);
    return *this;
  }
  ///@}
 private:
  double m_amount{0.0};

  CostCurrency m_currency{CostCurrency::NOT_SET};
  bool m_amountHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
