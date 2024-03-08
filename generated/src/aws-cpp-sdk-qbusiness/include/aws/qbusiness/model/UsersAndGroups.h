/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Provides information about users and groups associated with a topic control
   * rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UsersAndGroups">AWS
   * API Reference</a></p>
   */
  class UsersAndGroups
  {
  public:
    AWS_QBUSINESS_API UsersAndGroups();
    AWS_QBUSINESS_API UsersAndGroups(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API UsersAndGroups& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroups() const{ return m_userGroups; }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline void SetUserGroups(const Aws::Vector<Aws::String>& value) { m_userGroupsHasBeenSet = true; m_userGroups = value; }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline void SetUserGroups(Aws::Vector<Aws::String>&& value) { m_userGroupsHasBeenSet = true; m_userGroups = std::move(value); }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline UsersAndGroups& WithUserGroups(const Aws::Vector<Aws::String>& value) { SetUserGroups(value); return *this;}

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline UsersAndGroups& WithUserGroups(Aws::Vector<Aws::String>&& value) { SetUserGroups(std::move(value)); return *this;}

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserGroups(const Aws::String& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserGroups(Aws::String&& value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The user groups associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserGroups(const char* value) { m_userGroupsHasBeenSet = true; m_userGroups.push_back(value); return *this; }


    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline UsersAndGroups& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline UsersAndGroups& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(std::move(value)); return *this;}

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The user ids associated with a topic control rule.</p>
     */
    inline UsersAndGroups& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_userGroups;
    bool m_userGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
