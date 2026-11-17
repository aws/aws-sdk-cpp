/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/ApproverOutcome.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalCriteria.h>

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
 * <p>A group of approvers, the number of approvals the group requires, and the
 * decision of each approver.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalGroup">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalGroup {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalGroup() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalGroup(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalGroup& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of approvers in the group who must approve.</p>
   */
  inline const BuyerAgreementApprovalCriteria& GetApprovalCriteria() const { return m_approvalCriteria; }
  inline bool ApprovalCriteriaHasBeenSet() const { return m_approvalCriteriaHasBeenSet; }
  template <typename ApprovalCriteriaT = BuyerAgreementApprovalCriteria>
  void SetApprovalCriteria(ApprovalCriteriaT&& value) {
    m_approvalCriteriaHasBeenSet = true;
    m_approvalCriteria = std::forward<ApprovalCriteriaT>(value);
  }
  template <typename ApprovalCriteriaT = BuyerAgreementApprovalCriteria>
  BuyerAgreementApprovalGroup& WithApprovalCriteria(ApprovalCriteriaT&& value) {
    SetApprovalCriteria(std::forward<ApprovalCriteriaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approvers in the group and the decision of each one.</p>
   */
  inline const Aws::Vector<ApproverOutcome>& GetApprovers() const { return m_approvers; }
  inline bool ApproversHasBeenSet() const { return m_approversHasBeenSet; }
  template <typename ApproversT = Aws::Vector<ApproverOutcome>>
  void SetApprovers(ApproversT&& value) {
    m_approversHasBeenSet = true;
    m_approvers = std::forward<ApproversT>(value);
  }
  template <typename ApproversT = Aws::Vector<ApproverOutcome>>
  BuyerAgreementApprovalGroup& WithApprovers(ApproversT&& value) {
    SetApprovers(std::forward<ApproversT>(value));
    return *this;
  }
  template <typename ApproversT = ApproverOutcome>
  BuyerAgreementApprovalGroup& AddApprovers(ApproversT&& value) {
    m_approversHasBeenSet = true;
    m_approvers.emplace_back(std::forward<ApproversT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerAgreementApprovalCriteria m_approvalCriteria;

  Aws::Vector<ApproverOutcome> m_approvers;
  bool m_approvalCriteriaHasBeenSet = false;
  bool m_approversHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
