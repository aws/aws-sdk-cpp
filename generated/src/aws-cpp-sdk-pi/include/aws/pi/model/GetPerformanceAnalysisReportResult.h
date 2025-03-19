/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/AnalysisReport.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetPerformanceAnalysisReportResult
  {
  public:
    AWS_PI_API GetPerformanceAnalysisReportResult() = default;
    AWS_PI_API GetPerformanceAnalysisReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetPerformanceAnalysisReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline const AnalysisReport& GetAnalysisReport() const { return m_analysisReport; }
    template<typename AnalysisReportT = AnalysisReport>
    void SetAnalysisReport(AnalysisReportT&& value) { m_analysisReportHasBeenSet = true; m_analysisReport = std::forward<AnalysisReportT>(value); }
    template<typename AnalysisReportT = AnalysisReport>
    GetPerformanceAnalysisReportResult& WithAnalysisReport(AnalysisReportT&& value) { SetAnalysisReport(std::forward<AnalysisReportT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPerformanceAnalysisReportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AnalysisReport m_analysisReport;
    bool m_analysisReportHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
