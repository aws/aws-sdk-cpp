/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeFromTemplateJob.h>
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
namespace Panorama
{
namespace Model
{
  class ListNodeFromTemplateJobsResult
  {
  public:
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult() = default;
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API ListNodeFromTemplateJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNodeFromTemplateJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<NodeFromTemplateJob>& GetNodeFromTemplateJobs() const { return m_nodeFromTemplateJobs; }
    template<typename NodeFromTemplateJobsT = Aws::Vector<NodeFromTemplateJob>>
    void SetNodeFromTemplateJobs(NodeFromTemplateJobsT&& value) { m_nodeFromTemplateJobsHasBeenSet = true; m_nodeFromTemplateJobs = std::forward<NodeFromTemplateJobsT>(value); }
    template<typename NodeFromTemplateJobsT = Aws::Vector<NodeFromTemplateJob>>
    ListNodeFromTemplateJobsResult& WithNodeFromTemplateJobs(NodeFromTemplateJobsT&& value) { SetNodeFromTemplateJobs(std::forward<NodeFromTemplateJobsT>(value)); return *this;}
    template<typename NodeFromTemplateJobsT = NodeFromTemplateJob>
    ListNodeFromTemplateJobsResult& AddNodeFromTemplateJobs(NodeFromTemplateJobsT&& value) { m_nodeFromTemplateJobsHasBeenSet = true; m_nodeFromTemplateJobs.emplace_back(std::forward<NodeFromTemplateJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNodeFromTemplateJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NodeFromTemplateJob> m_nodeFromTemplateJobs;
    bool m_nodeFromTemplateJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
