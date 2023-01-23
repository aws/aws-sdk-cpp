/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/WorldSummary.h>
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
  class ListWorldsResult
  {
  public:
    AWS_ROBOMAKER_API ListWorldsResult();
    AWS_ROBOMAKER_API ListWorldsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListWorldsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information for worlds.</p>
     */
    inline const Aws::Vector<WorldSummary>& GetWorldSummaries() const{ return m_worldSummaries; }

    /**
     * <p>Summary information for worlds.</p>
     */
    inline void SetWorldSummaries(const Aws::Vector<WorldSummary>& value) { m_worldSummaries = value; }

    /**
     * <p>Summary information for worlds.</p>
     */
    inline void SetWorldSummaries(Aws::Vector<WorldSummary>&& value) { m_worldSummaries = std::move(value); }

    /**
     * <p>Summary information for worlds.</p>
     */
    inline ListWorldsResult& WithWorldSummaries(const Aws::Vector<WorldSummary>& value) { SetWorldSummaries(value); return *this;}

    /**
     * <p>Summary information for worlds.</p>
     */
    inline ListWorldsResult& WithWorldSummaries(Aws::Vector<WorldSummary>&& value) { SetWorldSummaries(std::move(value)); return *this;}

    /**
     * <p>Summary information for worlds.</p>
     */
    inline ListWorldsResult& AddWorldSummaries(const WorldSummary& value) { m_worldSummaries.push_back(value); return *this; }

    /**
     * <p>Summary information for worlds.</p>
     */
    inline ListWorldsResult& AddWorldSummaries(WorldSummary&& value) { m_worldSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListWorldsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListWorldsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call <code>ListWorlds</code> again
     * and assign that token to the request object's <code>nextToken</code> parameter.
     * If there are no remaining results, the previous response object's NextToken
     * parameter is set to null. </p>
     */
    inline ListWorldsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorldSummary> m_worldSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
