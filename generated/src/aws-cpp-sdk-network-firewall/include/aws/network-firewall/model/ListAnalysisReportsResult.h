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
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult();
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListAnalysisReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>id</code> and <code>ReportTime</code> associated with a requested
     * analysis report. Does not provide the status of the analysis report. </p>
     */
    inline const Aws::Vector<AnalysisReport>& GetAnalysisReports() const{ return m_analysisReports; }
    inline void SetAnalysisReports(const Aws::Vector<AnalysisReport>& value) { m_analysisReports = value; }
    inline void SetAnalysisReports(Aws::Vector<AnalysisReport>&& value) { m_analysisReports = std::move(value); }
    inline ListAnalysisReportsResult& WithAnalysisReports(const Aws::Vector<AnalysisReport>& value) { SetAnalysisReports(value); return *this;}
    inline ListAnalysisReportsResult& WithAnalysisReports(Aws::Vector<AnalysisReport>&& value) { SetAnalysisReports(std::move(value)); return *this;}
    inline ListAnalysisReportsResult& AddAnalysisReports(const AnalysisReport& value) { m_analysisReports.push_back(value); return *this; }
    inline ListAnalysisReportsResult& AddAnalysisReports(AnalysisReport&& value) { m_analysisReports.push_back(std::move(value)); return *this; }
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
    inline ListAnalysisReportsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAnalysisReportsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAnalysisReportsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAnalysisReportsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAnalysisReportsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAnalysisReportsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AnalysisReport> m_analysisReports;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
