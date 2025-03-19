/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/GeoMatchSetSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WAFRegional
{
namespace Model
{
  class ListGeoMatchSetsResult
  {
  public:
    AWS_WAFREGIONAL_API ListGeoMatchSetsResult() = default;
    AWS_WAFREGIONAL_API ListGeoMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListGeoMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>GeoMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>GeoMatchSet</code> objects,
     * submit another <code>ListGeoMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListGeoMatchSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>GeoMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<GeoMatchSetSummary>& GetGeoMatchSets() const { return m_geoMatchSets; }
    template<typename GeoMatchSetsT = Aws::Vector<GeoMatchSetSummary>>
    void SetGeoMatchSets(GeoMatchSetsT&& value) { m_geoMatchSetsHasBeenSet = true; m_geoMatchSets = std::forward<GeoMatchSetsT>(value); }
    template<typename GeoMatchSetsT = Aws::Vector<GeoMatchSetSummary>>
    ListGeoMatchSetsResult& WithGeoMatchSets(GeoMatchSetsT&& value) { SetGeoMatchSets(std::forward<GeoMatchSetsT>(value)); return *this;}
    template<typename GeoMatchSetsT = GeoMatchSetSummary>
    ListGeoMatchSetsResult& AddGeoMatchSets(GeoMatchSetsT&& value) { m_geoMatchSetsHasBeenSet = true; m_geoMatchSets.emplace_back(std::forward<GeoMatchSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGeoMatchSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<GeoMatchSetSummary> m_geoMatchSets;
    bool m_geoMatchSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
