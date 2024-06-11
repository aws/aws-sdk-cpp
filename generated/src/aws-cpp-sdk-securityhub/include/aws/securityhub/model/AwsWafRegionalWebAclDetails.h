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
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails();
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsWafRegionalWebAclDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to perform if none of the rules contained in the web ACL match.
     * </p>
     */
    inline const Aws::String& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const Aws::String& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(Aws::String&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline void SetDefaultAction(const char* value) { m_defaultActionHasBeenSet = true; m_defaultAction.assign(value); }
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(const Aws::String& value) { SetDefaultAction(value); return *this;}
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(Aws::String&& value) { SetDefaultAction(std::move(value)); return *this;}
    inline AwsWafRegionalWebAclDetails& WithDefaultAction(const char* value) { SetDefaultAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the metrics for this web ACL. </p>
     */
    inline const Aws::String& GetMetricName() const{ return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    inline void SetMetricName(const Aws::String& value) { m_metricNameHasBeenSet = true; m_metricName = value; }
    inline void SetMetricName(Aws::String&& value) { m_metricNameHasBeenSet = true; m_metricName = std::move(value); }
    inline void SetMetricName(const char* value) { m_metricNameHasBeenSet = true; m_metricName.assign(value); }
    inline AwsWafRegionalWebAclDetails& WithMetricName(const Aws::String& value) { SetMetricName(value); return *this;}
    inline AwsWafRegionalWebAclDetails& WithMetricName(Aws::String&& value) { SetMetricName(std::move(value)); return *this;}
    inline AwsWafRegionalWebAclDetails& WithMetricName(const char* value) { SetMetricName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A descriptive name for the web ACL. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AwsWafRegionalWebAclDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AwsWafRegionalWebAclDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AwsWafRegionalWebAclDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the action for each rule in a web ACL, the priority of
     * the rule, and the ID of the rule. </p>
     */
    inline const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& GetRulesList() const{ return m_rulesList; }
    inline bool RulesListHasBeenSet() const { return m_rulesListHasBeenSet; }
    inline void SetRulesList(const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& value) { m_rulesListHasBeenSet = true; m_rulesList = value; }
    inline void SetRulesList(Aws::Vector<AwsWafRegionalWebAclRulesListDetails>&& value) { m_rulesListHasBeenSet = true; m_rulesList = std::move(value); }
    inline AwsWafRegionalWebAclDetails& WithRulesList(const Aws::Vector<AwsWafRegionalWebAclRulesListDetails>& value) { SetRulesList(value); return *this;}
    inline AwsWafRegionalWebAclDetails& WithRulesList(Aws::Vector<AwsWafRegionalWebAclRulesListDetails>&& value) { SetRulesList(std::move(value)); return *this;}
    inline AwsWafRegionalWebAclDetails& AddRulesList(const AwsWafRegionalWebAclRulesListDetails& value) { m_rulesListHasBeenSet = true; m_rulesList.push_back(value); return *this; }
    inline AwsWafRegionalWebAclDetails& AddRulesList(AwsWafRegionalWebAclRulesListDetails&& value) { m_rulesListHasBeenSet = true; m_rulesList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the web ACL. </p>
     */
    inline const Aws::String& GetWebAclId() const{ return m_webAclId; }
    inline bool WebAclIdHasBeenSet() const { return m_webAclIdHasBeenSet; }
    inline void SetWebAclId(const Aws::String& value) { m_webAclIdHasBeenSet = true; m_webAclId = value; }
    inline void SetWebAclId(Aws::String&& value) { m_webAclIdHasBeenSet = true; m_webAclId = std::move(value); }
    inline void SetWebAclId(const char* value) { m_webAclIdHasBeenSet = true; m_webAclId.assign(value); }
    inline AwsWafRegionalWebAclDetails& WithWebAclId(const Aws::String& value) { SetWebAclId(value); return *this;}
    inline AwsWafRegionalWebAclDetails& WithWebAclId(Aws::String&& value) { SetWebAclId(std::move(value)); return *this;}
    inline AwsWafRegionalWebAclDetails& WithWebAclId(const char* value) { SetWebAclId(value); return *this;}
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
