/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Readiness rule information, including the resource type, rule ID, and rule
   * description.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/ListRulesOutput">AWS
   * API Reference</a></p>
   */
  class ListRulesOutput
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput() = default;
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ListRulesOutput& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a readiness rule.</p>
     */
    inline const Aws::String& GetRuleDescription() const { return m_ruleDescription; }
    inline bool RuleDescriptionHasBeenSet() const { return m_ruleDescriptionHasBeenSet; }
    template<typename RuleDescriptionT = Aws::String>
    void SetRuleDescription(RuleDescriptionT&& value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription = std::forward<RuleDescriptionT>(value); }
    template<typename RuleDescriptionT = Aws::String>
    ListRulesOutput& WithRuleDescription(RuleDescriptionT&& value) { SetRuleDescription(std::forward<RuleDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    ListRulesOutput& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_ruleDescription;
    bool m_ruleDescriptionHasBeenSet = false;

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
