/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

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
 * <p>The contact information of the acceptor.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AcceptorContact">AWS
 * API Reference</a></p>
 */
class AcceptorContact {
 public:
  AWS_AGREEMENTSERVICE_API AcceptorContact() = default;
  AWS_AGREEMENTSERVICE_API AcceptorContact(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AcceptorContact& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The first name of the acceptor contact.</p>
   */
  inline const Aws::String& GetFirstName() const { return m_firstName; }
  inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
  template <typename FirstNameT = Aws::String>
  void SetFirstName(FirstNameT&& value) {
    m_firstNameHasBeenSet = true;
    m_firstName = std::forward<FirstNameT>(value);
  }
  template <typename FirstNameT = Aws::String>
  AcceptorContact& WithFirstName(FirstNameT&& value) {
    SetFirstName(std::forward<FirstNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The last name of the acceptor contact.</p>
   */
  inline const Aws::String& GetLastName() const { return m_lastName; }
  inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
  template <typename LastNameT = Aws::String>
  void SetLastName(LastNameT&& value) {
    m_lastNameHasBeenSet = true;
    m_lastName = std::forward<LastNameT>(value);
  }
  template <typename LastNameT = Aws::String>
  AcceptorContact& WithLastName(LastNameT&& value) {
    SetLastName(std::forward<LastNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address of the acceptor contact.</p>
   */
  inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
  inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
  template <typename EmailAddressT = Aws::String>
  void SetEmailAddress(EmailAddressT&& value) {
    m_emailAddressHasBeenSet = true;
    m_emailAddress = std::forward<EmailAddressT>(value);
  }
  template <typename EmailAddressT = Aws::String>
  AcceptorContact& WithEmailAddress(EmailAddressT&& value) {
    SetEmailAddress(std::forward<EmailAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the company that the acceptor contact represents.</p>
   */
  inline const Aws::String& GetCompanyName() const { return m_companyName; }
  inline bool CompanyNameHasBeenSet() const { return m_companyNameHasBeenSet; }
  template <typename CompanyNameT = Aws::String>
  void SetCompanyName(CompanyNameT&& value) {
    m_companyNameHasBeenSet = true;
    m_companyName = std::forward<CompanyNameT>(value);
  }
  template <typename CompanyNameT = Aws::String>
  AcceptorContact& WithCompanyName(CompanyNameT&& value) {
    SetCompanyName(std::forward<CompanyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO-3166 two-letter country code for the acceptor contact.</p>
   */
  inline const Aws::String& GetCountryCode() const { return m_countryCode; }
  inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
  template <typename CountryCodeT = Aws::String>
  void SetCountryCode(CountryCodeT&& value) {
    m_countryCodeHasBeenSet = true;
    m_countryCode = std::forward<CountryCodeT>(value);
  }
  template <typename CountryCodeT = Aws::String>
  AcceptorContact& WithCountryCode(CountryCodeT&& value) {
    SetCountryCode(std::forward<CountryCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_firstName;

  Aws::String m_lastName;

  Aws::String m_emailAddress;

  Aws::String m_companyName;

  Aws::String m_countryCode;
  bool m_firstNameHasBeenSet = false;
  bool m_lastNameHasBeenSet = false;
  bool m_emailAddressHasBeenSet = false;
  bool m_companyNameHasBeenSet = false;
  bool m_countryCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
