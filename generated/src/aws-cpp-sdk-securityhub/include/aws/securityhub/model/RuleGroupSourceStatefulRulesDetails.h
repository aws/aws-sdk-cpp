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
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails() = default;
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSourceStatefulRulesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines what Network Firewall should do with the packets in a traffic flow
     * when the flow matches the stateful rule criteria.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    RuleGroupSourceStatefulRulesDetails& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stateful inspection criteria for the rule.</p>
     */
    inline const RuleGroupSourceStatefulRulesHeaderDetails& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = RuleGroupSourceStatefulRulesHeaderDetails>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = RuleGroupSourceStatefulRulesHeaderDetails>
    RuleGroupSourceStatefulRulesDetails& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options for the rule.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>& GetRuleOptions() const { return m_ruleOptions; }
    inline bool RuleOptionsHasBeenSet() const { return m_ruleOptionsHasBeenSet; }
    template<typename RuleOptionsT = Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>>
    void SetRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions = std::forward<RuleOptionsT>(value); }
    template<typename RuleOptionsT = Aws::Vector<RuleGroupSourceStatefulRulesOptionsDetails>>
    RuleGroupSourceStatefulRulesDetails& WithRuleOptions(RuleOptionsT&& value) { SetRuleOptions(std::forward<RuleOptionsT>(value)); return *this;}
    template<typename RuleOptionsT = RuleGroupSourceStatefulRulesOptionsDetails>
    RuleGroupSourceStatefulRulesDetails& AddRuleOptions(RuleOptionsT&& value) { m_ruleOptionsHasBeenSet = true; m_ruleOptions.emplace_back(std::forward<RuleOptionsT>(value)); return *this; }
    ///@}
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
