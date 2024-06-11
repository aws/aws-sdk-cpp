﻿/**
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
  class DescribeSafetyRuleResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeSafetyRuleResult();
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeSafetyRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API DescribeSafetyRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The assertion rule in the response.</p>
     */
    inline const AssertionRule& GetAssertionRule() const{ return m_assertionRule; }
    inline void SetAssertionRule(const AssertionRule& value) { m_assertionRule = value; }
    inline void SetAssertionRule(AssertionRule&& value) { m_assertionRule = std::move(value); }
    inline DescribeSafetyRuleResult& WithAssertionRule(const AssertionRule& value) { SetAssertionRule(value); return *this;}
    inline DescribeSafetyRuleResult& WithAssertionRule(AssertionRule&& value) { SetAssertionRule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The gating rule in the response.</p>
     */
    inline const GatingRule& GetGatingRule() const{ return m_gatingRule; }
    inline void SetGatingRule(const GatingRule& value) { m_gatingRule = value; }
    inline void SetGatingRule(GatingRule&& value) { m_gatingRule = std::move(value); }
    inline DescribeSafetyRuleResult& WithGatingRule(const GatingRule& value) { SetGatingRule(value); return *this;}
    inline DescribeSafetyRuleResult& WithGatingRule(GatingRule&& value) { SetGatingRule(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSafetyRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSafetyRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSafetyRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AssertionRule m_assertionRule;

    GatingRule m_gatingRule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
