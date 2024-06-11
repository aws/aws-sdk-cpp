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
    AWS_CLOUDWATCH_API ManagedRuleDescription();
    AWS_CLOUDWATCH_API ManagedRuleDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API ManagedRuleDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The template name for the managed rule. Used to enable managed rules using
     * <code>PutManagedInsightRules</code>. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ManagedRuleDescription& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ManagedRuleDescription& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ManagedRuleDescription& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If a managed rule is enabled, this is the ARN for the related Amazon Web
     * Services resource. </p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline ManagedRuleDescription& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline ManagedRuleDescription& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline ManagedRuleDescription& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Describes the state of a managed rule. If present, it contains information
     * about the Contributor Insights rule that contains information about the related
     * Amazon Web Services resource. </p>
     */
    inline const ManagedRuleState& GetRuleState() const{ return m_ruleState; }
    inline bool RuleStateHasBeenSet() const { return m_ruleStateHasBeenSet; }
    inline void SetRuleState(const ManagedRuleState& value) { m_ruleStateHasBeenSet = true; m_ruleState = value; }
    inline void SetRuleState(ManagedRuleState&& value) { m_ruleStateHasBeenSet = true; m_ruleState = std::move(value); }
    inline ManagedRuleDescription& WithRuleState(const ManagedRuleState& value) { SetRuleState(value); return *this;}
    inline ManagedRuleDescription& WithRuleState(ManagedRuleState&& value) { SetRuleState(std::move(value)); return *this;}
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
