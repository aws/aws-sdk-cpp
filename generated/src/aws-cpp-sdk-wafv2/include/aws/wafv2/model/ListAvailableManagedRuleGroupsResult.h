/**
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
    AWS_WAFV2_API ListAvailableManagedRuleGroupsResult() = default;
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
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListAvailableManagedRuleGroupsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of managed rule groups that you can use. If you specified a
     * <code>Limit</code> in your request, this might not be the full list. </p>
     */
    inline const Aws::Vector<ManagedRuleGroupSummary>& GetManagedRuleGroups() const { return m_managedRuleGroups; }
    template<typename ManagedRuleGroupsT = Aws::Vector<ManagedRuleGroupSummary>>
    void SetManagedRuleGroups(ManagedRuleGroupsT&& value) { m_managedRuleGroupsHasBeenSet = true; m_managedRuleGroups = std::forward<ManagedRuleGroupsT>(value); }
    template<typename ManagedRuleGroupsT = Aws::Vector<ManagedRuleGroupSummary>>
    ListAvailableManagedRuleGroupsResult& WithManagedRuleGroups(ManagedRuleGroupsT&& value) { SetManagedRuleGroups(std::forward<ManagedRuleGroupsT>(value)); return *this;}
    template<typename ManagedRuleGroupsT = ManagedRuleGroupSummary>
    ListAvailableManagedRuleGroupsResult& AddManagedRuleGroups(ManagedRuleGroupsT&& value) { m_managedRuleGroupsHasBeenSet = true; m_managedRuleGroups.emplace_back(std::forward<ManagedRuleGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAvailableManagedRuleGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ManagedRuleGroupSummary> m_managedRuleGroups;
    bool m_managedRuleGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
