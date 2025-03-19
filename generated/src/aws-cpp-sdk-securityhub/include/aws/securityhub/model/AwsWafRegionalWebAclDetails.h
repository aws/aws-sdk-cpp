/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsWafRegionalWebAclRulesListDetails.h>
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
   * <p>Provides information about the web access control list (web ACL). The web ACL
   * contains the rules that identify the requests that you want to allow, block, or
   * count. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsWafRegionalWebAclDetails">AWS
   * API Reference</a></p>
   */
  class AwsWafRegionalWebAclDetails
  {
  public:
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails() = default;
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline const Aws::String& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = Aws::String>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = Aws::String>
    AwsWafRegionalWebAclDetails& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    AwsWafRegionalWebAclDetails& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsWafRegionalWebAclDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& GetRulesList() const { return m_rulesList; }
    inline bool RulesListHasBeenSet() const { return m_rulesListHasBeenSet; }
    template<typename RulesListT = Aws::Vector<AwsWafRegionalWebAclRulesListDetails>>
    void SetRulesList(RulesListT&& value) { m_rulesListHasBeenSet = true; m_rulesList = std::forward<RulesListT>(value); }
    template<typename RulesListT = Aws::Vector<AwsWafRegionalWebAclRulesListDetails>>
    AwsWafRegionalWebAclDetails& WithRulesList(RulesListT&& value) { SetRulesList(std::forward<RulesListT>(value)); return *this;}
    template<typename RulesListT = AwsWafRegionalWebAclRulesListDetails>
    AwsWafRegionalWebAclDetails& AddRulesList(RulesListT&& value) { m_rulesListHasBeenSet = true; m_rulesList.emplace_back(std::forward<RulesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the web ACL. </p>
     */
    inline const Aws::String& GetWebAclId() const { return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    template<typename WebAclIdT = Aws::String>
    void SetWebAclId(WebAclIdT&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::forward<WebAclIdT>(value); }
    template<typename WebAclIdT = Aws::String>
    AwsWafRegionalWebAclDetails& WithWebAclId(WebAclIdT&& value) { SetWebAclId(std::forward<WebAclIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<AwsWafRegionalWebAclRulesListDetails> m_rulesList;
    bool m_rulesListHasBeenSet = false;

    Aws::String m_webAclId;
    bool m_webAclIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
