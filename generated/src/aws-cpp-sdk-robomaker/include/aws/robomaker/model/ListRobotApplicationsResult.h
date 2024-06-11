﻿/**
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
    AWS_ROBOMAKER_API ListRobotApplicationsResult();
    AWS_ROBOMAKER_API ListRobotApplicationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListRobotApplicationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of robot application summaries that meet the criteria of the
     * request.</p>
     */
    inline const Aws::Vector<RobotApplicationSummary>& GetRobotApplicationSummaries() const{ return m_robotApplicationSummaries; }
    inline void SetRobotApplicationSummaries(const Aws::Vector<RobotApplicationSummary>& value) { m_robotApplicationSummaries = value; }
    inline void SetRobotApplicationSummaries(Aws::Vector<RobotApplicationSummary>&& value) { m_robotApplicationSummaries = std::move(value); }
    inline ListRobotApplicationsResult& WithRobotApplicationSummaries(const Aws::Vector<RobotApplicationSummary>& value) { SetRobotApplicationSummaries(value); return *this;}
    inline ListRobotApplicationsResult& WithRobotApplicationSummaries(Aws::Vector<RobotApplicationSummary>&& value) { SetRobotApplicationSummaries(std::move(value)); return *this;}
    inline ListRobotApplicationsResult& AddRobotApplicationSummaries(const RobotApplicationSummary& value) { m_robotApplicationSummaries.push_back(value); return *this; }
    inline ListRobotApplicationsResult& AddRobotApplicationSummaries(RobotApplicationSummary&& value) { m_robotApplicationSummaries.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRobotApplicationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRobotApplicationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRobotApplicationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRobotApplicationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRobotApplicationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRobotApplicationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<RobotApplicationSummary> m_robotApplicationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
