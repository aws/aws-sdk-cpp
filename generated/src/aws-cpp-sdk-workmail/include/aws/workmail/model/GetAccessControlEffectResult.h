/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetAccessControlEffectResult
  {
  public:
    AWS_WORKMAIL_API GetAccessControlEffectResult() = default;
    AWS_WORKMAIL_API GetAccessControlEffectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetAccessControlEffectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The rule effect.</p>
     */
    inline AccessControlRuleEffect GetEffect() const { return m_effect; }
    inline void SetEffect(AccessControlRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline GetAccessControlEffectResult& WithEffect(AccessControlRuleEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules that match the given parameters, resulting in an effect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMatchedRules() const { return m_matchedRules; }
    template<typename MatchedRulesT = Aws::Vector<Aws::String>>
    void SetMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules = std::forward<MatchedRulesT>(value); }
    template<typename MatchedRulesT = Aws::Vector<Aws::String>>
    GetAccessControlEffectResult& WithMatchedRules(MatchedRulesT&& value) { SetMatchedRules(std::forward<MatchedRulesT>(value)); return *this;}
    template<typename MatchedRulesT = Aws::String>
    GetAccessControlEffectResult& AddMatchedRules(MatchedRulesT&& value) { m_matchedRulesHasBeenSet = true; m_matchedRules.emplace_back(std::forward<MatchedRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAccessControlEffectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessControlRuleEffect m_effect{AccessControlRuleEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_matchedRules;
    bool m_matchedRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
