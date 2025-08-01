/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/TelemetryRule.h>
#include <utility>

namespace Aws
{
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   */
  class UpdateTelemetryRuleRequest : public ObservabilityAdminRequest
  {
  public:
    AWS_OBSERVABILITYADMIN_API UpdateTelemetryRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTelemetryRule"; }

    AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifier (name or ARN) of the telemetry rule to update. </p>
     */
    inline const Aws::String& GetRuleIdentifier() const { return m_ruleIdentifier; }
    inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }
    template<typename RuleIdentifierT = Aws::String>
    void SetRuleIdentifier(RuleIdentifierT&& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = std::forward<RuleIdentifierT>(value); }
    template<typename RuleIdentifierT = Aws::String>
    UpdateTelemetryRuleRequest& WithRuleIdentifier(RuleIdentifierT&& value) { SetRuleIdentifier(std::forward<RuleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The new configuration details for the telemetry rule. </p>
     */
    inline const TelemetryRule& GetRule() const { return m_rule; }
    inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
    template<typename RuleT = TelemetryRule>
    void SetRule(RuleT&& value) { m_ruleHasBeenSet = true; m_rule = std::forward<RuleT>(value); }
    template<typename RuleT = TelemetryRule>
    UpdateTelemetryRuleRequest& WithRule(RuleT&& value) { SetRule(std::forward<RuleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;

    TelemetryRule m_rule;
    bool m_ruleHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
