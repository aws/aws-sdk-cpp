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
 * <p>The approval plan to start an agreement approval for, and an optional note
 * for the approvers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalPlanInput">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalPlanInput {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlanInput() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlanInput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalPlanInput& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The identifier of the approval plan. Use
   * <code>GetAgreementRequestApprovalPlans</code> to retrieve the approval plans of
   * the agreement request.</p>
   */
  inline const Aws::String& GetPlanReference() const { return m_planReference; }
  inline bool PlanReferenceHasBeenSet() const { return m_planReferenceHasBeenSet; }
  template <typename PlanReferenceT = Aws::String>
  void SetPlanReference(PlanReferenceT&& value) {
    m_planReferenceHasBeenSet = true;
    m_planReference = std::forward<PlanReferenceT>(value);
  }
  template <typename PlanReferenceT = Aws::String>
  BuyerAgreementApprovalPlanInput& WithPlanReference(PlanReferenceT&& value) {
    SetPlanReference(std::forward<PlanReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional note for the approvers, such as the business reason for the
   * purchase (1-1000 characters).</p>
   */
  inline const Aws::String& GetRequesterNote() const { return m_requesterNote; }
  inline bool RequesterNoteHasBeenSet() const { return m_requesterNoteHasBeenSet; }
  template <typename RequesterNoteT = Aws::String>
  void SetRequesterNote(RequesterNoteT&& value) {
    m_requesterNoteHasBeenSet = true;
    m_requesterNote = std::forward<RequesterNoteT>(value);
  }
  template <typename RequesterNoteT = Aws::String>
  BuyerAgreementApprovalPlanInput& WithRequesterNote(RequesterNoteT&& value) {
    SetRequesterNote(std::forward<RequesterNoteT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_planReference;

  Aws::String m_requesterNote;
  bool m_planReferenceHasBeenSet = false;
  bool m_requesterNoteHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
