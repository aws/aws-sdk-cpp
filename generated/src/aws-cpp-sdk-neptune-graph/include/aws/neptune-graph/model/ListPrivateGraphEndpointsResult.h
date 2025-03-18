/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/model/PrivateGraphEndpointSummary.h>
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
  class ListPrivateGraphEndpointsResult
  {
  public:
    AWS_NEPTUNEGRAPH_API ListPrivateGraphEndpointsResult() = default;
    AWS_NEPTUNEGRAPH_API ListPrivateGraphEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API ListPrivateGraphEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of private endpoints for the specified Neptune Analytics graph.</p>
     */
    inline const Aws::Vector<PrivateGraphEndpointSummary>& GetPrivateGraphEndpoints() const { return m_privateGraphEndpoints; }
    template<typename PrivateGraphEndpointsT = Aws::Vector<PrivateGraphEndpointSummary>>
    void SetPrivateGraphEndpoints(PrivateGraphEndpointsT&& value) { m_privateGraphEndpointsHasBeenSet = true; m_privateGraphEndpoints = std::forward<PrivateGraphEndpointsT>(value); }
    template<typename PrivateGraphEndpointsT = Aws::Vector<PrivateGraphEndpointSummary>>
    ListPrivateGraphEndpointsResult& WithPrivateGraphEndpoints(PrivateGraphEndpointsT&& value) { SetPrivateGraphEndpoints(std::forward<PrivateGraphEndpointsT>(value)); return *this;}
    template<typename PrivateGraphEndpointsT = PrivateGraphEndpointSummary>
    ListPrivateGraphEndpointsResult& AddPrivateGraphEndpoints(PrivateGraphEndpointsT&& value) { m_privateGraphEndpointsHasBeenSet = true; m_privateGraphEndpoints.emplace_back(std::forward<PrivateGraphEndpointsT>(value)); return *this; }
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
    ListPrivateGraphEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPrivateGraphEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PrivateGraphEndpointSummary> m_privateGraphEndpoints;
    bool m_privateGraphEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
