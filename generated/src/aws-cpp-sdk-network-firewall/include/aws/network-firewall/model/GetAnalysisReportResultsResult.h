/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/network-firewall/model/EnabledAnalysisType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/AnalysisTypeReportResult.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class GetAnalysisReportResultsResult
  {
  public:
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult();
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the analysis report you specify. Statuses include
     * <code>RUNNING</code>, <code>COMPLETED</code>, or <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetAnalysisReportResultsResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetAnalysisReportResultsResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetAnalysisReportResultsResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time within the last 30 days from which to start retrieving
     * analysis data, in UTC format (for example, <code>YYYY-MM-DDTHH:MM:SSZ</code>.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetAnalysisReportResultsResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetAnalysisReportResultsResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, up to the current date, from which to stop retrieving
     * analysis data, in UTC format (for example, <code>YYYY-MM-DDTHH:MM:SSZ</code>).
     * </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetAnalysisReportResultsResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetAnalysisReportResultsResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the analysis report was ran. </p>
     */
    inline const Aws::Utils::DateTime& GetReportTime() const{ return m_reportTime; }
    inline void SetReportTime(const Aws::Utils::DateTime& value) { m_reportTime = value; }
    inline void SetReportTime(Aws::Utils::DateTime&& value) { m_reportTime = std::move(value); }
    inline GetAnalysisReportResultsResult& WithReportTime(const Aws::Utils::DateTime& value) { SetReportTime(value); return *this;}
    inline GetAnalysisReportResultsResult& WithReportTime(Aws::Utils::DateTime&& value) { SetReportTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic that will be used to generate a report. </p>
     */
    inline const EnabledAnalysisType& GetAnalysisType() const{ return m_analysisType; }
    inline void SetAnalysisType(const EnabledAnalysisType& value) { m_analysisType = value; }
    inline void SetAnalysisType(EnabledAnalysisType&& value) { m_analysisType = std::move(value); }
    inline GetAnalysisReportResultsResult& WithAnalysisType(const EnabledAnalysisType& value) { SetAnalysisType(value); return *this;}
    inline GetAnalysisReportResultsResult& WithAnalysisType(EnabledAnalysisType&& value) { SetAnalysisType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetAnalysisReportResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetAnalysisReportResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetAnalysisReportResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the results of a traffic analysis report.</p>
     */
    inline const Aws::Vector<AnalysisTypeReportResult>& GetAnalysisReportResults() const{ return m_analysisReportResults; }
    inline void SetAnalysisReportResults(const Aws::Vector<AnalysisTypeReportResult>& value) { m_analysisReportResults = value; }
    inline void SetAnalysisReportResults(Aws::Vector<AnalysisTypeReportResult>&& value) { m_analysisReportResults = std::move(value); }
    inline GetAnalysisReportResultsResult& WithAnalysisReportResults(const Aws::Vector<AnalysisTypeReportResult>& value) { SetAnalysisReportResults(value); return *this;}
    inline GetAnalysisReportResultsResult& WithAnalysisReportResults(Aws::Vector<AnalysisTypeReportResult>&& value) { SetAnalysisReportResults(std::move(value)); return *this;}
    inline GetAnalysisReportResultsResult& AddAnalysisReportResults(const AnalysisTypeReportResult& value) { m_analysisReportResults.push_back(value); return *this; }
    inline GetAnalysisReportResultsResult& AddAnalysisReportResults(AnalysisTypeReportResult&& value) { m_analysisReportResults.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAnalysisReportResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAnalysisReportResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAnalysisReportResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_status;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_reportTime;

    EnabledAnalysisType m_analysisType;

    Aws::String m_nextToken;

    Aws::Vector<AnalysisTypeReportResult> m_analysisReportResults;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
