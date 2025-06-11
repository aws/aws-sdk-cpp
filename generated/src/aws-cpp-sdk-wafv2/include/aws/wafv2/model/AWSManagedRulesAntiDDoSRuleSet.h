/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ClientSideActionConfig.h>
#include <aws/wafv2/model/SensitivityToAct.h>
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
   * <p>Configures the use of the anti-DDoS managed rule group,
   * <code>AWSManagedRulesAntiDDoSRuleSet</code>. This configuration is used in
   * <code>ManagedRuleGroupConfig</code>. </p> <p>The configuration that you provide
   * here determines whether and how the rules in the rule group are used. </p>
   * <p>For additional information about this and the other intelligent threat
   * mitigation rule groups, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-managed-protections">Intelligent
   * threat mitigation in WAF</a> and <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-list">Amazon
   * Web Services Managed Rules rule groups list</a> in the <i>WAF Developer
   * Guide</i>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/AWSManagedRulesAntiDDoSRuleSet">AWS
   * API Reference</a></p>
   */
  class AWSManagedRulesAntiDDoSRuleSet
  {
  public:
    AWS_WAFV2_API AWSManagedRulesAntiDDoSRuleSet() = default;
    AWS_WAFV2_API AWSManagedRulesAntiDDoSRuleSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API AWSManagedRulesAntiDDoSRuleSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the request handling that's applied by the managed rule group
     * rules <code>ChallengeAllDuringEvent</code> and
     * <code>ChallengeDDoSRequests</code> during a distributed denial of service (DDoS)
     * attack.</p>
     */
    inline const ClientSideActionConfig& GetClientSideActionConfig() const { return m_clientSideActionConfig; }
    inline bool ClientSideActionConfigHasBeenSet() const { return m_clientSideActionConfigHasBeenSet; }
    template<typename ClientSideActionConfigT = ClientSideActionConfig>
    void SetClientSideActionConfig(ClientSideActionConfigT&& value) { m_clientSideActionConfigHasBeenSet = true; m_clientSideActionConfig = std::forward<ClientSideActionConfigT>(value); }
    template<typename ClientSideActionConfigT = ClientSideActionConfig>
    AWSManagedRulesAntiDDoSRuleSet& WithClientSideActionConfig(ClientSideActionConfigT&& value) { SetClientSideActionConfig(std::forward<ClientSideActionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitivity that the rule group rule <code>DDoSRequests</code> uses when
     * matching against the DDoS suspicion labeling on a request. The managed rule
     * group adds the labeling during DDoS events, before the <code>DDoSRequests</code>
     * rule runs. </p> <p>The higher the sensitivity, the more levels of labeling that
     * the rule matches: </p> <ul> <li> <p>Low sensitivity is less sensitive, causing
     * the rule to match only on the most likely participants in an attack, which are
     * the requests with the high suspicion label
     * <code>awswaf:managed:aws:anti-ddos:high-suspicion-ddos-request</code>.</p> </li>
     * <li> <p>Medium sensitivity causes the rule to match on the medium and high
     * suspicion labels.</p> </li> <li> <p>High sensitivity causes the rule to match on
     * all of the suspicion labels: low, medium, and high.</p> </li> </ul> <p>Default:
     * <code>LOW</code> </p>
     */
    inline SensitivityToAct GetSensitivityToBlock() const { return m_sensitivityToBlock; }
    inline bool SensitivityToBlockHasBeenSet() const { return m_sensitivityToBlockHasBeenSet; }
    inline void SetSensitivityToBlock(SensitivityToAct value) { m_sensitivityToBlockHasBeenSet = true; m_sensitivityToBlock = value; }
    inline AWSManagedRulesAntiDDoSRuleSet& WithSensitivityToBlock(SensitivityToAct value) { SetSensitivityToBlock(value); return *this;}
    ///@}
  private:

    ClientSideActionConfig m_clientSideActionConfig;
    bool m_clientSideActionConfigHasBeenSet = false;

    SensitivityToAct m_sensitivityToBlock{SensitivityToAct::NOT_SET};
    bool m_sensitivityToBlockHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
