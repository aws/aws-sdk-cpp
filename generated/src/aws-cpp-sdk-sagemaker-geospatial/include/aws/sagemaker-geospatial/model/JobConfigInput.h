/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/BandMathConfigInput.h>
#include <aws/sagemaker-geospatial/model/CloudMaskingConfigInput.h>
#include <aws/sagemaker-geospatial/model/CloudRemovalConfigInput.h>
#include <aws/sagemaker-geospatial/model/GeoMosaicConfigInput.h>
#include <aws/sagemaker-geospatial/model/LandCoverSegmentationConfigInput.h>
#include <aws/sagemaker-geospatial/model/ResamplingConfigInput.h>
#include <aws/sagemaker-geospatial/model/StackConfigInput.h>
#include <aws/sagemaker-geospatial/model/TemporalStatisticsConfigInput.h>
#include <aws/sagemaker-geospatial/model/ZonalStatisticsConfigInput.h>
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
   * <p>The input structure for the JobConfig in an
   * EarthObservationJob.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/JobConfigInput">AWS
   * API Reference</a></p>
   */
  class JobConfigInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * BandMath.</p>
     */
    inline const BandMathConfigInput& GetBandMathConfig() const { return m_bandMathConfig; }
    inline bool BandMathConfigHasBeenSet() const { return m_bandMathConfigHasBeenSet; }
    template<typename BandMathConfigT = BandMathConfigInput>
    void SetBandMathConfig(BandMathConfigT&& value) { m_bandMathConfigHasBeenSet = true; m_bandMathConfig = std::forward<BandMathConfigT>(value); }
    template<typename BandMathConfigT = BandMathConfigInput>
    JobConfigInput& WithBandMathConfig(BandMathConfigT&& value) { SetBandMathConfig(std::forward<BandMathConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline const CloudMaskingConfigInput& GetCloudMaskingConfig() const { return m_cloudMaskingConfig; }
    inline bool CloudMaskingConfigHasBeenSet() const { return m_cloudMaskingConfigHasBeenSet; }
    template<typename CloudMaskingConfigT = CloudMaskingConfigInput>
    void SetCloudMaskingConfig(CloudMaskingConfigT&& value) { m_cloudMaskingConfigHasBeenSet = true; m_cloudMaskingConfig = std::forward<CloudMaskingConfigT>(value); }
    template<typename CloudMaskingConfigT = CloudMaskingConfigInput>
    JobConfigInput& WithCloudMaskingConfig(CloudMaskingConfigT&& value) { SetCloudMaskingConfig(std::forward<CloudMaskingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline const CloudRemovalConfigInput& GetCloudRemovalConfig() const { return m_cloudRemovalConfig; }
    inline bool CloudRemovalConfigHasBeenSet() const { return m_cloudRemovalConfigHasBeenSet; }
    template<typename CloudRemovalConfigT = CloudRemovalConfigInput>
    void SetCloudRemovalConfig(CloudRemovalConfigT&& value) { m_cloudRemovalConfigHasBeenSet = true; m_cloudRemovalConfig = std::forward<CloudRemovalConfigT>(value); }
    template<typename CloudRemovalConfigT = CloudRemovalConfigInput>
    JobConfigInput& WithCloudRemovalConfig(CloudRemovalConfigT&& value) { SetCloudRemovalConfig(std::forward<CloudRemovalConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline const GeoMosaicConfigInput& GetGeoMosaicConfig() const { return m_geoMosaicConfig; }
    inline bool GeoMosaicConfigHasBeenSet() const { return m_geoMosaicConfigHasBeenSet; }
    template<typename GeoMosaicConfigT = GeoMosaicConfigInput>
    void SetGeoMosaicConfig(GeoMosaicConfigT&& value) { m_geoMosaicConfigHasBeenSet = true; m_geoMosaicConfig = std::forward<GeoMosaicConfigT>(value); }
    template<typename GeoMosaicConfigT = GeoMosaicConfigInput>
    JobConfigInput& WithGeoMosaicConfig(GeoMosaicConfigT&& value) { SetGeoMosaicConfig(std::forward<GeoMosaicConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline const LandCoverSegmentationConfigInput& GetLandCoverSegmentationConfig() const { return m_landCoverSegmentationConfig; }
    inline bool LandCoverSegmentationConfigHasBeenSet() const { return m_landCoverSegmentationConfigHasBeenSet; }
    template<typename LandCoverSegmentationConfigT = LandCoverSegmentationConfigInput>
    void SetLandCoverSegmentationConfig(LandCoverSegmentationConfigT&& value) { m_landCoverSegmentationConfigHasBeenSet = true; m_landCoverSegmentationConfig = std::forward<LandCoverSegmentationConfigT>(value); }
    template<typename LandCoverSegmentationConfigT = LandCoverSegmentationConfigInput>
    JobConfigInput& WithLandCoverSegmentationConfig(LandCoverSegmentationConfigT&& value) { SetLandCoverSegmentationConfig(std::forward<LandCoverSegmentationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline const ResamplingConfigInput& GetResamplingConfig() const { return m_resamplingConfig; }
    inline bool ResamplingConfigHasBeenSet() const { return m_resamplingConfigHasBeenSet; }
    template<typename ResamplingConfigT = ResamplingConfigInput>
    void SetResamplingConfig(ResamplingConfigT&& value) { m_resamplingConfigHasBeenSet = true; m_resamplingConfig = std::forward<ResamplingConfigT>(value); }
    template<typename ResamplingConfigT = ResamplingConfigInput>
    JobConfigInput& WithResamplingConfig(ResamplingConfigT&& value) { SetResamplingConfig(std::forward<ResamplingConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for a Stacking
     * Earth Observation job.</p>
     */
    inline const StackConfigInput& GetStackConfig() const { return m_stackConfig; }
    inline bool StackConfigHasBeenSet() const { return m_stackConfigHasBeenSet; }
    template<typename StackConfigT = StackConfigInput>
    void SetStackConfig(StackConfigT&& value) { m_stackConfigHasBeenSet = true; m_stackConfig = std::forward<StackConfigT>(value); }
    template<typename StackConfigT = StackConfigInput>
    JobConfigInput& WithStackConfig(StackConfigT&& value) { SetStackConfig(std::forward<StackConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline const TemporalStatisticsConfigInput& GetTemporalStatisticsConfig() const { return m_temporalStatisticsConfig; }
    inline bool TemporalStatisticsConfigHasBeenSet() const { return m_temporalStatisticsConfigHasBeenSet; }
    template<typename TemporalStatisticsConfigT = TemporalStatisticsConfigInput>
    void SetTemporalStatisticsConfig(TemporalStatisticsConfigT&& value) { m_temporalStatisticsConfigHasBeenSet = true; m_temporalStatisticsConfig = std::forward<TemporalStatisticsConfigT>(value); }
    template<typename TemporalStatisticsConfigT = TemporalStatisticsConfigInput>
    JobConfigInput& WithTemporalStatisticsConfig(TemporalStatisticsConfigT&& value) { SetTemporalStatisticsConfig(std::forward<TemporalStatisticsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline const ZonalStatisticsConfigInput& GetZonalStatisticsConfig() const { return m_zonalStatisticsConfig; }
    inline bool ZonalStatisticsConfigHasBeenSet() const { return m_zonalStatisticsConfigHasBeenSet; }
    template<typename ZonalStatisticsConfigT = ZonalStatisticsConfigInput>
    void SetZonalStatisticsConfig(ZonalStatisticsConfigT&& value) { m_zonalStatisticsConfigHasBeenSet = true; m_zonalStatisticsConfig = std::forward<ZonalStatisticsConfigT>(value); }
    template<typename ZonalStatisticsConfigT = ZonalStatisticsConfigInput>
    JobConfigInput& WithZonalStatisticsConfig(ZonalStatisticsConfigT&& value) { SetZonalStatisticsConfig(std::forward<ZonalStatisticsConfigT>(value)); return *this;}
    ///@}
  private:

    BandMathConfigInput m_bandMathConfig;
    bool m_bandMathConfigHasBeenSet = false;

    CloudMaskingConfigInput m_cloudMaskingConfig;
    bool m_cloudMaskingConfigHasBeenSet = false;

    CloudRemovalConfigInput m_cloudRemovalConfig;
    bool m_cloudRemovalConfigHasBeenSet = false;

    GeoMosaicConfigInput m_geoMosaicConfig;
    bool m_geoMosaicConfigHasBeenSet = false;

    LandCoverSegmentationConfigInput m_landCoverSegmentationConfig;
    bool m_landCoverSegmentationConfigHasBeenSet = false;

    ResamplingConfigInput m_resamplingConfig;
    bool m_resamplingConfigHasBeenSet = false;

    StackConfigInput m_stackConfig;
    bool m_stackConfigHasBeenSet = false;

    TemporalStatisticsConfigInput m_temporalStatisticsConfig;
    bool m_temporalStatisticsConfigHasBeenSet = false;

    ZonalStatisticsConfigInput m_zonalStatisticsConfig;
    bool m_zonalStatisticsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
