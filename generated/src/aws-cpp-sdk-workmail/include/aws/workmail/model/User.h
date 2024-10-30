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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The representation of an WorkMail user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_WORKMAIL_API User();
    AWS_WORKMAIL_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline User& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline User& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline User& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline User& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline User& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline User& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline User& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline User& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline User& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline User& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline User& WithState(const EntityState& value) { SetState(value); return *this;}
    inline User& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the user.</p>
     */
    inline const UserRole& GetUserRole() const{ return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    inline void SetUserRole(const UserRole& value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline void SetUserRole(UserRole&& value) { m_userRoleHasBeenSet = true; m_userRole = std::move(value); }
    inline User& WithUserRole(const UserRole& value) { SetUserRole(value); return *this;}
    inline User& WithUserRole(UserRole&& value) { SetUserRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the user was enabled for WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDateHasBeenSet = true; m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::move(value); }
    inline User& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline User& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the user was disabled from WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDateHasBeenSet = true; m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::move(value); }
    inline User& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline User& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
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
    inline User& WithIdentityProviderUserId(const Aws::String& value) { SetIdentityProviderUserId(value); return *this;}
    inline User& WithIdentityProviderUserId(Aws::String&& value) { SetIdentityProviderUserId(std::move(value)); return *this;}
    inline User& WithIdentityProviderUserId(const char* value) { SetIdentityProviderUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity store ID from the IAM Identity Center. If this parameter is empty it
     * will be updated automatically when the user logs in for the first time to the
     * mailbox associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderIdentityStoreId() const{ return m_identityProviderIdentityStoreId; }
    inline bool IdentityProviderIdentityStoreIdHasBeenSet() const { return m_identityProviderIdentityStoreIdHasBeenSet; }
    inline void SetIdentityProviderIdentityStoreId(const Aws::String& value) { m_identityProviderIdentityStoreIdHasBeenSet = true; m_identityProviderIdentityStoreId = value; }
    inline void SetIdentityProviderIdentityStoreId(Aws::String&& value) { m_identityProviderIdentityStoreIdHasBeenSet = true; m_identityProviderIdentityStoreId = std::move(value); }
    inline void SetIdentityProviderIdentityStoreId(const char* value) { m_identityProviderIdentityStoreIdHasBeenSet = true; m_identityProviderIdentityStoreId.assign(value); }
    inline User& WithIdentityProviderIdentityStoreId(const Aws::String& value) { SetIdentityProviderIdentityStoreId(value); return *this;}
    inline User& WithIdentityProviderIdentityStoreId(Aws::String&& value) { SetIdentityProviderIdentityStoreId(std::move(value)); return *this;}
    inline User& WithIdentityProviderIdentityStoreId(const char* value) { SetIdentityProviderIdentityStoreId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    EntityState m_state;
    bool m_stateHasBeenSet = false;

    UserRole m_userRole;
    bool m_userRoleHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate;
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate;
    bool m_disabledDateHasBeenSet = false;

    Aws::String m_identityProviderUserId;
    bool m_identityProviderUserIdHasBeenSet = false;

    Aws::String m_identityProviderIdentityStoreId;
    bool m_identityProviderIdentityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
