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
    AWS_ROUTE53_API Coordinates();
    AWS_ROUTE53_API Coordinates(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API Coordinates& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline const Aws::String& GetLatitude() const{ return m_latitude; }

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline bool LatitudeHasBeenSet() const { return m_latitudeHasBeenSet; }

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline void SetLatitude(const Aws::String& value) { m_latitudeHasBeenSet = true; m_latitude = value; }

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline void SetLatitude(Aws::String&& value) { m_latitudeHasBeenSet = true; m_latitude = std::move(value); }

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline void SetLatitude(const char* value) { m_latitudeHasBeenSet = true; m_latitude.assign(value); }

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline Coordinates& WithLatitude(const Aws::String& value) { SetLatitude(value); return *this;}

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline Coordinates& WithLatitude(Aws::String&& value) { SetLatitude(std::move(value)); return *this;}

    /**
     * <p> Specifies a coordinate of the north–south position of a geographic point on
     * the surface of the Earth (-90 - 90). </p>
     */
    inline Coordinates& WithLatitude(const char* value) { SetLatitude(value); return *this;}


    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline const Aws::String& GetLongitude() const{ return m_longitude; }

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline bool LongitudeHasBeenSet() const { return m_longitudeHasBeenSet; }

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline void SetLongitude(const Aws::String& value) { m_longitudeHasBeenSet = true; m_longitude = value; }

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline void SetLongitude(Aws::String&& value) { m_longitudeHasBeenSet = true; m_longitude = std::move(value); }

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline void SetLongitude(const char* value) { m_longitudeHasBeenSet = true; m_longitude.assign(value); }

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline Coordinates& WithLongitude(const Aws::String& value) { SetLongitude(value); return *this;}

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline Coordinates& WithLongitude(Aws::String&& value) { SetLongitude(std::move(value)); return *this;}

    /**
     * <p> Specifies a coordinate of the east–west position of a geographic point on
     * the surface of the Earth (-180 - 180). </p>
     */
    inline Coordinates& WithLongitude(const char* value) { SetLongitude(value); return *this;}

  private:

    Aws::String m_latitude;
    bool m_latitudeHasBeenSet = false;

    Aws::String m_longitude;
    bool m_longitudeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
