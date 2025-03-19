/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldGenerationJobSummary.h>
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
namespace RoboMaker
{
namespace Model
{
  class ListWorldGenerationJobsResult
  {
  public:
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult() = default;
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for world generator jobs.</p>
     */
    inline const Aws::Vector<WorldGenerationJobSummary>& GetWorldGenerationJobSummaries() const { return m_worldGenerationJobSummaries; }
    template<typename WorldGenerationJobSummariesT = Aws::Vector<WorldGenerationJobSummary>>
    void SetWorldGenerationJobSummaries(WorldGenerationJobSummariesT&& value) { m_worldGenerationJobSummariesHasBeenSet = true; m_worldGenerationJobSummaries = std::forward<WorldGenerationJobSummariesT>(value); }
    template<typename WorldGenerationJobSummariesT = Aws::Vector<WorldGenerationJobSummary>>
    ListWorldGenerationJobsResult& WithWorldGenerationJobSummaries(WorldGenerationJobSummariesT&& value) { SetWorldGenerationJobSummaries(std::forward<WorldGenerationJobSummariesT>(value)); return *this;}
    template<typename WorldGenerationJobSummariesT = WorldGenerationJobSummary>
    ListWorldGenerationJobsResult& AddWorldGenerationJobSummaries(WorldGenerationJobSummariesT&& value) { m_worldGenerationJobSummariesHasBeenSet = true; m_worldGenerationJobSummaries.emplace_back(std::forward<WorldGenerationJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldGeneratorJobsRequest</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorldGenerationJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorldGenerationJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<WorldGenerationJobSummary> m_worldGenerationJobSummaries;
    bool m_worldGenerationJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
