/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/workmail/model/UserRole.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class DescribeUserResult
  {
  public:
    AWS_WORKMAIL_API DescribeUserResult() = default;
    AWS_WORKMAIL_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the described user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    DescribeUserResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the user.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeUserResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    DescribeUserResult& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    DescribeUserResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a user: enabled (registered to WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeUserResult& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>In certain cases, other entities are modeled as users. If interoperability is
     * enabled, resources are imported into WorkMail as users. Because different
     * WorkMail organizations rely on different directory types, administrators can
     * distinguish between an unregistered user (account is disabled and has a user
     * role) and the directory administrators. The values are USER, RESOURCE,
     * SYSTEM_USER, and REMOTE_USER.</p>
     */
    inline UserRole GetUserRole() const { return m_userRole; }
    inline void SetUserRole(UserRole value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline DescribeUserResult& WithUserRole(UserRole value) { SetUserRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the user was enabled for WorkMailusage, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const { return m_enabledDate; }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    void SetEnabledDate(EnabledDateT&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::forward<EnabledDateT>(value); }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    DescribeUserResult& WithEnabledDate(EnabledDateT&& value) { SetEnabledDate(std::forward<EnabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the user was disabled for WorkMail usage, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const { return m_disabledDate; }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    void SetDisabledDate(DisabledDateT&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::forward<DisabledDateT>(value); }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    DescribeUserResult& WithDisabledDate(DisabledDateT&& value) { SetDisabledDate(std::forward<DisabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the mailbox was created for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetMailboxProvisionedDate() const { return m_mailboxProvisionedDate; }
    template<typename MailboxProvisionedDateT = Aws::Utils::DateTime>
    void SetMailboxProvisionedDate(MailboxProvisionedDateT&& value) { m_mailboxProvisionedDateHasBeenSet = true; m_mailboxProvisionedDate = std::forward<MailboxProvisionedDateT>(value); }
    template<typename MailboxProvisionedDateT = Aws::Utils::DateTime>
    DescribeUserResult& WithMailboxProvisionedDate(MailboxProvisionedDateT&& value) { SetMailboxProvisionedDate(std::forward<MailboxProvisionedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the mailbox was removed for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetMailboxDeprovisionedDate() const { return m_mailboxDeprovisionedDate; }
    template<typename MailboxDeprovisionedDateT = Aws::Utils::DateTime>
    void SetMailboxDeprovisionedDate(MailboxDeprovisionedDateT&& value) { m_mailboxDeprovisionedDateHasBeenSet = true; m_mailboxDeprovisionedDate = std::forward<MailboxDeprovisionedDateT>(value); }
    template<typename MailboxDeprovisionedDateT = Aws::Utils::DateTime>
    DescribeUserResult& WithMailboxDeprovisionedDate(MailboxDeprovisionedDateT&& value) { SetMailboxDeprovisionedDate(std::forward<MailboxDeprovisionedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>First name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    DescribeUserResult& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    DescribeUserResult& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const { return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline DescribeUserResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initials of the user.</p>
     */
    inline const Aws::String& GetInitials() const { return m_initials; }
    template<typename InitialsT = Aws::String>
    void SetInitials(InitialsT&& value) { m_initialsHasBeenSet = true; m_initials = std::forward<InitialsT>(value); }
    template<typename InitialsT = Aws::String>
    DescribeUserResult& WithInitials(InitialsT&& value) { SetInitials(std::forward<InitialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User's contact number.</p>
     */
    inline const Aws::String& GetTelephone() const { return m_telephone; }
    template<typename TelephoneT = Aws::String>
    void SetTelephone(TelephoneT&& value) { m_telephoneHasBeenSet = true; m_telephone = std::forward<TelephoneT>(value); }
    template<typename TelephoneT = Aws::String>
    DescribeUserResult& WithTelephone(TelephoneT&& value) { SetTelephone(std::forward<TelephoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Street where the user is located.</p>
     */
    inline const Aws::String& GetStreet() const { return m_street; }
    template<typename StreetT = Aws::String>
    void SetStreet(StreetT&& value) { m_streetHasBeenSet = true; m_street = std::forward<StreetT>(value); }
    template<typename StreetT = Aws::String>
    DescribeUserResult& WithStreet(StreetT&& value) { SetStreet(std::forward<StreetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job title of the user.</p>
     */
    inline const Aws::String& GetJobTitle() const { return m_jobTitle; }
    template<typename JobTitleT = Aws::String>
    void SetJobTitle(JobTitleT&& value) { m_jobTitleHasBeenSet = true; m_jobTitle = std::forward<JobTitleT>(value); }
    template<typename JobTitleT = Aws::String>
    DescribeUserResult& WithJobTitle(JobTitleT&& value) { SetJobTitle(std::forward<JobTitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>City where the user is located.</p>
     */
    inline const Aws::String& GetCity() const { return m_city; }
    template<typename CityT = Aws::String>
    void SetCity(CityT&& value) { m_cityHasBeenSet = true; m_city = std::forward<CityT>(value); }
    template<typename CityT = Aws::String>
    DescribeUserResult& WithCity(CityT&& value) { SetCity(std::forward<CityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Company of the user.</p>
     */
    inline const Aws::String& GetCompany() const { return m_company; }
    template<typename CompanyT = Aws::String>
    void SetCompany(CompanyT&& value) { m_companyHasBeenSet = true; m_company = std::forward<CompanyT>(value); }
    template<typename CompanyT = Aws::String>
    DescribeUserResult& WithCompany(CompanyT&& value) { SetCompany(std::forward<CompanyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zip code of the user.</p>
     */
    inline const Aws::String& GetZipCode() const { return m_zipCode; }
    template<typename ZipCodeT = Aws::String>
    void SetZipCode(ZipCodeT&& value) { m_zipCodeHasBeenSet = true; m_zipCode = std::forward<ZipCodeT>(value); }
    template<typename ZipCodeT = Aws::String>
    DescribeUserResult& WithZipCode(ZipCodeT&& value) { SetZipCode(std::forward<ZipCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Department of the user.</p>
     */
    inline const Aws::String& GetDepartment() const { return m_department; }
    template<typename DepartmentT = Aws::String>
    void SetDepartment(DepartmentT&& value) { m_departmentHasBeenSet = true; m_department = std::forward<DepartmentT>(value); }
    template<typename DepartmentT = Aws::String>
    DescribeUserResult& WithDepartment(DepartmentT&& value) { SetDepartment(std::forward<DepartmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country where the user is located.</p>
     */
    inline const Aws::String& GetCountry() const { return m_country; }
    template<typename CountryT = Aws::String>
    void SetCountry(CountryT&& value) { m_countryHasBeenSet = true; m_country = std::forward<CountryT>(value); }
    template<typename CountryT = Aws::String>
    DescribeUserResult& WithCountry(CountryT&& value) { SetCountry(std::forward<CountryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Office where the user is located.</p>
     */
    inline const Aws::String& GetOffice() const { return m_office; }
    template<typename OfficeT = Aws::String>
    void SetOffice(OfficeT&& value) { m_officeHasBeenSet = true; m_office = std::forward<OfficeT>(value); }
    template<typename OfficeT = Aws::String>
    DescribeUserResult& WithOffice(OfficeT&& value) { SetOffice(std::forward<OfficeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>User ID from the IAM Identity Center. If this parameter is empty it will be
     * updated automatically when the user logs in for the first time to the mailbox
     * associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderUserId() const { return m_identityProviderUserId; }
    template<typename IdentityProviderUserIdT = Aws::String>
    void SetIdentityProviderUserId(IdentityProviderUserIdT&& value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId = std::forward<IdentityProviderUserIdT>(value); }
    template<typename IdentityProviderUserIdT = Aws::String>
    DescribeUserResult& WithIdentityProviderUserId(IdentityProviderUserIdT&& value) { SetIdentityProviderUserId(std::forward<IdentityProviderUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identity Store ID from the IAM Identity Center. If this parameter is empty
     * it will be updated automatically when the user logs in for the first time to the
     * mailbox associated with WorkMail. </p>
     */
    inline const Aws::String& GetIdentityProviderIdentityStoreId() const { return m_identityProviderIdentityStoreId; }
    template<typename IdentityProviderIdentityStoreIdT = Aws::String>
    void SetIdentityProviderIdentityStoreId(IdentityProviderIdentityStoreIdT&& value) { m_identityProviderIdentityStoreIdHasBeenSet = true; m_identityProviderIdentityStoreId = std::forward<IdentityProviderIdentityStoreIdT>(value); }
    template<typename IdentityProviderIdentityStoreIdT = Aws::String>
    DescribeUserResult& WithIdentityProviderIdentityStoreId(IdentityProviderIdentityStoreIdT&& value) { SetIdentityProviderIdentityStoreId(std::forward<IdentityProviderIdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    UserRole m_userRole{UserRole::NOT_SET};
    bool m_userRoleHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate{};
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate{};
    bool m_disabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_mailboxProvisionedDate{};
    bool m_mailboxProvisionedDateHasBeenSet = false;

    Aws::Utils::DateTime m_mailboxDeprovisionedDate{};
    bool m_mailboxDeprovisionedDateHasBeenSet = false;

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

    Aws::String m_identityProviderIdentityStoreId;
    bool m_identityProviderIdentityStoreIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
