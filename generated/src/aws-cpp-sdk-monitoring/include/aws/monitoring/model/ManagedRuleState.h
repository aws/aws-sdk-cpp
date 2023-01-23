/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p> The status of a managed Contributor Insights rule. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ManagedRuleState">AWS
   * API Reference</a></p>
   */
  class ManagedRuleState
  {
  public:
    AWS_CLOUDWATCH_API ManagedRuleState();
    AWS_CLOUDWATCH_API ManagedRuleState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API ManagedRuleState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline ManagedRuleState& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline ManagedRuleState& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p> The name of the Contributor Insights rule that contains data for the
     * specified Amazon Web Services resource. </p>
     */
    inline ManagedRuleState& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline ManagedRuleState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline ManagedRuleState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p> Indicates whether the rule is enabled or disabled. </p>
     */
    inline ManagedRuleState& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
