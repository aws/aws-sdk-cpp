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
   * <p>Retrieves a list of the public and private hosted zones that are associated
   * with the current Amazon Web Services account in ASCII order by domain name.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByNameRequest">AWS
   * API Reference</a></p>
   */
  class ListHostedZonesByNameRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListHostedZonesByNameRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListHostedZonesByName"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>,
     * include the <code>dnsname</code> parameter only if you want to specify the name
     * of the first hosted zone in the response. If you don't include the
     * <code>dnsname</code> parameter, Amazon Route 53 returns all of the hosted zones
     * that were created by the current Amazon Web Services account, in ASCII order.
     * For subsequent requests, include both <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters. For <code>dnsname</code>, specify the
     * value of <code>NextDNSName</code> from the previous response.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    inline bool DNSNameHasBeenSet() const { return m_dNSNameHasBeenSet; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    ListHostedZonesByNameRequest& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) For your first request to <code>ListHostedZonesByName</code>, do
     * not include the <code>hostedzoneid</code> parameter.</p> <p>If you have more
     * hosted zones than the value of <code>maxitems</code>,
     * <code>ListHostedZonesByName</code> returns only the first <code>maxitems</code>
     * hosted zones. To get the next group of <code>maxitems</code> hosted zones,
     * submit another request to <code>ListHostedZonesByName</code> and include both
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters. For the value of
     * <code>hostedzoneid</code>, specify the value of the
     * <code>NextHostedZoneId</code> element from the previous response.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ListHostedZonesByNameRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of hosted zones to be included in the response body for
     * this request. If you have more than <code>maxitems</code> hosted zones, then the
     * value of the <code>IsTruncated</code> element in the response is true, and the
     * values of <code>NextDNSName</code> and <code>NextHostedZoneId</code> specify the
     * first hosted zone in the next group of <code>maxitems</code> hosted zones. </p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHostedZonesByNameRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
