﻿/**
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
    AWS_QBUSINESS_API GroupMembers();
    AWS_QBUSINESS_API GroupMembers(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API GroupMembers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of sub groups that belong to a group. For example, the sub groups
     * "Research", "Engineering", and "Sales and Marketing" all belong to the group
     * "Company".</p>
     */
    inline const Aws::Vector<MemberGroup>& GetMemberGroups() const{ return m_memberGroups; }
    inline bool MemberGroupsHasBeenSet() const { return m_memberGroupsHasBeenSet; }
    inline void SetMemberGroups(const Aws::Vector<MemberGroup>& value) { m_memberGroupsHasBeenSet = true; m_memberGroups = value; }
    inline void SetMemberGroups(Aws::Vector<MemberGroup>&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups = std::move(value); }
    inline GroupMembers& WithMemberGroups(const Aws::Vector<MemberGroup>& value) { SetMemberGroups(value); return *this;}
    inline GroupMembers& WithMemberGroups(Aws::Vector<MemberGroup>&& value) { SetMemberGroups(std::move(value)); return *this;}
    inline GroupMembers& AddMemberGroups(const MemberGroup& value) { m_memberGroupsHasBeenSet = true; m_memberGroups.push_back(value); return *this; }
    inline GroupMembers& AddMemberGroups(MemberGroup&& value) { m_memberGroupsHasBeenSet = true; m_memberGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of users that belong to a group. For example, a list of interns all
     * belong to the "Interns" group.</p>
     */
    inline const Aws::Vector<MemberUser>& GetMemberUsers() const{ return m_memberUsers; }
    inline bool MemberUsersHasBeenSet() const { return m_memberUsersHasBeenSet; }
    inline void SetMemberUsers(const Aws::Vector<MemberUser>& value) { m_memberUsersHasBeenSet = true; m_memberUsers = value; }
    inline void SetMemberUsers(Aws::Vector<MemberUser>&& value) { m_memberUsersHasBeenSet = true; m_memberUsers = std::move(value); }
    inline GroupMembers& WithMemberUsers(const Aws::Vector<MemberUser>& value) { SetMemberUsers(value); return *this;}
    inline GroupMembers& WithMemberUsers(Aws::Vector<MemberUser>&& value) { SetMemberUsers(std::move(value)); return *this;}
    inline GroupMembers& AddMemberUsers(const MemberUser& value) { m_memberUsersHasBeenSet = true; m_memberUsers.push_back(value); return *this; }
    inline GroupMembers& AddMemberUsers(MemberUser&& value) { m_memberUsersHasBeenSet = true; m_memberUsers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const S3& GetS3PathForGroupMembers() const{ return m_s3PathForGroupMembers; }
    inline bool S3PathForGroupMembersHasBeenSet() const { return m_s3PathForGroupMembersHasBeenSet; }
    inline void SetS3PathForGroupMembers(const S3& value) { m_s3PathForGroupMembersHasBeenSet = true; m_s3PathForGroupMembers = value; }
    inline void SetS3PathForGroupMembers(S3&& value) { m_s3PathForGroupMembersHasBeenSet = true; m_s3PathForGroupMembers = std::move(value); }
    inline GroupMembers& WithS3PathForGroupMembers(const S3& value) { SetS3PathForGroupMembers(value); return *this;}
    inline GroupMembers& WithS3PathForGroupMembers(S3&& value) { SetS3PathForGroupMembers(std::move(value)); return *this;}
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
