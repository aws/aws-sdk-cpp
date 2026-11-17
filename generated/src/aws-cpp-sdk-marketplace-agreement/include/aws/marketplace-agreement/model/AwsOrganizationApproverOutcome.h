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
#include <aws/marketplace-agreement/model/AgreementApprovalPurchaseOrder.h>
#include <aws/marketplace-agreement/model/ApproverOutcomeStatus.h>

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
 * <p>The decision of the administrators of the buyer's AWS organization. The
 * management account or a delegated administrator of the organization makes this
 * decision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AwsOrganizationApproverOutcome">AWS
 * API Reference</a></p>
 */
class AwsOrganizationApproverOutcome {
 public:
  AWS_AGREEMENTSERVICE_API AwsOrganizationApproverOutcome() = default;
  AWS_AGREEMENTSERVICE_API AwsOrganizationApproverOutcome(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AwsOrganizationApproverOutcome& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The note that the approver provided with the decision.</p>
   */
  inline const Aws::String& GetNote() const { return m_note; }
  inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
  template <typename NoteT = Aws::String>
  void SetNote(NoteT&& value) {
    m_noteHasBeenSet = true;
    m_note = std::forward<NoteT>(value);
  }
  template <typename NoteT = Aws::String>
  AwsOrganizationApproverOutcome& WithNote(NoteT&& value) {
    SetNote(std::forward<NoteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decision status of the approver. Possible values include
   * <code>QUEUED</code>, <code>PENDING_APPROVAL</code>, <code>APPROVED</code>,
   * <code>REJECTED</code>, <code>EXPIRED</code>, and <code>SKIPPED</code>.</p>
   */
  inline ApproverOutcomeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ApproverOutcomeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AwsOrganizationApproverOutcome& WithStatus(ApproverOutcomeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the decision was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AwsOrganizationApproverOutcome& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this approver in the agreement approval.</p>
   */
  inline const Aws::String& GetApproverOutcomeId() const { return m_approverOutcomeId; }
  inline bool ApproverOutcomeIdHasBeenSet() const { return m_approverOutcomeIdHasBeenSet; }
  template <typename ApproverOutcomeIdT = Aws::String>
  void SetApproverOutcomeId(ApproverOutcomeIdT&& value) {
    m_approverOutcomeIdHasBeenSet = true;
    m_approverOutcomeId = std::forward<ApproverOutcomeIdT>(value);
  }
  template <typename ApproverOutcomeIdT = Aws::String>
  AwsOrganizationApproverOutcome& WithApproverOutcomeId(ApproverOutcomeIdT&& value) {
    SetApproverOutcomeId(std::forward<ApproverOutcomeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The purchase order references that the approver provided with the
   * decision.</p>
   */
  inline const Aws::Vector<AgreementApprovalPurchaseOrder>& GetPurchaseOrders() const { return m_purchaseOrders; }
  inline bool PurchaseOrdersHasBeenSet() const { return m_purchaseOrdersHasBeenSet; }
  template <typename PurchaseOrdersT = Aws::Vector<AgreementApprovalPurchaseOrder>>
  void SetPurchaseOrders(PurchaseOrdersT&& value) {
    m_purchaseOrdersHasBeenSet = true;
    m_purchaseOrders = std::forward<PurchaseOrdersT>(value);
  }
  template <typename PurchaseOrdersT = Aws::Vector<AgreementApprovalPurchaseOrder>>
  AwsOrganizationApproverOutcome& WithPurchaseOrders(PurchaseOrdersT&& value) {
    SetPurchaseOrders(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  template <typename PurchaseOrdersT = AgreementApprovalPurchaseOrder>
  AwsOrganizationApproverOutcome& AddPurchaseOrders(PurchaseOrdersT&& value) {
    m_purchaseOrdersHasBeenSet = true;
    m_purchaseOrders.emplace_back(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_note;

  ApproverOutcomeStatus m_status{ApproverOutcomeStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_approverOutcomeId;

  Aws::Vector<AgreementApprovalPurchaseOrder> m_purchaseOrders;
  bool m_noteHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_approverOutcomeIdHasBeenSet = false;
  bool m_purchaseOrdersHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
