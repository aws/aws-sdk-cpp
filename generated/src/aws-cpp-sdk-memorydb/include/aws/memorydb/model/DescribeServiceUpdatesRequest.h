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
    AWS_MEMORYDB_API DescribeServiceUpdatesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceUpdates"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique ID of the service update to describe.</p>
     */
    inline const Aws::String& GetServiceUpdateName() const { return m_serviceUpdateName; }
    inline bool ServiceUpdateNameHasBeenSet() const { return m_serviceUpdateNameHasBeenSet; }
    template<typename ServiceUpdateNameT = Aws::String>
    void SetServiceUpdateName(ServiceUpdateNameT&& value) { m_serviceUpdateNameHasBeenSet = true; m_serviceUpdateName = std::forward<ServiceUpdateNameT>(value); }
    template<typename ServiceUpdateNameT = Aws::String>
    DescribeServiceUpdatesRequest& WithServiceUpdateName(ServiceUpdateNameT&& value) { SetServiceUpdateName(std::forward<ServiceUpdateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of cluster names to identify service updates to apply.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterNames() const { return m_clusterNames; }
    inline bool ClusterNamesHasBeenSet() const { return m_clusterNamesHasBeenSet; }
    template<typename ClusterNamesT = Aws::Vector<Aws::String>>
    void SetClusterNames(ClusterNamesT&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames = std::forward<ClusterNamesT>(value); }
    template<typename ClusterNamesT = Aws::Vector<Aws::String>>
    DescribeServiceUpdatesRequest& WithClusterNames(ClusterNamesT&& value) { SetClusterNames(std::forward<ClusterNamesT>(value)); return *this;}
    template<typename ClusterNamesT = Aws::String>
    DescribeServiceUpdatesRequest& AddClusterNames(ClusterNamesT&& value) { m_clusterNamesHasBeenSet = true; m_clusterNames.emplace_back(std::forward<ClusterNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status(es) of the service updates to filter on.</p>
     */
    inline const Aws::Vector<ServiceUpdateStatus>& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::Vector<ServiceUpdateStatus>>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::Vector<ServiceUpdateStatus>>
    DescribeServiceUpdatesRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    inline DescribeServiceUpdatesRequest& AddStatus(ServiceUpdateStatus value) { m_statusHasBeenSet = true; m_status.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeServiceUpdatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServiceUpdatesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceUpdateName;
    bool m_serviceUpdateNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusterNames;
    bool m_clusterNamesHasBeenSet = false;

    Aws::Vector<ServiceUpdateStatus> m_status;
    bool m_statusHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
