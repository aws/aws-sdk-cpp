/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>Properties associated with the Item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Properties">AWS
   * API Reference</a></p>
   */
  class Properties
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Properties() = default;
    AWS_SAGEMAKERGEOSPATIAL_API Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Estimate of cloud cover.</p>
     */
    inline double GetEoCloudCover() const { return m_eoCloudCover; }
    inline bool EoCloudCoverHasBeenSet() const { return m_eoCloudCoverHasBeenSet; }
    inline void SetEoCloudCover(double value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = value; }
    inline Properties& WithEoCloudCover(double value) { SetEoCloudCover(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Land cloud cover for Landsat Data Collection.</p>
     */
    inline double GetLandsatCloudCoverLand() const { return m_landsatCloudCoverLand; }
    inline bool LandsatCloudCoverLandHasBeenSet() const { return m_landsatCloudCoverLandHasBeenSet; }
    inline void SetLandsatCloudCoverLand(double value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = value; }
    inline Properties& WithLandsatCloudCoverLand(double value) { SetLandsatCloudCoverLand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Platform property. Platform refers to the unique name of the specific
     * platform the instrument is attached to. For satellites it is the name of the
     * satellite, eg. landsat-8 (Landsat-8), sentinel-2a.</p>
     */
    inline const Aws::String& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = Aws::String>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = Aws::String>
    Properties& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The angle from the sensor between nadir (straight down) and the scene center.
     * Measured in degrees (0-90).</p>
     */
    inline double GetViewOffNadir() const { return m_viewOffNadir; }
    inline bool ViewOffNadirHasBeenSet() const { return m_viewOffNadirHasBeenSet; }
    inline void SetViewOffNadir(double value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = value; }
    inline Properties& WithViewOffNadir(double value) { SetViewOffNadir(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sun azimuth angle. From the scene center point on the ground, this is the
     * angle between truth north and the sun. Measured clockwise in degrees
     * (0-360).</p>
     */
    inline double GetViewSunAzimuth() const { return m_viewSunAzimuth; }
    inline bool ViewSunAzimuthHasBeenSet() const { return m_viewSunAzimuthHasBeenSet; }
    inline void SetViewSunAzimuth(double value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = value; }
    inline Properties& WithViewSunAzimuth(double value) { SetViewSunAzimuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sun elevation angle. The angle from the tangent of the scene center point
     * to the sun. Measured from the horizon in degrees (-90-90). Negative values
     * indicate the sun is below the horizon, e.g. sun elevation of -10° means the data
     * was captured during <a
     * href="https://www.timeanddate.com/astronomy/different-types-twilight.html">nautical
     * twilight</a>.</p>
     */
    inline double GetViewSunElevation() const { return m_viewSunElevation; }
    inline bool ViewSunElevationHasBeenSet() const { return m_viewSunElevationHasBeenSet; }
    inline void SetViewSunElevation(double value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = value; }
    inline Properties& WithViewSunElevation(double value) { SetViewSunElevation(value); return *this;}
    ///@}
  private:

    double m_eoCloudCover{0.0};
    bool m_eoCloudCoverHasBeenSet = false;

    double m_landsatCloudCoverLand{0.0};
    bool m_landsatCloudCoverLandHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    double m_viewOffNadir{0.0};
    bool m_viewOffNadirHasBeenSet = false;

    double m_viewSunAzimuth{0.0};
    bool m_viewSunAzimuthHasBeenSet = false;

    double m_viewSunElevation{0.0};
    bool m_viewSunElevationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
