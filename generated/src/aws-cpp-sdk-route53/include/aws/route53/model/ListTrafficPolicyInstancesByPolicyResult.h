/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <aws/route53/model/TrafficPolicyInstance.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByPolicyResponse">AWS
   * API Reference</a></p>
   */
  class ListTrafficPolicyInstancesByPolicyResult
  {
  public:
    AWS_ROUTE53_API ListTrafficPolicyInstancesByPolicyResult() = default;
    AWS_ROUTE53_API ListTrafficPolicyInstancesByPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListTrafficPolicyInstancesByPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list that contains one <code>TrafficPolicyInstance</code> element for each
     * traffic policy instance that matches the elements in the request.</p>
     */
    inline const Aws::Vector<TrafficPolicyInstance>& GetTrafficPolicyInstances() const { return m_trafficPolicyInstances; }
    template<typename TrafficPolicyInstancesT = Aws::Vector<TrafficPolicyInstance>>
    void SetTrafficPolicyInstances(TrafficPolicyInstancesT&& value) { m_trafficPolicyInstancesHasBeenSet = true; m_trafficPolicyInstances = std::forward<TrafficPolicyInstancesT>(value); }
    template<typename TrafficPolicyInstancesT = Aws::Vector<TrafficPolicyInstance>>
    ListTrafficPolicyInstancesByPolicyResult& WithTrafficPolicyInstances(TrafficPolicyInstancesT&& value) { SetTrafficPolicyInstances(std::forward<TrafficPolicyInstancesT>(value)); return *this;}
    template<typename TrafficPolicyInstancesT = TrafficPolicyInstance>
    ListTrafficPolicyInstancesByPolicyResult& AddTrafficPolicyInstances(TrafficPolicyInstancesT&& value) { m_trafficPolicyInstancesHasBeenSet = true; m_trafficPolicyInstances.emplace_back(std::forward<TrafficPolicyInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>HostedZoneIdMarker</code> is the ID of the hosted zone of the first
     * traffic policy instance in the next group of traffic policy instances.</p>
     */
    inline const Aws::String& GetHostedZoneIdMarker() const { return m_hostedZoneIdMarker; }
    template<typename HostedZoneIdMarkerT = Aws::String>
    void SetHostedZoneIdMarker(HostedZoneIdMarkerT&& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = std::forward<HostedZoneIdMarkerT>(value); }
    template<typename HostedZoneIdMarkerT = Aws::String>
    ListTrafficPolicyInstancesByPolicyResult& WithHostedZoneIdMarker(HostedZoneIdMarkerT&& value) { SetHostedZoneIdMarker(std::forward<HostedZoneIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceNameMarker</code> is the name of the first traffic
     * policy instance in the next group of <code>MaxItems</code> traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const { return m_trafficPolicyInstanceNameMarker; }
    template<typename TrafficPolicyInstanceNameMarkerT = Aws::String>
    void SetTrafficPolicyInstanceNameMarker(TrafficPolicyInstanceNameMarkerT&& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = std::forward<TrafficPolicyInstanceNameMarkerT>(value); }
    template<typename TrafficPolicyInstanceNameMarkerT = Aws::String>
    ListTrafficPolicyInstancesByPolicyResult& WithTrafficPolicyInstanceNameMarker(TrafficPolicyInstanceNameMarkerT&& value) { SetTrafficPolicyInstanceNameMarker(std::forward<TrafficPolicyInstanceNameMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>,
     * <code>TrafficPolicyInstanceTypeMarker</code> is the DNS type of the resource
     * record sets that are associated with the first traffic policy instance in the
     * next group of <code>MaxItems</code> traffic policy instances.</p>
     */
    inline RRType GetTrafficPolicyInstanceTypeMarker() const { return m_trafficPolicyInstanceTypeMarker; }
    inline void SetTrafficPolicyInstanceTypeMarker(RRType value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }
    inline ListTrafficPolicyInstancesByPolicyResult& WithTrafficPolicyInstanceTypeMarker(RRType value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more traffic policy instances to be
     * listed. If the response was truncated, you can get the next group of traffic
     * policy instances by calling <code>ListTrafficPolicyInstancesByPolicy</code>
     * again and specifying the values of the <code>HostedZoneIdMarker</code>,
     * <code>TrafficPolicyInstanceNameMarker</code>, and
     * <code>TrafficPolicyInstanceTypeMarker</code> elements in the corresponding
     * request parameters.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListTrafficPolicyInstancesByPolicyResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>MaxItems</code> parameter in the
     * call to <code>ListTrafficPolicyInstancesByPolicy</code> that produced the
     * current response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPolicyInstancesByPolicyResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrafficPolicyInstancesByPolicyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrafficPolicyInstance> m_trafficPolicyInstances;
    bool m_trafficPolicyInstancesHasBeenSet = false;

    Aws::String m_hostedZoneIdMarker;
    bool m_hostedZoneIdMarkerHasBeenSet = false;

    Aws::String m_trafficPolicyInstanceNameMarker;
    bool m_trafficPolicyInstanceNameMarkerHasBeenSet = false;

    RRType m_trafficPolicyInstanceTypeMarker{RRType::NOT_SET};
    bool m_trafficPolicyInstanceTypeMarkerHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
