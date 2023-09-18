/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/UserRole.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline UpdateUserRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline UpdateUserRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline UpdateUserRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }

    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline UpdateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}

    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline UpdateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}


    /**
     * <p>Updates the display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline UpdateUserRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline UpdateUserRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>Updates the display name of the user.</p>
     */
    inline UpdateUserRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>Updates the user's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>Updates the user's first name.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>Updates the user's first name.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>Updates the user's first name.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>Updates the user's first name.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>Updates the user's first name.</p>
     */
    inline UpdateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>Updates the user's first name.</p>
     */
    inline UpdateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>Updates the user's first name.</p>
     */
    inline UpdateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>Updates the user's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>Updates the user's last name.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>Updates the user's last name.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>Updates the user's last name.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>Updates the user's last name.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>Updates the user's last name.</p>
     */
    inline UpdateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>Updates the user's last name.</p>
     */
    inline UpdateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>Updates the user's last name.</p>
     */
    inline UpdateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }

    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }

    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }

    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline UpdateUserRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}


    /**
     * <p>Updates the user's initials.</p>
     */
    inline const Aws::String& GetInitials() const{ return m_initials; }

    /**
     * <p>Updates the user's initials.</p>
     */
    inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }

    /**
     * <p>Updates the user's initials.</p>
     */
    inline void SetInitials(const Aws::String& value) { m_initialsHasBeenSet = true; m_initials = value; }

    /**
     * <p>Updates the user's initials.</p>
     */
    inline void SetInitials(Aws::String&& value) { m_initialsHasBeenSet = true; m_initials = std::move(value); }

    /**
     * <p>Updates the user's initials.</p>
     */
    inline void SetInitials(const char* value) { m_initialsHasBeenSet = true; m_initials.assign(value); }

    /**
     * <p>Updates the user's initials.</p>
     */
    inline UpdateUserRequest& WithInitials(const Aws::String& value) { SetInitials(value); return *this;}

    /**
     * <p>Updates the user's initials.</p>
     */
    inline UpdateUserRequest& WithInitials(Aws::String&& value) { SetInitials(std::move(value)); return *this;}

    /**
     * <p>Updates the user's initials.</p>
     */
    inline UpdateUserRequest& WithInitials(const char* value) { SetInitials(value); return *this;}


    /**
     * <p>Updates the user's contact details.</p>
     */
    inline const Aws::String& GetTelephone() const{ return m_telephone; }

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline bool TelephoneHasBeenSet() const { return m_telephoneHasBeenSet; }

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline void SetTelephone(const Aws::String& value) { m_telephoneHasBeenSet = true; m_telephone = value; }

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline void SetTelephone(Aws::String&& value) { m_telephoneHasBeenSet = true; m_telephone = std::move(value); }

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline void SetTelephone(const char* value) { m_telephoneHasBeenSet = true; m_telephone.assign(value); }

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline UpdateUserRequest& WithTelephone(const Aws::String& value) { SetTelephone(value); return *this;}

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline UpdateUserRequest& WithTelephone(Aws::String&& value) { SetTelephone(std::move(value)); return *this;}

    /**
     * <p>Updates the user's contact details.</p>
     */
    inline UpdateUserRequest& WithTelephone(const char* value) { SetTelephone(value); return *this;}


    /**
     * <p>Updates the user's street address.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }

    /**
     * <p>Updates the user's street address.</p>
     */
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }

    /**
     * <p>Updates the user's street address.</p>
     */
    inline void SetStreet(const Aws::String& value) { m_streetHasBeenSet = true; m_street = value; }

    /**
     * <p>Updates the user's street address.</p>
     */
    inline void SetStreet(Aws::String&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }

    /**
     * <p>Updates the user's street address.</p>
     */
    inline void SetStreet(const char* value) { m_streetHasBeenSet = true; m_street.assign(value); }

    /**
     * <p>Updates the user's street address.</p>
     */
    inline UpdateUserRequest& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}

    /**
     * <p>Updates the user's street address.</p>
     */
    inline UpdateUserRequest& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}

    /**
     * <p>Updates the user's street address.</p>
     */
    inline UpdateUserRequest& WithStreet(const char* value) { SetStreet(value); return *this;}


    /**
     * <p>Updates the user's job title.</p>
     */
    inline const Aws::String& GetJobTitle() const{ return m_jobTitle; }

    /**
     * <p>Updates the user's job title.</p>
     */
    inline bool JobTitleHasBeenSet() const { return m_jobTitleHasBeenSet; }

    /**
     * <p>Updates the user's job title.</p>
     */
    inline void SetJobTitle(const Aws::String& value) { m_jobTitleHasBeenSet = true; m_jobTitle = value; }

    /**
     * <p>Updates the user's job title.</p>
     */
    inline void SetJobTitle(Aws::String&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::move(value); }

    /**
     * <p>Updates the user's job title.</p>
     */
    inline void SetJobTitle(const char* value) { m_jobTitleHasBeenSet = true; m_jobTitle.assign(value); }

    /**
     * <p>Updates the user's job title.</p>
     */
    inline UpdateUserRequest& WithJobTitle(const Aws::String& value) { SetJobTitle(value); return *this;}

    /**
     * <p>Updates the user's job title.</p>
     */
    inline UpdateUserRequest& WithJobTitle(Aws::String&& value) { SetJobTitle(std::move(value)); return *this;}

    /**
     * <p>Updates the user's job title.</p>
     */
    inline UpdateUserRequest& WithJobTitle(const char* value) { SetJobTitle(value); return *this;}


    /**
     * <p>Updates the user's city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }

    /**
     * <p>Updates the user's city.</p>
     */
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }

    /**
     * <p>Updates the user's city.</p>
     */
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }

    /**
     * <p>Updates the user's city.</p>
     */
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }

    /**
     * <p>Updates the user's city.</p>
     */
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }

    /**
     * <p>Updates the user's city.</p>
     */
    inline UpdateUserRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}

    /**
     * <p>Updates the user's city.</p>
     */
    inline UpdateUserRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}

    /**
     * <p>Updates the user's city.</p>
     */
    inline UpdateUserRequest& WithCity(const char* value) { SetCity(value); return *this;}


    /**
     * <p>Updates the user's company.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }

    /**
     * <p>Updates the user's company.</p>
     */
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }

    /**
     * <p>Updates the user's company.</p>
     */
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }

    /**
     * <p>Updates the user's company.</p>
     */
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }

    /**
     * <p>Updates the user's company.</p>
     */
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }

    /**
     * <p>Updates the user's company.</p>
     */
    inline UpdateUserRequest& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}

    /**
     * <p>Updates the user's company.</p>
     */
    inline UpdateUserRequest& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}

    /**
     * <p>Updates the user's company.</p>
     */
    inline UpdateUserRequest& WithCompany(const char* value) { SetCompany(value); return *this;}


    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline UpdateUserRequest& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline UpdateUserRequest& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}

    /**
     * <p>Updates the user's zipcode.</p>
     */
    inline UpdateUserRequest& WithZipCode(const char* value) { SetZipCode(value); return *this;}


    /**
     * <p>Updates the user's department.</p>
     */
    inline const Aws::String& GetDepartment() const{ return m_department; }

    /**
     * <p>Updates the user's department.</p>
     */
    inline bool DepartmentHasBeenSet() const { return m_departmentHasBeenSet; }

    /**
     * <p>Updates the user's department.</p>
     */
    inline void SetDepartment(const Aws::String& value) { m_departmentHasBeenSet = true; m_department = value; }

    /**
     * <p>Updates the user's department.</p>
     */
    inline void SetDepartment(Aws::String&& value) { m_departmentHasBeenSet = true; m_department = std::move(value); }

    /**
     * <p>Updates the user's department.</p>
     */
    inline void SetDepartment(const char* value) { m_departmentHasBeenSet = true; m_department.assign(value); }

    /**
     * <p>Updates the user's department.</p>
     */
    inline UpdateUserRequest& WithDepartment(const Aws::String& value) { SetDepartment(value); return *this;}

    /**
     * <p>Updates the user's department.</p>
     */
    inline UpdateUserRequest& WithDepartment(Aws::String&& value) { SetDepartment(std::move(value)); return *this;}

    /**
     * <p>Updates the user's department.</p>
     */
    inline UpdateUserRequest& WithDepartment(const char* value) { SetDepartment(value); return *this;}


    /**
     * <p>Updates the user's country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }

    /**
     * <p>Updates the user's country.</p>
     */
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }

    /**
     * <p>Updates the user's country.</p>
     */
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }

    /**
     * <p>Updates the user's country.</p>
     */
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }

    /**
     * <p>Updates the user's country.</p>
     */
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }

    /**
     * <p>Updates the user's country.</p>
     */
    inline UpdateUserRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}

    /**
     * <p>Updates the user's country.</p>
     */
    inline UpdateUserRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}

    /**
     * <p>Updates the user's country.</p>
     */
    inline UpdateUserRequest& WithCountry(const char* value) { SetCountry(value); return *this;}


    /**
     * <p>Updates the user's office.</p>
     */
    inline const Aws::String& GetOffice() const{ return m_office; }

    /**
     * <p>Updates the user's office.</p>
     */
    inline bool OfficeHasBeenSet() const { return m_officeHasBeenSet; }

    /**
     * <p>Updates the user's office.</p>
     */
    inline void SetOffice(const Aws::String& value) { m_officeHasBeenSet = true; m_office = value; }

    /**
     * <p>Updates the user's office.</p>
     */
    inline void SetOffice(Aws::String&& value) { m_officeHasBeenSet = true; m_office = std::move(value); }

    /**
     * <p>Updates the user's office.</p>
     */
    inline void SetOffice(const char* value) { m_officeHasBeenSet = true; m_office.assign(value); }

    /**
     * <p>Updates the user's office.</p>
     */
    inline UpdateUserRequest& WithOffice(const Aws::String& value) { SetOffice(value); return *this;}

    /**
     * <p>Updates the user's office.</p>
     */
    inline UpdateUserRequest& WithOffice(Aws::String&& value) { SetOffice(std::move(value)); return *this;}

    /**
     * <p>Updates the user's office.</p>
     */
    inline UpdateUserRequest& WithOffice(const char* value) { SetOffice(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;

    Aws::String m_initials;
    bool m_initialsHasBeenSet = false;

    Aws::String m_telephone;
    bool m_telephoneHasBeenSet = false;

    Aws::String m_street;
    bool m_streetHasBeenSet = false;

    Aws::String m_jobTitle;
    bool m_jobTitleHasBeenSet = false;

    Aws::String m_city;
    bool m_cityHasBeenSet = false;

    Aws::String m_company;
    bool m_companyHasBeenSet = false;

    Aws::String m_zipCode;
    bool m_zipCodeHasBeenSet = false;

    Aws::String m_department;
    bool m_departmentHasBeenSet = false;

    Aws::String m_country;
    bool m_countryHasBeenSet = false;

    Aws::String m_office;
    bool m_officeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
