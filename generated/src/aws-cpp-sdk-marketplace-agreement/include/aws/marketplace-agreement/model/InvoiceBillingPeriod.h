/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
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
  AWS_AGREEMENTSERVICE_API InvoiceBillingPeriod(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API InvoiceBillingPeriod& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The billing period month. Valid range: 1-12.</p>
   */
  inline int64_t GetMonth() const { return m_month; }
  inline bool MonthHasBeenSet() const { return m_monthHasBeenSet; }
  inline void SetMonth(int64_t value) {
    m_monthHasBeenSet = true;
    m_month = value;
  }
  inline InvoiceBillingPeriod& WithMonth(int64_t value) {
    SetMonth(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period year.</p>
   */
  inline int64_t GetYear() const { return m_year; }
  inline bool YearHasBeenSet() const { return m_yearHasBeenSet; }
  inline void SetYear(int64_t value) {
    m_yearHasBeenSet = true;
    m_year = value;
  }
  inline InvoiceBillingPeriod& WithYear(int64_t value) {
    SetYear(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_month{0};

  int64_t m_year{0};
  bool m_monthHasBeenSet = false;
  bool m_yearHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
