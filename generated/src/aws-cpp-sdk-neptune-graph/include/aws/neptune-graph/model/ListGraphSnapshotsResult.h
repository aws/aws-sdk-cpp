/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/GraphSnapshotSummary.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class ListGraphSnapshotsResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult() = default;
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested list of snapshots.</p>
     */
    inline const Aws::Vector<GraphSnapshotSummary>& GetGraphSnapshots() const { return m_graphSnapshots; }
    template<typename GraphSnapshotsT = Aws::Vector<GraphSnapshotSummary>>
    void SetGraphSnapshots(GraphSnapshotsT&& value) { m_graphSnapshotsHasBeenSet = true; m_graphSnapshots = std::forward<GraphSnapshotsT>(value); }
    template<typename GraphSnapshotsT = Aws::Vector<GraphSnapshotSummary>>
    ListGraphSnapshotsResult& WithGraphSnapshots(GraphSnapshotsT&& value) { SetGraphSnapshots(std::forward<GraphSnapshotsT>(value)); return *this;}
    template<typename GraphSnapshotsT = GraphSnapshotSummary>
    ListGraphSnapshotsResult& AddGraphSnapshots(GraphSnapshotsT&& value) { m_graphSnapshotsHasBeenSet = true; m_graphSnapshots.emplace_back(std::forward<GraphSnapshotsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGraphSnapshotsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGraphSnapshotsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GraphSnapshotSummary> m_graphSnapshots;
    bool m_graphSnapshotsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
