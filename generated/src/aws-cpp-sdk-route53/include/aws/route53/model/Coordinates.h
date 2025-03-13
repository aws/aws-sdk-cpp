/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{

  /**
   * <p> A complex type that lists the coordinates for a geoproximity resource
   * record. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/Coordinates">AWS
   * API Reference</a></p>
   */
  class Coordinates
  {
  public:
    AWS_ROUTE53_API Coordinates() = default;
    AWS_ROUTE53_API Coordinates(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API Coordinates& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline const Aws::String& GetLatitude() const { return m_latitude; }
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }
    template<typename LatitudeT = Aws::String>
    void SetLatitude(LatitudeT&& value) { m_latitudeHasBeenSet = true; m_latitude = std::forward<LatitudeT>(value); }
    template<typename LatitudeT = Aws::String>
    Coordinates& WithLatitude(LatitudeT&& value) { SetLatitude(std::forward<LatitudeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline const Aws::String& GetLongitude() const { return m_longitude; }
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }
    template<typename LongitudeT = Aws::String>
    void SetLongitude(LongitudeT&& value) { m_longitudeHasBeenSet = true; m_longitude = std::forward<LongitudeT>(value); }
    template<typename LongitudeT = Aws::String>
    Coordinates& WithLongitude(LongitudeT&& value) { SetLongitude(std::forward<LongitudeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_latitude;
    bool m_latitudeHasBeenSet = false;

    Aws::String m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
