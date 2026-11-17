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
class CreateAgreementRequestResult {
 public:
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult() = default;
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_AGREEMENTSERVICE_API CreateAgreementRequestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the agreement request created. Use this identifier
   * with <code>AcceptAgreementRequest</code> to accept the agreement.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  CreateAgreementRequestResult& WithAgreementRequestId(AgreementRequestIdT&& value) {
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
  CreateAgreementRequestResult& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
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
  CreateAgreementRequestResult& WithChargeSummary(ChargeSummaryT&& value) {
    SetChargeSummary(std::forward<ChargeSummaryT>(value));
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
  inline CreateAgreementRequestResult& WithStatus(AgreementRequestStatus value) {
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
  inline CreateAgreementRequestResult& WithApprovalRequirement(ApprovalRequirement value) {
    SetApprovalRequirement(value);
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
  CreateAgreementRequestResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
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
  CreateAgreementRequestResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agreementRequestId;

  Aws::String m_agreementType;

  ChargeSummary m_chargeSummary;

  AgreementRequestStatus m_status{AgreementRequestStatus::NOT_SET};

  ApprovalRequirement m_approvalRequirement{ApprovalRequirement::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_chargeSummaryHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_approvalRequirementHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
