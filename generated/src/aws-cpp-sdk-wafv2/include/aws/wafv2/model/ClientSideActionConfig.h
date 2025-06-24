/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ClientSideAction.h>
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
   * <p>This is part of the configuration for the managed rules
   * <code>AWSManagedRulesAntiDDoSRuleSet</code> in
   * <code>ManagedRuleGroupConfig</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ClientSideActionConfig">AWS
   * API Reference</a></p>
   */
  class ClientSideActionConfig
  {
  public:
    AWS_WAFV2_API ClientSideActionConfig() = default;
    AWS_WAFV2_API ClientSideActionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ClientSideActionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration for the use of the <code>AWSManagedRulesAntiDDoSRuleSet</code>
     * rules <code>ChallengeAllDuringEvent</code> and
     * <code>ChallengeDDoSRequests</code>. </p>  <p>This setting isn't related to
     * the configuration of the <code>Challenge</code> action itself. It only
     * configures the use of the two anti-DDoS rules named here. </p>  <p>You
     * can enable or disable the use of these rules, and you can configure how to use
     * them when they are enabled. </p>
     */
    inline const ClientSideAction& GetChallenge() const { return m_challenge; }
    inline bool ChallengeHasBeenSet() const { return m_challengeHasBeenSet; }
    template<typename ChallengeT = ClientSideAction>
    void SetChallenge(ChallengeT&& value) { m_challengeHasBeenSet = true; m_challenge = std::forward<ChallengeT>(value); }
    template<typename ChallengeT = ClientSideAction>
    ClientSideActionConfig& WithChallenge(ChallengeT&& value) { SetChallenge(std::forward<ChallengeT>(value)); return *this;}
    ///@}
  private:

    ClientSideAction m_challenge;
    bool m_challengeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
