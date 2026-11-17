/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

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
 * <p>The rejection decision for an agreement approval.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalRejectionInput">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalRejectionInput {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalRejectionInput() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalRejectionInput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalRejectionInput& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the agreement approval to reject.</p>
   */
  inline const Aws::String& GetAgreementApprovalId() const { return m_agreementApprovalId; }
  inline bool AgreementApprovalIdHasBeenSet() const { return m_agreementApprovalIdHasBeenSet; }
  template <typename AgreementApprovalIdT = Aws::String>
  void SetAgreementApprovalId(AgreementApprovalIdT&& value) {
    m_agreementApprovalIdHasBeenSet = true;
    m_agreementApprovalId = std::forward<AgreementApprovalIdT>(value);
  }
  template <typename AgreementApprovalIdT = Aws::String>
  BuyerAgreementApprovalRejectionInput& WithAgreementApprovalId(AgreementApprovalIdT&& value) {
    SetAgreementApprovalId(std::forward<AgreementApprovalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the rejection.</p>
   */
  inline const Aws::String& GetNote() const { return m_note; }
  inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }
  template <typename NoteT = Aws::String>
  void SetNote(NoteT&& value) {
    m_noteHasBeenSet = true;
    m_note = std::forward<NoteT>(value);
  }
  template <typename NoteT = Aws::String>
  BuyerAgreementApprovalRejectionInput& WithNote(NoteT&& value) {
    SetNote(std::forward<NoteT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>approverOutcomeId</code> of the approver to decide on behalf of.
   * You must be the management account or a delegated administrator of your AWS
   * organization to set this field. Use <code>GetAgreementApproval</code> to
   * retrieve the <code>approverOutcomeId</code> of each approver.</p>
   */
  inline const Aws::String& GetApproverOutcomeIdToOverride() const { return m_approverOutcomeIdToOverride; }
  inline bool ApproverOutcomeIdToOverrideHasBeenSet() const { return m_approverOutcomeIdToOverrideHasBeenSet; }
  template <typename ApproverOutcomeIdToOverrideT = Aws::String>
  void SetApproverOutcomeIdToOverride(ApproverOutcomeIdToOverrideT&& value) {
    m_approverOutcomeIdToOverrideHasBeenSet = true;
    m_approverOutcomeIdToOverride = std::forward<ApproverOutcomeIdToOverrideT>(value);
  }
  template <typename ApproverOutcomeIdToOverrideT = Aws::String>
  BuyerAgreementApprovalRejectionInput& WithApproverOutcomeIdToOverride(ApproverOutcomeIdToOverrideT&& value) {
    SetApproverOutcomeIdToOverride(std::forward<ApproverOutcomeIdToOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementApprovalId;

  Aws::String m_note;

  Aws::String m_approverOutcomeIdToOverride;
  bool m_agreementApprovalIdHasBeenSet = false;
  bool m_noteHasBeenSet = false;
  bool m_approverOutcomeIdToOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
