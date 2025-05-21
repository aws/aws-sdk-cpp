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
    AWS_CLOUDWATCH_API InsightRule() = default;
    AWS_CLOUDWATCH_API InsightRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InsightRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the rule is enabled or disabled.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    InsightRule& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For rules that you create, this is always <code>{"Name": "CloudWatchLogRule",
     * "Version": 1}</code>. For managed rules, this is <code>{"Name":
     * "ServiceLogRule", "Version": 1}</code> </p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    InsightRule& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the rule, as a JSON object. The definition contains the
     * keywords used to define contributors, the value to aggregate on if this rule
     * returns a sum instead of a count, and the filters. For details on the valid
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ContributorInsights-RuleSyntax.html">Contributor
     * Insights Rule Syntax</a>.</p>
     */
    inline const Aws::String& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = Aws::String>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = Aws::String>
    InsightRule& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An optional built-in rule that Amazon Web Services manages. </p>
     */
    inline bool GetManagedRule() const { return m_managedRule; }
    inline bool ManagedRuleHasBeenSet() const { return m_managedRuleHasBeenSet; }
    inline void SetManagedRule(bool value) { m_managedRuleHasBeenSet = true; m_managedRule = value; }
    inline InsightRule& WithManagedRule(bool value) { SetManagedRule(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays whether the rule is evaluated on the transformed versions of logs,
     * for log groups that have <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html">Log
     * transformation</a> enabled. If this is <code>false</code>, log events are
     * evaluated before they are transformed.</p>
     */
    inline bool GetApplyOnTransformedLogs() const { return m_applyOnTransformedLogs; }
    inline bool ApplyOnTransformedLogsHasBeenSet() const { return m_applyOnTransformedLogsHasBeenSet; }
    inline void SetApplyOnTransformedLogs(bool value) { m_applyOnTransformedLogsHasBeenSet = true; m_applyOnTransformedLogs = value; }
    inline InsightRule& WithApplyOnTransformedLogs(bool value) { SetApplyOnTransformedLogs(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    bool m_managedRule{false};
    bool m_managedRuleHasBeenSet = false;

    bool m_applyOnTransformedLogs{false};
    bool m_applyOnTransformedLogsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
