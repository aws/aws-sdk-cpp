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
    AWS_WORKMAIL_API CreateUserRequest() = default;

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
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    CreateUserRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the new user. WorkMail directory user names have a maximum
     * length of 64. All others have a maximum length of 20.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateUserRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the new user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateUserRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the new user.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CreateUserRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the new user.</p> <p>You cannot pass <i>SYSTEM_USER</i> or
     * <i>RESOURCE</i> role in a single request. When a user role is not selected, the
     * default role of <i>USER</i> is selected.</p>
     */
    inline UserRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(UserRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline CreateUserRequest& WithRole(UserRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name of the new user.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    CreateUserRequest& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the new user. </p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    CreateUserRequest& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is enabled, the user will be hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const { return m_hiddenFromGlobalAddressList; }
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
    inline const Aws::String& GetIdentityProviderUserId() const { return m_identityProviderUserId; }
    inline bool IdentityProviderUserIdHasBeenSet() const { return m_identityProviderUserIdHasBeenSet; }
    template<typename IdentityProviderUserIdT = Aws::String>
    void SetIdentityProviderUserId(IdentityProviderUserIdT&& value) { m_identityProviderUserIdHasBeenSet = true; m_identityProviderUserId = std::forward<IdentityProviderUserIdT>(value); }
    template<typename IdentityProviderUserIdT = Aws::String>
    CreateUserRequest& WithIdentityProviderUserId(IdentityProviderUserIdT&& value) { SetIdentityProviderUserId(std::forward<IdentityProviderUserIdT>(value)); return *this;}
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

    UserRole m_role{UserRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList{false};
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;

    Aws::String m_identityProviderUserId;
    bool m_identityProviderUserIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
