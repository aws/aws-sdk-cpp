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
    AWS_WORKMAIL_API User() = default;
    AWS_WORKMAIL_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the user.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    User& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the user.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    User& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    User& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    User& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the user, which can be ENABLED, DISABLED, or DELETED.</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline User& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the user.</p>
     */
    inline UserRole GetUserRole() const { return m_userRole; }
    inline bool UserRoleHasBeenSet() const { return m_userRoleHasBeenSet; }
    inline void SetUserRole(UserRole value) { m_userRoleHasBeenSet = true; m_userRole = value; }
    inline User& WithUserRole(UserRole value) { SetUserRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the user was enabled for WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const { return m_enabledDate; }
    inline bool EnabledDateHasBeenSet() const { return m_enabledDateHasBeenSet; }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    void SetEnabledDate(EnabledDateT&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::forward<EnabledDateT>(value); }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    User& WithEnabledDate(EnabledDateT&& value) { SetEnabledDate(std::forward<EnabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date indicating when the user was disabled from WorkMail use.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const { return m_disabledDate; }
    inline bool DisabledDateHasBeenSet() const { return m_disabledDateHasBeenSet; }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    void SetDisabledDate(DisabledDateT&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::forward<DisabledDateT>(value); }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    User& WithDisabledDate(DisabledDateT&& value) { SetDisabledDate(std::forward<DisabledDateT>(value)); return *this;}
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
    User& WithIdentityProviderUserId(IdentityProviderUserIdT&& value) { SetIdentityProviderUserId(std::forward<IdentityProviderUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identity store ID from the IAM Identity Center. If this parameter is empty it
     * will be updated automatically when the user logs in for the first time to the
     * mailbox associated with WorkMail.</p>
     */
    inline const Aws::String& GetIdentityProviderIdentityStoreId() const { return m_identityProviderIdentityStoreId; }
    inline bool IdentityProviderIdentityStoreIdHasBeenSet() const { return m_identityProviderIdentityStoreIdHasBeenSet; }
    template<typename IdentityProviderIdentityStoreIdT = Aws::String>
    void SetIdentityProviderIdentityStoreId(IdentityProviderIdentityStoreIdT&& value) { m_identityProviderIdentityStoreIdHasBeenSet = true; m_identityProviderIdentityStoreId = std::forward<IdentityProviderIdentityStoreIdT>(value); }
    template<typename IdentityProviderIdentityStoreIdT = Aws::String>
    User& WithIdentityProviderIdentityStoreId(IdentityProviderIdentityStoreIdT&& value) { SetIdentityProviderIdentityStoreId(std::forward<IdentityProviderIdentityStoreIdT>(value)); return *this;}
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

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    UserRole m_userRole{UserRole::NOT_SET};
    bool m_userRoleHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate{};
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate{};
    bool m_disabledDateHasBeenSet = false;

    Aws::String m_identityProviderUserId;
    bool m_identityProviderUserIdHasBeenSet = false;

    Aws::String m_identityProviderIdentityStoreId;
    bool m_identityProviderIdentityStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
