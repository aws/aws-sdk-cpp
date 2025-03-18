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
    AWS_SAGEMAKERGEOSPATIAL_API Property() = default;
    AWS_SAGEMAKERGEOSPATIAL_API Property(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Property& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The structure representing EoCloudCover property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const EoCloudCoverInput& GetEoCloudCover() const { return m_eoCloudCover; }
    inline bool EoCloudCoverHasBeenSet() const { return m_eoCloudCoverHasBeenSet; }
    template<typename EoCloudCoverT = EoCloudCoverInput>
    void SetEoCloudCover(EoCloudCoverT&& value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = std::forward<EoCloudCoverT>(value); }
    template<typename EoCloudCoverT = EoCloudCoverInput>
    Property& WithEoCloudCover(EoCloudCoverT&& value) { SetEoCloudCover(std::forward<EoCloudCoverT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Land Cloud Cover property filter for Landsat
     * collection containing a lower bound and upper bound.</p>
     */
    inline const LandsatCloudCoverLandInput& GetLandsatCloudCoverLand() const { return m_landsatCloudCoverLand; }
    inline bool LandsatCloudCoverLandHasBeenSet() const { return m_landsatCloudCoverLandHasBeenSet; }
    template<typename LandsatCloudCoverLandT = LandsatCloudCoverLandInput>
    void SetLandsatCloudCoverLand(LandsatCloudCoverLandT&& value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = std::forward<LandsatCloudCoverLandT>(value); }
    template<typename LandsatCloudCoverLandT = LandsatCloudCoverLandInput>
    Property& WithLandsatCloudCoverLand(LandsatCloudCoverLandT&& value) { SetLandsatCloudCoverLand(std::forward<LandsatCloudCoverLandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing Platform property filter consisting of value and
     * comparison operator.</p>
     */
    inline const PlatformInput& GetPlatform() const { return m_platform; }
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }
    template<typename PlatformT = PlatformInput>
    void SetPlatform(PlatformT&& value) { m_platformHasBeenSet = true; m_platform = std::forward<PlatformT>(value); }
    template<typename PlatformT = PlatformInput>
    Property& WithPlatform(PlatformT&& value) { SetPlatform(std::forward<PlatformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewOffNadir property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const ViewOffNadirInput& GetViewOffNadir() const { return m_viewOffNadir; }
    inline bool ViewOffNadirHasBeenSet() const { return m_viewOffNadirHasBeenSet; }
    template<typename ViewOffNadirT = ViewOffNadirInput>
    void SetViewOffNadir(ViewOffNadirT&& value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = std::forward<ViewOffNadirT>(value); }
    template<typename ViewOffNadirT = ViewOffNadirInput>
    Property& WithViewOffNadir(ViewOffNadirT&& value) { SetViewOffNadir(std::forward<ViewOffNadirT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewSunAzimuth property filter containing a lower
     * bound and upper bound.</p>
     */
    inline const ViewSunAzimuthInput& GetViewSunAzimuth() const { return m_viewSunAzimuth; }
    inline bool ViewSunAzimuthHasBeenSet() const { return m_viewSunAzimuthHasBeenSet; }
    template<typename ViewSunAzimuthT = ViewSunAzimuthInput>
    void SetViewSunAzimuth(ViewSunAzimuthT&& value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = std::forward<ViewSunAzimuthT>(value); }
    template<typename ViewSunAzimuthT = ViewSunAzimuthInput>
    Property& WithViewSunAzimuth(ViewSunAzimuthT&& value) { SetViewSunAzimuth(std::forward<ViewSunAzimuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The structure representing ViewSunElevation property filter containing a
     * lower bound and upper bound.</p>
     */
    inline const ViewSunElevationInput& GetViewSunElevation() const { return m_viewSunElevation; }
    inline bool ViewSunElevationHasBeenSet() const { return m_viewSunElevationHasBeenSet; }
    template<typename ViewSunElevationT = ViewSunElevationInput>
    void SetViewSunElevation(ViewSunElevationT&& value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = std::forward<ViewSunElevationT>(value); }
    template<typename ViewSunElevationT = ViewSunElevationInput>
    Property& WithViewSunElevation(ViewSunElevationT&& value) { SetViewSunElevation(std::forward<ViewSunElevationT>(value)); return *this;}
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
