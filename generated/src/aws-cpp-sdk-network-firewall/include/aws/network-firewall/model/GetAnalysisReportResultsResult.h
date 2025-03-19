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
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult() = default;
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API GetAnalysisReportResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the analysis report you specify. Statuses include
     * <code>RUNNING</code>, <code>COMPLETED</code>, or <code>FAILED</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    GetAnalysisReportResultsResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time within the last 30 days from which to start retrieving
     * analysis data, in UTC format (for example, <code>YYYY-MM-DDTHH:MM:SSZ</code>.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    GetAnalysisReportResultsResult& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, up to the current date, from which to stop retrieving
     * analysis data, in UTC format (for example, <code>YYYY-MM-DDTHH:MM:SSZ</code>).
     * </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    GetAnalysisReportResultsResult& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the analysis report was ran. </p>
     */
    inline const Aws::Utils::DateTime& GetReportTime() const { return m_reportTime; }
    template<typename ReportTimeT = Aws::Utils::DateTime>
    void SetReportTime(ReportTimeT&& value) { m_reportTimeHasBeenSet = true; m_reportTime = std::forward<ReportTimeT>(value); }
    template<typename ReportTimeT = Aws::Utils::DateTime>
    GetAnalysisReportResultsResult& WithReportTime(ReportTimeT&& value) { SetReportTime(std::forward<ReportTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of traffic that will be used to generate a report. </p>
     */
    inline EnabledAnalysisType GetAnalysisType() const { return m_analysisType; }
    inline void SetAnalysisType(EnabledAnalysisType value) { m_analysisTypeHasBeenSet = true; m_analysisType = value; }
    inline GetAnalysisReportResultsResult& WithAnalysisType(EnabledAnalysisType value) { SetAnalysisType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAnalysisReportResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Retrieves the results of a traffic analysis report.</p>
     */
    inline const Aws::Vector<AnalysisTypeReportResult>& GetAnalysisReportResults() const { return m_analysisReportResults; }
    template<typename AnalysisReportResultsT = Aws::Vector<AnalysisTypeReportResult>>
    void SetAnalysisReportResults(AnalysisReportResultsT&& value) { m_analysisReportResultsHasBeenSet = true; m_analysisReportResults = std::forward<AnalysisReportResultsT>(value); }
    template<typename AnalysisReportResultsT = Aws::Vector<AnalysisTypeReportResult>>
    GetAnalysisReportResultsResult& WithAnalysisReportResults(AnalysisReportResultsT&& value) { SetAnalysisReportResults(std::forward<AnalysisReportResultsT>(value)); return *this;}
    template<typename AnalysisReportResultsT = AnalysisTypeReportResult>
    GetAnalysisReportResultsResult& AddAnalysisReportResults(AnalysisReportResultsT&& value) { m_analysisReportResultsHasBeenSet = true; m_analysisReportResults.emplace_back(std::forward<AnalysisReportResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAnalysisReportResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::Utils::DateTime m_reportTime{};
    bool m_reportTimeHasBeenSet = false;

    EnabledAnalysisType m_analysisType{EnabledAnalysisType::NOT_SET};
    bool m_analysisTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AnalysisTypeReportResult> m_analysisReportResults;
    bool m_analysisReportResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
