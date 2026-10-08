/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/TaxBreakdownItem.h>

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
 * <p>Provides an aggregated view of estimated tax information.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/EstimatedTaxes">AWS
 * API Reference</a></p>
 */
class EstimatedTaxes {
 public:
  AWS_AGREEMENTSERVICE_API EstimatedTaxes() = default;
  AWS_AGREEMENTSERVICE_API EstimatedTaxes(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API EstimatedTaxes& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>A list of tax breakdown information.</p>
   */
  inline const Aws::Vector<TaxBreakdownItem>& GetBreakdown() const { return m_breakdown; }
  inline bool BreakdownHasBeenSet() const { return m_breakdownHasBeenSet; }
  template <typename BreakdownT = Aws::Vector<TaxBreakdownItem>>
  void SetBreakdown(BreakdownT&& value) {
    m_breakdownHasBeenSet = true;
    m_breakdown = std::forward<BreakdownT>(value);
  }
  template <typename BreakdownT = Aws::Vector<TaxBreakdownItem>>
  EstimatedTaxes& WithBreakdown(BreakdownT&& value) {
    SetBreakdown(std::forward<BreakdownT>(value));
    return *this;
  }
  template <typename BreakdownT = TaxBreakdownItem>
  EstimatedTaxes& AddBreakdown(BreakdownT&& value) {
    m_breakdownHasBeenSet = true;
    m_breakdown.emplace_back(std::forward<BreakdownT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total amount of tax aggregated from the tax breakdown.</p>
   */
  inline const Aws::String& GetTotalAmount() const { return m_totalAmount; }
  inline bool TotalAmountHasBeenSet() const { return m_totalAmountHasBeenSet; }
  template <typename TotalAmountT = Aws::String>
  void SetTotalAmount(TotalAmountT&& value) {
    m_totalAmountHasBeenSet = true;
    m_totalAmount = std::forward<TotalAmountT>(value);
  }
  template <typename TotalAmountT = Aws::String>
  EstimatedTaxes& WithTotalAmount(TotalAmountT&& value) {
    SetTotalAmount(std::forward<TotalAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TaxBreakdownItem> m_breakdown;

  Aws::String m_totalAmount;
  bool m_breakdownHasBeenSet = false;
  bool m_totalAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
