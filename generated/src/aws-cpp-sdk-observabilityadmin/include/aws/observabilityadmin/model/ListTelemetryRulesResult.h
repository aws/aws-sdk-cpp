/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/TelemetryRuleSummary.h>
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
  class ListTelemetryRulesResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListTelemetryRulesResult() = default;
    AWS_OBSERVABILITYADMIN_API ListTelemetryRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API ListTelemetryRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of telemetry rule summaries. </p>
     */
    inline const Aws::Vector<TelemetryRuleSummary>& GetTelemetryRuleSummaries() const { return m_telemetryRuleSummaries; }
    template<typename TelemetryRuleSummariesT = Aws::Vector<TelemetryRuleSummary>>
    void SetTelemetryRuleSummaries(TelemetryRuleSummariesT&& value) { m_telemetryRuleSummariesHasBeenSet = true; m_telemetryRuleSummaries = std::forward<TelemetryRuleSummariesT>(value); }
    template<typename TelemetryRuleSummariesT = Aws::Vector<TelemetryRuleSummary>>
    ListTelemetryRulesResult& WithTelemetryRuleSummaries(TelemetryRuleSummariesT&& value) { SetTelemetryRuleSummaries(std::forward<TelemetryRuleSummariesT>(value)); return *this;}
    template<typename TelemetryRuleSummariesT = TelemetryRuleSummary>
    ListTelemetryRulesResult& AddTelemetryRuleSummaries(TelemetryRuleSummariesT&& value) { m_telemetryRuleSummariesHasBeenSet = true; m_telemetryRuleSummaries.emplace_back(std::forward<TelemetryRuleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to resume pagination of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTelemetryRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTelemetryRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TelemetryRuleSummary> m_telemetryRuleSummaries;
    bool m_telemetryRuleSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
