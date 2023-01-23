/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobBatchSummary.h>
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
  class ListSimulationJobBatchesResult
  {
  public:
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult();
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API ListSimulationJobBatchesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline const Aws::Vector<SimulationJobBatchSummary>& GetSimulationJobBatchSummaries() const{ return m_simulationJobBatchSummaries; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline void SetSimulationJobBatchSummaries(const Aws::Vector<SimulationJobBatchSummary>& value) { m_simulationJobBatchSummaries = value; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline void SetSimulationJobBatchSummaries(Aws::Vector<SimulationJobBatchSummary>&& value) { m_simulationJobBatchSummaries = std::move(value); }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& WithSimulationJobBatchSummaries(const Aws::Vector<SimulationJobBatchSummary>& value) { SetSimulationJobBatchSummaries(value); return *this;}

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& WithSimulationJobBatchSummaries(Aws::Vector<SimulationJobBatchSummary>&& value) { SetSimulationJobBatchSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& AddSimulationJobBatchSummaries(const SimulationJobBatchSummary& value) { m_simulationJobBatchSummaries.push_back(value); return *this; }

    /**
     * <p>A list of simulation job batch summaries.</p>
     */
    inline ListSimulationJobBatchesResult& AddSimulationJobBatchSummaries(SimulationJobBatchSummary&& value) { m_simulationJobBatchSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationJobBatches</code> again and assign that token to the request
     * object's <code>nextToken</code> parameter. If there are no remaining results,
     * the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationJobBatchesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SimulationJobBatchSummary> m_simulationJobBatchSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
