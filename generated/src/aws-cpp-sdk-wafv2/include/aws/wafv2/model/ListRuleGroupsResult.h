/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/RuleGroupSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_WAFV2_API ListRuleGroupsResult();
    AWS_WAFV2_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline ListRuleGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline const Aws::Vector<RuleGroupSummary>& GetRuleGroups() const{ return m_ruleGroups; }

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline void SetRuleGroups(const Aws::Vector<RuleGroupSummary>& value) { m_ruleGroups = value; }

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline void SetRuleGroups(Aws::Vector<RuleGroupSummary>&& value) { m_ruleGroups = std::move(value); }

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline ListRuleGroupsResult& WithRuleGroups(const Aws::Vector<RuleGroupSummary>& value) { SetRuleGroups(value); return *this;}

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline ListRuleGroupsResult& WithRuleGroups(Aws::Vector<RuleGroupSummary>&& value) { SetRuleGroups(std::move(value)); return *this;}

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline ListRuleGroupsResult& AddRuleGroups(const RuleGroupSummary& value) { m_ruleGroups.push_back(value); return *this; }

    /**
     * <p>Array of rule groups. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline ListRuleGroupsResult& AddRuleGroups(RuleGroupSummary&& value) { m_ruleGroups.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListRuleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListRuleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListRuleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextMarker;

    Aws::Vector<RuleGroupSummary> m_ruleGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
