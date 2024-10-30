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
    AWS_WORKMAIL_API DescribeUserResult();
    AWS_WORKMAIL_API DescribeUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the described user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline DescribeUserResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline DescribeUserResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline DescribeUserResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeUserResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeUserResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeUserResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline void SetEmail(const Aws::String& value) { m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_email.assign(value); }
    inline DescribeUserResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline DescribeUserResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline DescribeUserResult& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeUserResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeUserResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeUserResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a user: enabled (registered to WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline void SetState(const EntityState& value) { m_state = value; }
    inline void SetState(EntityState&& value) { m_state = std::move(value); }
    inline DescribeUserResult& WithState(const EntityState& value) { SetState(value); return *this;}
    inline DescribeUserResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
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
    inline const UserRole& GetUserRole() const{ return m_userRole; }
    inline void SetUserRole(const UserRole& value) { m_userRole = value; }
    inline void SetUserRole(UserRole&& value) { m_userRole = std::move(value); }
    inline DescribeUserResult& WithUserRole(const UserRole& value) { SetUserRole(value); return *this;}
    inline DescribeUserResult& WithUserRole(UserRole&& value) { SetUserRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the user was enabled for WorkMailusage, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }
    inline DescribeUserResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline DescribeUserResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the user was disabled for WorkMail usage, in UNIX
     * epoch time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }
    inline DescribeUserResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline DescribeUserResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the mailbox was created for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetMailboxProvisionedDate() const{ return m_mailboxProvisionedDate; }
    inline void SetMailboxProvisionedDate(const Aws::Utils::DateTime& value) { m_mailboxProvisionedDate = value; }
    inline void SetMailboxProvisionedDate(Aws::Utils::DateTime&& value) { m_mailboxProvisionedDate = std::move(value); }
    inline DescribeUserResult& WithMailboxProvisionedDate(const Aws::Utils::DateTime& value) { SetMailboxProvisionedDate(value); return *this;}
    inline DescribeUserResult& WithMailboxProvisionedDate(Aws::Utils::DateTime&& value) { SetMailboxProvisionedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the mailbox was removed for the user.</p>
     */
    inline const Aws::Utils::DateTime& GetMailboxDeprovisionedDate() const{ return m_mailboxDeprovisionedDate; }
    inline void SetMailboxDeprovisionedDate(const Aws::Utils::DateTime& value) { m_mailboxDeprovisionedDate = value; }
    inline void SetMailboxDeprovisionedDate(Aws::Utils::DateTime&& value) { m_mailboxDeprovisionedDate = std::move(value); }
    inline DescribeUserResult& WithMailboxDeprovisionedDate(const Aws::Utils::DateTime& value) { SetMailboxDeprovisionedDate(value); return *this;}
    inline DescribeUserResult& WithMailboxDeprovisionedDate(Aws::Utils::DateTime&& value) { SetMailboxDeprovisionedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>First name of the user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline void SetFirstName(const Aws::String& value) { m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstName.assign(value); }
    inline DescribeUserResult& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline DescribeUserResult& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline DescribeUserResult& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last name of the user.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline void SetLastName(const Aws::String& value) { m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastName.assign(value); }
    inline DescribeUserResult& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline DescribeUserResult& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline DescribeUserResult& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the user is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressList = value; }
    inline DescribeUserResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Initials of the user.</p>
     */
    inline const Aws::String& GetInitials() const{ return m_initials; }
    inline void SetInitials(const Aws::String& value) { m_initials = value; }
    inline void SetInitials(Aws::String&& value) { m_initials = std::move(value); }
    inline void SetInitials(const char* value) { m_initials.assign(value); }
    inline DescribeUserResult& WithInitials(const Aws::String& value) { SetInitials(value); return *this;}
    inline DescribeUserResult& WithInitials(Aws::String&& value) { SetInitials(std::move(value)); return *this;}
    inline DescribeUserResult& WithInitials(const char* value) { SetInitials(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User's contact number.</p>
     */
    inline const Aws::String& GetTelephone() const{ return m_telephone; }
    inline void SetTelephone(const Aws::String& value) { m_telephone = value; }
    inline void SetTelephone(Aws::String&& value) { m_telephone = std::move(value); }
    inline void SetTelephone(const char* value) { m_telephone.assign(value); }
    inline DescribeUserResult& WithTelephone(const Aws::String& value) { SetTelephone(value); return *this;}
    inline DescribeUserResult& WithTelephone(Aws::String&& value) { SetTelephone(std::move(value)); return *this;}
    inline DescribeUserResult& WithTelephone(const char* value) { SetTelephone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Street where the user is located.</p>
     */
    inline const Aws::String& GetStreet() const{ return m_street; }
    inline void SetStreet(const Aws::String& value) { m_street = value; }
    inline void SetStreet(Aws::String&& value) { m_street = std::move(value); }
    inline void SetStreet(const char* value) { m_street.assign(value); }
    inline DescribeUserResult& WithStreet(const Aws::String& value) { SetStreet(value); return *this;}
    inline DescribeUserResult& WithStreet(Aws::String&& value) { SetStreet(std::move(value)); return *this;}
    inline DescribeUserResult& WithStreet(const char* value) { SetStreet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Job title of the user.</p>
     */
    inline const Aws::String& GetJobTitle() const{ return m_jobTitle; }
    inline void SetJobTitle(const Aws::String& value) { m_jobTitle = value; }
    inline void SetJobTitle(Aws::String&& value) { m_jobTitle = std::move(value); }
    inline void SetJobTitle(const char* value) { m_jobTitle.assign(value); }
    inline DescribeUserResult& WithJobTitle(const Aws::String& value) { SetJobTitle(value); return *this;}
    inline DescribeUserResult& WithJobTitle(Aws::String&& value) { SetJobTitle(std::move(value)); return *this;}
    inline DescribeUserResult& WithJobTitle(const char* value) { SetJobTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>City where the user is located.</p>
     */
    inline const Aws::String& GetCity() const{ return m_city; }
    inline void SetCity(const Aws::String& value) { m_city = value; }
    inline void SetCity(Aws::String&& value) { m_city = std::move(value); }
    inline void SetCity(const char* value) { m_city.assign(value); }
    inline DescribeUserResult& WithCity(const Aws::String& value) { SetCity(value); return *this;}
    inline DescribeUserResult& WithCity(Aws::String&& value) { SetCity(std::move(value)); return *this;}
    inline DescribeUserResult& WithCity(const char* value) { SetCity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Company of the user.</p>
     */
    inline const Aws::String& GetCompany() const{ return m_company; }
    inline void SetCompany(const Aws::String& value) { m_company = value; }
    inline void SetCompany(Aws::String&& value) { m_company = std::move(value); }
    inline void SetCompany(const char* value) { m_company.assign(value); }
    inline DescribeUserResult& WithCompany(const Aws::String& value) { SetCompany(value); return *this;}
    inline DescribeUserResult& WithCompany(Aws::String&& value) { SetCompany(std::move(value)); return *this;}
    inline DescribeUserResult& WithCompany(const char* value) { SetCompany(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Zip code of the user.</p>
     */
    inline const Aws::String& GetZipCode() const{ return m_zipCode; }
    inline void SetZipCode(const Aws::String& value) { m_zipCode = value; }
    inline void SetZipCode(Aws::String&& value) { m_zipCode = std::move(value); }
    inline void SetZipCode(const char* value) { m_zipCode.assign(value); }
    inline DescribeUserResult& WithZipCode(const Aws::String& value) { SetZipCode(value); return *this;}
    inline DescribeUserResult& WithZipCode(Aws::String&& value) { SetZipCode(std::move(value)); return *this;}
    inline DescribeUserResult& WithZipCode(const char* value) { SetZipCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Department of the user.</p>
     */
    inline const Aws::String& GetDepartment() const{ return m_department; }
    inline void SetDepartment(const Aws::String& value) { m_department = value; }
    inline void SetDepartment(Aws::String&& value) { m_department = std::move(value); }
    inline void SetDepartment(const char* value) { m_department.assign(value); }
    inline DescribeUserResult& WithDepartment(const Aws::String& value) { SetDepartment(value); return *this;}
    inline DescribeUserResult& WithDepartment(Aws::String&& value) { SetDepartment(std::move(value)); return *this;}
    inline DescribeUserResult& WithDepartment(const char* value) { SetDepartment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Country where the user is located.</p>
     */
    inline const Aws::String& GetCountry() const{ return m_country; }
    inline void SetCountry(const Aws::String& value) { m_country = value; }
    inline void SetCountry(Aws::String&& value) { m_country = std::move(value); }
    inline void SetCountry(const char* value) { m_country.assign(value); }
    inline DescribeUserResult& WithCountry(const Aws::String& value) { SetCountry(value); return *this;}
    inline DescribeUserResult& WithCountry(Aws::String&& value) { SetCountry(std::move(value)); return *this;}
    inline DescribeUserResult& WithCountry(const char* value) { SetCountry(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Office where the user is located.</p>
     */
    inline const Aws::String& GetOffice() const{ return m_office; }
    inline void SetOffice(const Aws::String& value) { m_office = value; }
    inline void SetOffice(Aws::String&& value) { m_office = std::move(value); }
    inline void SetOffice(const char* value) { m_office.assign(value); }
    inline DescribeUserResult& WithOffice(const Aws::String& value) { SetOffice(value); return *this;}
    inline DescribeUserResult& WithOffice(Aws::String&& value) { SetOffice(std::move(value)); return *this;}
    inline DescribeUserResult& WithOffice(const char* value) { SetOffice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User ID from the IAM Identity Center. If this parameter is empty it will be
     * updated automatically when the user logs in for the first time to the mailbox
     * associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderUserId() const{ return m_identityProviderUserId; }
    inline void SetIdentityProviderUserId(const Aws::String& value) { m_identityProviderUserId = value; }
    inline void SetIdentityProviderUserId(Aws::String&& value) { m_identityProviderUserId = std::move(value); }
    inline void SetIdentityProviderUserId(const char* value) { m_identityProviderUserId.assign(value); }
    inline DescribeUserResult& WithIdentityProviderUserId(const Aws::String& value) { SetIdentityProviderUserId(value); return *this;}
    inline DescribeUserResult& WithIdentityProviderUserId(Aws::String&& value) { SetIdentityProviderUserId(std::move(value)); return *this;}
    inline DescribeUserResult& WithIdentityProviderUserId(const char* value) { SetIdentityProviderUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Identity Store ID from the IAM Identity Center. If this parameter is empty
     * it will be updated automatically when the user logs in for the first time to the
     * mailbox associated with WorkMail. </p>
     */
    inline const Aws::String& GetIdentityProviderIdentityStoreId() const{ return m_identityProviderIdentityStoreId; }
    inline void SetIdentityProviderIdentityStoreId(const Aws::String& value) { m_identityProviderIdentityStoreId = value; }
    inline void SetIdentityProviderIdentityStoreId(Aws::String&& value) { m_identityProviderIdentityStoreId = std::move(value); }
    inline void SetIdentityProviderIdentityStoreId(const char* value) { m_identityProviderIdentityStoreId.assign(value); }
    inline DescribeUserResult& WithIdentityProviderIdentityStoreId(const Aws::String& value) { SetIdentityProviderIdentityStoreId(value); return *this;}
    inline DescribeUserResult& WithIdentityProviderIdentityStoreId(Aws::String&& value) { SetIdentityProviderIdentityStoreId(std::move(value)); return *this;}
    inline DescribeUserResult& WithIdentityProviderIdentityStoreId(const char* value) { SetIdentityProviderIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;

    Aws::String m_name;

    Aws::String m_email;

    Aws::String m_displayName;

    EntityState m_state;

    UserRole m_userRole;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;

    Aws::Utils::DateTime m_mailboxProvisionedDate;

    Aws::Utils::DateTime m_mailboxDeprovisionedDate;

    Aws::String m_firstName;

    Aws::String m_lastName;

    bool m_hiddenFromGlobalAddressList;

    Aws::String m_initials;

    Aws::String m_telephone;

    Aws::String m_street;

    Aws::String m_jobTitle;

    Aws::String m_city;

    Aws::String m_company;

    Aws::String m_zipCode;

    Aws::String m_department;

    Aws::String m_country;

    Aws::String m_office;

    Aws::String m_identityProviderUserId;

    Aws::String m_identityProviderIdentityStoreId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
