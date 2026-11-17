/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
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
 * <p>The approval plan to start an agreement approval for.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalPlanInput">AWS
 * API Reference</a></p>
 */
class AgreementApprovalPlanInput {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlanInput() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlanInput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlanInput& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An approval plan that the buyer's organization requires.</p>
   */
  inline const BuyerAgreementApprovalPlanInput& GetBuyerAgreementApprovalPlanInput() const { return m_buyerAgreementApprovalPlanInput; }
  inline bool BuyerAgreementApprovalPlanInputHasBeenSet() const { return m_buyerAgreementApprovalPlanInputHasBeenSet; }
  template <typename BuyerAgreementApprovalPlanInputT = BuyerAgreementApprovalPlanInput>
  void SetBuyerAgreementApprovalPlanInput(BuyerAgreementApprovalPlanInputT&& value) {
    m_buyerAgreementApprovalPlanInputHasBeenSet = true;
    m_buyerAgreementApprovalPlanInput = std::forward<BuyerAgreementApprovalPlanInputT>(value);
  }
  template <typename BuyerAgreementApprovalPlanInputT = BuyerAgreementApprovalPlanInput>
  AgreementApprovalPlanInput& WithBuyerAgreementApprovalPlanInput(BuyerAgreementApprovalPlanInputT&& value) {
    SetBuyerAgreementApprovalPlanInput(std::forward<BuyerAgreementApprovalPlanInputT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerAgreementApprovalPlanInput m_buyerAgreementApprovalPlanInput;
  bool m_buyerAgreementApprovalPlanInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
