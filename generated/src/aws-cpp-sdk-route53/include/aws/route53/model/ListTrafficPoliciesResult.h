/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/TrafficPolicySummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPoliciesResponse">AWS
   * API Reference</a></p>
   */
  class ListTrafficPoliciesResult
  {
  public:
    AWS_ROUTE53_API ListTrafficPoliciesResult() = default;
    AWS_ROUTE53_API ListTrafficPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTrafficPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>TrafficPolicySummary</code> element for each
     * traffic policy that was created by the current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<TrafficPolicySummary>& GetTrafficPolicySummaries() const { return m_trafficPolicySummaries; }
    template<typename TrafficPolicySummariesT = Aws::Vector<TrafficPolicySummary>>
    void SetTrafficPolicySummaries(TrafficPolicySummariesT&& value) { m_trafficPolicySummariesHasBeenSet = true; m_trafficPolicySummaries = std::forward<TrafficPolicySummariesT>(value); }
    template<typename TrafficPolicySummariesT = Aws::Vector<TrafficPolicySummary>>
    ListTrafficPoliciesResult& WithTrafficPolicySummaries(TrafficPolicySummariesT&& value) { SetTrafficPolicySummaries(std::forward<TrafficPolicySummariesT>(value)); return *this;}
    template<typename TrafficPolicySummariesT = TrafficPolicySummary>
    ListTrafficPoliciesResult& AddTrafficPolicySummaries(TrafficPolicySummariesT&& value) { m_trafficPolicySummariesHasBeenSet = true; m_trafficPolicySummaries.emplace_back(std::forward<TrafficPolicySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of traffic policies by
     * submitting another <code>ListTrafficPolicies</code> request and specifying the
     * value of <code>TrafficPolicyIdMarker</code> in the
     * <code>TrafficPolicyIdMarker</code> request parameter.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListTrafficPoliciesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy in the
     * next group of <code>MaxItems</code> traffic policies.</p>
     */
    inline const Aws::String& GetTrafficPolicyIdMarker() const { return m_trafficPolicyIdMarker; }
    template<typename TrafficPolicyIdMarkerT = Aws::String>
    void SetTrafficPolicyIdMarker(TrafficPolicyIdMarkerT&& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = std::forward<TrafficPolicyIdMarkerT>(value); }
    template<typename TrafficPolicyIdMarkerT = Aws::String>
    ListTrafficPoliciesResult& WithTrafficPolicyIdMarker(TrafficPolicyIdMarkerT&& value) { SetTrafficPolicyIdMarker(std::forward<TrafficPolicyIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * <code>ListTrafficPolicies</code> request that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPoliciesResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrafficPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficPolicySummary> m_trafficPolicySummaries;
    bool m_trafficPolicySummariesHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_trafficPolicyIdMarker;
    bool m_trafficPolicyIdMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
