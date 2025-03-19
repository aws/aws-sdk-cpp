/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
#include <aws/route53-recovery-control-config/model/AssertionRule.h>
#include <aws/route53-recovery-control-config/model/GatingRule.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class UpdateSafetyRuleResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateSafetyRuleResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateSafetyRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API UpdateSafetyRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assertion rule updated.</p>
     */
    inline const AssertionRule& GetAssertionRule() const { return m_assertionRule; }
    template<typename AssertionRuleT = AssertionRule>
    void SetAssertionRule(AssertionRuleT&& value) { m_assertionRuleHasBeenSet = true; m_assertionRule = std::forward<AssertionRuleT>(value); }
    template<typename AssertionRuleT = AssertionRule>
    UpdateSafetyRuleResult& WithAssertionRule(AssertionRuleT&& value) { SetAssertionRule(std::forward<AssertionRuleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gating rule updated.</p>
     */
    inline const GatingRule& GetGatingRule() const { return m_gatingRule; }
    template<typename GatingRuleT = GatingRule>
    void SetGatingRule(GatingRuleT&& value) { m_gatingRuleHasBeenSet = true; m_gatingRule = std::forward<GatingRuleT>(value); }
    template<typename GatingRuleT = GatingRule>
    UpdateSafetyRuleResult& WithGatingRule(GatingRuleT&& value) { SetGatingRule(std::forward<GatingRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSafetyRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssertionRule m_assertionRule;
    bool m_assertionRuleHasBeenSet = false;

    GatingRule m_gatingRule;
    bool m_gatingRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
