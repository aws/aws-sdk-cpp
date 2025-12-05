/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessVerificationDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralAccount {
namespace Model {

/**
 * <p>Contains the response information and results from a business verification
 * process, including any verification-specific data returned by the verification
 * service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/BusinessVerificationResponse">AWS
 * API Reference</a></p>
 */
class BusinessVerificationResponse {
 public:
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse() = default;
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The business verification details that were processed and verified,
   * potentially including additional information discovered during the verification
   * process.</p>
   */
  inline const BusinessVerificationDetails& GetBusinessVerificationDetails() const { return m_businessVerificationDetails; }
  inline bool BusinessVerificationDetailsHasBeenSet() const { return m_businessVerificationDetailsHasBeenSet; }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  void SetBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    m_businessVerificationDetailsHasBeenSet = true;
    m_businessVerificationDetails = std::forward<BusinessVerificationDetailsT>(value);
  }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  BusinessVerificationResponse& WithBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    SetBusinessVerificationDetails(std::forward<BusinessVerificationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  BusinessVerificationDetails m_businessVerificationDetails;
  bool m_businessVerificationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
