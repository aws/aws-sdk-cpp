/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/RuleGroupSourceStatefulRulesHeaderDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/RuleGroupSourceStatefulRulesOptionsDetails.h>
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
   * <p>A Suricata rule specification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSourceStatefulRulesDetails">AWS
   * API Reference</a></p>
   */
  class RuleGroupSourceStatefulRulesDetails
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails();
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithAction(const Aws::String& value) { SetAction(value); return *this;}

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}

    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithAction(const char* value) { SetAction(value); return *this;}


    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline const RuleGroupSourceStatefulRulesHeaderDetails& GetHeader() const{ return m_header; }

    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }

    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline void SetHeader(const RuleGroupSourceStatefulRulesHeaderDetails& value) { m_headerHasBeenSet = true; m_header = value; }

    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline void SetHeader(RuleGroupSourceStatefulRulesHeaderDetails&& value) { m_headerHasBeenSet = true; m_header = std::move(value); }

    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithHeader(const RuleGroupSourceStatefulRulesHeaderDetails& value) { SetHeader(value); return *this;}

    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithHeader(RuleGroupSourceStatefulRulesHeaderDetails&& value) { SetHeader(std::move(value)); return *this;}


    /**
     * <p>Additional options for the rule.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>& GetRuleOptions() const{ return m_ruleOptions; }

    /**
     * <p>Additional options for the rule.</p>
     */
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }

    /**
     * <p>Additional options for the rule.</p>
     */
    inline void SetRuleOptions(const Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = value; }

    /**
     * <p>Additional options for the rule.</p>
     */
    inline void SetRuleOptions(Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::move(value); }

    /**
     * <p>Additional options for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithRuleOptions(const Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>& value) { SetRuleOptions(value); return *this;}

    /**
     * <p>Additional options for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& WithRuleOptions(Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>&& value) { SetRuleOptions(std::move(value)); return *this;}

    /**
     * <p>Additional options for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& AddRuleOptions(const RuleGroupSourceStatefulRulesOptionsDetails& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(value); return *this; }

    /**
     * <p>Additional options for the rule.</p>
     */
    inline RuleGroupSourceStatefulRulesDetails& AddRuleOptions(RuleGroupSourceStatefulRulesOptionsDetails&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    RuleGroupSourceStatefulRulesHeaderDetails m_header;
    bool m_headerHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails> m_ruleOptions;
    bool m_ruleOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
