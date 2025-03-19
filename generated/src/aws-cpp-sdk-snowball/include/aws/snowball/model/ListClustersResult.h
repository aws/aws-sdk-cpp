/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterListEntry.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Snowball
{
namespace Model
{
  class ListClustersResult
  {
  public:
    AWS_SNOWBALL_API ListClustersResult() = default;
    AWS_SNOWBALL_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each <code>ClusterListEntry</code> object contains a cluster's state, a
     * cluster's ID, and other important status information.</p>
     */
    inline const Aws::Vector<ClusterListEntry>& GetClusterListEntries() const { return m_clusterListEntries; }
    template<typename ClusterListEntriesT = Aws::Vector<ClusterListEntry>>
    void SetClusterListEntries(ClusterListEntriesT&& value) { m_clusterListEntriesHasBeenSet = true; m_clusterListEntries = std::forward<ClusterListEntriesT>(value); }
    template<typename ClusterListEntriesT = Aws::Vector<ClusterListEntry>>
    ListClustersResult& WithClusterListEntries(ClusterListEntriesT&& value) { SetClusterListEntries(std::forward<ClusterListEntriesT>(value)); return *this;}
    template<typename ClusterListEntriesT = ClusterListEntry>
    ListClustersResult& AddClusterListEntries(ClusterListEntriesT&& value) { m_clusterListEntriesHasBeenSet = true; m_clusterListEntries.emplace_back(std::forward<ClusterListEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ClusterListEntry</code> call,
     * your list of returned clusters will start from this point in the array.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterListEntry> m_clusterListEntries;
    bool m_clusterListEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
