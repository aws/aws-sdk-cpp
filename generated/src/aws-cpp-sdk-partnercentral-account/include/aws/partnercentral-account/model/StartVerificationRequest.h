/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccountRequest.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/VerificationDetails.h>

#include <utility>

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

/**
 */
class StartVerificationRequest : public PartnerCentralAccountRequest {
 public:
  AWS_PARTNERCENTRALACCOUNT_API StartVerificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartVerification"; }

  AWS_PARTNERCENTRALACCOUNT_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALACCOUNT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. This prevents duplicate verification processes from
   * being started accidentally.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartVerificationRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific details required for the verification process, including
   * business information for business verification or personal information for
   * registrant verification.</p>
   */
  inline const VerificationDetails& GetVerificationDetails() const { return m_verificationDetails; }
  inline bool VerificationDetailsHasBeenSet() const { return m_verificationDetailsHasBeenSet; }
  template <typename VerificationDetailsT = VerificationDetails>
  void SetVerificationDetails(VerificationDetailsT&& value) {
    m_verificationDetailsHasBeenSet = true;
    m_verificationDetails = std::forward<VerificationDetailsT>(value);
  }
  template <typename VerificationDetailsT = VerificationDetails>
  StartVerificationRequest& WithVerificationDetails(VerificationDetailsT&& value) {
    SetVerificationDetails(std::forward<VerificationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  VerificationDetails m_verificationDetails;
  bool m_verificationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
