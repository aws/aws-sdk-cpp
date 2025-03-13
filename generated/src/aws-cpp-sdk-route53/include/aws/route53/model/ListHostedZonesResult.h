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
  class ListHostedZonesResult
  {
  public:
    AWS_ROUTE53_API ListHostedZonesResult() = default;
    AWS_ROUTE53_API ListHostedZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListHostedZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const Aws::Vector<HostedZone>& GetHostedZones() const { return m_hostedZones; }
    template<typename HostedZonesT = Aws::Vector<HostedZone>>
    void SetHostedZones(HostedZonesT&& value) { m_hostedZonesHasBeenSet = true; m_hostedZones = std::forward<HostedZonesT>(value); }
    template<typename HostedZonesT = Aws::Vector<HostedZone>>
    ListHostedZonesResult& WithHostedZones(HostedZonesT&& value) { SetHostedZones(std::forward<HostedZonesT>(value)); return *this;}
    template<typename HostedZonesT = HostedZone>
    ListHostedZonesResult& AddHostedZones(HostedZonesT&& value) { m_hostedZonesHasBeenSet = true; m_hostedZones.emplace_back(std::forward<HostedZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the second and subsequent calls to <code>ListHostedZones</code>,
     * <code>Marker</code> is the value that you specified for the <code>marker</code>
     * parameter in the request that produced the current response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListHostedZonesResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether there are more hosted zones to be listed. If the
     * response was truncated, you can get more hosted zones by submitting another
     * <code>ListHostedZones</code> request and specifying the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListHostedZonesResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the first hosted zone in the next group of
     * hosted zones. Submit another <code>ListHostedZones</code> request, and specify
     * the value of <code>NextMarker</code> from the response in the
     * <code>marker</code> parameter.</p> <p>This element is present only if
     * <code>IsTruncated</code> is <code>true</code>.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListHostedZonesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListHostedZones</code> that produced the current response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListHostedZonesResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHostedZonesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HostedZone> m_hostedZones;
    bool m_hostedZonesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
