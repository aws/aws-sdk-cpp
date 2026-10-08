/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/EstimatedTaxes.h>
#include <aws/marketplace-agreement/model/Timing.h>

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
 * <p>Estimated charge for the request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ExpectedCharge">AWS
 * API Reference</a></p>
 */
class ExpectedCharge {
 public:
  AWS_AGREEMENTSERVICE_API ExpectedCharge() = default;
  AWS_AGREEMENTSERVICE_API ExpectedCharge(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ExpectedCharge& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Unique identifier of the charge for a given agreement.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  ExpectedCharge& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the charge is due to be invoiced. This is available
   * only when the charge date is known.</p>
   */
  inline const Aws::Utils::DateTime& GetTime() const { return m_time; }
  inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
  template <typename TimeT = Aws::Utils::DateTime>
  void SetTime(TimeT&& value) {
    m_timeHasBeenSet = true;
    m_time = std::forward<TimeT>(value);
  }
  template <typename TimeT = Aws::Utils::DateTime>
  ExpectedCharge& WithTime(TimeT&& value) {
    SetTime(std::forward<TimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tax-exclusive amount of the charge. Only available when the charge amount
   * is known.</p>
   */
  inline const Aws::String& GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  template <typename AmountT = Aws::String>
  void SetAmount(AmountT&& value) {
    m_amountHasBeenSet = true;
    m_amount = std::forward<AmountT>(value);
  }
  template <typename AmountT = Aws::String>
  ExpectedCharge& WithAmount(AmountT&& value) {
    SetAmount(std::forward<AmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tax-inclusive amount the acceptor has to pay. The amount is only present
   * for fixed charges.</p>
   */
  inline const Aws::String& GetAmountAfterTax() const { return m_amountAfterTax; }
  inline bool AmountAfterTaxHasBeenSet() const { return m_amountAfterTaxHasBeenSet; }
  template <typename AmountAfterTaxT = Aws::String>
  void SetAmountAfterTax(AmountAfterTaxT&& value) {
    m_amountAfterTaxHasBeenSet = true;
    m_amountAfterTax = std::forward<AmountAfterTaxT>(value);
  }
  template <typename AmountAfterTaxT = Aws::String>
  ExpectedCharge& WithAmountAfterTax(AmountAfterTaxT&& value) {
    SetAmountAfterTax(std::forward<AmountAfterTaxT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates when the charge amount will be incurred. Values include
   * <code>ON_ACCEPTANCE</code> (charged immediately when the agreement request is
   * accepted), <code>BILLING_PERIOD</code> (charged on each billing period), and
   * <code>SCHEDULED</code> (charged at a predetermined future date).</p>
   */
  inline Timing GetTiming() const { return m_timing; }
  inline bool TimingHasBeenSet() const { return m_timingHasBeenSet; }
  inline void SetTiming(Timing value) {
    m_timingHasBeenSet = true;
    m_timing = value;
  }
  inline ExpectedCharge& WithTiming(Timing value) {
    SetTiming(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides an aggregated view of estimated tax information for this specific
   * charge.</p>
   */
  inline const EstimatedTaxes& GetEstimatedTaxes() const { return m_estimatedTaxes; }
  inline bool EstimatedTaxesHasBeenSet() const { return m_estimatedTaxesHasBeenSet; }
  template <typename EstimatedTaxesT = EstimatedTaxes>
  void SetEstimatedTaxes(EstimatedTaxesT&& value) {
    m_estimatedTaxesHasBeenSet = true;
    m_estimatedTaxes = std::forward<EstimatedTaxesT>(value);
  }
  template <typename EstimatedTaxesT = EstimatedTaxes>
  ExpectedCharge& WithEstimatedTaxes(EstimatedTaxesT&& value) {
    SetEstimatedTaxes(std::forward<EstimatedTaxesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::Utils::DateTime m_time{};

  Aws::String m_amount;

  Aws::String m_amountAfterTax;

  Timing m_timing{Timing::NOT_SET};

  EstimatedTaxes m_estimatedTaxes;
  bool m_idHasBeenSet = false;
  bool m_timeHasBeenSet = false;
  bool m_amountHasBeenSet = false;
  bool m_amountAfterTaxHasBeenSet = false;
  bool m_timingHasBeenSet = false;
  bool m_estimatedTaxesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
