/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/DelegationSet.h>
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
   * <p>A complex type that contains information about the reusable delegation sets
   * that are associated with the current Amazon Web Services account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListReusableDelegationSetsResponse">AWS
   * API Reference</a></p>
   */
  class ListReusableDelegationSetsResult
  {
  public:
    AWS_ROUTE53_API ListReusableDelegationSetsResult() = default;
    AWS_ROUTE53_API ListReusableDelegationSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListReusableDelegationSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains one <code>DelegationSet</code> element for each
     * reusable delegation set that was created by the current Amazon Web Services
     * account.</p>
     */
    inline const Aws::Vector<DelegationSet>& GetDelegationSets() const { return m_delegationSets; }
    template<typename DelegationSetsT = Aws::Vector<DelegationSet>>
    void SetDelegationSets(DelegationSetsT&& value) { m_delegationSetsHasBeenSet = true; m_delegationSets = std::forward<DelegationSetsT>(value); }
    template<typename DelegationSetsT = Aws::Vector<DelegationSet>>
    ListReusableDelegationSetsResult& WithDelegationSets(DelegationSetsT&& value) { SetDelegationSets(std::forward<DelegationSetsT>(value)); return *this;}
    template<typename DelegationSetsT = DelegationSet>
    ListReusableDelegationSetsResult& AddDelegationSets(DelegationSetsT&& value) { m_delegationSetsHasBeenSet = true; m_delegationSets.emplace_back(std::forward<DelegationSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For the second and subsequent calls to
     * <code>ListReusableDelegationSets</code>, <code>Marker</code> is the value that
     * you specified for the <code>marker</code> parameter in the request that produced
     * the current response.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListReusableDelegationSetsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more reusable delegation sets to be
     * listed.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListReusableDelegationSetsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, the value of
     * <code>NextMarker</code> identifies the next reusable delegation set that Amazon
     * Route 53 will return if you submit another
     * <code>ListReusableDelegationSets</code> request and specify the value of
     * <code>NextMarker</code> in the <code>marker</code> parameter.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListReusableDelegationSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for the <code>maxitems</code> parameter in the
     * call to <code>ListReusableDelegationSets</code> that produced the current
     * response.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListReusableDelegationSetsResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReusableDelegationSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DelegationSet> m_delegationSets;
    bool m_delegationSetsHasBeenSet = false;

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
