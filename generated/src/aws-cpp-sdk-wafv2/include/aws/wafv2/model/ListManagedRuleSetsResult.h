/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/ManagedRuleSetSummary.h>
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
  class ListManagedRuleSetsResult
  {
  public:
    AWS_WAFV2_API ListManagedRuleSetsResult() = default;
    AWS_WAFV2_API ListManagedRuleSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListManagedRuleSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListManagedRuleSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Your managed rule sets. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline const Aws::Vector<ManagedRuleSetSummary>& GetManagedRuleSets() const { return m_managedRuleSets; }
    template<typename ManagedRuleSetsT = Aws::Vector<ManagedRuleSetSummary>>
    void SetManagedRuleSets(ManagedRuleSetsT&& value) { m_managedRuleSetsHasBeenSet = true; m_managedRuleSets = std::forward<ManagedRuleSetsT>(value); }
    template<typename ManagedRuleSetsT = Aws::Vector<ManagedRuleSetSummary>>
    ListManagedRuleSetsResult& WithManagedRuleSets(ManagedRuleSetsT&& value) { SetManagedRuleSets(std::forward<ManagedRuleSetsT>(value)); return *this;}
    template<typename ManagedRuleSetsT = ManagedRuleSetSummary>
    ListManagedRuleSetsResult& AddManagedRuleSets(ManagedRuleSetsT&& value) { m_managedRuleSetsHasBeenSet = true; m_managedRuleSets.emplace_back(std::forward<ManagedRuleSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedRuleSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ManagedRuleSetSummary> m_managedRuleSets;
    bool m_managedRuleSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
