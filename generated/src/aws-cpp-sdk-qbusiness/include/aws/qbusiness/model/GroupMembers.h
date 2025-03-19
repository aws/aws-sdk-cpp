/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/S3.h>
#include <aws/qbusiness/model/MemberGroup.h>
#include <aws/qbusiness/model/MemberUser.h>
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
   * <p>A list of users or sub groups that belong to a group. This is for generating
   * Amazon Q Business chat results only from document a user has access
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/GroupMembers">AWS
   * API Reference</a></p>
   */
  class GroupMembers
  {
  public:
    AWS_QBUSINESS_API GroupMembers() = default;
    AWS_QBUSINESS_API GroupMembers(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API GroupMembers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline const Aws::Vector<MemberGroup>& GetMemberGroups() const { return m_memberGroups; }
    inline bool MemberGroupsHasBeenSet() const { return m_memberGroupsHasBeenSet; }
    template<typename MemberGroupsT = Aws::Vector<MemberGroup>>
    void SetMemberGroups(MemberGroupsT&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups = std::forward<MemberGroupsT>(value); }
    template<typename MemberGroupsT = Aws::Vector<MemberGroup>>
    GroupMembers& WithMemberGroups(MemberGroupsT&& value) { SetMemberGroups(std::forward<MemberGroupsT>(value)); return *this;}
    template<typename MemberGroupsT = MemberGroup>
    GroupMembers& AddMemberGroups(MemberGroupsT&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups.emplace_back(std::forward<MemberGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline const Aws::Vector<MemberUser>& GetMemberUsers() const { return m_memberUsers; }
    inline bool MemberUsersHasBeenSet() const { return m_memberUsersHasBeenSet; }
    template<typename MemberUsersT = Aws::Vector<MemberUser>>
    void SetMemberUsers(MemberUsersT&& value) { m_memberUsersHasBeenSet = true; m_memberUsers = std::forward<MemberUsersT>(value); }
    template<typename MemberUsersT = Aws::Vector<MemberUser>>
    GroupMembers& WithMemberUsers(MemberUsersT&& value) { SetMemberUsers(std::forward<MemberUsersT>(value)); return *this;}
    template<typename MemberUsersT = MemberUser>
    GroupMembers& AddMemberUsers(MemberUsersT&& value) { m_memberUsersHasBeenSet = true; m_memberUsers.emplace_back(std::forward<MemberUsersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const S3& GetS3PathForGroupMembers() const { return m_s3PathForGroupMembers; }
    inline bool S3PathForGroupMembersHasBeenSet() const { return m_s3PathForGroupMembersHasBeenSet; }
    template<typename S3PathForGroupMembersT = S3>
    void SetS3PathForGroupMembers(S3PathForGroupMembersT&& value) { m_s3PathForGroupMembersHasBeenSet = true; m_s3PathForGroupMembers = std::forward<S3PathForGroupMembersT>(value); }
    template<typename S3PathForGroupMembersT = S3>
    GroupMembers& WithS3PathForGroupMembers(S3PathForGroupMembersT&& value) { SetS3PathForGroupMembers(std::forward<S3PathForGroupMembersT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MemberGroup> m_memberGroups;
    bool m_memberGroupsHasBeenSet = false;

    Aws::Vector<MemberUser> m_memberUsers;
    bool m_memberUsersHasBeenSet = false;

    S3 m_s3PathForGroupMembers;
    bool m_s3PathForGroupMembersHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
