﻿/**
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
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult();
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListWorldGenerationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information for world generator jobs.</p>
     */
    inline const Aws::Vector<WorldGenerationJobSummary>& GetWorldGenerationJobSummaries() const{ return m_worldGenerationJobSummaries; }
    inline void SetWorldGenerationJobSummaries(const Aws::Vector<WorldGenerationJobSummary>& value) { m_worldGenerationJobSummaries = value; }
    inline void SetWorldGenerationJobSummaries(Aws::Vector<WorldGenerationJobSummary>&& value) { m_worldGenerationJobSummaries = std::move(value); }
    inline ListWorldGenerationJobsResult& WithWorldGenerationJobSummaries(const Aws::Vector<WorldGenerationJobSummary>& value) { SetWorldGenerationJobSummaries(value); return *this;}
    inline ListWorldGenerationJobsResult& WithWorldGenerationJobSummaries(Aws::Vector<WorldGenerationJobSummary>&& value) { SetWorldGenerationJobSummaries(std::move(value)); return *this;}
    inline ListWorldGenerationJobsResult& AddWorldGenerationJobSummaries(const WorldGenerationJobSummary& value) { m_worldGenerationJobSummaries.push_back(value); return *this; }
    inline ListWorldGenerationJobsResult& AddWorldGenerationJobSummaries(WorldGenerationJobSummary&& value) { m_worldGenerationJobSummaries.push_back(std::move(value)); return *this; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorldGenerationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorldGenerationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorldGenerationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorldGenerationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorldGenerationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorldGenerationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<WorldGenerationJobSummary> m_worldGenerationJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
