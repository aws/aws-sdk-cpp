﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ManagedRuleGroupSummary.h>
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
  class ListAvailableManagedRuleGroupsResult
  {
  public:
    AWS_WAFV2_API ListAvailableManagedRuleGroupsResult();
    AWS_WAFV2_API ListAvailableManagedRuleGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListAvailableManagedRuleGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline ListAvailableManagedRuleGroupsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ListAvailableManagedRuleGroupsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of managed rule groups that you can use. If you specified a
     * <code>Limit</code> in your request, this might not be the full list. </p>
     */
    inline const Aws::Vector<ManagedRuleGroupSummary>& GetManagedRuleGroups() const{ return m_managedRuleGroups; }
    inline void SetManagedRuleGroups(const Aws::Vector<ManagedRuleGroupSummary>& value) { m_managedRuleGroups = value; }
    inline void SetManagedRuleGroups(Aws::Vector<ManagedRuleGroupSummary>&& value) { m_managedRuleGroups = std::move(value); }
    inline ListAvailableManagedRuleGroupsResult& WithManagedRuleGroups(const Aws::Vector<ManagedRuleGroupSummary>& value) { SetManagedRuleGroups(value); return *this;}
    inline ListAvailableManagedRuleGroupsResult& WithManagedRuleGroups(Aws::Vector<ManagedRuleGroupSummary>&& value) { SetManagedRuleGroups(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupsResult& AddManagedRuleGroups(const ManagedRuleGroupSummary& value) { m_managedRuleGroups.push_back(value); return *this; }
    inline ListAvailableManagedRuleGroupsResult& AddManagedRuleGroups(ManagedRuleGroupSummary&& value) { m_managedRuleGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAvailableManagedRuleGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAvailableManagedRuleGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAvailableManagedRuleGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;

    Aws::Vector<ManagedRuleGroupSummary> m_managedRuleGroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
