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


    ///@{
    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline UpdateUserRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline UpdateUserRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline UpdateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}
    inline UpdateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateUserRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateUserRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's first name.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline UpdateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline UpdateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's last name.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline UpdateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline UpdateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline UpdateUserRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's initials.</p>
     */
    inline const Aws::String& GetInitials() const{ return m_initials; }
    inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }
    inline void SetInitials(const Aws::String& value) { m_initialsHasBeenSet = true; m_initials = value; }
    inline void SetInitials(Aws::String&& value) { m_initialsHasBeenSet = true; m_initials = std::move(value); }
    inline void SetInitials(const char* value) { m_initialsHasBeenSet = true; m_initials.assign(value); }
    inline UpdateUserRequest& WithInitials(const Aws::String& value) { SetInitials(value); return *this;}
    inline UpdateUserRequest& WithInitials(Aws::String&& value) { SetInitials(std::move(value)); return *this;}
    inline UpdateUserRequest& WithInitials(const char* value) { SetInitials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's contact details.</p>
     */
    inline const Aws::String& GetTelephone() const{ return m_telephone; }
    inline bool TelephoneHasBeenSet() const { return m_telephoneHasBeenSet; }
    inline void SetTelephone(const Aws::String& value) { m_telephoneHasBeenSet = true; m_telephone = value; }
    inline void SetTelephone(Aws::String&& value) { m_telephoneHasBeenSet = true; m_telephone = std::move(value); }
    inline void SetTelephone(const char* value) { m_telephoneHasBeenSet = true; m_telephone.assign(value); }
    inline UpdateUserRequest& WithTelephone(const Aws::String& value) { SetTelephone(value); return *this;}
    inline UpdateUserRequest& WithTelephone(Aws::String&& value) { SetTelephone(std::move(value)); return *this;}
    inline UpdateUserRequest& WithTelephone(const char* value) { SetTelephone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's street address.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    inline void SetStreet(const Aws::String& value) { m_streetHasBeenSet = true; m_street = value; }
    inline void SetStreet(Aws::String&& value) { m_streetHasBeenSet = true; m_street = std::move(value); }
    inline void SetStreet(const char* value) { m_streetHasBeenSet = true; m_street.assign(value); }
    inline UpdateUserRequest& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}
    inline UpdateUserRequest& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}
    inline UpdateUserRequest& WithStreet(const char* value) { SetStreet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's job title.</p>
     */
    inline const Aws::String& GetJobTitle() const{ return m_jobTitle; }
    inline bool JobTitleHasBeenSet() const { return m_jobTitleHasBeenSet; }
    inline void SetJobTitle(const Aws::String& value) { m_jobTitleHasBeenSet = true; m_jobTitle = value; }
    inline void SetJobTitle(Aws::String&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::move(value); }
    inline void SetJobTitle(const char* value) { m_jobTitleHasBeenSet = true; m_jobTitle.assign(value); }
    inline UpdateUserRequest& WithJobTitle(const Aws::String& value) { SetJobTitle(value); return *this;}
    inline UpdateUserRequest& WithJobTitle(Aws::String&& value) { SetJobTitle(std::move(value)); return *this;}
    inline UpdateUserRequest& WithJobTitle(const char* value) { SetJobTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's city.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    inline void SetCity(const Aws::String& value) { m_cityHasBeenSet = true; m_city = value; }
    inline void SetCity(Aws::String&& value) { m_cityHasBeenSet = true; m_city = std::move(value); }
    inline void SetCity(const char* value) { m_cityHasBeenSet = true; m_city.assign(value); }
    inline UpdateUserRequest& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline UpdateUserRequest& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline UpdateUserRequest& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's company.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    inline void SetCompany(const Aws::String& value) { m_companyHasBeenSet = true; m_company = value; }
    inline void SetCompany(Aws::String&& value) { m_companyHasBeenSet = true; m_company = std::move(value); }
    inline void SetCompany(const char* value) { m_companyHasBeenSet = true; m_company.assign(value); }
    inline UpdateUserRequest& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}
    inline UpdateUserRequest& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}
    inline UpdateUserRequest& WithCompany(const char* value) { SetCompany(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's zip code.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }
    inline void SetZipCode(const Aws::String& value) { m_zipCodeHasBeenSet = true; m_zipCode = value; }
    inline void SetZipCode(Aws::String&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::move(value); }
    inline void SetZipCode(const char* value) { m_zipCodeHasBeenSet = true; m_zipCode.assign(value); }
    inline UpdateUserRequest& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}
    inline UpdateUserRequest& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}
    inline UpdateUserRequest& WithZipCode(const char* value) { SetZipCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's department.</p>
     */
    inline const Aws::String& GetDepartment() const{ return m_department; }
    inline bool DepartmentHasBeenSet() const { return m_departmentHasBeenSet; }
    inline void SetDepartment(const Aws::String& value) { m_departmentHasBeenSet = true; m_department = value; }
    inline void SetDepartment(Aws::String&& value) { m_departmentHasBeenSet = true; m_department = std::move(value); }
    inline void SetDepartment(const char* value) { m_departmentHasBeenSet = true; m_department.assign(value); }
    inline UpdateUserRequest& WithDepartment(const Aws::String& value) { SetDepartment(value); return *this;}
    inline UpdateUserRequest& WithDepartment(Aws::String&& value) { SetDepartment(std::move(value)); return *this;}
    inline UpdateUserRequest& WithDepartment(const char* value) { SetDepartment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's country.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    inline void SetCountry(const Aws::String& value) { m_countryHasBeenSet = true; m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_countryHasBeenSet = true; m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_countryHasBeenSet = true; m_country.assign(value); }
    inline UpdateUserRequest& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline UpdateUserRequest& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline UpdateUserRequest& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's office.</p>
     */
    inline const Aws::String& GetOffice() const{ return m_office; }
    inline bool OfficeHasBeenSet() const { return m_officeHasBeenSet; }
    inline void SetOffice(const Aws::String& value) { m_officeHasBeenSet = true; m_office = value; }
    inline void SetOffice(Aws::String&& value) { m_officeHasBeenSet = true; m_office = std::move(value); }
    inline void SetOffice(const char* value) { m_officeHasBeenSet = true; m_office.assign(value); }
    inline UpdateUserRequest& WithOffice(const Aws::String& value) { SetOffice(value); return *this;}
    inline UpdateUserRequest& WithOffice(Aws::String&& value) { SetOffice(std::move(value)); return *this;}
    inline UpdateUserRequest& WithOffice(const char* value) { SetOffice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User ID from the IAM Identity Center. If this parameter is empty it will be
     * updated automatically when the user logs in for the first time to the mailbox
     * associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderUserId() const{ return m_identityProviderUserId; }
    inline bool IdentityProviderUserIdHasBeenSet() const { return m_identityProviderUserIdHasBeenSet; }
    inline void SetIdentityProviderUserId(const Aws::String& value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId = value; }
    inline void SetIdentityProviderUserId(Aws::String&& value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId = std::move(value); }
    inline void SetIdentityProviderUserId(const char* value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId.assign(value); }
    inline UpdateUserRequest& WithIdentityProviderUserId(const Aws::String& value) { SetIdentityProviderUserId(value); return *this;}
    inline UpdateUserRequest& WithIdentityProviderUserId(Aws::String&& value) { SetIdentityProviderUserId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithIdentityProviderUserId(const char* value) { SetIdentityProviderUserId(value); return *this;}
    ///@}
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

    Aws::String m_identityProviderUserId;
    bool m_identityProviderUserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
