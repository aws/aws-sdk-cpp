/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobSummary.h>
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
  class ListSimulationJobsResult
  {
  public:
    AWS_ROBOMAKER_API ListSimulationJobsResult();
    AWS_ROBOMAKER_API ListSimulationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListSimulationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<SimulationJobSummary>& GetSimulationJobSummaries() const{ return m_simulationJobSummaries; }

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline void SetSimulationJobSummaries(const Aws::Vector<SimulationJobSummary>& value) { m_simulationJobSummaries = value; }

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline void SetSimulationJobSummaries(Aws::Vector<SimulationJobSummary>&& value) { m_simulationJobSummaries = std::move(value); }

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline ListSimulationJobsResult& WithSimulationJobSummaries(const Aws::Vector<SimulationJobSummary>& value) { SetSimulationJobSummaries(value); return *this;}

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline ListSimulationJobsResult& WithSimulationJobSummaries(Aws::Vector<SimulationJobSummary>&& value) { SetSimulationJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline ListSimulationJobsResult& AddSimulationJobSummaries(const SimulationJobSummary& value) { m_simulationJobSummaries.push_back(value); return *this; }

    /**
     * <p>A list of simulation job summaries that meet the criteria of the request.</p>
     */
    inline ListSimulationJobsResult& AddSimulationJobSummaries(SimulationJobSummary&& value) { m_simulationJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobs</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SimulationJobSummary> m_simulationJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
