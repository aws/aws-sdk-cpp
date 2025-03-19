/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/GeoMatchSet.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetGeoMatchSetResult
  {
  public:
    AWS_WAFREGIONAL_API GetGeoMatchSetResult() = default;
    AWS_WAFREGIONAL_API GetGeoMatchSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetGeoMatchSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the <a>GeoMatchSet</a> that you specified in the
     * <code>GetGeoMatchSet</code> request. This includes the <code>Type</code>, which
     * for a <code>GeoMatchContraint</code> is always <code>Country</code>, as well as
     * the <code>Value</code>, which is the identifier for a specific country.</p>
     */
    inline const GeoMatchSet& GetGeoMatchSet() const { return m_geoMatchSet; }
    template<typename GeoMatchSetT = GeoMatchSet>
    void SetGeoMatchSet(GeoMatchSetT&& value) { m_geoMatchSetHasBeenSet = true; m_geoMatchSet = std::forward<GeoMatchSetT>(value); }
    template<typename GeoMatchSetT = GeoMatchSet>
    GetGeoMatchSetResult& WithGeoMatchSet(GeoMatchSetT&& value) { SetGeoMatchSet(std::forward<GeoMatchSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGeoMatchSetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GeoMatchSet m_geoMatchSet;
    bool m_geoMatchSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
