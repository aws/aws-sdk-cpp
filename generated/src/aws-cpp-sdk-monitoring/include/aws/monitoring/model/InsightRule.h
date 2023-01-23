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
   * <p>This structure contains the definition for a Contributor Insights rule. For
   * more information about this rule, see<a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights.html">
   * Using Constributor Insights to analyze high-cardinality data</a> in the
   * <i>Amazon CloudWatch User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/InsightRule">AWS
   * API Reference</a></p>
   */
  class InsightRule
  {
  public:
    AWS_CLOUDWATCH_API InsightRule();
    AWS_CLOUDWATCH_API InsightRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the rule.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the rule.</p>
     */
    inline InsightRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline InsightRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the rule.</p>
     */
    inline InsightRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline InsightRule& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline InsightRule& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline InsightRule& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline InsightRule& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline InsightRule& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}

    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline InsightRule& WithSchema(const char* value) { SetSchema(value); return *this;}


    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline InsightRule& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline InsightRule& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}

    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline InsightRule& WithDefinition(const char* value) { SetDefinition(value); return *this;}


    /**
     * <p> An optional built-in rule that Amazon Web Services manages. </p>
     */
    inline bool GetManagedRule() const{ return m_managedRule; }

    /**
     * <p> An optional built-in rule that Amazon Web Services manages. </p>
     */
    inline bool ManagedRuleHasBeenSet() const { return m_managedRuleHasBeenSet; }

    /**
     * <p> An optional built-in rule that Amazon Web Services manages. </p>
     */
    inline void SetManagedRule(bool value) { m_managedRuleHasBeenSet = true; m_managedRule = value; }

    /**
     * <p> An optional built-in rule that Amazon Web Services manages. </p>
     */
    inline InsightRule& WithManagedRule(bool value) { SetManagedRule(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    bool m_managedRule;
    bool m_managedRuleHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
