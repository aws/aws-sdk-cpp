/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/GroupMembers.h>
#include <aws/qbusiness/model/MembershipType.h>

#include <utility>

namespace Aws {
namespace QBusiness {
namespace Model {

/**
 */
class PutGroupRequest : public QBusinessRequest {
 public:
  AWS_QBUSINESS_API PutGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutGroup"; }

  AWS_QBUSINESS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the application in which the user and group mapping
   * belongs.</p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  PutGroupRequest& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the index in which you want to map users to their
   * groups.</p>
   */
  inline const Aws::String& GetIndexId() const { return m_indexId; }
  inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
  template <typename IndexIdT = Aws::String>
  void SetIndexId(IndexIdT&& value) {
    m_indexIdHasBeenSet = true;
    m_indexId = std::forward<IndexIdT>(value);
  }
  template <typename IndexIdT = Aws::String>
  PutGroupRequest& WithIndexId(IndexIdT&& value) {
    SetIndexId(std::forward<IndexIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list that contains your users or sub groups that belong the same group.
   * For example, the group "Company" includes the user "CEO" and the sub groups
   * "Research", "Engineering", and "Sales and Marketing".</p>
   */
  inline const Aws::String& GetGroupName() const { return m_groupName; }
  inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
  template <typename GroupNameT = Aws::String>
  void SetGroupName(GroupNameT&& value) {
    m_groupNameHasBeenSet = true;
    m_groupName = std::forward<GroupNameT>(value);
  }
  template <typename GroupNameT = Aws::String>
  PutGroupRequest& WithGroupName(GroupNameT&& value) {
    SetGroupName(std::forward<GroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the data source for which you want to map users to their
   * groups. This is useful if a group is tied to multiple data sources, but you only
   * want the group to access documents of a certain data source. For example, the
   * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
   * company's documents stored in the data sources Confluence and Salesforce.
   * However, "Sales and Marketing" team only needs access to customer-related
   * documents stored in Salesforce.</p>
   */
  inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
  inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
  template <typename DataSourceIdT = Aws::String>
  void SetDataSourceId(DataSourceIdT&& value) {
    m_dataSourceIdHasBeenSet = true;
    m_dataSourceId = std::forward<DataSourceIdT>(value);
  }
  template <typename DataSourceIdT = Aws::String>
  PutGroupRequest& WithDataSourceId(DataSourceIdT&& value) {
    SetDataSourceId(std::forward<DataSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the group.</p>
   */
  inline MembershipType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MembershipType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PutGroupRequest& WithType(MembershipType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const GroupMembers& GetGroupMembers() const { return m_groupMembers; }
  inline bool GroupMembersHasBeenSet() const { return m_groupMembersHasBeenSet; }
  template <typename GroupMembersT = GroupMembers>
  void SetGroupMembers(GroupMembersT&& value) {
    m_groupMembersHasBeenSet = true;
    m_groupMembers = std::forward<GroupMembersT>(value);
  }
  template <typename GroupMembersT = GroupMembers>
  PutGroupRequest& WithGroupMembers(GroupMembersT&& value) {
    SetGroupMembers(std::forward<GroupMembersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an IAM role that has access to the S3 file
   * that contains your list of users that belong to a group.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  PutGroupRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationId;

  Aws::String m_indexId;

  Aws::String m_groupName;

  Aws::String m_dataSourceId;

  MembershipType m_type{MembershipType::NOT_SET};

  GroupMembers m_groupMembers;

  Aws::String m_roleArn;
  bool m_applicationIdHasBeenSet = false;
  bool m_indexIdHasBeenSet = false;
  bool m_groupNameHasBeenSet = false;
  bool m_dataSourceIdHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_groupMembersHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
