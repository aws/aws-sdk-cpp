/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/TelemetryRule.h>
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
  class GetTelemetryRuleResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API GetTelemetryRuleResult() = default;
    AWS_OBSERVABILITYADMIN_API GetTelemetryRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API GetTelemetryRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the telemetry rule. </p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    GetTelemetryRuleResult& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the telemetry rule. </p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    GetTelemetryRuleResult& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the telemetry rule was created. </p>
     */
    inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline void SetCreatedTimeStamp(long long value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }
    inline GetTelemetryRuleResult& WithCreatedTimeStamp(long long value) { SetCreatedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the telemetry rule was last updated. </p>
     */
    inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
    inline void SetLastUpdateTimeStamp(long long value) { m_lastUpdateTimeStampHasBeenSet = true; m_lastUpdateTimeStamp = value; }
    inline GetTelemetryRuleResult& WithLastUpdateTimeStamp(long long value) { SetLastUpdateTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration details of the telemetry rule. </p>
     */
    inline const TelemetryRule& GetTelemetryRule() const { return m_telemetryRule; }
    template<typename TelemetryRuleT = TelemetryRule>
    void SetTelemetryRule(TelemetryRuleT&& value) { m_telemetryRuleHasBeenSet = true; m_telemetryRule = std::forward<TelemetryRuleT>(value); }
    template<typename TelemetryRuleT = TelemetryRule>
    GetTelemetryRuleResult& WithTelemetryRule(TelemetryRuleT&& value) { SetTelemetryRule(std::forward<TelemetryRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTelemetryRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    long long m_createdTimeStamp{0};
    bool m_createdTimeStampHasBeenSet = false;

    long long m_lastUpdateTimeStamp{0};
    bool m_lastUpdateTimeStampHasBeenSet = false;

    TelemetryRule m_telemetryRule;
    bool m_telemetryRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
