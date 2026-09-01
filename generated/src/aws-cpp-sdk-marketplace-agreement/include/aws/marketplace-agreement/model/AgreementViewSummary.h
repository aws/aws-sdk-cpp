/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/Acceptor.h>
#include <aws/marketplace-agreement/model/AgreementStatus.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorReasonCode.h>
#include <aws/marketplace-agreement/model/EndTimeBehaviorType.h>
#include <aws/marketplace-agreement/model/Entitlement.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/marketplace-agreement/model/Proposer.h>

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
 * <p>A summary of the agreement, including top-level attributes (for example, the
 * agreement ID, proposer, and acceptor).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementViewSummary">AWS
 * API Reference</a></p>
 */
class AgreementViewSummary {
 public:
  AWS_AGREEMENTSERVICE_API AgreementViewSummary() = default;
  AWS_AGREEMENTSERVICE_API AgreementViewSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API AgreementViewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the agreement.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  AgreementViewSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the agreement was accepted.</p>
   */
  inline const Aws::Utils::DateTime& GetAcceptanceTime() const { return m_acceptanceTime; }
  inline bool AcceptanceTimeHasBeenSet() const { return m_acceptanceTimeHasBeenSet; }
  template <typename AcceptanceTimeT = Aws::Utils::DateTime>
  void SetAcceptanceTime(AcceptanceTimeT&& value) {
    m_acceptanceTimeHasBeenSet = true;
    m_acceptanceTime = std::forward<AcceptanceTimeT>(value);
  }
  template <typename AcceptanceTimeT = Aws::Utils::DateTime>
  AgreementViewSummary& WithAcceptanceTime(AcceptanceTimeT&& value) {
    SetAcceptanceTime(std::forward<AcceptanceTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement starts.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  AgreementViewSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement ends. The field is <code>null</code> for
   * pay-as-you-go agreements, which don’t have end dates.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  AgreementViewSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement was last updated. An agreement is
   * updated when any of its attributes or accepted terms change. Amendments,
   * renewals, and a party changing whether the agreement renews are all
   * examples.</p> <p>Use the <code>BeforeLastUpdateTime</code> and
   * <code>AfterLastUpdateTime</code> filters to search on this value, and
   * <code>LastUpdateTime</code> as the <code>SortBy</code> value to sort by it.
   * Sorting by <code>LastUpdateTime</code> is supported only when
   * <code>PartyType</code> is <code>Proposer</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
  inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
  template <typename LastUpdateTimeT = Aws::Utils::DateTime>
  void SetLastUpdateTime(LastUpdateTimeT&& value) {
    m_lastUpdateTimeHasBeenSet = true;
    m_lastUpdateTime = std::forward<LastUpdateTimeT>(value);
  }
  template <typename LastUpdateTimeT = Aws::Utils::DateTime>
  AgreementViewSummary& WithLastUpdateTime(LastUpdateTimeT&& value) {
    SetLastUpdateTime(std::forward<LastUpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agreement.</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  AgreementViewSummary& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the party accepting the agreement terms. This is commonly the
   * buyer for <code>PurchaseAgreement.</code> </p>
   */
  inline const Acceptor& GetAcceptor() const { return m_acceptor; }
  inline bool AcceptorHasBeenSet() const { return m_acceptorHasBeenSet; }
  template <typename AcceptorT = Acceptor>
  void SetAcceptor(AcceptorT&& value) {
    m_acceptorHasBeenSet = true;
    m_acceptor = std::forward<AcceptorT>(value);
  }
  template <typename AcceptorT = Acceptor>
  AgreementViewSummary& WithAcceptor(AcceptorT&& value) {
    SetAcceptor(std::forward<AcceptorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details of the party proposing the agreement terms, most commonly the seller
   * for <code>PurchaseAgreement</code>.</p>
   */
  inline const Proposer& GetProposer() const { return m_proposer; }
  inline bool ProposerHasBeenSet() const { return m_proposerHasBeenSet; }
  template <typename ProposerT = Proposer>
  void SetProposer(ProposerT&& value) {
    m_proposerHasBeenSet = true;
    m_proposer = std::forward<ProposerT>(value);
  }
  template <typename ProposerT = Proposer>
  AgreementViewSummary& WithProposer(ProposerT&& value) {
    SetProposer(std::forward<ProposerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the proposal</p>
   */
  inline const ProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
  inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }
  template <typename ProposalSummaryT = ProposalSummary>
  void SetProposalSummary(ProposalSummaryT&& value) {
    m_proposalSummaryHasBeenSet = true;
    m_proposalSummary = std::forward<ProposalSummaryT>(value);
  }
  template <typename ProposalSummaryT = ProposalSummary>
  AgreementViewSummary& WithProposalSummary(ProposalSummaryT&& value) {
    SetProposalSummary(std::forward<ProposalSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the agreement. </p>
   */
  inline AgreementStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgreementViewSummary& WithStatus(AgreementStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of entitlements associated with the agreement.</p>
   */
  inline const Aws::Vector<Entitlement>& GetEntitlements() const { return m_entitlements; }
  inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
  template <typename EntitlementsT = Aws::Vector<Entitlement>>
  void SetEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements = std::forward<EntitlementsT>(value);
  }
  template <typename EntitlementsT = Aws::Vector<Entitlement>>
  AgreementViewSummary& WithEntitlements(EntitlementsT&& value) {
    SetEntitlements(std::forward<EntitlementsT>(value));
    return *this;
  }
  template <typename EntitlementsT = Entitlement>
  AgreementViewSummary& AddEntitlements(EntitlementsT&& value) {
    m_entitlementsHasBeenSet = true;
    m_entitlements.emplace_back(std::forward<EntitlementsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the very first agreement in a chain of related
   * agreements, such as renewals or replacements. It stays the same across all
   * agreements in that chain, which lets you trace an agreement back to the
   * original. You can also use it as the <code>InitialAgreementId</code> filter
   * value to return every agreement in the same chain.</p>
   */
  inline const Aws::String& GetInitialAgreementId() const { return m_initialAgreementId; }
  inline bool InitialAgreementIdHasBeenSet() const { return m_initialAgreementIdHasBeenSet; }
  template <typename InitialAgreementIdT = Aws::String>
  void SetInitialAgreementId(InitialAgreementIdT&& value) {
    m_initialAgreementIdHasBeenSet = true;
    m_initialAgreementId = std::forward<InitialAgreementIdT>(value);
  }
  template <typename InitialAgreementIdT = Aws::String>
  AgreementViewSummary& WithInitialAgreementId(InitialAgreementIdT&& value) {
    SetInitialAgreementId(std::forward<InitialAgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The behavior of the agreement when it reaches its end date. The field is
   * <code>null</code> for agreements that have no end date, because those agreements
   * never reach an end time.</p> <p>Types include:</p> <ul> <li> <p>
   * <code>RENEW</code> – A new agreement is created from the accepted terms of this
   * agreement.</p> </li> <li> <p> <code>REPLACE</code> – A new agreement is created
   * from a different offer than the one this agreement was created from. This
   * happens, for example, when a private offer reaches its end date and the acceptor
   * transitions to the public offer for the product.</p> </li> <li> <p>
   * <code>EXPIRE</code> – The agreement ends and isn't renewed or replaced.</p>
   * </li> </ul>
   */
  inline EndTimeBehaviorType GetEndTimeBehaviorType() const { return m_endTimeBehaviorType; }
  inline bool EndTimeBehaviorTypeHasBeenSet() const { return m_endTimeBehaviorTypeHasBeenSet; }
  inline void SetEndTimeBehaviorType(EndTimeBehaviorType value) {
    m_endTimeBehaviorTypeHasBeenSet = true;
    m_endTimeBehaviorType = value;
  }
  inline AgreementViewSummary& WithEndTimeBehaviorType(EndTimeBehaviorType value) {
    SetEndTimeBehaviorType(value);
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
  inline EndTimeBehaviorReasonCode GetEndTimeBehaviorReasonCode() const { return m_endTimeBehaviorReasonCode; }
  inline bool EndTimeBehaviorReasonCodeHasBeenSet() const { return m_endTimeBehaviorReasonCodeHasBeenSet; }
  inline void SetEndTimeBehaviorReasonCode(EndTimeBehaviorReasonCode value) {
    m_endTimeBehaviorReasonCodeHasBeenSet = true;
    m_endTimeBehaviorReasonCode = value;
  }
  inline AgreementViewSummary& WithEndTimeBehaviorReasonCode(EndTimeBehaviorReasonCode value) {
    SetEndTimeBehaviorReasonCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  Aws::Utils::DateTime m_acceptanceTime{};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Utils::DateTime m_lastUpdateTime{};

  Aws::String m_agreementType;

  Acceptor m_acceptor;

  Proposer m_proposer;

  ProposalSummary m_proposalSummary;

  AgreementStatus m_status{AgreementStatus::NOT_SET};

  Aws::Vector<Entitlement> m_entitlements;

  Aws::String m_initialAgreementId;

  EndTimeBehaviorType m_endTimeBehaviorType{EndTimeBehaviorType::NOT_SET};

  EndTimeBehaviorReasonCode m_endTimeBehaviorReasonCode{EndTimeBehaviorReasonCode::NOT_SET};
  bool m_agreementIdHasBeenSet = false;
  bool m_acceptanceTimeHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_lastUpdateTimeHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_acceptorHasBeenSet = false;
  bool m_proposerHasBeenSet = false;
  bool m_proposalSummaryHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_entitlementsHasBeenSet = false;
  bool m_initialAgreementIdHasBeenSet = false;
  bool m_endTimeBehaviorTypeHasBeenSet = false;
  bool m_endTimeBehaviorReasonCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
