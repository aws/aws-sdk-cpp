/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/RateBasedRule.h>
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
namespace WAF
{
namespace Model
{
  class GetRateBasedRuleResult
  {
  public:
    AWS_WAF_API GetRateBasedRuleResult();
    AWS_WAF_API GetRateBasedRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetRateBasedRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline const RateBasedRule& GetRule() const{ return m_rule; }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline void SetRule(const RateBasedRule& value) { m_rule = value; }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline void SetRule(RateBasedRule&& value) { m_rule = std::move(value); }

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline GetRateBasedRuleResult& WithRule(const RateBasedRule& value) { SetRule(value); return *this;}

    /**
     * <p>Information about the <a>RateBasedRule</a> that you specified in the
     * <code>GetRateBasedRule</code> request.</p>
     */
    inline GetRateBasedRuleResult& WithRule(RateBasedRule&& value) { SetRule(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRateBasedRuleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRateBasedRuleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRateBasedRuleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RateBasedRule m_rule;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
