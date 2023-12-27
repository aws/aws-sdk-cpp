/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
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
  class CreatePerformanceAnalysisReportResult
  {
  public:
    AWS_PI_API CreatePerformanceAnalysisReportResult();
    AWS_PI_API CreatePerformanceAnalysisReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API CreatePerformanceAnalysisReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportId = value; }

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportId = std::move(value); }

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline void SetAnalysisReportId(const char* value) { m_analysisReportId.assign(value); }

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportResult& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportResult& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the created analysis report.</p>
     */
    inline CreatePerformanceAnalysisReportResult& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreatePerformanceAnalysisReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreatePerformanceAnalysisReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreatePerformanceAnalysisReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_analysisReportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
