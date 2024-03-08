/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/GroupMembers.h>
#include <aws/qbusiness/model/MembershipType.h>
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


    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline PutGroupRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline PutGroupRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application in which the user and group mapping
     * belongs.</p>
     */
    inline PutGroupRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


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

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline PutGroupRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline PutGroupRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source for which you want to map users to their
     * groups. This is useful if a group is tied to multiple data sources, but you only
     * want the group to access documents of a certain data source. For example, the
     * groups "Research", "Engineering", and "Sales and Marketing" are all tied to the
     * company's documents stored in the data sources Confluence and Salesforce.
     * However, "Sales and Marketing" team only needs access to customer-related
     * documents stored in Salesforce.</p>
     */
    inline PutGroupRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const GroupMembers& GetGroupMembers() const{ return m_groupMembers; }

    
    inline bool GroupMembersHasBeenSet() const { return m_groupMembersHasBeenSet; }

    
    inline void SetGroupMembers(const GroupMembers& value) { m_groupMembersHasBeenSet = true; m_groupMembers = value; }

    
    inline void SetGroupMembers(GroupMembers&& value) { m_groupMembersHasBeenSet = true; m_groupMembers = std::move(value); }

    
    inline PutGroupRequest& WithGroupMembers(const GroupMembers& value) { SetGroupMembers(value); return *this;}

    
    inline PutGroupRequest& WithGroupMembers(GroupMembers&& value) { SetGroupMembers(std::move(value)); return *this;}


    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline PutGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline PutGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The list that contains your users or sub groups that belong the same group.
     * For example, the group "Company" includes the user "CEO" and the sub groups
     * "Research", "Engineering", and "Sales and Marketing".</p> <p>If you have more
     * than 1000 users and/or sub groups for a single group, you need to provide the
     * path to the S3 file that lists your users and sub groups for a group. Your sub
     * groups can contain more than 1000 users, but the list of sub groups that belong
     * to a group (and/or users) must be no more than 1000.</p>
     */
    inline PutGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline PutGroupRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline PutGroupRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index in which you want to map users to their
     * groups.</p>
     */
    inline PutGroupRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The type of the group.</p>
     */
    inline const MembershipType& GetType() const{ return m_type; }

    /**
     * <p>The type of the group.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the group.</p>
     */
    inline void SetType(const MembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the group.</p>
     */
    inline void SetType(MembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the group.</p>
     */
    inline PutGroupRequest& WithType(const MembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the group.</p>
     */
    inline PutGroupRequest& WithType(MembershipType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    GroupMembers m_groupMembers;
    bool m_groupMembersHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    MembershipType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
