﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldExportJobSummary.h>
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
  class ListWorldExportJobsResult
  {
  public:
    AWS_ROBOMAKER_API ListWorldExportJobsResult();
    AWS_ROBOMAKER_API ListWorldExportJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListWorldExportJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for world export jobs.</p>
     */
    inline const Aws::Vector<WorldExportJobSummary>& GetWorldExportJobSummaries() const{ return m_worldExportJobSummaries; }
    inline void SetWorldExportJobSummaries(const Aws::Vector<WorldExportJobSummary>& value) { m_worldExportJobSummaries = value; }
    inline void SetWorldExportJobSummaries(Aws::Vector<WorldExportJobSummary>&& value) { m_worldExportJobSummaries = std::move(value); }
    inline ListWorldExportJobsResult& WithWorldExportJobSummaries(const Aws::Vector<WorldExportJobSummary>& value) { SetWorldExportJobSummaries(value); return *this;}
    inline ListWorldExportJobsResult& WithWorldExportJobSummaries(Aws::Vector<WorldExportJobSummary>&& value) { SetWorldExportJobSummaries(std::move(value)); return *this;}
    inline ListWorldExportJobsResult& AddWorldExportJobSummaries(const WorldExportJobSummary& value) { m_worldExportJobSummaries.push_back(value); return *this; }
    inline ListWorldExportJobsResult& AddWorldExportJobSummaries(WorldExportJobSummary&& value) { m_worldExportJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListWorldExportJobsRequest</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorldExportJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorldExportJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorldExportJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorldExportJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorldExportJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorldExportJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorldExportJobSummary> m_worldExportJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
