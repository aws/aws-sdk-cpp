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
  class CreateUserRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the organization for which the user is created.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateUserRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateUserRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateUserRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the new user. WorkMail directory user names have a maximum
     * length of 64. All others have a maximum length of 20.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateUserRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateUserRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateUserRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the new user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateUserRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateUserRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateUserRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the new user.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateUserRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateUserRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateUserRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the new user.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i> role in a single request. When a user role is not selected, the
     * default role of <i>USER</i> is selected.</p>
     */
    inline const UserRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const UserRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(UserRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline CreateUserRequest& WithRole(const UserRole& value) { SetRole(value); return *this;}
    inline CreateUserRequest& WithRole(UserRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the new user.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline CreateUserRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline CreateUserRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline CreateUserRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the new user. </p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline CreateUserRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline CreateUserRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline CreateUserRequest& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is enabled, the user will be hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline CreateUserRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
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
    inline CreateUserRequest& WithIdentityProviderUserId(const Aws::String& value) { SetIdentityProviderUserId(value); return *this;}
    inline CreateUserRequest& WithIdentityProviderUserId(Aws::String&& value) { SetIdentityProviderUserId(std::move(value)); return *this;}
    inline CreateUserRequest& WithIdentityProviderUserId(const char* value) { SetIdentityProviderUserId(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    UserRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;

    Aws::String m_identityProviderUserId;
    bool m_identityProviderUserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
