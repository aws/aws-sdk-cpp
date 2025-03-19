/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pi/model/AnalysisReportSummary.h>
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
namespace PI
{
namespace Model
{
  class ListPerformanceAnalysisReportsResult
  {
  public:
    AWS_PI_API ListPerformanceAnalysisReportsResult() = default;
    AWS_PI_API ListPerformanceAnalysisReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListPerformanceAnalysisReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline const Aws::Vector<AnalysisReportSummary>& GetAnalysisReports() const { return m_analysisReports; }
    template<typename AnalysisReportsT = Aws::Vector<AnalysisReportSummary>>
    void SetAnalysisReports(AnalysisReportsT&& value) { m_analysisReportsHasBeenSet = true; m_analysisReports = std::forward<AnalysisReportsT>(value); }
    template<typename AnalysisReportsT = Aws::Vector<AnalysisReportSummary>>
    ListPerformanceAnalysisReportsResult& WithAnalysisReports(AnalysisReportsT&& value) { SetAnalysisReports(std::forward<AnalysisReportsT>(value)); return *this;}
    template<typename AnalysisReportsT = AnalysisReportSummary>
    ListPerformanceAnalysisReportsResult& AddAnalysisReports(AnalysisReportsT&& value) { m_analysisReportsHasBeenSet = true; m_analysisReports.emplace_back(std::forward<AnalysisReportsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPerformanceAnalysisReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPerformanceAnalysisReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisReportSummary> m_analysisReports;
    bool m_analysisReportsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
