/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QBusiness
{
namespace Model
{

  /**
   */
  class DeleteGroupRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API DeleteGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteGroup"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline DeleteGroupRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline DeleteGroupRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application in which the group mapping belongs.</p>
     */
    inline DeleteGroupRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline DeleteGroupRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline DeleteGroupRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source linked to the group</p> <p>A group can be
     * tied to multiple data sources. You can delete a group from accessing documents
     * in a certain data source. For example, the groups "Research", "Engineering", and
     * "Sales and Marketing" are all tied to the company's documents stored in the data
     * sources Confluence and Salesforce. You want to delete "Research" and
     * "Engineering" groups from Salesforce, so that these groups cannot access
     * customer-related documents stored in Salesforce. Only "Sales and Marketing"
     * should access documents in the Salesforce data source.</p>
     */
    inline DeleteGroupRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline DeleteGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the group you want to delete.</p>
     */
    inline DeleteGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}


    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline DeleteGroupRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline DeleteGroupRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index you want to delete the group from.</p>
     */
    inline DeleteGroupRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
