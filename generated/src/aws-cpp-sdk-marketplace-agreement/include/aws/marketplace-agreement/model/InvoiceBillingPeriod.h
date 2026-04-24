/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>The billing period for an invoice, specified by month and year.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/InvoiceBillingPeriod">AWS
 * API Reference</a></p>
 */
class InvoiceBillingPeriod {
 public:
  AWS_AGREEMENTSERVICE_API InvoiceBillingPeriod() = default;
  AWS_AGREEMENTSERVICE_API InvoiceBillingPeriod(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API InvoiceBillingPeriod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The billing period month. Valid range: 1-12.</p>
   */
  inline int GetMonth() const { return m_month; }
  inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
  inline void SetMonth(int value) {
    m_monthHasBeenSet = true;
    m_month = value;
  }
  inline InvoiceBillingPeriod& WithMonth(int value) {
    SetMonth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period year.</p>
   */
  inline int GetYear() const { return m_year; }
  inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }
  inline void SetYear(int value) {
    m_yearHasBeenSet = true;
    m_year = value;
  }
  inline InvoiceBillingPeriod& WithYear(int value) {
    SetYear(value);
    return *this;
  }
  ///@}
 private:
  int m_month{0};

  int m_year{0};
  bool m_monthHasBeenSet = false;
  bool m_yearHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
