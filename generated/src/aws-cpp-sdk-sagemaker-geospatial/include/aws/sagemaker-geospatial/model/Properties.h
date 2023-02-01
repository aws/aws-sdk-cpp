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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Properties">AWS
   * API Reference</a></p>
   */
  class Properties
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Properties();
    AWS_SAGEMAKERGEOSPATIAL_API Properties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Properties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline double GetEoCloudCover() const{ return m_eoCloudCover; }

    /**
     * <p/>
     */
    inline bool EoCloudCoverHasBeenSet() const { return m_eoCloudCoverHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEoCloudCover(double value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = value; }

    /**
     * <p/>
     */
    inline Properties& WithEoCloudCover(double value) { SetEoCloudCover(value); return *this;}


    /**
     * <p/>
     */
    inline double GetLandsatCloudCoverLand() const{ return m_landsatCloudCoverLand; }

    /**
     * <p/>
     */
    inline bool LandsatCloudCoverLandHasBeenSet() const { return m_landsatCloudCoverLandHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLandsatCloudCoverLand(double value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = value; }

    /**
     * <p/>
     */
    inline Properties& WithLandsatCloudCoverLand(double value) { SetLandsatCloudCoverLand(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetPlatform() const{ return m_platform; }

    /**
     * <p/>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPlatform(const Aws::String& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p/>
     */
    inline void SetPlatform(Aws::String&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPlatform(const char* value) { m_platformHasBeenSet = true; m_platform.assign(value); }

    /**
     * <p/>
     */
    inline Properties& WithPlatform(const Aws::String& value) { SetPlatform(value); return *this;}

    /**
     * <p/>
     */
    inline Properties& WithPlatform(Aws::String&& value) { SetPlatform(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline Properties& WithPlatform(const char* value) { SetPlatform(value); return *this;}


    /**
     * <p/>
     */
    inline double GetViewOffNadir() const{ return m_viewOffNadir; }

    /**
     * <p/>
     */
    inline bool ViewOffNadirHasBeenSet() const { return m_viewOffNadirHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewOffNadir(double value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = value; }

    /**
     * <p/>
     */
    inline Properties& WithViewOffNadir(double value) { SetViewOffNadir(value); return *this;}


    /**
     * <p/>
     */
    inline double GetViewSunAzimuth() const{ return m_viewSunAzimuth; }

    /**
     * <p/>
     */
    inline bool ViewSunAzimuthHasBeenSet() const { return m_viewSunAzimuthHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewSunAzimuth(double value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = value; }

    /**
     * <p/>
     */
    inline Properties& WithViewSunAzimuth(double value) { SetViewSunAzimuth(value); return *this;}


    /**
     * <p/>
     */
    inline double GetViewSunElevation() const{ return m_viewSunElevation; }

    /**
     * <p/>
     */
    inline bool ViewSunElevationHasBeenSet() const { return m_viewSunElevationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewSunElevation(double value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = value; }

    /**
     * <p/>
     */
    inline Properties& WithViewSunElevation(double value) { SetViewSunElevation(value); return *this;}

  private:

    double m_eoCloudCover;
    bool m_eoCloudCoverHasBeenSet = false;

    double m_landsatCloudCoverLand;
    bool m_landsatCloudCoverLandHasBeenSet = false;

    Aws::String m_platform;
    bool m_platformHasBeenSet = false;

    double m_viewOffNadir;
    bool m_viewOffNadirHasBeenSet = false;

    double m_viewSunAzimuth;
    bool m_viewSunAzimuthHasBeenSet = false;

    double m_viewSunElevation;
    bool m_viewSunElevationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
