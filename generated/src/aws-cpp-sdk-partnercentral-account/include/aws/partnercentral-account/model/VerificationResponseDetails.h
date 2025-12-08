/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessVerificationResponse.h>
#include <aws/partnercentral-account/model/RegistrantVerificationResponse.h>

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
 * <p>A union structure containing the response details specific to different types
 * of verification processes, providing type-specific information and
 * results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/VerificationResponseDetails">AWS
 * API Reference</a></p>
 */
class VerificationResponseDetails {
 public:
  AWS_PARTNERCENTRALACCOUNT_API VerificationResponseDetails() = default;
  AWS_PARTNERCENTRALACCOUNT_API VerificationResponseDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API VerificationResponseDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The response details from a business verification process, including
   * verification results and any additional business information discovered.</p>
   */
  inline const BusinessVerificationResponse& GetBusinessVerificationResponse() const { return m_businessVerificationResponse; }
  inline bool BusinessVerificationResponseHasBeenSet() const { return m_businessVerificationResponseHasBeenSet; }
  template <typename BusinessVerificationResponseT = BusinessVerificationResponse>
  void SetBusinessVerificationResponse(BusinessVerificationResponseT&& value) {
    m_businessVerificationResponseHasBeenSet = true;
    m_businessVerificationResponse = std::forward<BusinessVerificationResponseT>(value);
  }
  template <typename BusinessVerificationResponseT = BusinessVerificationResponse>
  VerificationResponseDetails& WithBusinessVerificationResponse(BusinessVerificationResponseT&& value) {
    SetBusinessVerificationResponse(std::forward<BusinessVerificationResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The response details from a registrant verification process, including
   * verification results and any additional steps required for identity
   * confirmation.</p>
   */
  inline const RegistrantVerificationResponse& GetRegistrantVerificationResponse() const { return m_registrantVerificationResponse; }
  inline bool RegistrantVerificationResponseHasBeenSet() const { return m_registrantVerificationResponseHasBeenSet; }
  template <typename RegistrantVerificationResponseT = RegistrantVerificationResponse>
  void SetRegistrantVerificationResponse(RegistrantVerificationResponseT&& value) {
    m_registrantVerificationResponseHasBeenSet = true;
    m_registrantVerificationResponse = std::forward<RegistrantVerificationResponseT>(value);
  }
  template <typename RegistrantVerificationResponseT = RegistrantVerificationResponse>
  VerificationResponseDetails& WithRegistrantVerificationResponse(RegistrantVerificationResponseT&& value) {
    SetRegistrantVerificationResponse(std::forward<RegistrantVerificationResponseT>(value));
    return *this;
  }
  ///@}
 private:
  BusinessVerificationResponse m_businessVerificationResponse;

  RegistrantVerificationResponse m_registrantVerificationResponse;
  bool m_businessVerificationResponseHasBeenSet = false;
  bool m_registrantVerificationResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
