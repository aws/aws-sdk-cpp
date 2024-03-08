/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/neptune-graph/model/GraphDataSummary.h>
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
namespace NeptuneGraph
{
namespace Model
{
  class GetGraphSummaryResult
  {
  public:
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult();
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEGRAPH_API GetGraphSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Display the version of this tool.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>Display the version of this tool.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>Display the version of this tool.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>Display the version of this tool.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>Display the version of this tool.</p>
     */
    inline GetGraphSummaryResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>Display the version of this tool.</p>
     */
    inline GetGraphSummaryResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>Display the version of this tool.</p>
     */
    inline GetGraphSummaryResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatisticsComputationTime() const{ return m_lastStatisticsComputationTime; }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline void SetLastStatisticsComputationTime(const Aws::Utils::DateTime& value) { m_lastStatisticsComputationTime = value; }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline void SetLastStatisticsComputationTime(Aws::Utils::DateTime&& value) { m_lastStatisticsComputationTime = std::move(value); }

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline GetGraphSummaryResult& WithLastStatisticsComputationTime(const Aws::Utils::DateTime& value) { SetLastStatisticsComputationTime(value); return *this;}

    /**
     * <p>The timestamp, in ISO 8601 format, of the time at which Neptune Analytics
     * last computed statistics.</p>
     */
    inline GetGraphSummaryResult& WithLastStatisticsComputationTime(Aws::Utils::DateTime&& value) { SetLastStatisticsComputationTime(std::move(value)); return *this;}


    /**
     * <p>The graph summary.</p>
     */
    inline const GraphDataSummary& GetGraphSummary() const{ return m_graphSummary; }

    /**
     * <p>The graph summary.</p>
     */
    inline void SetGraphSummary(const GraphDataSummary& value) { m_graphSummary = value; }

    /**
     * <p>The graph summary.</p>
     */
    inline void SetGraphSummary(GraphDataSummary&& value) { m_graphSummary = std::move(value); }

    /**
     * <p>The graph summary.</p>
     */
    inline GetGraphSummaryResult& WithGraphSummary(const GraphDataSummary& value) { SetGraphSummary(value); return *this;}

    /**
     * <p>The graph summary.</p>
     */
    inline GetGraphSummaryResult& WithGraphSummary(GraphDataSummary&& value) { SetGraphSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGraphSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGraphSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGraphSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_version;

    Aws::Utils::DateTime m_lastStatisticsComputationTime;

    GraphDataSummary m_graphSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
