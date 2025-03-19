/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/ImpersonationRoleType.h>
#include <aws/workmail/model/AccessEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ImpersonationMatchedRule.h>
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
  class GetImpersonationRoleEffectResult
  {
  public:
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult() = default;
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetImpersonationRoleEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The impersonation role type.</p>
     */
    inline ImpersonationRoleType GetType() const { return m_type; }
    inline void SetType(ImpersonationRoleType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetImpersonationRoleEffectResult& WithType(ImpersonationRoleType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code/>Effect of the impersonation role on the target user based on its
     * rules. Available effects are <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline AccessEffect GetEffect() const { return m_effect; }
    inline void SetEffect(AccessEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline GetImpersonationRoleEffectResult& WithEffect(AccessEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the rules that match the input and produce the configured
     * effect.</p>
     */
    inline const Aws::Vector<ImpersonationMatchedRule>& GetMatchedRules() const { return m_matchedRules; }
    template<typename MatchedRulesT = Aws::Vector<ImpersonationMatchedRule>>
    void SetMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules = std::forward<MatchedRulesT>(value); }
    template<typename MatchedRulesT = Aws::Vector<ImpersonationMatchedRule>>
    GetImpersonationRoleEffectResult& WithMatchedRules(MatchedRulesT&& value) { SetMatchedRules(std::forward<MatchedRulesT>(value)); return *this;}
    template<typename MatchedRulesT = ImpersonationMatchedRule>
    GetImpersonationRoleEffectResult& AddMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules.emplace_back(std::forward<MatchedRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetImpersonationRoleEffectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ImpersonationRoleType m_type{ImpersonationRoleType::NOT_SET};
    bool m_typeHasBeenSet = false;

    AccessEffect m_effect{AccessEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<ImpersonationMatchedRule> m_matchedRules;
    bool m_matchedRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
