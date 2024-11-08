/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/MembershipType.h>
#include <aws/qbusiness/model/GroupMembers.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class PutGroupRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API PutGroupRequest();

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
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline PutGroupRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline PutGroupRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline PutGroupRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }
    inline PutGroupRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}
    inline PutGroupRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}
    inline PutGroupRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline PutGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline PutGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline PutGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
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
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline PutGroupRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline PutGroupRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline PutGroupRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the group.</p>
     */
    inline const MembershipType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MembershipType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline PutGroupRequest& WithType(const MembershipType& value) { SetType(value); return *this;}
    inline PutGroupRequest& WithType(MembershipType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const GroupMembers& GetGroupMembers() const{ return m_groupMembers; }
    inline bool GroupMembersHasBeenSet() const { return m_groupMembersHasBeenSet; }
    inline void SetGroupMembers(const GroupMembers& value) { m_groupMembersHasBeenSet = true; m_groupMembers = value; }
    inline void SetGroupMembers(GroupMembers&& value) { m_groupMembersHasBeenSet = true; m_groupMembers = std::move(value); }
    inline PutGroupRequest& WithGroupMembers(const GroupMembers& value) { SetGroupMembers(value); return *this;}
    inline PutGroupRequest& WithGroupMembers(GroupMembers&& value) { SetGroupMembers(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has access to the S3 file
     * that contains your list of users that belong to a group.The Amazon Resource Name
     * (ARN) of an IAM role that has access to the S3 file that contains your list of
     * users that belong to a group.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline PutGroupRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline PutGroupRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline PutGroupRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    MembershipType m_type;
    bool m_typeHasBeenSet = false;

    GroupMembers m_groupMembers;
    bool m_groupMembersHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
