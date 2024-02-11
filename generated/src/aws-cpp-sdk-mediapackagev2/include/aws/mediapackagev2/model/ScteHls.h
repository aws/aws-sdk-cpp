/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/AdMarkerHls.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The SCTE configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/ScteHls">AWS
   * API Reference</a></p>
   */
  class ScteHls
  {
  public:
    AWS_MEDIAPACKAGEV2_API ScteHls();
    AWS_MEDIAPACKAGEV2_API ScteHls(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API ScteHls& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline const AdMarkerHls& GetAdMarkerHls() const{ return m_adMarkerHls; }

    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline bool AdMarkerHlsHasBeenSet() const { return m_adMarkerHlsHasBeenSet; }

    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline void SetAdMarkerHls(const AdMarkerHls& value) { m_adMarkerHlsHasBeenSet = true; m_adMarkerHls = value; }

    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline void SetAdMarkerHls(AdMarkerHls&& value) { m_adMarkerHlsHasBeenSet = true; m_adMarkerHls = std::move(value); }

    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline ScteHls& WithAdMarkerHls(const AdMarkerHls& value) { SetAdMarkerHls(value); return *this;}

    /**
     * <p>Ad markers indicate when ads should be inserted during playback. If you
     * include ad markers in the content stream in your upstream encoders, then you
     * need to inform MediaPackage what to do with the ad markers in the output. Choose
     * what you want MediaPackage to do with the ad markers.</p> <p>Value description:
     * </p> <ul> <li> <p>DATERANGE - Insert EXT-X-DATERANGE tags to signal ad and
     * program transition events in TS and CMAF manifests. If you use DATERANGE, you
     * must set a programDateTimeIntervalSeconds value of 1 or higher. To learn more
     * about DATERANGE, see <a
     * href="http://docs.aws.amazon.com/mediapackage/latest/ug/scte-35-ad-marker-ext-x-daterange.html">SCTE-35
     * Ad Marker EXT-X-DATERANGE</a>.</p> </li> </ul>
     */
    inline ScteHls& WithAdMarkerHls(AdMarkerHls&& value) { SetAdMarkerHls(std::move(value)); return *this;}

  private:

    AdMarkerHls m_adMarkerHls;
    bool m_adMarkerHlsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
