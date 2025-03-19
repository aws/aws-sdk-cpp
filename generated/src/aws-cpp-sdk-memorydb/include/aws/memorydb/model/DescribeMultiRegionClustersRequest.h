/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeMultiRegionClustersRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeMultiRegionClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeMultiRegionClusters"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of a specific multi-Region cluster to describe.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const { return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    template<typename MultiRegionClusterNameT = Aws::String>
    void SetMultiRegionClusterName(MultiRegionClusterNameT&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::forward<MultiRegionClusterNameT>(value); }
    template<typename MultiRegionClusterNameT = Aws::String>
    DescribeMultiRegionClustersRequest& WithMultiRegionClusterName(MultiRegionClusterNameT&& value) { SetMultiRegionClusterName(std::forward<MultiRegionClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeMultiRegionClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start paginating.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeMultiRegionClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the multi-Region cluster.</p>
     */
    inline bool GetShowClusterDetails() const { return m_showClusterDetails; }
    inline bool ShowClusterDetailsHasBeenSet() const { return m_showClusterDetailsHasBeenSet; }
    inline void SetShowClusterDetails(bool value) { m_showClusterDetailsHasBeenSet = true; m_showClusterDetails = value; }
    inline DescribeMultiRegionClustersRequest& WithShowClusterDetails(bool value) { SetShowClusterDetails(value); return *this;}
    ///@}
  private:

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_showClusterDetails{false};
    bool m_showClusterDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
