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
    AWS_SECURITYHUB_API RuleGroupSource();
    AWS_SECURITYHUB_API RuleGroupSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API RuleGroupSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline const RuleGroupSourceListDetails& GetRulesSourceList() const{ return m_rulesSourceList; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline bool RulesSourceListHasBeenSet() const { return m_rulesSourceListHasBeenSet; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline void SetRulesSourceList(const RuleGroupSourceListDetails& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = value; }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline void SetRulesSourceList(RuleGroupSourceListDetails&& value) { m_rulesSourceListHasBeenSet = true; m_rulesSourceList = std::move(value); }

    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline RuleGroupSource& WithRulesSourceList(const RuleGroupSourceListDetails& value) { SetRulesSourceList(value); return *this;}

    /**
     * <p>Stateful inspection criteria for a domain list rule group. A domain list rule
     * group determines access by specific protocols to specific domains.</p>
     */
    inline RuleGroupSource& WithRulesSourceList(RuleGroupSourceListDetails&& value) { SetRulesSourceList(std::move(value)); return *this;}


    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline const Aws::String& GetRulesString() const{ return m_rulesString; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline bool RulesStringHasBeenSet() const { return m_rulesStringHasBeenSet; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline void SetRulesString(const Aws::String& value) { m_rulesStringHasBeenSet = true; m_rulesString = value; }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline void SetRulesString(Aws::String&& value) { m_rulesStringHasBeenSet = true; m_rulesString = std::move(value); }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline void SetRulesString(const char* value) { m_rulesStringHasBeenSet = true; m_rulesString.assign(value); }

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline RuleGroupSource& WithRulesString(const Aws::String& value) { SetRulesString(value); return *this;}

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline RuleGroupSource& WithRulesString(Aws::String&& value) { SetRulesString(std::move(value)); return *this;}

    /**
     * <p>Stateful inspection criteria, provided in Suricata compatible intrusion
     * prevention system (IPS) rules.</p>
     */
    inline RuleGroupSource& WithRulesString(const char* value) { SetRulesString(value); return *this;}


    /**
     * <p>Suricata rule specifications.</p>
     */
    inline const Aws::Vector<RuleGroupSourceStatefulRulesDetails>& GetStatefulRules() const{ return m_statefulRules; }

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline bool StatefulRulesHasBeenSet() const { return m_statefulRulesHasBeenSet; }

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline void SetStatefulRules(const Aws::Vector<RuleGroupSourceStatefulRulesDetails>& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = value; }

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline void SetStatefulRules(Aws::Vector<RuleGroupSourceStatefulRulesDetails>&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules = std::move(value); }

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline RuleGroupSource& WithStatefulRules(const Aws::Vector<RuleGroupSourceStatefulRulesDetails>& value) { SetStatefulRules(value); return *this;}

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline RuleGroupSource& WithStatefulRules(Aws::Vector<RuleGroupSourceStatefulRulesDetails>&& value) { SetStatefulRules(std::move(value)); return *this;}

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline RuleGroupSource& AddStatefulRules(const RuleGroupSourceStatefulRulesDetails& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(value); return *this; }

    /**
     * <p>Suricata rule specifications.</p>
     */
    inline RuleGroupSource& AddStatefulRules(RuleGroupSourceStatefulRulesDetails&& value) { m_statefulRulesHasBeenSet = true; m_statefulRules.push_back(std::move(value)); return *this; }


    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline const RuleGroupSourceStatelessRulesAndCustomActionsDetails& GetStatelessRulesAndCustomActions() const{ return m_statelessRulesAndCustomActions; }

    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline bool StatelessRulesAndCustomActionsHasBeenSet() const { return m_statelessRulesAndCustomActionsHasBeenSet; }

    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline void SetStatelessRulesAndCustomActions(const RuleGroupSourceStatelessRulesAndCustomActionsDetails& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = value; }

    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline void SetStatelessRulesAndCustomActions(RuleGroupSourceStatelessRulesAndCustomActionsDetails&& value) { m_statelessRulesAndCustomActionsHasBeenSet = true; m_statelessRulesAndCustomActions = std::move(value); }

    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline RuleGroupSource& WithStatelessRulesAndCustomActions(const RuleGroupSourceStatelessRulesAndCustomActionsDetails& value) { SetStatelessRulesAndCustomActions(value); return *this;}

    /**
     * <p>The stateless rules and custom actions used by a stateless rule group.</p>
     */
    inline RuleGroupSource& WithStatelessRulesAndCustomActions(RuleGroupSourceStatelessRulesAndCustomActionsDetails&& value) { SetStatelessRulesAndCustomActions(std::move(value)); return *this;}

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
