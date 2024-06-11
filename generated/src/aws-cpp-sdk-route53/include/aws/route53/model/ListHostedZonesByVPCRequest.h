/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/Route53Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPCRegion.h>
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
   * <p>Lists all the private hosted zones that a specified VPC is associated with,
   * regardless of which Amazon Web Services account created the hosted
   * zones.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByVPCRequest">AWS
   * API Reference</a></p>
   */
  class ListHostedZonesByVPCRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListHostedZonesByVPCRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostedZonesByVPC"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon VPC that you want to list hosted zones for.</p>
     */
    inline const Aws::String& GetVPCId() const{ return m_vPCId; }
    inline bool VPCIdHasBeenSet() const { return m_vPCIdHasBeenSet; }
    inline void SetVPCId(const Aws::String& value) { m_vPCIdHasBeenSet = true; m_vPCId = value; }
    inline void SetVPCId(Aws::String&& value) { m_vPCIdHasBeenSet = true; m_vPCId = std::move(value); }
    inline void SetVPCId(const char* value) { m_vPCIdHasBeenSet = true; m_vPCId.assign(value); }
    inline ListHostedZonesByVPCRequest& WithVPCId(const Aws::String& value) { SetVPCId(value); return *this;}
    inline ListHostedZonesByVPCRequest& WithVPCId(Aws::String&& value) { SetVPCId(std::move(value)); return *this;}
    inline ListHostedZonesByVPCRequest& WithVPCId(const char* value) { SetVPCId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the Amazon VPC that you specified for <code>VPCId</code>, the Amazon Web
     * Services Region that you created the VPC in. </p>
     */
    inline const VPCRegion& GetVPCRegion() const{ return m_vPCRegion; }
    inline bool VPCRegionHasBeenSet() const { return m_vPCRegionHasBeenSet; }
    inline void SetVPCRegion(const VPCRegion& value) { m_vPCRegionHasBeenSet = true; m_vPCRegion = value; }
    inline void SetVPCRegion(VPCRegion&& value) { m_vPCRegionHasBeenSet = true; m_vPCRegion = std::move(value); }
    inline ListHostedZonesByVPCRequest& WithVPCRegion(const VPCRegion& value) { SetVPCRegion(value); return *this;}
    inline ListHostedZonesByVPCRequest& WithVPCRegion(VPCRegion&& value) { SetVPCRegion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of hosted zones that you want Amazon Route 53
     * to return. If the specified VPC is associated with more than
     * <code>MaxItems</code> hosted zones, the response includes a
     * <code>NextToken</code> element. <code>NextToken</code> contains an encrypted
     * token that identifies the first hosted zone that Route 53 will return if you
     * submit another request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItemsHasBeenSet = true; m_maxItems.assign(value); }
    inline ListHostedZonesByVPCRequest& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListHostedZonesByVPCRequest& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListHostedZonesByVPCRequest& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous response included a <code>NextToken</code> element, the
     * specified VPC is associated with more hosted zones. To get more hosted zones,
     * submit another <code>ListHostedZonesByVPC</code> request. </p> <p>For the value
     * of <code>NextToken</code>, specify the value of <code>NextToken</code> from the
     * previous response.</p> <p>If the previous response didn't include a
     * <code>NextToken</code> element, there are no more hosted zones to get.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListHostedZonesByVPCRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListHostedZonesByVPCRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListHostedZonesByVPCRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_vPCId;
    bool m_vPCIdHasBeenSet = false;

    VPCRegion m_vPCRegion;
    bool m_vPCRegionHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
