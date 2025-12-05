/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>
#include <aws/partnercentral-account/model/BusinessVerificationDetails.h>
#include <aws/partnercentral-account/model/RegistrantVerificationDetails.h>

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
 * <p>A union structure containing the specific details required for different
 * types of verification processes supported by AWS Partner Central.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/VerificationDetails">AWS
 * API Reference</a></p>
 */
class VerificationDetails {
 public:
  AWS_PARTNERCENTRALACCOUNT_API VerificationDetails() = default;
  AWS_PARTNERCENTRALACCOUNT_API VerificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API VerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The business verification details to be used when starting a business
   * verification process.</p>
   */
  inline const BusinessVerificationDetails& GetBusinessVerificationDetails() const { return m_businessVerificationDetails; }
  inline bool BusinessVerificationDetailsHasBeenSet() const { return m_businessVerificationDetailsHasBeenSet; }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  void SetBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    m_businessVerificationDetailsHasBeenSet = true;
    m_businessVerificationDetails = std::forward<BusinessVerificationDetailsT>(value);
  }
  template <typename BusinessVerificationDetailsT = BusinessVerificationDetails>
  VerificationDetails& WithBusinessVerificationDetails(BusinessVerificationDetailsT&& value) {
    SetBusinessVerificationDetails(std::forward<BusinessVerificationDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The registrant verification details to be used when starting an individual
   * identity verification process.</p>
   */
  inline const RegistrantVerificationDetails& GetRegistrantVerificationDetails() const { return m_registrantVerificationDetails; }
  inline bool RegistrantVerificationDetailsHasBeenSet() const { return m_registrantVerificationDetailsHasBeenSet; }
  template <typename RegistrantVerificationDetailsT = RegistrantVerificationDetails>
  void SetRegistrantVerificationDetails(RegistrantVerificationDetailsT&& value) {
    m_registrantVerificationDetailsHasBeenSet = true;
    m_registrantVerificationDetails = std::forward<RegistrantVerificationDetailsT>(value);
  }
  template <typename RegistrantVerificationDetailsT = RegistrantVerificationDetails>
  VerificationDetails& WithRegistrantVerificationDetails(RegistrantVerificationDetailsT&& value) {
    SetRegistrantVerificationDetails(std::forward<RegistrantVerificationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  BusinessVerificationDetails m_businessVerificationDetails;
  bool m_businessVerificationDetailsHasBeenSet = false;

  RegistrantVerificationDetails m_registrantVerificationDetails;
  bool m_registrantVerificationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
