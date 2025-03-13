/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZoneType.h>
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
   * <p>A request to retrieve a list of the public and private hosted zones that are
   * associated with the current Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesRequest">AWS
   * API Reference</a></p>
   */
  class ListHostedZonesRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListHostedZonesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostedZones"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>If the value of <code>IsTruncated</code> in the previous response was
     * <code>true</code>, you have more hosted zones. To get more hosted zones, submit
     * another <code>ListHostedZones</code> request. </p> <p>For the value of
     * <code>marker</code>, specify the value of <code>NextMarker</code> from the
     * previous response, which is the ID of the first hosted zone that Amazon Route 53
     * will return if you submit another request.</p> <p>If the value of
     * <code>IsTruncated</code> in the previous response was <code>false</code>, there
     * are no more hosted zones to get.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListHostedZonesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If you have more than <code>maxitems</code> hosted zones, the value
     * of <code>IsTruncated</code> in the response is <code>true</code>, and the value
     * of <code>NextMarker</code> is the hosted zone ID of the first hosted zone that
     * Route 53 will return if you submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHostedZonesRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you're using reusable delegation sets and you want to list all of the
     * hosted zones that are associated with a reusable delegation set, specify the ID
     * of that reusable delegation set. </p>
     */
    inline const Aws::String& GetDelegationSetId() const { return m_delegationSetId; }
    inline bool DelegationSetIdHasBeenSet() const { return m_delegationSetIdHasBeenSet; }
    template<typename DelegationSetIdT = Aws::String>
    void SetDelegationSetId(DelegationSetIdT&& value) { m_delegationSetIdHasBeenSet = true; m_delegationSetId = std::forward<DelegationSetIdT>(value); }
    template<typename DelegationSetIdT = Aws::String>
    ListHostedZonesRequest& WithDelegationSetId(DelegationSetIdT&& value) { SetDelegationSetId(std::forward<DelegationSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> (Optional) Specifies if the hosted zone is private. </p>
     */
    inline HostedZoneType GetHostedZoneType() const { return m_hostedZoneType; }
    inline bool HostedZoneTypeHasBeenSet() const { return m_hostedZoneTypeHasBeenSet; }
    inline void SetHostedZoneType(HostedZoneType value) { m_hostedZoneTypeHasBeenSet = true; m_hostedZoneType = value; }
    inline ListHostedZonesRequest& WithHostedZoneType(HostedZoneType value) { SetHostedZoneType(value); return *this;}
    ///@}
  private:

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_delegationSetId;
    bool m_delegationSetIdHasBeenSet = false;

    HostedZoneType m_hostedZoneType{HostedZoneType::NOT_SET};
    bool m_hostedZoneTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
