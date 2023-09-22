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
    AWS_WORKMAIL_API ListUsersFilters();
    AWS_WORKMAIL_API ListUsersFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ListUsersFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline const Aws::String& GetUsernamePrefix() const{ return m_usernamePrefix; }

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline bool UsernamePrefixHasBeenSet() const { return m_usernamePrefixHasBeenSet; }

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline void SetUsernamePrefix(const Aws::String& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = value; }

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline void SetUsernamePrefix(Aws::String&& value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix = std::move(value); }

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline void SetUsernamePrefix(const char* value) { m_usernamePrefixHasBeenSet = true; m_usernamePrefix.assign(value); }

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline ListUsersFilters& WithUsernamePrefix(const Aws::String& value) { SetUsernamePrefix(value); return *this;}

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline ListUsersFilters& WithUsernamePrefix(Aws::String&& value) { SetUsernamePrefix(std::move(value)); return *this;}

    /**
     * <p>Filters only users with the provided username prefix.</p>
     */
    inline ListUsersFilters& WithUsernamePrefix(const char* value) { SetUsernamePrefix(value); return *this;}


    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline const Aws::String& GetDisplayNamePrefix() const{ return m_displayNamePrefix; }

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline bool DisplayNamePrefixHasBeenSet() const { return m_displayNamePrefixHasBeenSet; }

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline void SetDisplayNamePrefix(const Aws::String& value) { m_displayNamePrefixHasBeenSet = true; m_displayNamePrefix = value; }

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline void SetDisplayNamePrefix(Aws::String&& value) { m_displayNamePrefixHasBeenSet = true; m_displayNamePrefix = std::move(value); }

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline void SetDisplayNamePrefix(const char* value) { m_displayNamePrefixHasBeenSet = true; m_displayNamePrefix.assign(value); }

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline ListUsersFilters& WithDisplayNamePrefix(const Aws::String& value) { SetDisplayNamePrefix(value); return *this;}

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline ListUsersFilters& WithDisplayNamePrefix(Aws::String&& value) { SetDisplayNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Filters only users with the provided display name prefix.</p>
     */
    inline ListUsersFilters& WithDisplayNamePrefix(const char* value) { SetDisplayNamePrefix(value); return *this;}


    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline const Aws::String& GetPrimaryEmailPrefix() const{ return m_primaryEmailPrefix; }

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline bool PrimaryEmailPrefixHasBeenSet() const { return m_primaryEmailPrefixHasBeenSet; }

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(const Aws::String& value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix = value; }

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(Aws::String&& value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix = std::move(value); }

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(const char* value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix.assign(value); }

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline ListUsersFilters& WithPrimaryEmailPrefix(const Aws::String& value) { SetPrimaryEmailPrefix(value); return *this;}

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline ListUsersFilters& WithPrimaryEmailPrefix(Aws::String&& value) { SetPrimaryEmailPrefix(std::move(value)); return *this;}

    /**
     * <p>Filters only users with the provided email prefix.</p>
     */
    inline ListUsersFilters& WithPrimaryEmailPrefix(const char* value) { SetPrimaryEmailPrefix(value); return *this;}


    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline ListUsersFilters& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>Filters only users with the provided state.</p>
     */
    inline ListUsersFilters& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_usernamePrefix;
    bool m_usernamePrefixHasBeenSet = false;

    Aws::String m_displayNamePrefix;
    bool m_displayNamePrefixHasBeenSet = false;

    Aws::String m_primaryEmailPrefix;
    bool m_primaryEmailPrefixHasBeenSet = false;

    EntityState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
