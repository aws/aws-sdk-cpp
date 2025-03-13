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
    AWS_WORKMAIL_API UpdateUserRequest() = default;

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
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    UpdateUserRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the user to be updated.</p> <p>The identifier can be the
     * <i>UserId</i>, <i>Username</i>, or <i>email</i>. The following identity formats
     * are available:</p> <ul> <li> <p>User ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * user@domain.tld</p> </li> <li> <p>User name: user</p> </li> </ul>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user role.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i>.</p>
     */
    inline UserRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(UserRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline UpdateUserRequest& WithRole(UserRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateUserRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's first name.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    UpdateUserRequest& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's last name.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    UpdateUserRequest& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const { return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline UpdateUserRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's initials.</p>
     */
    inline const Aws::String& GetInitials() const { return m_initials; }
    inline bool InitialsHasBeenSet() const { return m_initialsHasBeenSet; }
    template<typename InitialsT = Aws::String>
    void SetInitials(InitialsT&& value) { m_initialsHasBeenSet = true; m_initials = std::forward<InitialsT>(value); }
    template<typename InitialsT = Aws::String>
    UpdateUserRequest& WithInitials(InitialsT&& value) { SetInitials(std::forward<InitialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's contact details.</p>
     */
    inline const Aws::String& GetTelephone() const { return m_telephone; }
    inline bool TelephoneHasBeenSet() const { return m_telephoneHasBeenSet; }
    template<typename TelephoneT = Aws::String>
    void SetTelephone(TelephoneT&& value) { m_telephoneHasBeenSet = true; m_telephone = std::forward<TelephoneT>(value); }
    template<typename TelephoneT = Aws::String>
    UpdateUserRequest& WithTelephone(TelephoneT&& value) { SetTelephone(std::forward<TelephoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's street address.</p>
     */
    inline const Aws::String& GetStreet() const { return m_street; }
    inline bool StreetHasBeenSet() const { return m_streetHasBeenSet; }
    template<typename StreetT = Aws::String>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::String>
    UpdateUserRequest& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's job title.</p>
     */
    inline const Aws::String& GetJobTitle() const { return m_jobTitle; }
    inline bool JobTitleHasBeenSet() const { return m_jobTitleHasBeenSet; }
    template<typename JobTitleT = Aws::String>
    void SetJobTitle(JobTitleT&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::forward<JobTitleT>(value); }
    template<typename JobTitleT = Aws::String>
    UpdateUserRequest& WithJobTitle(JobTitleT&& value) { SetJobTitle(std::forward<JobTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's city.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    inline bool CityHasBeenSet() const { return m_cityHasBeenSet; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    UpdateUserRequest& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's company.</p>
     */
    inline const Aws::String& GetCompany() const { return m_company; }
    inline bool CompanyHasBeenSet() const { return m_companyHasBeenSet; }
    template<typename CompanyT = Aws::String>
    void SetCompany(CompanyT&& value) { m_companyHasBeenSet = true; m_company = std::forward<CompanyT>(value); }
    template<typename CompanyT = Aws::String>
    UpdateUserRequest& WithCompany(CompanyT&& value) { SetCompany(std::forward<CompanyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's zip code.</p>
     */
    inline const Aws::String& GetZipCode() const { return m_zipCode; }
    inline bool ZipCodeHasBeenSet() const { return m_zipCodeHasBeenSet; }
    template<typename ZipCodeT = Aws::String>
    void SetZipCode(ZipCodeT&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::forward<ZipCodeT>(value); }
    template<typename ZipCodeT = Aws::String>
    UpdateUserRequest& WithZipCode(ZipCodeT&& value) { SetZipCode(std::forward<ZipCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's department.</p>
     */
    inline const Aws::String& GetDepartment() const { return m_department; }
    inline bool DepartmentHasBeenSet() const { return m_departmentHasBeenSet; }
    template<typename DepartmentT = Aws::String>
    void SetDepartment(DepartmentT&& value) { m_departmentHasBeenSet = true; m_department = std::forward<DepartmentT>(value); }
    template<typename DepartmentT = Aws::String>
    UpdateUserRequest& WithDepartment(DepartmentT&& value) { SetDepartment(std::forward<DepartmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's country.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    inline bool CountryHasBeenSet() const { return m_countryHasBeenSet; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    UpdateUserRequest& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates the user's office.</p>
     */
    inline const Aws::String& GetOffice() const { return m_office; }
    inline bool OfficeHasBeenSet() const { return m_officeHasBeenSet; }
    template<typename OfficeT = Aws::String>
    void SetOffice(OfficeT&& value) { m_officeHasBeenSet = true; m_office = std::forward<OfficeT>(value); }
    template<typename OfficeT = Aws::String>
    UpdateUserRequest& WithOffice(OfficeT&& value) { SetOffice(std::forward<OfficeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User ID from the IAM Identity Center. If this parameter is empty it will be
     * updated automatically when the user logs in for the first time to the mailbox
     * associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderUserId() const { return m_identityProviderUserId; }
    inline bool IdentityProviderUserIdHasBeenSet() const { return m_identityProviderUserIdHasBeenSet; }
    template<typename IdentityProviderUserIdT = Aws::String>
    void SetIdentityProviderUserId(IdentityProviderUserIdT&& value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId = std::forward<IdentityProviderUserIdT>(value); }
    template<typename IdentityProviderUserIdT = Aws::String>
    UpdateUserRequest& WithIdentityProviderUserId(IdentityProviderUserIdT&& value) { SetIdentityProviderUserId(std::forward<IdentityProviderUserIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserRole m_role{UserRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList{false};
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
