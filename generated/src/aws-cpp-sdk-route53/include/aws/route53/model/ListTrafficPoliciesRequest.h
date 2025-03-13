/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains the information about the request to list the
   * traffic policies that are associated with the current Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class ListTrafficPoliciesRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListTrafficPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicies"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>(Conditional) For your first request to <code>ListTrafficPolicies</code>,
     * don't include the <code>TrafficPolicyIdMarker</code> parameter.</p> <p>If you
     * have more traffic policies than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicies</code> returns only the first <code>MaxItems</code>
     * traffic policies. To get the next group of policies, submit another request to
     * <code>ListTrafficPolicies</code>. For the value of
     * <code>TrafficPolicyIdMarker</code>, specify the value of
     * <code>TrafficPolicyIdMarker</code> that was returned in the previous
     * response.</p>
     */
    inline const Aws::String& GetTrafficPolicyIdMarker() const { return m_trafficPolicyIdMarker; }
    inline bool TrafficPolicyIdMarkerHasBeenSet() const { return m_trafficPolicyIdMarkerHasBeenSet; }
    template<typename TrafficPolicyIdMarkerT = Aws::String>
    void SetTrafficPolicyIdMarker(TrafficPolicyIdMarkerT&& value) { m_trafficPolicyIdMarkerHasBeenSet = true; m_trafficPolicyIdMarker = std::forward<TrafficPolicyIdMarkerT>(value); }
    template<typename TrafficPolicyIdMarkerT = Aws::String>
    ListTrafficPoliciesRequest& WithTrafficPolicyIdMarker(TrafficPolicyIdMarkerT&& value) { SetTrafficPolicyIdMarker(std::forward<TrafficPolicyIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of traffic policies that you want Amazon Route
     * 53 to return in response to this request. If you have more than
     * <code>MaxItems</code> traffic policies, the value of <code>IsTruncated</code> in
     * the response is <code>true</code>, and the value of
     * <code>TrafficPolicyIdMarker</code> is the ID of the first traffic policy that
     * Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPoliciesRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficPolicyIdMarker;
    bool m_trafficPolicyIdMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
