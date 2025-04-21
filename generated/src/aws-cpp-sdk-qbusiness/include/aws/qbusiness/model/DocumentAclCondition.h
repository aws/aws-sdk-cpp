/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/MemberRelation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/DocumentAclUser.h>
#include <aws/qbusiness/model/DocumentAclGroup.h>
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
   * <p>Represents a condition in the document's ACL, specifying access rules for
   * users and groups.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAclCondition">AWS
   * API Reference</a></p>
   */
  class DocumentAclCondition
  {
  public:
    AWS_QBUSINESS_API DocumentAclCondition() = default;
    AWS_QBUSINESS_API DocumentAclCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAclCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The logical relation between members in the condition, determining how
     * multiple user or group conditions are combined.</p>
     */
    inline MemberRelation GetMemberRelation() const { return m_memberRelation; }
    inline bool MemberRelationHasBeenSet() const { return m_memberRelationHasBeenSet; }
    inline void SetMemberRelation(MemberRelation value) { m_memberRelationHasBeenSet = true; m_memberRelation = value; }
    inline DocumentAclCondition& WithMemberRelation(MemberRelation value) { SetMemberRelation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of user identifiers that this condition applies to. Users listed
     * here are subject to the access rule defined by this condition.</p>
     */
    inline const Aws::Vector<DocumentAclUser>& GetUsers() const { return m_users; }
    inline bool UsersHasBeenSet() const { return m_usersHasBeenSet; }
    template<typename UsersT = Aws::Vector<DocumentAclUser>>
    void SetUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users = std::forward<UsersT>(value); }
    template<typename UsersT = Aws::Vector<DocumentAclUser>>
    DocumentAclCondition& WithUsers(UsersT&& value) { SetUsers(std::forward<UsersT>(value)); return *this;}
    template<typename UsersT = DocumentAclUser>
    DocumentAclCondition& AddUsers(UsersT&& value) { m_usersHasBeenSet = true; m_users.emplace_back(std::forward<UsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of group identifiers that this condition applies to. Groups listed
     * here are subject to the access rule defined by this condition.</p>
     */
    inline const Aws::Vector<DocumentAclGroup>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<DocumentAclGroup>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<DocumentAclGroup>>
    DocumentAclCondition& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = DocumentAclGroup>
    DocumentAclCondition& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}
  private:

    MemberRelation m_memberRelation{MemberRelation::NOT_SET};
    bool m_memberRelationHasBeenSet = false;

    Aws::Vector<DocumentAclUser> m_users;
    bool m_usersHasBeenSet = false;

    Aws::Vector<DocumentAclGroup> m_groups;
    bool m_groupsHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
