/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalPlan.h>

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
 * <p>An approval plan that applies to an agreement request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalPlan">AWS
 * API Reference</a></p>
 */
class AgreementApprovalPlan {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlan() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlan(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalPlan& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An approval plan that the buyer's organization requires.</p>
   */
  inline const BuyerAgreementApprovalPlan& GetBuyerAgreementApprovalPlan() const { return m_buyerAgreementApprovalPlan; }
  inline bool BuyerAgreementApprovalPlanHasBeenSet() const { return m_buyerAgreementApprovalPlanHasBeenSet; }
  template <typename BuyerAgreementApprovalPlanT = BuyerAgreementApprovalPlan>
  void SetBuyerAgreementApprovalPlan(BuyerAgreementApprovalPlanT&& value) {
    m_buyerAgreementApprovalPlanHasBeenSet = true;
    m_buyerAgreementApprovalPlan = std::forward<BuyerAgreementApprovalPlanT>(value);
  }
  template <typename BuyerAgreementApprovalPlanT = BuyerAgreementApprovalPlan>
  AgreementApprovalPlan& WithBuyerAgreementApprovalPlan(BuyerAgreementApprovalPlanT&& value) {
    SetBuyerAgreementApprovalPlan(std::forward<BuyerAgreementApprovalPlanT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerAgreementApprovalPlan m_buyerAgreementApprovalPlan;
  bool m_buyerAgreementApprovalPlanHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
