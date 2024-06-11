﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SubscribedRuleGroupSummary.h>
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
  class ListSubscribedRuleGroupsResult
  {
  public:
    AWS_WAF_API ListSubscribedRuleGroupsResult();
    AWS_WAF_API ListSubscribedRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListSubscribedRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListSubscribedRuleGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListSubscribedRuleGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListSubscribedRuleGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline const Aws::Vector<SubscribedRuleGroupSummary>& GetRuleGroups() const{ return m_ruleGroups; }
    inline void SetRuleGroups(const Aws::Vector<SubscribedRuleGroupSummary>& value) { m_ruleGroups = value; }
    inline void SetRuleGroups(Aws::Vector<SubscribedRuleGroupSummary>&& value) { m_ruleGroups = std::move(value); }
    inline ListSubscribedRuleGroupsResult& WithRuleGroups(const Aws::Vector<SubscribedRuleGroupSummary>& value) { SetRuleGroups(value); return *this;}
    inline ListSubscribedRuleGroupsResult& WithRuleGroups(Aws::Vector<SubscribedRuleGroupSummary>&& value) { SetRuleGroups(std::move(value)); return *this;}
    inline ListSubscribedRuleGroupsResult& AddRuleGroups(const SubscribedRuleGroupSummary& value) { m_ruleGroups.push_back(value); return *this; }
    inline ListSubscribedRuleGroupsResult& AddRuleGroups(SubscribedRuleGroupSummary&& value) { m_ruleGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSubscribedRuleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSubscribedRuleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSubscribedRuleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<SubscribedRuleGroupSummary> m_ruleGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
