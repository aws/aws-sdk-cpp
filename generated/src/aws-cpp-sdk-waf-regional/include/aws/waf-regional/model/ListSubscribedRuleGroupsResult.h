/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/SubscribedRuleGroupSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListSubscribedRuleGroupsResult
  {
  public:
    AWS_WAFREGIONAL_API ListSubscribedRuleGroupsResult();
    AWS_WAFREGIONAL_API ListSubscribedRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListSubscribedRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListSubscribedRuleGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListSubscribedRuleGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>If you have more objects than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more objects, submit another
     * <code>ListSubscribedRuleGroups</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline ListSubscribedRuleGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline const Aws::Vector<SubscribedRuleGroupSummary>& GetRuleGroups() const{ return m_ruleGroups; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline void SetRuleGroups(const Aws::Vector<SubscribedRuleGroupSummary>& value) { m_ruleGroups = value; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline void SetRuleGroups(Aws::Vector<SubscribedRuleGroupSummary>&& value) { m_ruleGroups = std::move(value); }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListSubscribedRuleGroupsResult& WithRuleGroups(const Aws::Vector<SubscribedRuleGroupSummary>& value) { SetRuleGroups(value); return *this;}

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListSubscribedRuleGroupsResult& WithRuleGroups(Aws::Vector<SubscribedRuleGroupSummary>&& value) { SetRuleGroups(std::move(value)); return *this;}

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListSubscribedRuleGroupsResult& AddRuleGroups(const SubscribedRuleGroupSummary& value) { m_ruleGroups.push_back(value); return *this; }

    /**
     * <p>An array of <a>RuleGroup</a> objects.</p>
     */
    inline ListSubscribedRuleGroupsResult& AddRuleGroups(SubscribedRuleGroupSummary&& value) { m_ruleGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<SubscribedRuleGroupSummary> m_ruleGroups;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
