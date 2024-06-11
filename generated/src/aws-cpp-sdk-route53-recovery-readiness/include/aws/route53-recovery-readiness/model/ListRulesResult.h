﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/ListRulesOutput.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListRulesResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesResult();
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of readiness rules for a specific resource type.</p>
     */
    inline const Aws::Vector<ListRulesOutput>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<ListRulesOutput>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<ListRulesOutput>&& value) { m_rules = std::move(value); }
    inline ListRulesResult& WithRules(const Aws::Vector<ListRulesOutput>& value) { SetRules(value); return *this;}
    inline ListRulesResult& WithRules(Aws::Vector<ListRulesOutput>&& value) { SetRules(std::move(value)); return *this;}
    inline ListRulesResult& AddRules(const ListRulesOutput& value) { m_rules.push_back(value); return *this; }
    inline ListRulesResult& AddRules(ListRulesOutput&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ListRulesOutput> m_rules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
