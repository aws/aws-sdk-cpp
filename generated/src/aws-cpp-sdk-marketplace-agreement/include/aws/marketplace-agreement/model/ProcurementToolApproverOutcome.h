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
#include <aws/marketplace-agreement/model/CallerIdentity.h>

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
 * <p>The decision of a procurement system.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ProcurementToolApproverOutcome">AWS
 * API Reference</a></p>
 */
class ProcurementToolApproverOutcome {
 public:
  AWS_AGREEMENTSERVICE_API ProcurementToolApproverOutcome() = default;
  AWS_AGREEMENTSERVICE_API ProcurementToolApproverOutcome(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ProcurementToolApproverOutcome& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
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
  ProcurementToolApproverOutcome& WithNote(NoteT&& value) {
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
  inline ProcurementToolApproverOutcome& WithStatus(ApproverOutcomeStatus value) {
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
  ProcurementToolApproverOutcome& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of this approver in the agreement approval. An
   * administrator of the buyer's AWS organization passes it as
   * <code>approverOutcomeIdToOverride</code> to decide on the approver's behalf.</p>
   */
  inline const Aws::String& GetApproverOutcomeId() const { return m_approverOutcomeId; }
  inline bool ApproverOutcomeIdHasBeenSet() const { return m_approverOutcomeIdHasBeenSet; }
  template <typename ApproverOutcomeIdT = Aws::String>
  void SetApproverOutcomeId(ApproverOutcomeIdT&& value) {
    m_approverOutcomeIdHasBeenSet = true;
    m_approverOutcomeId = std::forward<ApproverOutcomeIdT>(value);
  }
  template <typename ApproverOutcomeIdT = Aws::String>
  ProcurementToolApproverOutcome& WithApproverOutcomeId(ApproverOutcomeIdT&& value) {
    SetApproverOutcomeId(std::forward<ApproverOutcomeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the procurement system.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ProcurementToolApproverOutcome& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  ProcurementToolApproverOutcome& WithPurchaseOrders(PurchaseOrdersT&& value) {
    SetPurchaseOrders(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  template <typename PurchaseOrdersT = AgreementApprovalPurchaseOrder>
  ProcurementToolApproverOutcome& AddPurchaseOrders(PurchaseOrdersT&& value) {
    m_purchaseOrdersHasBeenSet = true;
    m_purchaseOrders.emplace_back(std::forward<PurchaseOrdersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity that decided on the procurement system's behalf. This field is
   * empty unless an administrator of the buyer's AWS organization decided for the
   * procurement system.</p>
   */
  inline const CallerIdentity& GetOverriddenBy() const { return m_overriddenBy; }
  inline bool OverriddenByHasBeenSet() const { return m_overriddenByHasBeenSet; }
  template <typename OverriddenByT = CallerIdentity>
  void SetOverriddenBy(OverriddenByT&& value) {
    m_overriddenByHasBeenSet = true;
    m_overriddenBy = std::forward<OverriddenByT>(value);
  }
  template <typename OverriddenByT = CallerIdentity>
  ProcurementToolApproverOutcome& WithOverriddenBy(OverriddenByT&& value) {
    SetOverriddenBy(std::forward<OverriddenByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_note;

  ApproverOutcomeStatus m_status{ApproverOutcomeStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_approverOutcomeId;

  Aws::String m_name;

  Aws::Vector<AgreementApprovalPurchaseOrder> m_purchaseOrders;

  CallerIdentity m_overriddenBy;
  bool m_noteHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_approverOutcomeIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_purchaseOrdersHasBeenSet = false;
  bool m_overriddenByHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
