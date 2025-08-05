/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/TelemetryConfiguration.h>
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
  class ListResourceTelemetryResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryResult() = default;
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API ListResourceTelemetryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of telemetry configurations for Amazon Web Services resources
     * supported by telemetry config in the caller's account. </p>
     */
    inline const Aws::Vector<TelemetryConfiguration>& GetTelemetryConfigurations() const { return m_telemetryConfigurations; }
    template<typename TelemetryConfigurationsT = Aws::Vector<TelemetryConfiguration>>
    void SetTelemetryConfigurations(TelemetryConfigurationsT&& value) { m_telemetryConfigurationsHasBeenSet = true; m_telemetryConfigurations = std::forward<TelemetryConfigurationsT>(value); }
    template<typename TelemetryConfigurationsT = Aws::Vector<TelemetryConfiguration>>
    ListResourceTelemetryResult& WithTelemetryConfigurations(TelemetryConfigurationsT&& value) { SetTelemetryConfigurations(std::forward<TelemetryConfigurationsT>(value)); return *this;}
    template<typename TelemetryConfigurationsT = TelemetryConfiguration>
    ListResourceTelemetryResult& AddTelemetryConfigurations(TelemetryConfigurationsT&& value) { m_telemetryConfigurationsHasBeenSet = true; m_telemetryConfigurations.emplace_back(std::forward<TelemetryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token for the next set of items to return. A previous call generates
     * this token. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourceTelemetryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourceTelemetryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TelemetryConfiguration> m_telemetryConfigurations;
    bool m_telemetryConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
