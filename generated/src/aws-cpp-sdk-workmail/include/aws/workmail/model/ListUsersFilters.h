/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
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
   * <p> Filtering options for <i>ListUsers</i> operation. This is only used as input
   * to Operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListUsersFilters">AWS
   * API Reference</a></p>
   */
  class ListUsersFilters
  {
  public:
    AWS_WORKMAIL_API ListUsersFilters() = default;
    AWS_WORKMAIL_API ListUsersFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ListUsersFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline const Aws::String& GetUsernamePrefix() const { return m_usernamePrefix; }
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }
    template<typename UsernamePrefixT = Aws::String>
    void SetUsernamePrefix(UsernamePrefixT&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::forward<UsernamePrefixT>(value); }
    template<typename UsernamePrefixT = Aws::String>
    ListUsersFilters& WithUsernamePrefix(UsernamePrefixT&& value) { SetUsernamePrefix(std::forward<UsernamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline const Aws::String& GetDisplayNamePrefix() const { return m_displayNamePrefix; }
    inline bool DisplayNamePrefixHasBeenSet() const { return m_displayNamePrefixHasBeenSet; }
    template<typename DisplayNamePrefixT = Aws::String>
    void SetDisplayNamePrefix(DisplayNamePrefixT&& value) { m_displayNamePrefixHasBeenSet = true; m_displayNamePrefix = std::forward<DisplayNamePrefixT>(value); }
    template<typename DisplayNamePrefixT = Aws::String>
    ListUsersFilters& WithDisplayNamePrefix(DisplayNamePrefixT&& value) { SetDisplayNamePrefix(std::forward<DisplayNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline const Aws::String& GetPrimaryEmailPrefix() const { return m_primaryEmailPrefix; }
    inline bool PrimaryEmailPrefixHasBeenSet() const { return m_primaryEmailPrefixHasBeenSet; }
    template<typename PrimaryEmailPrefixT = Aws::String>
    void SetPrimaryEmailPrefix(PrimaryEmailPrefixT&& value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix = std::forward<PrimaryEmailPrefixT>(value); }
    template<typename PrimaryEmailPrefixT = Aws::String>
    ListUsersFilters& WithPrimaryEmailPrefix(PrimaryEmailPrefixT&& value) { SetPrimaryEmailPrefix(std::forward<PrimaryEmailPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ListUsersFilters& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters only users with the ID from the IAM Identity Center.</p>
     */
    inline const Aws::String& GetIdentityProviderUserIdPrefix() const { return m_identityProviderUserIdPrefix; }
    inline bool IdentityProviderUserIdPrefixHasBeenSet() const { return m_identityProviderUserIdPrefixHasBeenSet; }
    template<typename IdentityProviderUserIdPrefixT = Aws::String>
    void SetIdentityProviderUserIdPrefix(IdentityProviderUserIdPrefixT&& value) { m_identityProviderUserIdPrefixHasBeenSet = true; m_identityProviderUserIdPrefix = std::forward<IdentityProviderUserIdPrefixT>(value); }
    template<typename IdentityProviderUserIdPrefixT = Aws::String>
    ListUsersFilters& WithIdentityProviderUserIdPrefix(IdentityProviderUserIdPrefixT&& value) { SetIdentityProviderUserIdPrefix(std::forward<IdentityProviderUserIdPrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_usernamePrefix;
    bool m_usernamePrefixHasBeenSet = false;

    Aws::String m_displayNamePrefix;
    bool m_displayNamePrefixHasBeenSet = false;

    Aws::String m_primaryEmailPrefix;
    bool m_primaryEmailPrefixHasBeenSet = false;

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_identityProviderUserIdPrefix;
    bool m_identityProviderUserIdPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
