﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/RuleGroupMetadata.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class ListRuleGroupsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult();
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRuleGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRuleGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRuleGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule group metadata objects that you've defined. Depending on your
     * setting for max results and the number of rule groups, this might not be the
     * full list. </p>
     */
    inline const Aws::Vector<RuleGroupMetadata>& GetRuleGroups() const{ return m_ruleGroups; }
    inline void SetRuleGroups(const Aws::Vector<RuleGroupMetadata>& value) { m_ruleGroups = value; }
    inline void SetRuleGroups(Aws::Vector<RuleGroupMetadata>&& value) { m_ruleGroups = std::move(value); }
    inline ListRuleGroupsResult& WithRuleGroups(const Aws::Vector<RuleGroupMetadata>& value) { SetRuleGroups(value); return *this;}
    inline ListRuleGroupsResult& WithRuleGroups(Aws::Vector<RuleGroupMetadata>&& value) { SetRuleGroups(std::move(value)); return *this;}
    inline ListRuleGroupsResult& AddRuleGroups(const RuleGroupMetadata& value) { m_ruleGroups.push_back(value); return *this; }
    inline ListRuleGroupsResult& AddRuleGroups(RuleGroupMetadata&& value) { m_ruleGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRuleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRuleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRuleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RuleGroupMetadata> m_ruleGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
