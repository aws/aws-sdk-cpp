/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/PipelineEndpoint.h>
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
namespace OSIS
{
namespace Model
{
  class ListPipelineEndpointsResult
  {
  public:
    AWS_OSIS_API ListPipelineEndpointsResult() = default;
    AWS_OSIS_API ListPipelineEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API ListPipelineEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>NextToken</code> is returned, there are more results available.
     * The value of <code>NextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipelineEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of pipeline endpoints.</p>
     */
    inline const Aws::Vector<PipelineEndpoint>& GetPipelineEndpoints() const { return m_pipelineEndpoints; }
    template<typename PipelineEndpointsT = Aws::Vector<PipelineEndpoint>>
    void SetPipelineEndpoints(PipelineEndpointsT&& value) { m_pipelineEndpointsHasBeenSet = true; m_pipelineEndpoints = std::forward<PipelineEndpointsT>(value); }
    template<typename PipelineEndpointsT = Aws::Vector<PipelineEndpoint>>
    ListPipelineEndpointsResult& WithPipelineEndpoints(PipelineEndpointsT&& value) { SetPipelineEndpoints(std::forward<PipelineEndpointsT>(value)); return *this;}
    template<typename PipelineEndpointsT = PipelineEndpoint>
    ListPipelineEndpointsResult& AddPipelineEndpoints(PipelineEndpointsT&& value) { m_pipelineEndpointsHasBeenSet = true; m_pipelineEndpoints.emplace_back(std::forward<PipelineEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelineEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PipelineEndpoint> m_pipelineEndpoints;
    bool m_pipelineEndpointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
