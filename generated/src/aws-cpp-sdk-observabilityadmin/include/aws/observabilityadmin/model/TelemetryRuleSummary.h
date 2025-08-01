/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/ResourceType.h>
#include <aws/observabilityadmin/model/TelemetryType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p> A summary of a telemetry rule's key properties. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryRuleSummary">AWS
   * API Reference</a></p>
   */
  class TelemetryRuleSummary
  {
  public:
    AWS_OBSERVABILITYADMIN_API TelemetryRuleSummary() = default;
    AWS_OBSERVABILITYADMIN_API TelemetryRuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API TelemetryRuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the telemetry rule. </p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    TelemetryRuleSummary& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the telemetry rule. </p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    TelemetryRuleSummary& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the telemetry rule was created. </p>
     */
    inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    inline void SetCreatedTimeStamp(long long value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }
    inline TelemetryRuleSummary& WithCreatedTimeStamp(long long value) { SetCreatedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the telemetry rule was last modified. </p>
     */
    inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
    inline bool LastUpdateTimeStampHasBeenSet() const { return m_lastUpdateTimeStampHasBeenSet; }
    inline void SetLastUpdateTimeStamp(long long value) { m_lastUpdateTimeStampHasBeenSet = true; m_lastUpdateTimeStamp = value; }
    inline TelemetryRuleSummary& WithLastUpdateTimeStamp(long long value) { SetLastUpdateTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of Amazon Web Services resource the rule applies to. </p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline TelemetryRuleSummary& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of telemetry (Logs, Metrics, or Traces) the rule configures. </p>
     */
    inline TelemetryType GetTelemetryType() const { return m_telemetryType; }
    inline bool TelemetryTypeHasBeenSet() const { return m_telemetryTypeHasBeenSet; }
    inline void SetTelemetryType(TelemetryType value) { m_telemetryTypeHasBeenSet = true; m_telemetryType = value; }
    inline TelemetryRuleSummary& WithTelemetryType(TelemetryType value) { SetTelemetryType(value); return *this;}
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

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    TelemetryType m_telemetryType{TelemetryType::NOT_SET};
    bool m_telemetryTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
