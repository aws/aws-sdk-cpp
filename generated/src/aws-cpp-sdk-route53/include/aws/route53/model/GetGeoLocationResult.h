/**
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
    AWS_ROUTE53_API GetGeoLocationResult() = default;
    AWS_ROUTE53_API GetGeoLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetGeoLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains the codes and full continent, country, and
     * subdivision names for the specified geolocation code.</p>
     */
    inline const GeoLocationDetails& GetGeoLocationDetails() const { return m_geoLocationDetails; }
    template<typename GeoLocationDetailsT = GeoLocationDetails>
    void SetGeoLocationDetails(GeoLocationDetailsT&& value) { m_geoLocationDetailsHasBeenSet = true; m_geoLocationDetails = std::forward<GeoLocationDetailsT>(value); }
    template<typename GeoLocationDetailsT = GeoLocationDetails>
    GetGeoLocationResult& WithGeoLocationDetails(GeoLocationDetailsT&& value) { SetGeoLocationDetails(std::forward<GeoLocationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetGeoLocationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    GeoLocationDetails m_geoLocationDetails;
    bool m_geoLocationDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
