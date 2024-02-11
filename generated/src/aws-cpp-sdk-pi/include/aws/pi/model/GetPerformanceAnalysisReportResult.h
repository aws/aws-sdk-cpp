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
    AWS_PI_API GetPerformanceAnalysisReportResult();
    AWS_PI_API GetPerformanceAnalysisReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API GetPerformanceAnalysisReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline const AnalysisReport& GetAnalysisReport() const{ return m_analysisReport; }

    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline void SetAnalysisReport(const AnalysisReport& value) { m_analysisReport = value; }

    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline void SetAnalysisReport(AnalysisReport&& value) { m_analysisReport = std::move(value); }

    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline GetPerformanceAnalysisReportResult& WithAnalysisReport(const AnalysisReport& value) { SetAnalysisReport(value); return *this;}

    /**
     * <p>The summary of the performance analysis report created for a time period.</p>
     */
    inline GetPerformanceAnalysisReportResult& WithAnalysisReport(AnalysisReport&& value) { SetAnalysisReport(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPerformanceAnalysisReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPerformanceAnalysisReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPerformanceAnalysisReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AnalysisReport m_analysisReport;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
