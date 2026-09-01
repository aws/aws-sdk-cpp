/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorReasonCode.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorType.h>
#include <aws/marketplace-agreement/model/RenewalSummary.h>

#include <utility>

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
 * <p>The behavior of an agreement when it reaches its end date. For example,
 * whether the agreement renews, and if it doesn't, the reason why.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/EndTimeBehavior">AWS
 * API Reference</a></p>
 */
class EndTimeBehavior {
 public:
  AWS_AGREEMENTSERVICE_API EndTimeBehavior() = default;
  AWS_AGREEMENTSERVICE_API EndTimeBehavior(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API EndTimeBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The behavior of the agreement when it reaches its end date.</p> <p>Types
   * include:</p> <ul> <li> <p> <code>RENEW</code> – A new agreement is created from
   * the accepted terms of this agreement.</p> </li> <li> <p> <code>REPLACE</code> –
   * A new agreement is created from a different offer than the one this agreement
   * was created from. This happens, for example, when a private offer reaches its
   * end date and the acceptor transitions to the public offer for the product.</p>
   * </li> <li> <p> <code>EXPIRE</code> – The agreement ends and isn't renewed or
   * replaced.</p> </li> </ul>
   */
  inline EndTimeBehaviorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EndTimeBehaviorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EndTimeBehavior& WithType(EndTimeBehaviorType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the agreement doesn't renew at its end date. The field is
   * <code>null</code> when the agreement renews.</p> <p>More than one reason can
   * apply to the same agreement. When that happens, the operation returns only one
   * reason code, and <code>PROPOSER_RENEW_OPTED_OUT</code> takes precedence over all
   * others.</p> <p>The <code>EnableAutoRenew</code> field reflects only the
   * acceptor's preference, and doesn't reflect the other reasons an agreement might
   * not renew.</p> <p>Reason codes include:</p> <ul> <li> <p>
   * <code>PROPOSER_RENEW_OPTED_OUT</code> – The proposer opted out of renewing the
   * agreement.</p> </li> <li> <p> <code>ACCEPTOR_RENEW_OPTED_OUT</code> – The
   * acceptor opted out of renewing the agreement.</p> </li> <li> <p>
   * <code>NO_RENEWAL_TERM</code> – The accepted terms of the agreement don't include
   * a renewal term, which is required for an agreement to renew.</p> </li> <li> <p>
   * <code>RENEWAL_LIMIT_EXHAUSTED</code> – The agreement reached the maximum number
   * of renewals allowed by its renewal term.</p> </li> </ul>
   */
  inline EndTimeBehaviorReasonCode GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(EndTimeBehaviorReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline EndTimeBehavior& WithReasonCode(EndTimeBehaviorReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the renewal that applies at the end date of the agreement.
   * This field is present when <code>Type</code> is <code>RENEW</code>. It is also
   * present when <code>ReasonCode</code> is <code>PROPOSER_RENEW_OPTED_OUT</code> or
   * <code>ACCEPTOR_RENEW_OPTED_OUT</code>. In those cases, it identifies the offer
   * that the agreement would otherwise have renewed from. The field is
   * <code>null</code> in all other cases.</p>
   */
  inline const RenewalSummary& GetRenewalSummary() const { return m_renewalSummary; }
  inline bool RenewalSummaryHasBeenSet() const { return m_renewalSummaryHasBeenSet; }
  template <typename RenewalSummaryT = RenewalSummary>
  void SetRenewalSummary(RenewalSummaryT&& value) {
    m_renewalSummaryHasBeenSet = true;
    m_renewalSummary = std::forward<RenewalSummaryT>(value);
  }
  template <typename RenewalSummaryT = RenewalSummary>
  EndTimeBehavior& WithRenewalSummary(RenewalSummaryT&& value) {
    SetRenewalSummary(std::forward<RenewalSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  EndTimeBehaviorType m_type{EndTimeBehaviorType::NOT_SET};

  EndTimeBehaviorReasonCode m_reasonCode{EndTimeBehaviorReasonCode::NOT_SET};

  RenewalSummary m_renewalSummary;
  bool m_typeHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_renewalSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
