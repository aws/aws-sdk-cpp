/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>The approval criteria for a group of approvers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/BuyerAgreementApprovalCriteria">AWS
 * API Reference</a></p>
 */
class BuyerAgreementApprovalCriteria {
 public:
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalCriteria() = default;
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalCriteria(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API BuyerAgreementApprovalCriteria& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of approvers in the group who must approve before the level is
   * approved.</p>
   */
  inline int64_t GetRequiredApprovalCount() const { return m_requiredApprovalCount; }
  inline bool RequiredApprovalCountHasBeenSet() const { return m_requiredApprovalCountHasBeenSet; }
  inline void SetRequiredApprovalCount(int64_t value) {
    m_requiredApprovalCountHasBeenSet = true;
    m_requiredApprovalCount = value;
  }
  inline BuyerAgreementApprovalCriteria& WithRequiredApprovalCount(int64_t value) {
    SetRequiredApprovalCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_requiredApprovalCount{0};
  bool m_requiredApprovalCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
