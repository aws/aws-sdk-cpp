/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/EoCloudCoverInput.h>
#include <aws/sagemaker-geospatial/model/LandsatCloudCoverLandInput.h>
#include <aws/sagemaker-geospatial/model/PlatformInput.h>
#include <aws/sagemaker-geospatial/model/ViewOffNadirInput.h>
#include <aws/sagemaker-geospatial/model/ViewSunAzimuthInput.h>
#include <aws/sagemaker-geospatial/model/ViewSunElevationInput.h>
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
   * <p>Represents a single searchable property to search on.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Property">AWS
   * API Reference</a></p>
   */
  class Property
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Property();
    AWS_SAGEMAKERGEOSPATIAL_API Property(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Property& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure representing EoCloudCover property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const EoCloudCoverInput& GetEoCloudCover() const{ return m_eoCloudCover; }
    inline bool EoCloudCoverHasBeenSet() const { return m_eoCloudCoverHasBeenSet; }
    inline void SetEoCloudCover(const EoCloudCoverInput& value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = value; }
    inline void SetEoCloudCover(EoCloudCoverInput&& value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = std::move(value); }
    inline Property& WithEoCloudCover(const EoCloudCoverInput& value) { SetEoCloudCover(value); return *this;}
    inline Property& WithEoCloudCover(EoCloudCoverInput&& value) { SetEoCloudCover(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Land Cloud Cover property filter for Landsat
     * collection containing a lower bound and upper bound.</p>
     */
    inline const LandsatCloudCoverLandInput& GetLandsatCloudCoverLand() const{ return m_landsatCloudCoverLand; }
    inline bool LandsatCloudCoverLandHasBeenSet() const { return m_landsatCloudCoverLandHasBeenSet; }
    inline void SetLandsatCloudCoverLand(const LandsatCloudCoverLandInput& value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = value; }
    inline void SetLandsatCloudCoverLand(LandsatCloudCoverLandInput&& value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = std::move(value); }
    inline Property& WithLandsatCloudCoverLand(const LandsatCloudCoverLandInput& value) { SetLandsatCloudCoverLand(value); return *this;}
    inline Property& WithLandsatCloudCoverLand(LandsatCloudCoverLandInput&& value) { SetLandsatCloudCoverLand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Platform property filter consisting of value and
     * comparison operator.</p>
     */
    inline const PlatformInput& GetPlatform() const{ return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    inline void SetPlatform(const PlatformInput& value) { m_platformHasBeenSet = true; m_platform = value; }
    inline void SetPlatform(PlatformInput&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }
    inline Property& WithPlatform(const PlatformInput& value) { SetPlatform(value); return *this;}
    inline Property& WithPlatform(PlatformInput&& value) { SetPlatform(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewOffNadir property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const ViewOffNadirInput& GetViewOffNadir() const{ return m_viewOffNadir; }
    inline bool ViewOffNadirHasBeenSet() const { return m_viewOffNadirHasBeenSet; }
    inline void SetViewOffNadir(const ViewOffNadirInput& value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = value; }
    inline void SetViewOffNadir(ViewOffNadirInput&& value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = std::move(value); }
    inline Property& WithViewOffNadir(const ViewOffNadirInput& value) { SetViewOffNadir(value); return *this;}
    inline Property& WithViewOffNadir(ViewOffNadirInput&& value) { SetViewOffNadir(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewSunAzimuth property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const ViewSunAzimuthInput& GetViewSunAzimuth() const{ return m_viewSunAzimuth; }
    inline bool ViewSunAzimuthHasBeenSet() const { return m_viewSunAzimuthHasBeenSet; }
    inline void SetViewSunAzimuth(const ViewSunAzimuthInput& value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = value; }
    inline void SetViewSunAzimuth(ViewSunAzimuthInput&& value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = std::move(value); }
    inline Property& WithViewSunAzimuth(const ViewSunAzimuthInput& value) { SetViewSunAzimuth(value); return *this;}
    inline Property& WithViewSunAzimuth(ViewSunAzimuthInput&& value) { SetViewSunAzimuth(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewSunElevation property filter containing a
     * lower bound and upper bound.</p>
     */
    inline const ViewSunElevationInput& GetViewSunElevation() const{ return m_viewSunElevation; }
    inline bool ViewSunElevationHasBeenSet() const { return m_viewSunElevationHasBeenSet; }
    inline void SetViewSunElevation(const ViewSunElevationInput& value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = value; }
    inline void SetViewSunElevation(ViewSunElevationInput&& value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = std::move(value); }
    inline Property& WithViewSunElevation(const ViewSunElevationInput& value) { SetViewSunElevation(value); return *this;}
    inline Property& WithViewSunElevation(ViewSunElevationInput&& value) { SetViewSunElevation(std::move(value)); return *this;}
    ///@}
  private:

    EoCloudCoverInput m_eoCloudCover;
    bool m_eoCloudCoverHasBeenSet = false;

    LandsatCloudCoverLandInput m_landsatCloudCoverLand;
    bool m_landsatCloudCoverLandHasBeenSet = false;

    PlatformInput m_platform;
    bool m_platformHasBeenSet = false;

    ViewOffNadirInput m_viewOffNadir;
    bool m_viewOffNadirHasBeenSet = false;

    ViewSunAzimuthInput m_viewSunAzimuth;
    bool m_viewSunAzimuthHasBeenSet = false;

    ViewSunElevationInput m_viewSunElevation;
    bool m_viewSunElevationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
