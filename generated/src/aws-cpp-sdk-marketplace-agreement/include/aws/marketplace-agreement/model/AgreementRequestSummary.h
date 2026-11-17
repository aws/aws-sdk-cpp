/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementRequestStatus.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>

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
 * <p>Summary view of an agreement request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementRequestSummary">AWS
 * API Reference</a></p>
 */
class AgreementRequestSummary {
 public:
  AWS_AGREEMENTSERVICE_API AgreementRequestSummary() = default;
  AWS_AGREEMENTSERVICE_API AgreementRequestSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementRequestSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the agreement request.</p>
   */
  inline const Aws::String& GetAgreementRequestId() const { return m_agreementRequestId; }
  inline bool AgreementRequestIdHasBeenSet() const { return m_agreementRequestIdHasBeenSet; }
  template <typename AgreementRequestIdT = Aws::String>
  void SetAgreementRequestId(AgreementRequestIdT&& value) {
    m_agreementRequestIdHasBeenSet = true;
    m_agreementRequestId = std::forward<AgreementRequestIdT>(value);
  }
  template <typename AgreementRequestIdT = Aws::String>
  AgreementRequestSummary& WithAgreementRequestId(AgreementRequestIdT&& value) {
    SetAgreementRequestId(std::forward<AgreementRequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of agreement (for example, <code>PurchaseAgreement</code>).</p>
   */
  inline const Aws::String& GetAgreementType() const { return m_agreementType; }
  inline bool AgreementTypeHasBeenSet() const { return m_agreementTypeHasBeenSet; }
  template <typename AgreementTypeT = Aws::String>
  void SetAgreementType(AgreementTypeT&& value) {
    m_agreementTypeHasBeenSet = true;
    m_agreementType = std::forward<AgreementTypeT>(value);
  }
  template <typename AgreementTypeT = Aws::String>
  AgreementRequestSummary& WithAgreementType(AgreementTypeT&& value) {
    SetAgreementType(std::forward<AgreementTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the agreement request. Possible values include
   * <code>DRAFT</code>, <code>PENDING_APPROVAL</code>, <code>APPROVED</code>,
   * <code>ACCEPTED</code>, <code>REJECTED</code>, and <code>CANCELLED</code>.</p>
   */
  inline AgreementRequestStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgreementRequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgreementRequestSummary& WithStatus(AgreementRequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement that the agreement request is for.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  AgreementRequestSummary& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A summary of the proposal received from the proposer.</p>
   */
  inline const ProposalSummary& GetProposalSummary() const { return m_proposalSummary; }
  inline bool ProposalSummaryHasBeenSet() const { return m_proposalSummaryHasBeenSet; }
  template <typename ProposalSummaryT = ProposalSummary>
  void SetProposalSummary(ProposalSummaryT&& value) {
    m_proposalSummaryHasBeenSet = true;
    m_proposalSummary = std::forward<ProposalSummaryT>(value);
  }
  template <typename ProposalSummaryT = ProposalSummary>
  AgreementRequestSummary& WithProposalSummary(ProposalSummaryT&& value) {
    SetProposalSummary(std::forward<ProposalSummaryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementRequestId;

  Aws::String m_agreementType;

  AgreementRequestStatus m_status{AgreementRequestStatus::NOT_SET};

  Aws::String m_agreementId;

  ProposalSummary m_proposalSummary;
  bool m_agreementRequestIdHasBeenSet = false;
  bool m_agreementTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_proposalSummaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
