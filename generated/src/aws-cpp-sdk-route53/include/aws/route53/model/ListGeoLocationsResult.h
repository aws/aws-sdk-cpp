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
    AWS_ROUTE53_API ListGeoLocationsResult();
    AWS_ROUTE53_API ListGeoLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API ListGeoLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains one <code>GeoLocationDetails</code> element for
     * each location that Amazon Route 53 supports for geolocation.</p>
     */
    inline const Aws::Vector<GeoLocationDetails>& GetGeoLocationDetailsList() const{ return m_geoLocationDetailsList; }
    inline void SetGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { m_geoLocationDetailsList = value; }
    inline void SetGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { m_geoLocationDetailsList = std::move(value); }
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(const Aws::Vector<GeoLocationDetails>& value) { SetGeoLocationDetailsList(value); return *this;}
    inline ListGeoLocationsResult& WithGeoLocationDetailsList(Aws::Vector<GeoLocationDetails>&& value) { SetGeoLocationDetailsList(std::move(value)); return *this;}
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(const GeoLocationDetails& value) { m_geoLocationDetailsList.push_back(value); return *this; }
    inline ListGeoLocationsResult& AddGeoLocationDetailsList(GeoLocationDetails&& value) { m_geoLocationDetailsList.push_back(std::move(value)); return *this; }
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
    inline bool GetIsTruncated() const{ return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }
    inline ListGeoLocationsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextContinentCode</code> in the <code>startcontinentcode</code> parameter
     * in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextContinentCode() const{ return m_nextContinentCode; }
    inline void SetNextContinentCode(const Aws::String& value) { m_nextContinentCode = value; }
    inline void SetNextContinentCode(Aws::String&& value) { m_nextContinentCode = std::move(value); }
    inline void SetNextContinentCode(const char* value) { m_nextContinentCode.assign(value); }
    inline ListGeoLocationsResult& WithNextContinentCode(const Aws::String& value) { SetNextContinentCode(value); return *this;}
    inline ListGeoLocationsResult& WithNextContinentCode(Aws::String&& value) { SetNextContinentCode(std::move(value)); return *this;}
    inline ListGeoLocationsResult& WithNextContinentCode(const char* value) { SetNextContinentCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextCountryCode</code> in the <code>startcountrycode</code> parameter in
     * another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextCountryCode() const{ return m_nextCountryCode; }
    inline void SetNextCountryCode(const Aws::String& value) { m_nextCountryCode = value; }
    inline void SetNextCountryCode(Aws::String&& value) { m_nextCountryCode = std::move(value); }
    inline void SetNextCountryCode(const char* value) { m_nextCountryCode.assign(value); }
    inline ListGeoLocationsResult& WithNextCountryCode(const Aws::String& value) { SetNextCountryCode(value); return *this;}
    inline ListGeoLocationsResult& WithNextCountryCode(Aws::String&& value) { SetNextCountryCode(std::move(value)); return *this;}
    inline ListGeoLocationsResult& WithNextCountryCode(const char* value) { SetNextCountryCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>IsTruncated</code> is <code>true</code>, you can make a follow-up
     * request to display more locations. Enter the value of
     * <code>NextSubdivisionCode</code> in the <code>startsubdivisioncode</code>
     * parameter in another <code>ListGeoLocations</code> request.</p>
     */
    inline const Aws::String& GetNextSubdivisionCode() const{ return m_nextSubdivisionCode; }
    inline void SetNextSubdivisionCode(const Aws::String& value) { m_nextSubdivisionCode = value; }
    inline void SetNextSubdivisionCode(Aws::String&& value) { m_nextSubdivisionCode = std::move(value); }
    inline void SetNextSubdivisionCode(const char* value) { m_nextSubdivisionCode.assign(value); }
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const Aws::String& value) { SetNextSubdivisionCode(value); return *this;}
    inline ListGeoLocationsResult& WithNextSubdivisionCode(Aws::String&& value) { SetNextSubdivisionCode(std::move(value)); return *this;}
    inline ListGeoLocationsResult& WithNextSubdivisionCode(const char* value) { SetNextSubdivisionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that you specified for <code>MaxItems</code> in the request.</p>
     */
    inline const Aws::String& GetMaxItems() const{ return m_maxItems; }
    inline void SetMaxItems(const Aws::String& value) { m_maxItems = value; }
    inline void SetMaxItems(Aws::String&& value) { m_maxItems = std::move(value); }
    inline void SetMaxItems(const char* value) { m_maxItems.assign(value); }
    inline ListGeoLocationsResult& WithMaxItems(const Aws::String& value) { SetMaxItems(value); return *this;}
    inline ListGeoLocationsResult& WithMaxItems(Aws::String&& value) { SetMaxItems(std::move(value)); return *this;}
    inline ListGeoLocationsResult& WithMaxItems(const char* value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGeoLocationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGeoLocationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGeoLocationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GeoLocationDetails> m_geoLocationDetailsList;

    bool m_isTruncated;

    Aws::String m_nextContinentCode;

    Aws::String m_nextCountryCode;

    Aws::String m_nextSubdivisionCode;

    Aws::String m_maxItems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
