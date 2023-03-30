/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ConsolidatedReportMetric.h>
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
namespace WellArchitected
{
namespace Model
{
  class GetConsolidatedReportResult
  {
  public:
    AWS_WELLARCHITECTED_API GetConsolidatedReportResult();
    AWS_WELLARCHITECTED_API GetConsolidatedReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API GetConsolidatedReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline const Aws::Vector<ConsolidatedReportMetric>& GetMetrics() const{ return m_metrics; }

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline void SetMetrics(const Aws::Vector<ConsolidatedReportMetric>& value) { m_metrics = value; }

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline void SetMetrics(Aws::Vector<ConsolidatedReportMetric>&& value) { m_metrics = std::move(value); }

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline GetConsolidatedReportResult& WithMetrics(const Aws::Vector<ConsolidatedReportMetric>& value) { SetMetrics(value); return *this;}

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline GetConsolidatedReportResult& WithMetrics(Aws::Vector<ConsolidatedReportMetric>&& value) { SetMetrics(std::move(value)); return *this;}

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline GetConsolidatedReportResult& AddMetrics(const ConsolidatedReportMetric& value) { m_metrics.push_back(value); return *this; }

    /**
     * <p>The metrics that make up the consolidated report.</p> <p>Only returned when
     * <code>JSON</code> format is requested.</p>
     */
    inline GetConsolidatedReportResult& AddMetrics(ConsolidatedReportMetric&& value) { m_metrics.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline GetConsolidatedReportResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline GetConsolidatedReportResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline GetConsolidatedReportResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetBase64String() const{ return m_base64String; }

    
    inline void SetBase64String(const Aws::String& value) { m_base64String = value; }

    
    inline void SetBase64String(Aws::String&& value) { m_base64String = std::move(value); }

    
    inline void SetBase64String(const char* value) { m_base64String.assign(value); }

    
    inline GetConsolidatedReportResult& WithBase64String(const Aws::String& value) { SetBase64String(value); return *this;}

    
    inline GetConsolidatedReportResult& WithBase64String(Aws::String&& value) { SetBase64String(std::move(value)); return *this;}

    
    inline GetConsolidatedReportResult& WithBase64String(const char* value) { SetBase64String(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetConsolidatedReportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetConsolidatedReportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetConsolidatedReportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConsolidatedReportMetric> m_metrics;

    Aws::String m_nextToken;

    Aws::String m_base64String;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
