/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ManagedRuleState.h>
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
   * <p> Contains information about managed Contributor Insights rules, as returned
   * by <code>ListManagedInsightRules</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/ManagedRuleDescription">AWS
   * API Reference</a></p>
   */
  class ManagedRuleDescription
  {
  public:
    AWS_CLOUDWATCH_API ManagedRuleDescription() = default;
    AWS_CLOUDWATCH_API ManagedRuleDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API ManagedRuleDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The template name for the managed rule. Used to enable managed rules using
     * <code>PutManagedInsightRules</code>. </p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    ManagedRuleDescription& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If a managed rule is enabled, this is the ARN for the related Amazon Web
     * Services resource. </p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    ManagedRuleDescription& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the state of a managed rule. If present, it contains information
     * about the Contributor Insights rule that contains information about the related
     * Amazon Web Services resource. </p>
     */
    inline const ManagedRuleState& GetRuleState() const { return m_ruleState; }
    inline bool RuleStateHasBeenSet() const { return m_ruleStateHasBeenSet; }
    template<typename RuleStateT = ManagedRuleState>
    void SetRuleState(RuleStateT&& value) { m_ruleStateHasBeenSet = true; m_ruleState = std::forward<RuleStateT>(value); }
    template<typename RuleStateT = ManagedRuleState>
    ManagedRuleDescription& WithRuleState(RuleStateT&& value) { SetRuleState(std::forward<RuleStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    ManagedRuleState m_ruleState;
    bool m_ruleStateHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
