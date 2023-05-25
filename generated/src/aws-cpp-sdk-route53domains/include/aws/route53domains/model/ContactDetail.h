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
    AWS_ROUTE53DOMAINS_API ContactDetail();
    AWS_ROUTE53DOMAINS_API ContactDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API ContactDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>First name of contact.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>First name of contact.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>First name of contact.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>First name of contact.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>First name of contact.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>First name of contact.</p>
     */
    inline ContactDetail& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>First name of contact.</p>
     */
    inline ContactDetail& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>First name of contact.</p>
     */
    inline ContactDetail& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>Last name of contact.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>Last name of contact.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>Last name of contact.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>Last name of contact.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>Last name of contact.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>Last name of contact.</p>
     */
    inline ContactDetail& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>Last name of contact.</p>
     */
    inline ContactDetail& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>Last name of contact.</p>
     */
    inline ContactDetail& WithLastName(const char* value) { SetLastName(value); return *this;}


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
    inline const ContactType& GetContactType() const{ return m_contactType; }

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
    inline bool ContactTypeHasBeenSet() const { return m_contactTypeHasBeenSet; }

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
    inline void SetContactType(const ContactType& value) { m_contactTypeHasBeenSet = true; m_contactType = value; }

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
    inline void SetContactType(ContactType&& value) { m_contactTypeHasBeenSet = true; m_contactType = std::move(value); }

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
    inline ContactDetail& WithContactType(const ContactType& value) { SetContactType(value); return *this;}

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
    inline ContactDetail& WithContactType(ContactType&& value) { SetContactType(std::move(value)); return *this;}


    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline const Aws::String& GetOrganizationName() const{ return m_organizationName; }

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline void SetOrganizationName(const Aws::String& value) { m_organizationNameHasBeenSet = true; m_organizationName = value; }

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline void SetOrganizationName(Aws::String&& value) { m_organizationNameHasBeenSet = true; m_organizationName = std::move(value); }

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline void SetOrganizationName(const char* value) { m_organizationNameHasBeenSet = true; m_organizationName.assign(value); }

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline ContactDetail& WithOrganizationName(const Aws::String& value) { SetOrganizationName(value); return *this;}

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline ContactDetail& WithOrganizationName(Aws::String&& value) { SetOrganizationName(std::move(value)); return *this;}

    /**
     * <p>Name of the organization for contact types other than
     * <code>PERSON</code>.</p>
     */
    inline ContactDetail& WithOrganizationName(const char* value) { SetOrganizationName(value); return *this;}


    /**
     * <p>First line of the contact's address.</p>
     */
    inline const Aws::String& GetAddressLine1() const{ return m_addressLine1; }

    /**
     * <p>First line of the contact's address.</p>
     */
    inline bool AddressLine1HasBeenSet() const { return m_addressLine1HasBeenSet; }

    /**
     * <p>First line of the contact's address.</p>
     */
    inline void SetAddressLine1(const Aws::String& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = value; }

    /**
     * <p>First line of the contact's address.</p>
     */
    inline void SetAddressLine1(Aws::String&& value) { m_addressLine1HasBeenSet = true; m_addressLine1 = std::move(value); }

    /**
     * <p>First line of the contact's address.</p>
     */
    inline void SetAddressLine1(const char* value) { m_addressLine1HasBeenSet = true; m_addressLine1.assign(value); }

    /**
     * <p>First line of the contact's address.</p>
     */
    inline ContactDetail& WithAddressLine1(const Aws::String& value) { SetAddressLine1(value); return *this;}

    /**
     * <p>First line of the contact's address.</p>
     */
    inline ContactDetail& WithAddressLine1(Aws::String&& value) { SetAddressLine1(std::move(value)); return *this;}

    /**
     * <p>First line of the contact's address.</p>
     */
    inline ContactDetail& WithAddressLine1(const char* value) { SetAddressLine1(value); return *this;}


    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline const Aws::String& GetAddressLine2() const{ return m_addressLine2; }

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline bool AddressLine2HasBeenSet() const { return m_addressLine2HasBeenSet; }

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline void SetAddressLine2(const Aws::String& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = value; }

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline void SetAddressLine2(Aws::String&& value) { m_addressLine2HasBeenSet = true; m_addressLine2 = std::move(value); }

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline void SetAddressLine2(const char* value) { m_addressLine2HasBeenSet = true; m_addressLine2.assign(value); }

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline ContactDetail& WithAddressLine2(const Aws::String& value) { SetAddressLine2(value); return *this;}

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline ContactDetail& WithAddressLine2(Aws::String&& value) { SetAddressLine2(std::move(value)); return *this;}

    /**
     * <p>Second line of contact's address, if any.</p>
     */
    inline ContactDetail& WithAddressLine2(const char* value) { SetAddressLine2(value); return *this;}


    /**
     * <p>The city of the contact's address.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>The city of the contact's address.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>The city of the contact's address.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>The city of the contact's address.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>The city of the contact's address.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>The city of the contact's address.</p>
     */
    inline ContactDetail& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>The city of the contact's address.</p>
     */
    inline ContactDetail& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>The city of the contact's address.</p>
     */
    inline ContactDetail& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline ContactDetail& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline ContactDetail& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state or province of the contact's city.</p>
     */
    inline ContactDetail& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline const CountryCode& GetCountryCode() const{ return m_countryCode; }

    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline bool CountryCodeHasBeenSet() const { return m_countryCodeHasBeenSet; }

    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline void SetCountryCode(const CountryCode& value) { m_countryCodeHasBeenSet = true; m_countryCode = value; }

    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline void SetCountryCode(CountryCode&& value) { m_countryCodeHasBeenSet = true; m_countryCode = std::move(value); }

    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline ContactDetail& WithCountryCode(const CountryCode& value) { SetCountryCode(value); return *this;}

    /**
     * <p>Code for the country of the contact's address.</p>
     */
    inline ContactDetail& WithCountryCode(CountryCode&& value) { SetCountryCode(std::move(value)); return *this;}


    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline ContactDetail& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline ContactDetail& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}

    /**
     * <p>The zip or postal code of the contact's address.</p>
     */
    inline ContactDetail& WithZipCode(const char* value) { SetZipCode(value); return *this;}


    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number of the contact.</p> <p>Constraints: Phone number must be
     * specified in the format "+[country dialing code].[number including any area
     * code&gt;]". For example, a US phone number might appear as
     * <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}


    /**
     * <p>Email address of the contact.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }

    /**
     * <p>Email address of the contact.</p>
     */
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }

    /**
     * <p>Email address of the contact.</p>
     */
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }

    /**
     * <p>Email address of the contact.</p>
     */
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }

    /**
     * <p>Email address of the contact.</p>
     */
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }

    /**
     * <p>Email address of the contact.</p>
     */
    inline ContactDetail& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}

    /**
     * <p>Email address of the contact.</p>
     */
    inline ContactDetail& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}

    /**
     * <p>Email address of the contact.</p>
     */
    inline ContactDetail& WithEmail(const char* value) { SetEmail(value); return *this;}


    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline const Aws::String& GetFax() const{ return m_fax; }

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline bool FaxHasBeenSet() const { return m_faxHasBeenSet; }

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline void SetFax(const Aws::String& value) { m_faxHasBeenSet = true; m_fax = value; }

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline void SetFax(Aws::String&& value) { m_faxHasBeenSet = true; m_fax = std::move(value); }

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline void SetFax(const char* value) { m_faxHasBeenSet = true; m_fax.assign(value); }

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithFax(const Aws::String& value) { SetFax(value); return *this;}

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithFax(Aws::String&& value) { SetFax(std::move(value)); return *this;}

    /**
     * <p>Fax number of the contact.</p> <p>Constraints: Phone number must be specified
     * in the format "+[country dialing code].[number including any area code]". For
     * example, a US phone number might appear as <code>"+1.1234567890"</code>.</p>
     */
    inline ContactDetail& WithFax(const char* value) { SetFax(value); return *this;}


    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline const Aws::Vector<ExtraParam>& GetExtraParams() const{ return m_extraParams; }

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline bool ExtraParamsHasBeenSet() const { return m_extraParamsHasBeenSet; }

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline void SetExtraParams(const Aws::Vector<ExtraParam>& value) { m_extraParamsHasBeenSet = true; m_extraParams = value; }

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline void SetExtraParams(Aws::Vector<ExtraParam>&& value) { m_extraParamsHasBeenSet = true; m_extraParams = std::move(value); }

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline ContactDetail& WithExtraParams(const Aws::Vector<ExtraParam>& value) { SetExtraParams(value); return *this;}

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline ContactDetail& WithExtraParams(Aws::Vector<ExtraParam>&& value) { SetExtraParams(std::move(value)); return *this;}

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline ContactDetail& AddExtraParams(const ExtraParam& value) { m_extraParamsHasBeenSet = true; m_extraParams.push_back(value); return *this; }

    /**
     * <p>A list of name-value pairs for parameters required by certain top-level
     * domains.</p>
     */
    inline ContactDetail& AddExtraParams(ExtraParam&& value) { m_extraParamsHasBeenSet = true; m_extraParams.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    ContactType m_contactType;
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

    CountryCode m_countryCode;
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
