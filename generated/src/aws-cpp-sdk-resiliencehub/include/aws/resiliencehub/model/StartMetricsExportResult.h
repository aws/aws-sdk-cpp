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
    AWS_RESILIENCEHUB_API StartMetricsExportResult() = default;
    AWS_RESILIENCEHUB_API StartMetricsExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API StartMetricsExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier of the metrics export task.</p>
     */
    inline const Aws::String& GetMetricsExportId() const { return m_metricsExportId; }
    template<typename MetricsExportIdT = Aws::String>
    void SetMetricsExportId(MetricsExportIdT&& value) { m_metricsExportIdHasBeenSet = true; m_metricsExportId = std::forward<MetricsExportIdT>(value); }
    template<typename MetricsExportIdT = Aws::String>
    StartMetricsExportResult& WithMetricsExportId(MetricsExportIdT&& value) { SetMetricsExportId(std::forward<MetricsExportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the metrics export task.</p>
     */
    inline MetricsExportStatusType GetStatus() const { return m_status; }
    inline void SetStatus(MetricsExportStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartMetricsExportResult& WithStatus(MetricsExportStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartMetricsExportResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricsExportId;
    bool m_metricsExportIdHasBeenSet = false;

    MetricsExportStatusType m_status{MetricsExportStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
