/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalApproverInput.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class AcceptAgreementApprovalRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API AcceptAgreementApprovalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AcceptAgreementApproval"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The approval decision for an agreement approval that the buyer's organization
   * requires.</p>
   */
  inline const BuyerAgreementApprovalApproverInput& GetBuyerAgreementApprovalApproverInput() const {
    return m_buyerAgreementApprovalApproverInput;
  }
  inline bool BuyerAgreementApprovalApproverInputHasBeenSet() const { return m_buyerAgreementApprovalApproverInputHasBeenSet; }
  template <typename BuyerAgreementApprovalApproverInputT = BuyerAgreementApprovalApproverInput>
  void SetBuyerAgreementApprovalApproverInput(BuyerAgreementApprovalApproverInputT&& value) {
    m_buyerAgreementApprovalApproverInputHasBeenSet = true;
    m_buyerAgreementApprovalApproverInput = std::forward<BuyerAgreementApprovalApproverInputT>(value);
  }
  template <typename BuyerAgreementApprovalApproverInputT = BuyerAgreementApprovalApproverInput>
  AcceptAgreementApprovalRequest& WithBuyerAgreementApprovalApproverInput(BuyerAgreementApprovalApproverInputT&& value) {
    SetBuyerAgreementApprovalApproverInput(std::forward<BuyerAgreementApprovalApproverInputT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerAgreementApprovalApproverInput m_buyerAgreementApprovalApproverInput;
  bool m_buyerAgreementApprovalApproverInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
