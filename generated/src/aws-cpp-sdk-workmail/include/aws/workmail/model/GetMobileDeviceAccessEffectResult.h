/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessMatchedRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{
  class GetMobileDeviceAccessEffectResult
  {
  public:
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult() = default;
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMobileDeviceAccessEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The effect of the simulated access, <code>ALLOW</code> or <code>DENY</code>,
     * after evaluating mobile device access rules in the WorkMail organization for the
     * simulated user parameters.</p>
     */
    inline MobileDeviceAccessRuleEffect GetEffect() const { return m_effect; }
    inline void SetEffect(MobileDeviceAccessRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline GetMobileDeviceAccessEffectResult& WithEffect(MobileDeviceAccessRuleEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the rules which matched the simulated user input and produced the
     * effect.</p>
     */
    inline const Aws::Vector<MobileDeviceAccessMatchedRule>& GetMatchedRules() const { return m_matchedRules; }
    template<typename MatchedRulesT = Aws::Vector<MobileDeviceAccessMatchedRule>>
    void SetMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules = std::forward<MatchedRulesT>(value); }
    template<typename MatchedRulesT = Aws::Vector<MobileDeviceAccessMatchedRule>>
    GetMobileDeviceAccessEffectResult& WithMatchedRules(MatchedRulesT&& value) { SetMatchedRules(std::forward<MatchedRulesT>(value)); return *this;}
    template<typename MatchedRulesT = MobileDeviceAccessMatchedRule>
    GetMobileDeviceAccessEffectResult& AddMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules.emplace_back(std::forward<MatchedRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMobileDeviceAccessEffectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MobileDeviceAccessRuleEffect m_effect{MobileDeviceAccessRuleEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<MobileDeviceAccessMatchedRule> m_matchedRules;
    bool m_matchedRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
