/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/AnalysisReport.h>
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
  class ListAnalysisReportsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult() = default;
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>id</code> and <code>ReportTime</code> associated with a requested
     * analysis report. Does not provide the status of the analysis report. </p>
     */
    inline const Aws::Vector<AnalysisReport>& GetAnalysisReports() const { return m_analysisReports; }
    template<typename AnalysisReportsT = Aws::Vector<AnalysisReport>>
    void SetAnalysisReports(AnalysisReportsT&& value) { m_analysisReportsHasBeenSet = true; m_analysisReports = std::forward<AnalysisReportsT>(value); }
    template<typename AnalysisReportsT = Aws::Vector<AnalysisReport>>
    ListAnalysisReportsResult& WithAnalysisReports(AnalysisReportsT&& value) { SetAnalysisReports(std::forward<AnalysisReportsT>(value)); return *this;}
    template<typename AnalysisReportsT = AnalysisReport>
    ListAnalysisReportsResult& AddAnalysisReports(AnalysisReportsT&& value) { m_analysisReportsHasBeenSet = true; m_analysisReports.emplace_back(std::forward<AnalysisReportsT>(value)); return *this; }
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
    ListAnalysisReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAnalysisReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisReport> m_analysisReports;
    bool m_analysisReportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
