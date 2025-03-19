/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/TrafficPolicy.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyVersionsResponse">AWS
   * API Reference</a></p>
   */
  class ListTrafficPolicyVersionsResult
  {
  public:
    AWS_ROUTE53_API ListTrafficPolicyVersionsResult() = default;
    AWS_ROUTE53_API ListTrafficPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTrafficPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>TrafficPolicy</code> element for each traffic
     * policy version that is associated with the specified traffic policy.</p>
     */
    inline const Aws::Vector<TrafficPolicy>& GetTrafficPolicies() const { return m_trafficPolicies; }
    template<typename TrafficPoliciesT = Aws::Vector<TrafficPolicy>>
    void SetTrafficPolicies(TrafficPoliciesT&& value) { m_trafficPoliciesHasBeenSet = true; m_trafficPolicies = std::forward<TrafficPoliciesT>(value); }
    template<typename TrafficPoliciesT = Aws::Vector<TrafficPolicy>>
    ListTrafficPolicyVersionsResult& WithTrafficPolicies(TrafficPoliciesT&& value) { SetTrafficPolicies(std::forward<TrafficPoliciesT>(value)); return *this;}
    template<typename TrafficPoliciesT = TrafficPolicy>
    ListTrafficPolicyVersionsResult& AddTrafficPolicies(TrafficPoliciesT&& value) { m_trafficPoliciesHasBeenSet = true; m_trafficPolicies.emplace_back(std::forward<TrafficPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more traffic policies to be listed.
     * If the response was truncated, you can get the next group of traffic policies by
     * submitting another <code>ListTrafficPolicyVersions</code> request and specifying
     * the value of <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListTrafficPolicyVersionsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>TrafficPolicyVersionMarker</code> identifies the first traffic policy that
     * Amazon Route 53 will return if you submit another request. Call
     * <code>ListTrafficPolicyVersions</code> again and specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the
     * <code>TrafficPolicyVersionMarker</code> request parameter.</p> <p>This element
     * is present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetTrafficPolicyVersionMarker() const { return m_trafficPolicyVersionMarker; }
    template<typename TrafficPolicyVersionMarkerT = Aws::String>
    void SetTrafficPolicyVersionMarker(TrafficPolicyVersionMarkerT&& value) { m_trafficPolicyVersionMarkerHasBeenSet = true; m_trafficPolicyVersionMarker = std::forward<TrafficPolicyVersionMarkerT>(value); }
    template<typename TrafficPolicyVersionMarkerT = Aws::String>
    ListTrafficPolicyVersionsResult& WithTrafficPolicyVersionMarker(TrafficPolicyVersionMarkerT&& value) { SetTrafficPolicyVersionMarker(std::forward<TrafficPolicyVersionMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * <code>ListTrafficPolicyVersions</code> request that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPolicyVersionsResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrafficPolicyVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficPolicy> m_trafficPolicies;
    bool m_trafficPoliciesHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_trafficPolicyVersionMarker;
    bool m_trafficPolicyVersionMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
