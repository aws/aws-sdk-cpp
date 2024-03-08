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
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult();
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListGraphSnapshotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested list of snapshots.</p>
     */
    inline const Aws::Vector<GraphSnapshotSummary>& GetGraphSnapshots() const{ return m_graphSnapshots; }

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline void SetGraphSnapshots(const Aws::Vector<GraphSnapshotSummary>& value) { m_graphSnapshots = value; }

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline void SetGraphSnapshots(Aws::Vector<GraphSnapshotSummary>&& value) { m_graphSnapshots = std::move(value); }

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline ListGraphSnapshotsResult& WithGraphSnapshots(const Aws::Vector<GraphSnapshotSummary>& value) { SetGraphSnapshots(value); return *this;}

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline ListGraphSnapshotsResult& WithGraphSnapshots(Aws::Vector<GraphSnapshotSummary>&& value) { SetGraphSnapshots(std::move(value)); return *this;}

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline ListGraphSnapshotsResult& AddGraphSnapshots(const GraphSnapshotSummary& value) { m_graphSnapshots.push_back(value); return *this; }

    /**
     * <p>The requested list of snapshots.</p>
     */
    inline ListGraphSnapshotsResult& AddGraphSnapshots(GraphSnapshotSummary&& value) { m_graphSnapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphSnapshotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphSnapshotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token used to paginate output.</p> <p>When this value is provided
     * as input, the service returns results from where the previous response left off.
     * When this value is present in output, it indicates that there are more results
     * to retrieve.</p>
     */
    inline ListGraphSnapshotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListGraphSnapshotsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListGraphSnapshotsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListGraphSnapshotsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<GraphSnapshotSummary> m_graphSnapshots;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
