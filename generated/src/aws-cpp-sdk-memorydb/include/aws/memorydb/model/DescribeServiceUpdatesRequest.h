/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/memorydb/model/ServiceUpdateStatus.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeServiceUpdatesRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeServiceUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceUpdates"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline const Aws::String& GetServiceUpdateName() const{ return m_serviceUpdateName; }

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline void SetServiceUpdateName(const Aws::String& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = value; }

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline void SetServiceUpdateName(Aws::String&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::move(value); }

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline void SetServiceUpdateName(const char* value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName.assign(value); }

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(const Aws::String& value) { SetServiceUpdateName(value); return *this;}

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(Aws::String&& value) { SetServiceUpdateName(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline DescribeServiceUpdatesRequest& WithServiceUpdateName(const char* value) { SetServiceUpdateName(value); return *this;}


    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterNames() const{ return m_clusterNames; }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline bool ClusterNamesHasBeenSet() const { return m_clusterNamesHasBeenSet; }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline void SetClusterNames(const Aws::Vector<Aws::String>& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = value; }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline void SetClusterNames(Aws::Vector<Aws::String>&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = std::move(value); }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline DescribeServiceUpdatesRequest& WithClusterNames(const Aws::Vector<Aws::String>& value) { SetClusterNames(value); return *this;}

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline DescribeServiceUpdatesRequest& WithClusterNames(Aws::Vector<Aws::String>&& value) { SetClusterNames(std::move(value)); return *this;}

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline DescribeServiceUpdatesRequest& AddClusterNames(const Aws::String& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline DescribeServiceUpdatesRequest& AddClusterNames(Aws::String&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of cluster names to identify service updates to apply</p>
     */
    inline DescribeServiceUpdatesRequest& AddClusterNames(const char* value) { m_clusterNamesHasBeenSet = true; m_clusterNames.push_back(value); return *this; }


    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetStatus() const{ return m_status; }

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline void SetStatus(const Aws::Vector<ServiceUpdateStatus>& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline void SetStatus(Aws::Vector<ServiceUpdateStatus>&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline DescribeServiceUpdatesRequest& WithStatus(const Aws::Vector<ServiceUpdateStatus>& value) { SetStatus(value); return *this;}

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline DescribeServiceUpdatesRequest& WithStatus(Aws::Vector<ServiceUpdateStatus>&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline DescribeServiceUpdatesRequest& AddStatus(const ServiceUpdateStatus& value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }

    /**
     * <p>The status(es) of the service updates to filter on</p>
     */
    inline DescribeServiceUpdatesRequest& AddStatus(ServiceUpdateStatus&& value) { m_statusHasBeenSet = true; m_status.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline DescribeServiceUpdatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeServiceUpdatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterNames;
    bool m_clusterNamesHasBeenSet = false;

    Aws::Vector<ServiceUpdateStatus> m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
