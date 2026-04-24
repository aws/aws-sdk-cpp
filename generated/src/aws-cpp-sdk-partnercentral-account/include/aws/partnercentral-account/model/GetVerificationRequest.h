/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/VerificationType.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class GetVerificationRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API GetVerificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetVerification"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The type of verification to retrieve information for. Valid values include
   * business verification for company registration details and registrant
   * verification for individual identity confirmation.</p>
   */
  inline VerificationType GetVerificationType() const { return m_verificationType; }
  inline bool VerificationTypeHasBeenSet() const { return m_verificationTypeHasBeenSet; }
  inline void SetVerificationType(VerificationType value) {
    m_verificationTypeHasBeenSet = true;
    m_verificationType = value;
  }
  inline GetVerificationRequest& WithVerificationType(VerificationType value) {
    SetVerificationType(value);
    return *this;
  }
  ///@}
 private:
  VerificationType m_verificationType{VerificationType::NOT_SET};
  bool m_verificationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
