/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactType.h>
#include <aws/route53domains/model/CountryCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/ExtraParam.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>ContactDetail includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/ContactDetail">AWS
   * API Reference</a></p>
   */
  class ContactDetail
  {
  public:
    AWS_ROUTE53DOMAINS_API ContactDetail() = default;
    AWS_ROUTE53DOMAINS_API ContactDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API ContactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>First name of contact.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    ContactDetail& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last name of contact.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    ContactDetail& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the contact is a person, company, association, or public
     * organization. Note the following:</p> <ul> <li> <p>If you specify a value other
     * than <code>PERSON</code>, you must also specify a value for
     * <code>OrganizationName</code>.</p> </li> <li> <p>For some TLDs, the privacy
     * protection available depends on the value that you specify for <code>Contact
     * Type</code>. For the privacy protection settings for your TLD, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i> </p> </li> <li> <p>For .es domains, the value of
     * <code>ContactType</code> must be <code>PERSON</code> for all three contacts.</p>
     * </li> </ul>
     */
    inline ContactType GetContactType() const { return m_contactType; }
    inline bool ContactTypeHasBeenSet() const { return m_contactTypeHasBeenSet; }
    inline void SetContactType(ContactType value) { m_contactTypeHasBeenSet = true; m_contactType = value; }
    inline ContactDetail& WithContactType(ContactType value) { SetContactType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
    template<typename OrganizationNameT = Aws::String>
    void SetOrganizationName(OrganizationNameT&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::forward<OrganizationNameT>(value); }
    template<typename OrganizationNameT = Aws::String>
    ContactDetail& WithOrganizationName(OrganizationNameT&& value) { SetOrganizationName(std::forward<OrganizationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>First line of the contact's address.</p>
     */
    inline const Aws::String& GetAddressLine1() const { return m_addressLine1; }
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }
    template<typename AddressLine1T = Aws::String>
    void SetAddressLine1(AddressLine1T&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::forward<AddressLine1T>(value); }
    template<typename AddressLine1T = Aws::String>
    ContactDetail& WithAddressLine1(AddressLine1T&& value) { SetAddressLine1(std::forward<AddressLine1T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline const Aws::String& GetAddressLine2() const { return m_addressLine2; }
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }
    template<typename AddressLine2T = Aws::String>
    void SetAddressLine2(AddressLine2T&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::forward<AddressLine2T>(value); }
    template<typename AddressLine2T = Aws::String>
    ContactDetail& WithAddressLine2(AddressLine2T&& value) { SetAddressLine2(std::forward<AddressLine2T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The city of the contact's address.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    ContactDetail& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ContactDetail& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline CountryCode GetCountryCode() const { return m_countryCode; }
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }
    inline void SetCountryCode(CountryCode value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }
    inline ContactDetail& WithCountryCode(CountryCode value) { SetCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline const Aws::String& GetZipCode() const { return m_zipCode; }
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }
    template<typename ZipCodeT = Aws::String>
    void SetZipCode(ZipCodeT&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::forward<ZipCodeT>(value); }
    template<typename ZipCodeT = Aws::String>
    ContactDetail& WithZipCode(ZipCodeT&& value) { SetZipCode(std::forward<ZipCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    ContactDetail& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email address of the contact.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    ContactDetail& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline const Aws::String& GetFax() const { return m_fax; }
    inline bool FaxHasBeenSet() const { return m_faxHasBeenSet; }
    template<typename FaxT = Aws::String>
    void SetFax(FaxT&& value) { m_faxHasBeenSet = true; m_fax = std::forward<FaxT>(value); }
    template<typename FaxT = Aws::String>
    ContactDetail& WithFax(FaxT&& value) { SetFax(std::forward<FaxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline const Aws::Vector<ExtraParam>& GetExtraParams() const { return m_extraParams; }
    inline bool ExtraParamsHasBeenSet() const { return m_extraParamsHasBeenSet; }
    template<typename ExtraParamsT = Aws::Vector<ExtraParam>>
    void SetExtraParams(ExtraParamsT&& value) { m_extraParamsHasBeenSet = true; m_extraParams = std::forward<ExtraParamsT>(value); }
    template<typename ExtraParamsT = Aws::Vector<ExtraParam>>
    ContactDetail& WithExtraParams(ExtraParamsT&& value) { SetExtraParams(std::forward<ExtraParamsT>(value)); return *this;}
    template<typename ExtraParamsT = ExtraParam>
    ContactDetail& AddExtraParams(ExtraParamsT&& value) { m_extraParamsHasBeenSet = true; m_extraParams.emplace_back(std::forward<ExtraParamsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    ContactType m_contactType{ContactType::NOT_SET};
    bool m_contactTypeHasBeenSet = false;

    Aws::String m_organizationName;
    bool m_organizationNameHasBeenSet = false;

    Aws::String m_addressLine1;
    bool m_addressLine1HasBeenSet = false;

    Aws::String m_addressLine2;
    bool m_addressLine2HasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    CountryCode m_countryCode{CountryCode::NOT_SET};
    bool m_countryCodeHasBeenSet = false;

    Aws::String m_zipCode;
    bool m_zipCodeHasBeenSet = false;

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_fax;
    bool m_faxHasBeenSet = false;

    Aws::Vector<ExtraParam> m_extraParams;
    bool m_extraParamsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
