/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-control-config/model/Rule.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListSafetyRulesResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListSafetyRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSafetyRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of safety rules in a control panel.</p>
     */
    inline const Aws::Vector<Rule>& GetSafetyRules() const { return m_safetyRules; }
    template<typename SafetyRulesT = Aws::Vector<Rule>>
    void SetSafetyRules(SafetyRulesT&& value) { m_safetyRulesHasBeenSet = true; m_safetyRules = std::forward<SafetyRulesT>(value); }
    template<typename SafetyRulesT = Aws::Vector<Rule>>
    ListSafetyRulesResult& WithSafetyRules(SafetyRulesT&& value) { SetSafetyRules(std::forward<SafetyRulesT>(value)); return *this;}
    template<typename SafetyRulesT = Rule>
    ListSafetyRulesResult& AddSafetyRules(SafetyRulesT&& value) { m_safetyRulesHasBeenSet = true; m_safetyRules.emplace_back(std::forward<SafetyRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSafetyRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Rule> m_safetyRules;
    bool m_safetyRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
