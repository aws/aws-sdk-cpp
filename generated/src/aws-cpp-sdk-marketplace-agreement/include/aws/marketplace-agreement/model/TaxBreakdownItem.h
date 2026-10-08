/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Represents a single tax breakdown entry with amount, rate, and
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/TaxBreakdownItem">AWS
 * API Reference</a></p>
 */
class TaxBreakdownItem {
 public:
  AWS_AGREEMENTSERVICE_API TaxBreakdownItem() = default;
  AWS_AGREEMENTSERVICE_API TaxBreakdownItem(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API TaxBreakdownItem& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The estimated tax amount.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  TaxBreakdownItem& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tax rate, in decimals.</p>
   */
  inline const Aws::String& GetRate() const { return m_rate; }
  inline bool RateHasBeenSet() const { return m_rateHasBeenSet; }
  template <typename RateT = Aws::String>
  void SetRate(RateT&& value) {
    m_rateHasBeenSet = true;
    m_rate = std::forward<RateT>(value);
  }
  template <typename RateT = Aws::String>
  TaxBreakdownItem& WithRate(RateT&& value) {
    SetRate(std::forward<RateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of tax (for example, VAT, ST, or GST).</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  TaxBreakdownItem& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_amount;

  Aws::String m_rate;

  Aws::String m_type;
  bool m_amountHasBeenSet = false;
  bool m_rateHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
