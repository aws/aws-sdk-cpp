/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/GeoLocationDetails.h>
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
   * <p>A complex type containing the response information for the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListGeoLocationsResponse">AWS
   * API Reference</a></p>
   */
  class ListGeoLocationsResult
  {
  public:
    AWS_ROUTE53_API ListGeoLocationsResult() = default;
    AWS_ROUTE53_API ListGeoLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListGeoLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline const Aws::Vector<GeoLocationDetails>& GetGeoLocationDetailsList() const { return m_geoLocationDetailsList; }
    template<typename GeoLocationDetailsListT = Aws::Vector<GeoLocationDetails>>
    void SetGeoLocationDetailsList(GeoLocationDetailsListT&& value) { m_geoLocationDetailsListHasBeenSet = true; m_geoLocationDetailsList = std::forward<GeoLocationDetailsListT>(value); }
    template<typename GeoLocationDetailsListT = Aws::Vector<GeoLocationDetails>>
    ListGeoLocationsResult& WithGeoLocationDetailsList(GeoLocationDetailsListT&& value) { SetGeoLocationDetailsList(std::forward<GeoLocationDetailsListT>(value)); return *this;}
    template<typename GeoLocationDetailsListT = GeoLocationDetails>
    ListGeoLocationsResult& AddGeoLocationDetailsList(GeoLocationDetailsListT&& value) { m_geoLocationDetailsListHasBeenSet = true; m_geoLocationDetailsList.emplace_back(std::forward<GeoLocationDetailsListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether more locations remain to be listed after the
     * last location in this response. If so, the value of <code>IsTruncated</code> is
     * <code>true</code>. To get more values, submit another request and include the
     * values of <code>NextContinentCode</code>, <code>NextCountryCode</code>, and
     * <code>NextSubdivisionCode</code> in the <code>startcontinentcode</code>,
     * <code>startcountrycode</code>, and <code>startsubdivisioncode</code>, as
     * applicable.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListGeoLocationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextContinentCode() const { return m_nextContinentCode; }
    template<typename NextContinentCodeT = Aws::String>
    void SetNextContinentCode(NextContinentCodeT&& value) { m_nextContinentCodeHasBeenSet = true; m_nextContinentCode = std::forward<NextContinentCodeT>(value); }
    template<typename NextContinentCodeT = Aws::String>
    ListGeoLocationsResult& WithNextContinentCode(NextContinentCodeT&& value) { SetNextContinentCode(std::forward<NextContinentCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextCountryCode() const { return m_nextCountryCode; }
    template<typename NextCountryCodeT = Aws::String>
    void SetNextCountryCode(NextCountryCodeT&& value) { m_nextCountryCodeHasBeenSet = true; m_nextCountryCode = std::forward<NextCountryCodeT>(value); }
    template<typename NextCountryCodeT = Aws::String>
    ListGeoLocationsResult& WithNextCountryCode(NextCountryCodeT&& value) { SetNextCountryCode(std::forward<NextCountryCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextSubdivisionCode() const { return m_nextSubdivisionCode; }
    template<typename NextSubdivisionCodeT = Aws::String>
    void SetNextSubdivisionCode(NextSubdivisionCodeT&& value) { m_nextSubdivisionCodeHasBeenSet = true; m_nextSubdivisionCode = std::forward<NextSubdivisionCodeT>(value); }
    template<typename NextSubdivisionCodeT = Aws::String>
    ListGeoLocationsResult& WithNextSubdivisionCode(NextSubdivisionCodeT&& value) { SetNextSubdivisionCode(std::forward<NextSubdivisionCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline const Aws::String& GetMaxItems() const { return m_maxItems; }
    template<typename MaxItemsT = Aws::String>
    void SetMaxItems(MaxItemsT&& value) { m_maxItemsHasBeenSet = true; m_maxItems = std::forward<MaxItemsT>(value); }
    template<typename MaxItemsT = Aws::String>
    ListGeoLocationsResult& WithMaxItems(MaxItemsT&& value) { SetMaxItems(std::forward<MaxItemsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGeoLocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GeoLocationDetails> m_geoLocationDetailsList;
    bool m_geoLocationDetailsListHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_nextContinentCode;
    bool m_nextContinentCodeHasBeenSet = false;

    Aws::String m_nextCountryCode;
    bool m_nextCountryCodeHasBeenSet = false;

    Aws::String m_nextSubdivisionCode;
    bool m_nextSubdivisionCodeHasBeenSet = false;

    Aws::String m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
