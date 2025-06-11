/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/UsageOfAction.h>
#include <aws/wafv2/model/SensitivityToAct.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/Regex.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>This is part of the <code>AWSManagedRulesAntiDDoSRuleSet</code>
   * <code>ClientSideActionConfig</code> configuration in
   * <code>ManagedRuleGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ClientSideAction">AWS
   * API Reference</a></p>
   */
  class ClientSideAction
  {
  public:
    AWS_WAFV2_API ClientSideAction() = default;
    AWS_WAFV2_API ClientSideAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ClientSideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether to use the <code>AWSManagedRulesAntiDDoSRuleSet</code>
     * rules <code>ChallengeAllDuringEvent</code> and
     * <code>ChallengeDDoSRequests</code> in the rule group evaluation and the related
     * label <code>awswaf:managed:aws:anti-ddos:challengeable-request</code>. </p> <ul>
     * <li> <p>If usage is enabled: </p> <ul> <li> <p>The managed rule group adds the
     * label <code>awswaf:managed:aws:anti-ddos:challengeable-request</code> to any web
     * request whose URL does <i>NOT</i> match the regular expressions provided in the
     * <code>ClientSideAction</code> setting <code>ExemptUriRegularExpressions</code>.
     * </p> </li> <li> <p>The two rules are evaluated against web requests for
     * protected resources that are experiencing a DDoS attack. The two rules only
     * apply their action to matching requests that have the label
     * <code>awswaf:managed:aws:anti-ddos:challengeable-request</code>. </p> </li>
     * </ul> </li> <li> <p>If usage is disabled: </p> <ul> <li> <p>The managed rule
     * group doesn't add the label
     * <code>awswaf:managed:aws:anti-ddos:challengeable-request</code> to any web
     * requests. </p> </li> <li> <p>The two rules are not evaluated.</p> </li> <li>
     * <p>None of the other <code>ClientSideAction</code> settings have any effect.</p>
     * </li> </ul> </li> </ul>  <p>This setting only enables or disables the use
     * of the two anti-DDOS rules <code>ChallengeAllDuringEvent</code> and
     * <code>ChallengeDDoSRequests</code> in the anti-DDoS managed rule group. </p>
     * <p>This setting doesn't alter the action setting in the two rules. To override
     * the actions used by the rules <code>ChallengeAllDuringEvent</code> and
     * <code>ChallengeDDoSRequests</code>, enable this setting, and then override the
     * rule actions in the usual way, in your managed rule group configuration. </p>
     * 
     */
    inline UsageOfAction GetUsageOfAction() const { return m_usageOfAction; }
    inline bool UsageOfActionHasBeenSet() const { return m_usageOfActionHasBeenSet; }
    inline void SetUsageOfAction(UsageOfAction value) { m_usageOfActionHasBeenSet = true; m_usageOfAction = value; }
    inline ClientSideAction& WithUsageOfAction(UsageOfAction value) { SetUsageOfAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitivity that the rule group rule <code>ChallengeDDoSRequests</code>
     * uses when matching against the DDoS suspicion labeling on a request. The managed
     * rule group adds the labeling during DDoS events, before the
     * <code>ChallengeDDoSRequests</code> rule runs. </p> <p>The higher the
     * sensitivity, the more levels of labeling that the rule matches: </p> <ul> <li>
     * <p>Low sensitivity is less sensitive, causing the rule to match only on the most
     * likely participants in an attack, which are the requests with the high suspicion
     * label <code>awswaf:managed:aws:anti-ddos:high-suspicion-ddos-request</code>.</p>
     * </li> <li> <p>Medium sensitivity causes the rule to match on the medium and high
     * suspicion labels.</p> </li> <li> <p>High sensitivity causes the rule to match on
     * all of the suspicion labels: low, medium, and high.</p> </li> </ul> <p>Default:
     * <code>HIGH</code> </p>
     */
    inline SensitivityToAct GetSensitivity() const { return m_sensitivity; }
    inline bool SensitivityHasBeenSet() const { return m_sensitivityHasBeenSet; }
    inline void SetSensitivity(SensitivityToAct value) { m_sensitivityHasBeenSet = true; m_sensitivity = value; }
    inline ClientSideAction& WithSensitivity(SensitivityToAct value) { SetSensitivity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The regular expression to match against the web request URI, used to identify
     * requests that can't handle a silent browser challenge. When the
     * <code>ClientSideAction</code> setting <code>UsageOfAction</code> is enabled, the
     * managed rule group uses this setting to determine which requests to label with
     * <code>awswaf:managed:aws:anti-ddos:challengeable-request</code>. If
     * <code>UsageOfAction</code> is disabled, this setting has no effect and the
     * managed rule group doesn't add the label to any requests.</p> <p>The anti-DDoS
     * managed rule group doesn't evaluate the rules <code>ChallengeDDoSRequests</code>
     * or <code>ChallengeAllDuringEvent</code> for web requests whose URIs match this
     * regex. This is true regardless of whether you override the rule action for
     * either of the rules in your web ACL configuration. </p> <p>Amazon Web Services
     * recommends using a regular expression. </p> <p>This setting is required if
     * <code>UsageOfAction</code> is set to <code>ENABLED</code>. If required, you can
     * provide between 1 and 5 regex objects in the array of settings. </p> <p>Amazon
     * Web Services recommends starting with the following setting. Review and update
     * it for your application's needs:</p> <p>
     * <code>\/api\/|\.(acc|avi|css|gif|jpe?g|js|mp[34]|ogg|otf|pdf|png|tiff?|ttf|webm|webp|woff2?)$</code>
     * </p>
     */
    inline const Aws::Vector<Regex>& GetExemptUriRegularExpressions() const { return m_exemptUriRegularExpressions; }
    inline bool ExemptUriRegularExpressionsHasBeenSet() const { return m_exemptUriRegularExpressionsHasBeenSet; }
    template<typename ExemptUriRegularExpressionsT = Aws::Vector<Regex>>
    void SetExemptUriRegularExpressions(ExemptUriRegularExpressionsT&& value) { m_exemptUriRegularExpressionsHasBeenSet = true; m_exemptUriRegularExpressions = std::forward<ExemptUriRegularExpressionsT>(value); }
    template<typename ExemptUriRegularExpressionsT = Aws::Vector<Regex>>
    ClientSideAction& WithExemptUriRegularExpressions(ExemptUriRegularExpressionsT&& value) { SetExemptUriRegularExpressions(std::forward<ExemptUriRegularExpressionsT>(value)); return *this;}
    template<typename ExemptUriRegularExpressionsT = Regex>
    ClientSideAction& AddExemptUriRegularExpressions(ExemptUriRegularExpressionsT&& value) { m_exemptUriRegularExpressionsHasBeenSet = true; m_exemptUriRegularExpressions.emplace_back(std::forward<ExemptUriRegularExpressionsT>(value)); return *this; }
    ///@}
  private:

    UsageOfAction m_usageOfAction{UsageOfAction::NOT_SET};
    bool m_usageOfActionHasBeenSet = false;

    SensitivityToAct m_sensitivity{SensitivityToAct::NOT_SET};
    bool m_sensitivityHasBeenSet = false;

    Aws::Vector<Regex> m_exemptUriRegularExpressions;
    bool m_exemptUriRegularExpressionsHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
