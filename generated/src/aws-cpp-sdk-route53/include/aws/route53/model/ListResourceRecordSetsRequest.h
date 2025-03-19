/**
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
   * <p>A request for the resource record sets that are associated with a specified
   * hosted zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSetsRequest">AWS
   * API Reference</a></p>
   */
  class ListResourceRecordSetsRequest : public Route53Request
  {
  public:
    AWS_ROUTE53_API ListResourceRecordSetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceRecordSets"; }

    AWS_ROUTE53_API Aws::String SerializePayload() const override;

    AWS_ROUTE53_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the hosted zone that contains the resource record sets that you
     * want to list.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    inline bool HostedZoneIdHasBeenSet() const { return m_hostedZoneIdHasBeenSet; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ListResourceRecordSetsRequest& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first name in the lexicographic ordering of resource record sets that you
     * want to list. If the specified record name doesn't exist, the results begin with
     * the first resource record set that has a name greater than the value of
     * <code>name</code>.</p>
     */
    inline const Aws::String& GetStartRecordName() const { return m_startRecordName; }
    inline bool StartRecordNameHasBeenSet() const { return m_startRecordNameHasBeenSet; }
    template<typename StartRecordNameT = Aws::String>
    void SetStartRecordName(StartRecordNameT&& value) { m_startRecordNameHasBeenSet = true; m_startRecordName = std::forward<StartRecordNameT>(value); }
    template<typename StartRecordNameT = Aws::String>
    ListResourceRecordSetsRequest& WithStartRecordName(StartRecordNameT&& value) { SetStartRecordName(std::forward<StartRecordNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource record set to begin the record listing from.</p>
     * <p>Valid values for basic resource record sets: <code>A</code> |
     * <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> | <code>MX</code> |
     * <code>NAPTR</code> | <code>NS</code> | <code>PTR</code> | <code>SOA</code> |
     * <code>SPF</code> | <code>SRV</code> | <code>TXT</code> </p> <p>Values for
     * weighted, latency, geolocation, and failover resource record sets:
     * <code>A</code> | <code>AAAA</code> | <code>CAA</code> | <code>CNAME</code> |
     * <code>MX</code> | <code>NAPTR</code> | <code>PTR</code> | <code>SPF</code> |
     * <code>SRV</code> | <code>TXT</code> </p> <p>Values for alias resource record
     * sets: </p> <ul> <li> <p> <b>API Gateway custom regional API or edge-optimized
     * API</b>: A</p> </li> <li> <p> <b>CloudFront distribution</b>: A or AAAA</p>
     * </li> <li> <p> <b>Elastic Beanstalk environment that has a regionalized
     * subdomain</b>: A</p> </li> <li> <p> <b>Elastic Load Balancing load balancer</b>:
     * A | AAAA</p> </li> <li> <p> <b>S3 bucket</b>: A</p> </li> <li> <p> <b>VPC
     * interface VPC endpoint</b>: A</p> </li> <li> <p> <b>Another resource record set
     * in this hosted zone:</b> The type of the resource record set that the alias
     * references.</p> </li> </ul> <p>Constraint: Specifying <code>type</code> without
     * specifying <code>name</code> returns an <code>InvalidInput</code> error.</p>
     */
    inline RRType GetStartRecordType() const { return m_startRecordType; }
    inline bool StartRecordTypeHasBeenSet() const { return m_startRecordTypeHasBeenSet; }
    inline void SetStartRecordType(RRType value) { m_startRecordTypeHasBeenSet = true; m_startRecordType = value; }
    inline ListResourceRecordSetsRequest& WithStartRecordType(RRType value) { SetStartRecordType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>Resource record sets that have a routing policy other than simple:</i> If
     * results were truncated for a given DNS name and type, specify the value of
     * <code>NextRecordIdentifier</code> from the previous response to get the next
     * resource record set that has the current DNS name and type.</p>
     */
    inline const Aws::String& GetStartRecordIdentifier() const { return m_startRecordIdentifier; }
    inline bool StartRecordIdentifierHasBeenSet() const { return m_startRecordIdentifierHasBeenSet; }
    template<typename StartRecordIdentifierT = Aws::String>
    void SetStartRecordIdentifier(StartRecordIdentifierT&& value) { m_startRecordIdentifierHasBeenSet = true; m_startRecordIdentifier = std::forward<StartRecordIdentifierT>(value); }
    template<typename StartRecordIdentifierT = Aws::String>
    ListResourceRecordSetsRequest& WithStartRecordIdentifier(StartRecordIdentifierT&& value) { SetStartRecordIdentifier(std::forward<StartRecordIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Optional) The maximum number of resource records sets to include in the
     * response body for this request. If the response includes more than
     * <code>maxitems</code> resource record sets, the value of the
     * <code>IsTruncated</code> element in the response is <code>true</code>, and the
     * values of the <code>NextRecordName</code> and <code>NextRecordType</code>
     * elements in the response identify the first resource record set in the next
     * group of <code>maxitems</code> resource record sets.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListResourceRecordSetsRequest& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    Aws::String m_startRecordName;
    bool m_startRecordNameHasBeenSet = false;

    RRType m_startRecordType{RRType::NOT_SET};
    bool m_startRecordTypeHasBeenSet = false;

    Aws::String m_startRecordIdentifier;
    bool m_startRecordIdentifierHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
