/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementRequestStatus.h>
#include <aws/marketplace-agreement/model/ApprovalRequirement.h>
#include <aws/marketplace-agreement/model/ChargeSummary.h>
#include <aws/marketplace-agreement/model/Intent.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/marketplace-agreement/model/Proposer.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {
class GetAgreementRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementRequestResult() = default;
  AWS_AGREEMENTSERVICE_API GetAgreementRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API GetAgreementRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the agreement request.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  GetAgreementRequestResult& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agreement (for example, <code>PurchaseAgreement</code>).</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  GetAgreementRequestResult& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the agreement request. Possible values include:</p>
   * <ul> <li> <p> <code>DRAFT</code> – The agreement request has been created but
   * not yet submitted for approval.</p> </li> <li> <p> <code>PENDING_APPROVAL</code>
   * – The agreement request is waiting for one or more approvers to decide.</p>
   * </li> <li> <p> <code>APPROVED</code> – All required approvals have been granted,
   * but the agreement request wasn't accepted automatically. Call
   * <code>AcceptAgreementRequest</code> to accept it. If the call fails, its error
   * explains why.</p> </li> <li> <p> <code>ACCEPTED</code> – The agreement request
   * has been accepted and the resulting agreement has been created.</p> </li> <li>
   * <p> <code>REJECTED</code> – At least one approver rejected the agreement
   * request. It won't proceed.</p> </li> <li> <p> <code>CANCELLED</code> – The
   * agreement request was cancelled before completion, by the acceptor or because
   * the acceptor's account left its AWS organization.</p> </li> </ul>
   */
  inline AgreementRequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(AgreementRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAgreementRequestResult& WithStatus(AgreementRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the agreement request requires approval before it can be
   * accepted. Values are <code>REQUIRED</code> and <code>NOT_REQUIRED</code>.</p>
   */
  inline ApprovalRequirement GetApprovalRequirement() const { return m_approvalRequirement; }
  inline void SetApprovalRequirement(ApprovalRequirement value) {
    m_approvalRequirementHasBeenSet = true;
    m_approvalRequirement = value;
  }
  inline GetAgreementRequestResult& WithApprovalRequirement(ApprovalRequirement value) {
    SetApprovalRequirement(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement that the agreement request is for.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  GetAgreementRequestResult& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The purpose and desired outcome of the agreement request.</p> <ul> <li> <p>
   * <code>NEW</code> – Creates a new agreement for terms in the request.</p> </li>
   * <li> <p> <code>AMEND</code> – Modifies an existing agreement with terms that are
   * accepted in the request.</p> </li> <li> <p> <code>REPLACE</code> – Creates a new
   * agreement with accepted terms and replaces the existing agreement.</p> </li>
   * </ul>
   */
  inline Intent GetIntent() const { return m_intent; }
  inline void SetIntent(Intent value) {
    m_intentHasBeenSet = true;
    m_intent = value;
  }
  inline GetAgreementRequestResult& WithIntent(Intent value) {
    SetIntent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the agreement request was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgreementRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides details of the charges associated with the agreement request. This
   * is only applicable when a request is created for
   * <code>PurchaseAgreement</code>.</p>
   */
  inline const ChargeSummary& GetChargeSummary() const { return m_chargeSummary; }
  template <typename ChargeSummaryT = ChargeSummary>
  void SetChargeSummary(ChargeSummaryT&& value) {
    m_chargeSummaryHasBeenSet = true;
    m_chargeSummary = std::forward<ChargeSummaryT>(value);
  }
  template <typename ChargeSummaryT = ChargeSummary>
  GetAgreementRequestResult& WithChargeSummary(ChargeSummaryT&& value) {
    SetChargeSummary(std::forward<ChargeSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the party proposing the agreement terms. This is commonly the
   * seller for <code>PurchaseAgreement</code>.</p>
   */
  inline const Proposer& GetProposer() const { return m_proposer; }
  template <typename ProposerT = Proposer>
  void SetProposer(ProposerT&& value) {
    m_proposerHasBeenSet = true;
    m_proposer = std::forward<ProposerT>(value);
  }
  template <typename ProposerT = Proposer>
  GetAgreementRequestResult& WithProposer(ProposerT&& value) {
    SetProposer(std::forward<ProposerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the proposal received from the proposer.</p>
   */
  inline const ProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
  template <typename ProposalSummaryT = ProposalSummary>
  void SetProposalSummary(ProposalSummaryT&& value) {
    m_proposalSummaryHasBeenSet = true;
    m_proposalSummary = std::forward<ProposalSummaryT>(value);
  }
  template <typename ProposalSummaryT = ProposalSummary>
  GetAgreementRequestResult& WithProposalSummary(ProposalSummaryT&& value) {
    SetProposalSummary(std::forward<ProposalSummaryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAgreementRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agreementRequestId;

  Aws::String m_agreementType;

  AgreementRequestStatus m_status{AgreementRequestStatus::NOT_SET};

  ApprovalRequirement m_approvalRequirement{ApprovalRequirement::NOT_SET};

  Aws::String m_agreementId;

  Intent m_intent{Intent::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  ChargeSummary m_chargeSummary;

  Proposer m_proposer;

  ProposalSummary m_proposalSummary;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_approvalRequirementHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_intentHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_chargeSummaryHasBeenSet = false;
  bool m_proposerHasBeenSet = false;
  bool m_proposalSummaryHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
