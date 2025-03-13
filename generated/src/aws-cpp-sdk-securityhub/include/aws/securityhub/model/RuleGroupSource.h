/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/RuleGroupSourceListDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/RuleGroupSourceStatelessRulesAndCustomActionsDetails.h>
#include <aws/securityhub/model/RuleGroupSourceStatefulRulesDetails.h>
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
   * <p>The rules and actions for the rule group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/RuleGroupSource">AWS
   * API Reference</a></p>
   */
  class RuleGroupSource
  {
  public:
    AWS_SECURITYHUB_API RuleGroupSource() = default;
    AWS_SECURITYHUB_API RuleGroupSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline const RuleGroupSourceListDetails& GetRulesSourceList() const { return m_rulesSourceList; }
    inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }
    template<typename RulesSourceListT = RuleGroupSourceListDetails>
    void SetRulesSourceList(RulesSourceListT&& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = std::forward<RulesSourceListT>(value); }
    template<typename RulesSourceListT = RuleGroupSourceListDetails>
    RuleGroupSource& WithRulesSourceList(RulesSourceListT&& value) { SetRulesSourceList(std::forward<RulesSourceListT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline const Aws::String& GetRulesString() const { return m_rulesString; }
    inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }
    template<typename RulesStringT = Aws::String>
    void SetRulesString(RulesStringT&& value) { m_rulesStringHasBeenSet = true; m_rulesString = std::forward<RulesStringT>(value); }
    template<typename RulesStringT = Aws::String>
    RuleGroupSource& WithRulesString(RulesStringT&& value) { SetRulesString(std::forward<RulesStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Suricata rule specifications.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatefulRulesDetails>& GetStatefulRules() const { return m_statefulRules; }
    inline bool StatefulRulesHasBeenSet() const { return m_statefulRulesHasBeenSet; }
    template<typename StatefulRulesT = Aws::Vector<RuleGroupSourceStatefulRulesDetails>>
    void SetStatefulRules(StatefulRulesT&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = std::forward<StatefulRulesT>(value); }
    template<typename StatefulRulesT = Aws::Vector<RuleGroupSourceStatefulRulesDetails>>
    RuleGroupSource& WithStatefulRules(StatefulRulesT&& value) { SetStatefulRules(std::forward<StatefulRulesT>(value)); return *this;}
    template<typename StatefulRulesT = RuleGroupSourceStatefulRulesDetails>
    RuleGroupSource& AddStatefulRules(StatefulRulesT&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.emplace_back(std::forward<StatefulRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline const RuleGroupSourceStatelessRulesAndCustomActionsDetails& GetStatelessRulesAndCustomActions() const { return m_statelessRulesAndCustomActions; }
    inline bool StatelessRulesAndCustomActionsHasBeenSet() const { return m_statelessRulesAndCustomActionsHasBeenSet; }
    template<typename StatelessRulesAndCustomActionsT = RuleGroupSourceStatelessRulesAndCustomActionsDetails>
    void SetStatelessRulesAndCustomActions(StatelessRulesAndCustomActionsT&& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = std::forward<StatelessRulesAndCustomActionsT>(value); }
    template<typename StatelessRulesAndCustomActionsT = RuleGroupSourceStatelessRulesAndCustomActionsDetails>
    RuleGroupSource& WithStatelessRulesAndCustomActions(StatelessRulesAndCustomActionsT&& value) { SetStatelessRulesAndCustomActions(std::forward<StatelessRulesAndCustomActionsT>(value)); return *this;}
    ///@}
  private:

    RuleGroupSourceListDetails m_rulesSourceList;
    bool m_rulesSourceListHasBeenSet = false;

    Aws::String m_rulesString;
    bool m_rulesStringHasBeenSet = false;

    Aws::Vector<RuleGroupSourceStatefulRulesDetails> m_statefulRules;
    bool m_statefulRulesHasBeenSet = false;

    RuleGroupSourceStatelessRulesAndCustomActionsDetails m_statelessRulesAndCustomActions;
    bool m_statelessRulesAndCustomActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
