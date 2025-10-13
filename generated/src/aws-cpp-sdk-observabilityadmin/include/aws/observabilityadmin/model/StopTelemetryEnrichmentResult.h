/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryEnrichmentStatus.h>
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
namespace ObservabilityAdmin
{
namespace Model
{
  class StopTelemetryEnrichmentResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API StopTelemetryEnrichmentResult() = default;
    AWS_OBSERVABILITYADMIN_API StopTelemetryEnrichmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API StopTelemetryEnrichmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The status of the resource tags for telemetry feature after the stop
     * operation (<code>Running</code>, <code>Stopped</code>, or
     * <code>Impaired</code>). </p>
     */
    inline TelemetryEnrichmentStatus GetStatus() const { return m_status; }
    inline void SetStatus(TelemetryEnrichmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StopTelemetryEnrichmentResult& WithStatus(TelemetryEnrichmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopTelemetryEnrichmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TelemetryEnrichmentStatus m_status{TelemetryEnrichmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
