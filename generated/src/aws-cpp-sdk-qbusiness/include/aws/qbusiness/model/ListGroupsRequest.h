/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class ListGroupsRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ListGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroups"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source for getting a list of groups mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline ListGroupsRequest& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline ListGroupsRequest& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index for getting a list of groups mapped to users.</p>
     */
    inline ListGroupsRequest& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The maximum number of returned groups that are mapped to users.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of returned groups that are mapped to users.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of returned groups that are mapped to users.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of returned groups that are mapped to users.</p>
     */
    inline ListGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Q returns a pagination token in the response. You can use this
     * pagination token to retrieve the next set of groups that are mapped to
     * users.</p>
     */
    inline ListGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedEarlierThan() const{ return m_updatedEarlierThan; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline bool UpdatedEarlierThanHasBeenSet() const { return m_updatedEarlierThanHasBeenSet; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline void SetUpdatedEarlierThan(const Aws::Utils::DateTime& value) { m_updatedEarlierThanHasBeenSet = true; m_updatedEarlierThan = value; }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline void SetUpdatedEarlierThan(Aws::Utils::DateTime&& value) { m_updatedEarlierThanHasBeenSet = true; m_updatedEarlierThan = std::move(value); }

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline ListGroupsRequest& WithUpdatedEarlierThan(const Aws::Utils::DateTime& value) { SetUpdatedEarlierThan(value); return *this;}

    /**
     * <p>The timestamp identifier used for the latest <code>PUT</code> or
     * <code>DELETE</code> action for mapping users to their groups.</p>
     */
    inline ListGroupsRequest& WithUpdatedEarlierThan(Aws::Utils::DateTime&& value) { SetUpdatedEarlierThan(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Utils::DateTime m_updatedEarlierThan;
    bool m_updatedEarlierThanHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
