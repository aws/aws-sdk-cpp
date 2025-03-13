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
   * <p>A complex type that contains the information about the request to list your
   * traffic policies.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyVersionsRequest">AWS
   * API Reference</a></p>
   */
  class ListTrafficPolicyVersionsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListTrafficPolicyVersionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTrafficPolicyVersions"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specify the value of <code>Id</code> of the traffic policy for which you want
     * to list all versions.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ListTrafficPolicyVersionsRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For your first request to <code>ListTrafficPolicyVersions</code>, don't
     * include the <code>TrafficPolicyVersionMarker</code> parameter.</p> <p>If you
     * have more traffic policy versions than the value of <code>MaxItems</code>,
     * <code>ListTrafficPolicyVersions</code> returns only the first group of
     * <code>MaxItems</code> versions. To get more traffic policy versions, submit
     * another <code>ListTrafficPolicyVersions</code> request. For the value of
     * <code>TrafficPolicyVersionMarker</code>, specify the value of
     * <code>TrafficPolicyVersionMarker</code> in the previous response.</p>
     */
    inline const Aws::String& GetTrafficPolicyVersionMarker() const { return m_trafficPolicyVersionMarker; }
    inline bool TrafficPolicyVersionMarkerHasBeenSet() const { return m_trafficPolicyVersionMarkerHasBeenSet; }
    template<typename TrafficPolicyVersionMarkerT = Aws::String>
    void SetTrafficPolicyVersionMarker(TrafficPolicyVersionMarkerT&& value) { m_trafficPolicyVersionMarkerHasBeenSet = true; m_trafficPolicyVersionMarker = std::forward<TrafficPolicyVersionMarkerT>(value); }
    template<typename TrafficPolicyVersionMarkerT = Aws::String>
    ListTrafficPolicyVersionsRequest& WithTrafficPolicyVersionMarker(TrafficPolicyVersionMarkerT&& value) { SetTrafficPolicyVersionMarker(std::forward<TrafficPolicyVersionMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of traffic policy versions that you want Amazon Route 53
     * to include in the response body for this request. If the specified traffic
     * policy has more than <code>MaxItems</code> versions, the value of
     * <code>IsTruncated</code> in the response is <code>true</code>, and the value of
     * the <code>TrafficPolicyVersionMarker</code> element is the ID of the first
     * version that Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListTrafficPolicyVersionsRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_trafficPolicyVersionMarker;
    bool m_trafficPolicyVersionMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
