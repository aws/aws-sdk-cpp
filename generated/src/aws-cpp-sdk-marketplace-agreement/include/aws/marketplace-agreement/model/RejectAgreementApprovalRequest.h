/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/BuyerAgreementApprovalRejectionInput.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class RejectAgreementApprovalRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API RejectAgreementApprovalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RejectAgreementApproval"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The rejection decision for an agreement approval that the buyer's
   * organization requires.</p>
   */
  inline const BuyerAgreementApprovalRejectionInput& GetBuyerAgreementApprovalRejectionInput() const {
    return m_buyerAgreementApprovalRejectionInput;
  }
  inline bool BuyerAgreementApprovalRejectionInputHasBeenSet() const { return m_buyerAgreementApprovalRejectionInputHasBeenSet; }
  template <typename BuyerAgreementApprovalRejectionInputT = BuyerAgreementApprovalRejectionInput>
  void SetBuyerAgreementApprovalRejectionInput(BuyerAgreementApprovalRejectionInputT&& value) {
    m_buyerAgreementApprovalRejectionInputHasBeenSet = true;
    m_buyerAgreementApprovalRejectionInput = std::forward<BuyerAgreementApprovalRejectionInputT>(value);
  }
  template <typename BuyerAgreementApprovalRejectionInputT = BuyerAgreementApprovalRejectionInput>
  RejectAgreementApprovalRequest& WithBuyerAgreementApprovalRejectionInput(BuyerAgreementApprovalRejectionInputT&& value) {
    SetBuyerAgreementApprovalRejectionInput(std::forward<BuyerAgreementApprovalRejectionInputT>(value));
    return *this;
  }
  ///@}
 private:
  BuyerAgreementApprovalRejectionInput m_buyerAgreementApprovalRejectionInput;
  bool m_buyerAgreementApprovalRejectionInputHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
