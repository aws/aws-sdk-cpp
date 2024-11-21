/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/MetricsExportStatusType.h>
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
namespace ResilienceHub
{
namespace Model
{
  class StartMetricsExportResult
  {
  public:
    AWS_RESILIENCEHUB_API StartMetricsExportResult();
    AWS_RESILIENCEHUB_API StartMetricsExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API StartMetricsExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier of the metrics export task.</p>
     */
    inline const Aws::String& GetMetricsExportId() const{ return m_metricsExportId; }
    inline void SetMetricsExportId(const Aws::String& value) { m_metricsExportId = value; }
    inline void SetMetricsExportId(Aws::String&& value) { m_metricsExportId = std::move(value); }
    inline void SetMetricsExportId(const char* value) { m_metricsExportId.assign(value); }
    inline StartMetricsExportResult& WithMetricsExportId(const Aws::String& value) { SetMetricsExportId(value); return *this;}
    inline StartMetricsExportResult& WithMetricsExportId(Aws::String&& value) { SetMetricsExportId(std::move(value)); return *this;}
    inline StartMetricsExportResult& WithMetricsExportId(const char* value) { SetMetricsExportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the metrics export task.</p>
     */
    inline const MetricsExportStatusType& GetStatus() const{ return m_status; }
    inline void SetStatus(const MetricsExportStatusType& value) { m_status = value; }
    inline void SetStatus(MetricsExportStatusType&& value) { m_status = std::move(value); }
    inline StartMetricsExportResult& WithStatus(const MetricsExportStatusType& value) { SetStatus(value); return *this;}
    inline StartMetricsExportResult& WithStatus(MetricsExportStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartMetricsExportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartMetricsExportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartMetricsExportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_metricsExportId;

    MetricsExportStatusType m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
