/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/RobotApplicationSummary.h>
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
  class ListRobotApplicationsResult
  {
  public:
    AWS_ROBOMAKER_API ListRobotApplicationsResult() = default;
    AWS_ROBOMAKER_API ListRobotApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListRobotApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of robot application summaries that meet the criteria of the
     * request.</p>
     */
    inline const Aws::Vector<RobotApplicationSummary>& GetRobotApplicationSummaries() const { return m_robotApplicationSummaries; }
    template<typename RobotApplicationSummariesT = Aws::Vector<RobotApplicationSummary>>
    void SetRobotApplicationSummaries(RobotApplicationSummariesT&& value) { m_robotApplicationSummariesHasBeenSet = true; m_robotApplicationSummaries = std::forward<RobotApplicationSummariesT>(value); }
    template<typename RobotApplicationSummariesT = Aws::Vector<RobotApplicationSummary>>
    ListRobotApplicationsResult& WithRobotApplicationSummaries(RobotApplicationSummariesT&& value) { SetRobotApplicationSummaries(std::forward<RobotApplicationSummariesT>(value)); return *this;}
    template<typename RobotApplicationSummariesT = RobotApplicationSummary>
    ListRobotApplicationsResult& AddRobotApplicationSummaries(RobotApplicationSummariesT&& value) { m_robotApplicationSummariesHasBeenSet = true; m_robotApplicationSummaries.emplace_back(std::forward<RobotApplicationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListRobotApplications</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRobotApplicationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRobotApplicationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RobotApplicationSummary> m_robotApplicationSummaries;
    bool m_robotApplicationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
