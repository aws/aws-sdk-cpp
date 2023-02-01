/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about a rule to exclude from a rule group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WafExcludedRule">AWS
   * API Reference</a></p>
   */
  class WafExcludedRule
  {
  public:
    AWS_SECURITYHUB_API WafExcludedRule();
    AWS_SECURITYHUB_API WafExcludedRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API WafExcludedRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline const Aws::String& GetRuleId() const{ return m_ruleId; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(const Aws::String& value) { m_ruleIdHasBeenSet = true; m_ruleId = value; }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(Aws::String&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::move(value); }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline void SetRuleId(const char* value) { m_ruleIdHasBeenSet = true; m_ruleId.assign(value); }

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline WafExcludedRule& WithRuleId(const Aws::String& value) { SetRuleId(value); return *this;}

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline WafExcludedRule& WithRuleId(Aws::String&& value) { SetRuleId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the rule to exclude from the rule group.</p>
     */
    inline WafExcludedRule& WithRuleId(const char* value) { SetRuleId(value); return *this;}

  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
