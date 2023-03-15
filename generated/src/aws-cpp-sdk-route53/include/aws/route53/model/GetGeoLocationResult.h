﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/GeoLocationDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that contains the response information for the specified
   * geolocation code.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetGeoLocationResponse">AWS
   * API Reference</a></p>
   */
  class GetGeoLocationResult
  {
  public:
    AWS_ROUTE53_API GetGeoLocationResult();
    AWS_ROUTE53_API GetGeoLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetGeoLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline const GeoLocationDetails& GetGeoLocationDetails() const{ return m_geoLocationDetails; }

    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline void SetGeoLocationDetails(const GeoLocationDetails& value) { m_geoLocationDetails = value; }

    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline void SetGeoLocationDetails(GeoLocationDetails&& value) { m_geoLocationDetails = std::move(value); }

    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline GetGeoLocationResult& WithGeoLocationDetails(const GeoLocationDetails& value) { SetGeoLocationDetails(value); return *this;}

    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline GetGeoLocationResult& WithGeoLocationDetails(GeoLocationDetails&& value) { SetGeoLocationDetails(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetGeoLocationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetGeoLocationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetGeoLocationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    GeoLocationDetails m_geoLocationDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
