/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-account/PartnerCentralAccount_EXPORTS.h>

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
 * <p>Contains the business information required for verifying a company's legal
 * status and registration details within AWS Partner Central.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-account-2025-04-04/BusinessVerificationDetails">AWS
 * API Reference</a></p>
 */
class BusinessVerificationDetails {
 public:
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationDetails() = default;
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API BusinessVerificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALACCOUNT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The official legal name of the business as registered with the appropriate
   * government authorities.</p>
   */
  inline const Aws::String& GetLegalName() const { return m_legalName; }
  inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
  template <typename LegalNameT = Aws::String>
  void SetLegalName(LegalNameT&& value) {
    m_legalNameHasBeenSet = true;
    m_legalName = std::forward<LegalNameT>(value);
  }
  template <typename LegalNameT = Aws::String>
  BusinessVerificationDetails& WithLegalName(LegalNameT&& value) {
    SetLegalName(std::forward<LegalNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique business registration identifier assigned by the government or
   * regulatory authority, such as a company registration number or tax
   * identification number.</p>
   */
  inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
  inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
  template <typename RegistrationIdT = Aws::String>
  void SetRegistrationId(RegistrationIdT&& value) {
    m_registrationIdHasBeenSet = true;
    m_registrationId = std::forward<RegistrationIdT>(value);
  }
  template <typename RegistrationIdT = Aws::String>
  BusinessVerificationDetails& WithRegistrationId(RegistrationIdT&& value) {
    SetRegistrationId(std::forward<RegistrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO 3166-1 alpha-2 country code where the business is legally registered
   * and operates.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  BusinessVerificationDetails& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific legal jurisdiction or state where the business was incorporated
   * or registered, providing additional location context beyond the country
   * code.</p>
   */
  inline const Aws::String& GetJurisdictionOfIncorporation() const { return m_jurisdictionOfIncorporation; }
  inline bool JurisdictionOfIncorporationHasBeenSet() const { return m_jurisdictionOfIncorporationHasBeenSet; }
  template <typename JurisdictionOfIncorporationT = Aws::String>
  void SetJurisdictionOfIncorporation(JurisdictionOfIncorporationT&& value) {
    m_jurisdictionOfIncorporationHasBeenSet = true;
    m_jurisdictionOfIncorporation = std::forward<JurisdictionOfIncorporationT>(value);
  }
  template <typename JurisdictionOfIncorporationT = Aws::String>
  BusinessVerificationDetails& WithJurisdictionOfIncorporation(JurisdictionOfIncorporationT&& value) {
    SetJurisdictionOfIncorporation(std::forward<JurisdictionOfIncorporationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_legalName;
  bool m_legalNameHasBeenSet = false;

  Aws::String m_registrationId;
  bool m_registrationIdHasBeenSet = false;

  Aws::String m_countryCode;
  bool m_countryCodeHasBeenSet = false;

  Aws::String m_jurisdictionOfIncorporation;
  bool m_jurisdictionOfIncorporationHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
