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
    AWS_PI_API ListPerformanceAnalysisReportsResult();
    AWS_PI_API ListPerformanceAnalysisReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PI_API ListPerformanceAnalysisReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline const Aws::Vector<AnalysisReportSummary>& GetAnalysisReports() const{ return m_analysisReports; }

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline void SetAnalysisReports(const Aws::Vector<AnalysisReportSummary>& value) { m_analysisReports = value; }

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline void SetAnalysisReports(Aws::Vector<AnalysisReportSummary>&& value) { m_analysisReports = std::move(value); }

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline ListPerformanceAnalysisReportsResult& WithAnalysisReports(const Aws::Vector<AnalysisReportSummary>& value) { SetAnalysisReports(value); return *this;}

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline ListPerformanceAnalysisReportsResult& WithAnalysisReports(Aws::Vector<AnalysisReportSummary>&& value) { SetAnalysisReports(std::move(value)); return *this;}

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline ListPerformanceAnalysisReportsResult& AddAnalysisReports(const AnalysisReportSummary& value) { m_analysisReports.push_back(value); return *this; }

    /**
     * <p>List of reports including the report identifier, start and end time, creation
     * time, and status.</p>
     */
    inline ListPerformanceAnalysisReportsResult& AddAnalysisReports(AnalysisReportSummary&& value) { m_analysisReports.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxResults</code>.</p>
     */
    inline ListPerformanceAnalysisReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPerformanceAnalysisReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPerformanceAnalysisReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPerformanceAnalysisReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalysisReportSummary> m_analysisReports;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
