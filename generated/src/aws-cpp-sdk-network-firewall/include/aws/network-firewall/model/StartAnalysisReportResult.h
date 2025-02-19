/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class StartAnalysisReportResult
  {
  public:
    AWS_NETWORKFIREWALL_API StartAnalysisReportResult();
    AWS_NETWORKFIREWALL_API StartAnalysisReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API StartAnalysisReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique ID of the query that ran when you requested an analysis report.
     * </p>
     */
    inline const Aws::String& GetAnalysisReportId() const{ return m_analysisReportId; }
    inline void SetAnalysisReportId(const Aws::String& value) { m_analysisReportId = value; }
    inline void SetAnalysisReportId(Aws::String&& value) { m_analysisReportId = std::move(value); }
    inline void SetAnalysisReportId(const char* value) { m_analysisReportId.assign(value); }
    inline StartAnalysisReportResult& WithAnalysisReportId(const Aws::String& value) { SetAnalysisReportId(value); return *this;}
    inline StartAnalysisReportResult& WithAnalysisReportId(Aws::String&& value) { SetAnalysisReportId(std::move(value)); return *this;}
    inline StartAnalysisReportResult& WithAnalysisReportId(const char* value) { SetAnalysisReportId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAnalysisReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAnalysisReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAnalysisReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisReportId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
