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
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput();
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline ListRulesOutput& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline ListRulesOutput& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type that the readiness rule applies to.</p>
     */
    inline ListRulesOutput& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The description of a readiness rule.</p>
     */
    inline const Aws::String& GetRuleDescription() const{ return m_ruleDescription; }

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline bool RuleDescriptionHasBeenSet() const { return m_ruleDescriptionHasBeenSet; }

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline void SetRuleDescription(const Aws::String& value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription = value; }

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline void SetRuleDescription(Aws::String&& value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription = std::move(value); }

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline void SetRuleDescription(const char* value) { m_ruleDescriptionHasBeenSet = true; m_ruleDescription.assign(value); }

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleDescription(const Aws::String& value) { SetRuleDescription(value); return *this;}

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleDescription(Aws::String&& value) { SetRuleDescription(std::move(value)); return *this;}

    /**
     * <p>The description of a readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleDescription(const char* value) { SetRuleDescription(value); return *this;}


    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID for the readiness rule.</p>
     */
    inline ListRulesOutput& WithRuleId(const char* value) { SetRuleId(value); return *this;}

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
