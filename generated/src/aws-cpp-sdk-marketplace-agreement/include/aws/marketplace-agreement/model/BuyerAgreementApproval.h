/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementApprovalProposalSummary.h>
#include <aws/marketplace-agreement/model/AgreementApprovalProposer.h>
#include <aws/marketplace-agreement/model/AgreementApprovalRequester.h>
#include <aws/marketplace-agreement/model/AgreementApprovalStatus.h>
#include <aws/marketplace-agreement/model/AgreementApprovalType.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalLevel.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalPlanInput.h>

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
 * <p>The details of an approval that the buyer's organization requires before the
 * agreement request can be accepted, including the approval levels and the
 * decision of each approver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApproval">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApproval {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApproval() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApproval(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApproval& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of the agreement approval, which is
   * <code>BUYER_AGREEMENT_APPROVAL</code>.</p>
   */
  inline AgreementApprovalType GetApprovalType() const { return m_approvalType; }
  inline bool ApprovalTypeHasBeenSet() const { return m_approvalTypeHasBeenSet; }
  inline void SetApprovalType(AgreementApprovalType value) {
    m_approvalTypeHasBeenSet = true;
    m_approvalType = value;
  }
  inline BuyerAgreementApproval& WithApprovalType(AgreementApprovalType value) {
    SetApprovalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement approval.</p>
   */
  inline const Aws::String& GetAgreementApprovalId() const { return m_agreementApprovalId; }
  inline bool AgreementApprovalIdHasBeenSet() const { return m_agreementApprovalIdHasBeenSet; }
  template <typename AgreementApprovalIdT = Aws::String>
  void SetAgreementApprovalId(AgreementApprovalIdT&& value) {
    m_agreementApprovalIdHasBeenSet = true;
    m_agreementApprovalId = std::forward<AgreementApprovalIdT>(value);
  }
  template <typename AgreementApprovalIdT = Aws::String>
  BuyerAgreementApproval& WithAgreementApprovalId(AgreementApprovalIdT&& value) {
    SetAgreementApprovalId(std::forward<AgreementApprovalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the agreement approval.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BuyerAgreementApproval& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement request that the agreement approval is
   * for. Use <code>GetAgreementRequest</code> to retrieve the agreement request
   * details.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  inline bool AgreementRequestIdHasBeenSet() const { return m_agreementRequestIdHasBeenSet; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  BuyerAgreementApproval& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the agreement approval. Possible values include
   * <code>PENDING_APPROVAL</code>, <code>APPROVED</code>, <code>REJECTED</code>,
   * <code>EXPIRED</code>, and <code>CANCELLED</code>.</p>
   */
  inline AgreementApprovalStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementApprovalStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BuyerAgreementApproval& WithStatus(AgreementApprovalStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that started the agreement approval.</p>
   */
  inline const AgreementApprovalRequester& GetRequester() const { return m_requester; }
  inline bool RequesterHasBeenSet() const { return m_requesterHasBeenSet; }
  template <typename RequesterT = AgreementApprovalRequester>
  void SetRequester(RequesterT&& value) {
    m_requesterHasBeenSet = true;
    m_requester = std::forward<RequesterT>(value);
  }
  template <typename RequesterT = AgreementApprovalRequester>
  BuyerAgreementApproval& WithRequester(RequesterT&& value) {
    SetRequester(std::forward<RequesterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement approval was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BuyerAgreementApproval& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement approval was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  BuyerAgreementApproval& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when approvers could start acting on the agreement
   * approval.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  BuyerAgreementApproval& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement approval expires if it isn't approved or
   * rejected.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  BuyerAgreementApproval& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time by which the agreement approval must be completed.</p>
   */
  inline const Aws::Utils::DateTime& GetApprovalNeededBy() const { return m_approvalNeededBy; }
  inline bool ApprovalNeededByHasBeenSet() const { return m_approvalNeededByHasBeenSet; }
  template <typename ApprovalNeededByT = Aws::Utils::DateTime>
  void SetApprovalNeededBy(ApprovalNeededByT&& value) {
    m_approvalNeededByHasBeenSet = true;
    m_approvalNeededBy = std::forward<ApprovalNeededByT>(value);
  }
  template <typename ApprovalNeededByT = Aws::Utils::DateTime>
  BuyerAgreementApproval& WithApprovalNeededBy(ApprovalNeededByT&& value) {
    SetApprovalNeededBy(std::forward<ApprovalNeededByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approval levels, in the order they are evaluated. Approvers at a level
   * can act only after the previous level is approved. Each level lists its
   * approvers and the decision of each one.</p>
   */
  inline const Aws::Vector<BuyerAgreementApprovalLevel>& GetLevels() const { return m_levels; }
  inline bool LevelsHasBeenSet() const { return m_levelsHasBeenSet; }
  template <typename LevelsT = Aws::Vector<BuyerAgreementApprovalLevel>>
  void SetLevels(LevelsT&& value) {
    m_levelsHasBeenSet = true;
    m_levels = std::forward<LevelsT>(value);
  }
  template <typename LevelsT = Aws::Vector<BuyerAgreementApprovalLevel>>
  BuyerAgreementApproval& WithLevels(LevelsT&& value) {
    SetLevels(std::forward<LevelsT>(value));
    return *this;
  }
  template <typename LevelsT = BuyerAgreementApprovalLevel>
  BuyerAgreementApproval& AddLevels(LevelsT&& value) {
    m_levelsHasBeenSet = true;
    m_levels.emplace_back(std::forward<LevelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approval plan and the note that the requester provided in
   * <code>StartAgreementApprovals</code>.</p>
   */
  inline const BuyerAgreementApprovalPlanInput& GetPlanInput() const { return m_planInput; }
  inline bool PlanInputHasBeenSet() const { return m_planInputHasBeenSet; }
  template <typename PlanInputT = BuyerAgreementApprovalPlanInput>
  void SetPlanInput(PlanInputT&& value) {
    m_planInputHasBeenSet = true;
    m_planInput = std::forward<PlanInputT>(value);
  }
  template <typename PlanInputT = BuyerAgreementApprovalPlanInput>
  BuyerAgreementApproval& WithPlanInput(PlanInputT&& value) {
    SetPlanInput(std::forward<PlanInputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the party proposing the agreement terms. This is commonly the
   * seller for <code>PurchaseAgreement</code>.</p>
   */
  inline const AgreementApprovalProposer& GetProposer() const { return m_proposer; }
  inline bool ProposerHasBeenSet() const { return m_proposerHasBeenSet; }
  template <typename ProposerT = AgreementApprovalProposer>
  void SetProposer(ProposerT&& value) {
    m_proposerHasBeenSet = true;
    m_proposer = std::forward<ProposerT>(value);
  }
  template <typename ProposerT = AgreementApprovalProposer>
  BuyerAgreementApproval& WithProposer(ProposerT&& value) {
    SetProposer(std::forward<ProposerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the proposal received from the proposer.</p>
   */
  inline const AgreementApprovalProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
  inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }
  template <typename ProposalSummaryT = AgreementApprovalProposalSummary>
  void SetProposalSummary(ProposalSummaryT&& value) {
    m_proposalSummaryHasBeenSet = true;
    m_proposalSummary = std::forward<ProposalSummaryT>(value);
  }
  template <typename ProposalSummaryT = AgreementApprovalProposalSummary>
  BuyerAgreementApproval& WithProposalSummary(ProposalSummaryT&& value) {
    SetProposalSummary(std::forward<ProposalSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  AgreementApprovalType m_approvalType{AgreementApprovalType::NOT_SET};

  Aws::String m_agreementApprovalId;

  Aws::String m_name;

  Aws::String m_agreementRequestId;

  AgreementApprovalStatus m_status{AgreementApprovalStatus::NOT_SET};

  AgreementApprovalRequester m_requester;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Utils::DateTime m_approvalNeededBy{};

  Aws::Vector<BuyerAgreementApprovalLevel> m_levels;

  BuyerAgreementApprovalPlanInput m_planInput;

  AgreementApprovalProposer m_proposer;

  AgreementApprovalProposalSummary m_proposalSummary;
  bool m_approvalTypeHasBeenSet = false;
  bool m_agreementApprovalIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requesterHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_approvalNeededByHasBeenSet = false;
  bool m_levelsHasBeenSet = false;
  bool m_planInputHasBeenSet = false;
  bool m_proposerHasBeenSet = false;
  bool m_proposalSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
