﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/RRType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Route53
{
namespace Model
{

  /**
   * <p>A complex type that contains the information about the request to list your
   * traffic policy instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByPolicyRequest">AWS
   * API Reference</a></p>
   */
  class ListTrafficPolicyInstancesByPolicyRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListTrafficPolicyInstancesByPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicyInstancesByPolicy"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the traffic policy for which you want to list traffic policy
     * instances.</p>
     */
    inline const Aws::String& GetTrafficPolicyId() const { return m_trafficPolicyId; }
    inline bool TrafficPolicyIdHasBeenSet() const { return m_trafficPolicyIdHasBeenSet; }
    template<typename TrafficPolicyIdT = Aws::String>
    void SetTrafficPolicyId(TrafficPolicyIdT&& value) { m_trafficPolicyIdHasBeenSet = true; m_trafficPolicyId = std::forward<TrafficPolicyIdT>(value); }
    template<typename TrafficPolicyIdT = Aws::String>
    ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyId(TrafficPolicyIdT&& value) { SetTrafficPolicyId(std::forward<TrafficPolicyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the traffic policy for which you want to list traffic policy
     * instances. The version must be associated with the traffic policy that is
     * specified by <code>TrafficPolicyId</code>.</p>
     */
    inline int GetTrafficPolicyVersion() const { return m_trafficPolicyVersion; }
    inline bool TrafficPolicyVersionHasBeenSet() const { return m_trafficPolicyVersionHasBeenSet; }
    inline void SetTrafficPolicyVersion(int value) { m_trafficPolicyVersionHasBeenSet = true; m_trafficPolicyVersion = value; }
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyVersion(int value) { SetTrafficPolicyVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstancesByPolicy</code>
     * request. </p> <p>For the value of <code>hostedzoneid</code>, specify the value
     * of <code>HostedZoneIdMarker</code> from the previous response, which is the
     * hosted zone ID of the first traffic policy instance that Amazon Route 53 will
     * return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline const Aws::String& GetHostedZoneIdMarker() const { return m_hostedZoneIdMarker; }
    inline bool HostedZoneIdMarkerHasBeenSet() const { return m_hostedZoneIdMarkerHasBeenSet; }
    template<typename HostedZoneIdMarkerT = Aws::String>
    void SetHostedZoneIdMarker(HostedZoneIdMarkerT&& value) { m_hostedZoneIdMarkerHasBeenSet = true; m_hostedZoneIdMarker = std::forward<HostedZoneIdMarkerT>(value); }
    template<typename HostedZoneIdMarkerT = Aws::String>
    ListTrafficPolicyInstancesByPolicyRequest& WithHostedZoneIdMarker(HostedZoneIdMarkerT&& value) { SetHostedZoneIdMarker(std::forward<HostedZoneIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstancesByPolicy</code>
     * request.</p> <p>For the value of <code>trafficpolicyinstancename</code>, specify
     * the value of <code>TrafficPolicyInstanceNameMarker</code> from the previous
     * response, which is the name of the first traffic policy instance that Amazon
     * Route 53 will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline const Aws::String& GetTrafficPolicyInstanceNameMarker() const { return m_trafficPolicyInstanceNameMarker; }
    inline bool TrafficPolicyInstanceNameMarkerHasBeenSet() const { return m_trafficPolicyInstanceNameMarkerHasBeenSet; }
    template<typename TrafficPolicyInstanceNameMarkerT = Aws::String>
    void SetTrafficPolicyInstanceNameMarker(TrafficPolicyInstanceNameMarkerT&& value) { m_trafficPolicyInstanceNameMarkerHasBeenSet = true; m_trafficPolicyInstanceNameMarker = std::forward<TrafficPolicyInstanceNameMarkerT>(value); }
    template<typename TrafficPolicyInstanceNameMarkerT = Aws::String>
    ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceNameMarker(TrafficPolicyInstanceNameMarkerT&& value) { SetTrafficPolicyInstanceNameMarker(std::forward<TrafficPolicyInstanceNameMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more traffic policy instances. To get more traffic
     * policy instances, submit another <code>ListTrafficPolicyInstancesByPolicy</code>
     * request.</p> <p>For the value of <code>trafficpolicyinstancetype</code>, specify
     * the value of <code>TrafficPolicyInstanceTypeMarker</code> from the previous
     * response, which is the name of the first traffic policy instance that Amazon
     * Route 53 will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more traffic policy instances to get.</p>
     */
    inline RRType GetTrafficPolicyInstanceTypeMarker() const { return m_trafficPolicyInstanceTypeMarker; }
    inline bool TrafficPolicyInstanceTypeMarkerHasBeenSet() const { return m_trafficPolicyInstanceTypeMarkerHasBeenSet; }
    inline void SetTrafficPolicyInstanceTypeMarker(RRType value) { m_trafficPolicyInstanceTypeMarkerHasBeenSet = true; m_trafficPolicyInstanceTypeMarker = value; }
    inline ListTrafficPolicyInstancesByPolicyRequest& WithTrafficPolicyInstanceTypeMarker(RRType value) { SetTrafficPolicyInstanceTypeMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of traffic policy instances to be included in the response
     * body for this request. If you have more than <code>MaxItems</code> traffic
     * policy instances, the value of the <code>IsTruncated</code> element in the
     * response is <code>true</code>, and the values of
     * <code>HostedZoneIdMarker</code>, <code>TrafficPolicyInstanceNameMarker</code>,
     * and <code>TrafficPolicyInstanceTypeMarker</code> represent the first traffic
     * policy instance that Amazon Route 53 will return if you submit another
     * request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPolicyInstancesByPolicyRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficPolicyId;
    bool m_trafficPolicyIdHasBeenSet = false;

    int m_trafficPolicyVersion{0};
    bool m_trafficPolicyVersionHasBeenSet = false;

    Aws::String m_hostedZoneIdMarker;
    bool m_hostedZoneIdMarkerHasBeenSet = false;

    Aws::String m_trafficPolicyInstanceNameMarker;
    bool m_trafficPolicyInstanceNameMarkerHasBeenSet = false;

    RRType m_trafficPolicyInstanceTypeMarker{RRType::NOT_SET};
    bool m_trafficPolicyInstanceTypeMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
