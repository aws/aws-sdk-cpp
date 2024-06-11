﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/RuleGroup.h>
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
  class CreateRuleGroupResult
  {
  public:
    AWS_WAF_API CreateRuleGroupResult();
    AWS_WAF_API CreateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API CreateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroup = value; }
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroup = std::move(value); }
    inline CreateRuleGroupResult& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}
    inline CreateRuleGroupResult& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }
    inline CreateRuleGroupResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline CreateRuleGroupResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline CreateRuleGroupResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRuleGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRuleGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRuleGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RuleGroup m_ruleGroup;

    Aws::String m_changeToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
