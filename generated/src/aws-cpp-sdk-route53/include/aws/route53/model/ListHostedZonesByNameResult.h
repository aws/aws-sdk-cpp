/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/HostedZone.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByNameResponse">AWS
   * API Reference</a></p>
   */
  class ListHostedZonesByNameResult
  {
  public:
    AWS_ROUTE53_API ListHostedZonesByNameResult() = default;
    AWS_ROUTE53_API ListHostedZonesByNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHostedZonesByNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const Aws::Vector<HostedZone>& GetHostedZones() const { return m_hostedZones; }
    template<typename HostedZonesT = Aws::Vector<HostedZone>>
    void SetHostedZones(HostedZonesT&& value) { m_hostedZonesHasBeenSet = true; m_hostedZones = std::forward<HostedZonesT>(value); }
    template<typename HostedZonesT = Aws::Vector<HostedZone>>
    ListHostedZonesByNameResult& WithHostedZones(HostedZonesT&& value) { SetHostedZones(std::forward<HostedZonesT>(value)); return *this;}
    template<typename HostedZonesT = HostedZone>
    ListHostedZonesByNameResult& AddHostedZones(HostedZonesT&& value) { m_hostedZonesHasBeenSet = true; m_hostedZones.emplace_back(std::forward<HostedZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the second and subsequent calls to <code>ListHostedZonesByName</code>,
     * <code>DNSName</code> is the value that you specified for the
     * <code>dnsname</code> parameter in the request that produced the current
     * response.</p>
     */
    inline const Aws::String& GetDNSName() const { return m_dNSName; }
    template<typename DNSNameT = Aws::String>
    void SetDNSName(DNSNameT&& value) { m_dNSNameHasBeenSet = true; m_dNSName = std::forward<DNSNameT>(value); }
    template<typename DNSNameT = Aws::String>
    ListHostedZonesByNameResult& WithDNSName(DNSNameT&& value) { SetDNSName(std::forward<DNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID that Amazon Route 53 assigned to the hosted zone when you created
     * it.</p>
     */
    inline const Aws::String& GetHostedZoneId() const { return m_hostedZoneId; }
    template<typename HostedZoneIdT = Aws::String>
    void SetHostedZoneId(HostedZoneIdT&& value) { m_hostedZoneIdHasBeenSet = true; m_hostedZoneId = std::forward<HostedZoneIdT>(value); }
    template<typename HostedZoneIdT = Aws::String>
    ListHostedZonesByNameResult& WithHostedZoneId(HostedZoneIdT&& value) { SetHostedZoneId(std::forward<HostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more hosted zones to be listed. If
     * the response was truncated, you can get the next group of <code>maxitems</code>
     * hosted zones by calling <code>ListHostedZonesByName</code> again and specifying
     * the values of <code>NextDNSName</code> and <code>NextHostedZoneId</code>
     * elements in the <code>dnsname</code> and <code>hostedzoneid</code>
     * parameters.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListHostedZonesByNameResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is true, the value of <code>NextDNSName</code> is
     * the name of the first hosted zone in the next group of <code>maxitems</code>
     * hosted zones. Call <code>ListHostedZonesByName</code> again and specify the
     * value of <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
     * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
     * <p>This element is present only if <code>IsTruncated</code> is
     * <code>true</code>.</p>
     */
    inline const Aws::String& GetNextDNSName() const { return m_nextDNSName; }
    template<typename NextDNSNameT = Aws::String>
    void SetNextDNSName(NextDNSNameT&& value) { m_nextDNSNameHasBeenSet = true; m_nextDNSName = std::forward<NextDNSNameT>(value); }
    template<typename NextDNSNameT = Aws::String>
    ListHostedZonesByNameResult& WithNextDNSName(NextDNSNameT&& value) { SetNextDNSName(std::forward<NextDNSNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextHostedZoneId</code> identifies the first hosted zone in the next group
     * of <code>maxitems</code> hosted zones. Call <code>ListHostedZonesByName</code>
     * again and specify the value of <code>NextDNSName</code> and
     * <code>NextHostedZoneId</code> in the <code>dnsname</code> and
     * <code>hostedzoneid</code> parameters, respectively.</p> <p>This element is
     * present only if <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetNextHostedZoneId() const { return m_nextHostedZoneId; }
    template<typename NextHostedZoneIdT = Aws::String>
    void SetNextHostedZoneId(NextHostedZoneIdT&& value) { m_nextHostedZoneIdHasBeenSet = true; m_nextHostedZoneId = std::forward<NextHostedZoneIdT>(value); }
    template<typename NextHostedZoneIdT = Aws::String>
    ListHostedZonesByNameResult& WithNextHostedZoneId(NextHostedZoneIdT&& value) { SetNextHostedZoneId(std::forward<NextHostedZoneIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZonesByName</code> that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHostedZonesByNameResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHostedZonesByNameResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HostedZone> m_hostedZones;
    bool m_hostedZonesHasBeenSet = false;

    Aws::String m_dNSName;
    bool m_dNSNameHasBeenSet = false;

    Aws::String m_hostedZoneId;
    bool m_hostedZoneIdHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextDNSName;
    bool m_nextDNSNameHasBeenSet = false;

    Aws::String m_nextHostedZoneId;
    bool m_nextHostedZoneIdHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
