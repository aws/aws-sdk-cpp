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
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput();
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API JobConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * BandMath.</p>
     */
    inline const BandMathConfigInput& GetBandMathConfig() const{ return m_bandMathConfig; }
    inline bool BandMathConfigHasBeenSet() const { return m_bandMathConfigHasBeenSet; }
    inline void SetBandMathConfig(const BandMathConfigInput& value) { m_bandMathConfigHasBeenSet = true; m_bandMathConfig = value; }
    inline void SetBandMathConfig(BandMathConfigInput&& value) { m_bandMathConfigHasBeenSet = true; m_bandMathConfig = std::move(value); }
    inline JobConfigInput& WithBandMathConfig(const BandMathConfigInput& value) { SetBandMathConfig(value); return *this;}
    inline JobConfigInput& WithBandMathConfig(BandMathConfigInput&& value) { SetBandMathConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline const CloudMaskingConfigInput& GetCloudMaskingConfig() const{ return m_cloudMaskingConfig; }
    inline bool CloudMaskingConfigHasBeenSet() const { return m_cloudMaskingConfigHasBeenSet; }
    inline void SetCloudMaskingConfig(const CloudMaskingConfigInput& value) { m_cloudMaskingConfigHasBeenSet = true; m_cloudMaskingConfig = value; }
    inline void SetCloudMaskingConfig(CloudMaskingConfigInput&& value) { m_cloudMaskingConfigHasBeenSet = true; m_cloudMaskingConfig = std::move(value); }
    inline JobConfigInput& WithCloudMaskingConfig(const CloudMaskingConfigInput& value) { SetCloudMaskingConfig(value); return *this;}
    inline JobConfigInput& WithCloudMaskingConfig(CloudMaskingConfigInput&& value) { SetCloudMaskingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline const CloudRemovalConfigInput& GetCloudRemovalConfig() const{ return m_cloudRemovalConfig; }
    inline bool CloudRemovalConfigHasBeenSet() const { return m_cloudRemovalConfigHasBeenSet; }
    inline void SetCloudRemovalConfig(const CloudRemovalConfigInput& value) { m_cloudRemovalConfigHasBeenSet = true; m_cloudRemovalConfig = value; }
    inline void SetCloudRemovalConfig(CloudRemovalConfigInput&& value) { m_cloudRemovalConfigHasBeenSet = true; m_cloudRemovalConfig = std::move(value); }
    inline JobConfigInput& WithCloudRemovalConfig(const CloudRemovalConfigInput& value) { SetCloudRemovalConfig(value); return *this;}
    inline JobConfigInput& WithCloudRemovalConfig(CloudRemovalConfigInput&& value) { SetCloudRemovalConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline const GeoMosaicConfigInput& GetGeoMosaicConfig() const{ return m_geoMosaicConfig; }
    inline bool GeoMosaicConfigHasBeenSet() const { return m_geoMosaicConfigHasBeenSet; }
    inline void SetGeoMosaicConfig(const GeoMosaicConfigInput& value) { m_geoMosaicConfigHasBeenSet = true; m_geoMosaicConfig = value; }
    inline void SetGeoMosaicConfig(GeoMosaicConfigInput&& value) { m_geoMosaicConfigHasBeenSet = true; m_geoMosaicConfig = std::move(value); }
    inline JobConfigInput& WithGeoMosaicConfig(const GeoMosaicConfigInput& value) { SetGeoMosaicConfig(value); return *this;}
    inline JobConfigInput& WithGeoMosaicConfig(GeoMosaicConfigInput&& value) { SetGeoMosaicConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline const LandCoverSegmentationConfigInput& GetLandCoverSegmentationConfig() const{ return m_landCoverSegmentationConfig; }
    inline bool LandCoverSegmentationConfigHasBeenSet() const { return m_landCoverSegmentationConfigHasBeenSet; }
    inline void SetLandCoverSegmentationConfig(const LandCoverSegmentationConfigInput& value) { m_landCoverSegmentationConfigHasBeenSet = true; m_landCoverSegmentationConfig = value; }
    inline void SetLandCoverSegmentationConfig(LandCoverSegmentationConfigInput&& value) { m_landCoverSegmentationConfigHasBeenSet = true; m_landCoverSegmentationConfig = std::move(value); }
    inline JobConfigInput& WithLandCoverSegmentationConfig(const LandCoverSegmentationConfigInput& value) { SetLandCoverSegmentationConfig(value); return *this;}
    inline JobConfigInput& WithLandCoverSegmentationConfig(LandCoverSegmentationConfigInput&& value) { SetLandCoverSegmentationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline const ResamplingConfigInput& GetResamplingConfig() const{ return m_resamplingConfig; }
    inline bool ResamplingConfigHasBeenSet() const { return m_resamplingConfigHasBeenSet; }
    inline void SetResamplingConfig(const ResamplingConfigInput& value) { m_resamplingConfigHasBeenSet = true; m_resamplingConfig = value; }
    inline void SetResamplingConfig(ResamplingConfigInput&& value) { m_resamplingConfigHasBeenSet = true; m_resamplingConfig = std::move(value); }
    inline JobConfigInput& WithResamplingConfig(const ResamplingConfigInput& value) { SetResamplingConfig(value); return *this;}
    inline JobConfigInput& WithResamplingConfig(ResamplingConfigInput&& value) { SetResamplingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for a Stacking
     * Earth Observation job.</p>
     */
    inline const StackConfigInput& GetStackConfig() const{ return m_stackConfig; }
    inline bool StackConfigHasBeenSet() const { return m_stackConfigHasBeenSet; }
    inline void SetStackConfig(const StackConfigInput& value) { m_stackConfigHasBeenSet = true; m_stackConfig = value; }
    inline void SetStackConfig(StackConfigInput&& value) { m_stackConfigHasBeenSet = true; m_stackConfig = std::move(value); }
    inline JobConfigInput& WithStackConfig(const StackConfigInput& value) { SetStackConfig(value); return *this;}
    inline JobConfigInput& WithStackConfig(StackConfigInput&& value) { SetStackConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline const TemporalStatisticsConfigInput& GetTemporalStatisticsConfig() const{ return m_temporalStatisticsConfig; }
    inline bool TemporalStatisticsConfigHasBeenSet() const { return m_temporalStatisticsConfigHasBeenSet; }
    inline void SetTemporalStatisticsConfig(const TemporalStatisticsConfigInput& value) { m_temporalStatisticsConfigHasBeenSet = true; m_temporalStatisticsConfig = value; }
    inline void SetTemporalStatisticsConfig(TemporalStatisticsConfigInput&& value) { m_temporalStatisticsConfigHasBeenSet = true; m_temporalStatisticsConfig = std::move(value); }
    inline JobConfigInput& WithTemporalStatisticsConfig(const TemporalStatisticsConfigInput& value) { SetTemporalStatisticsConfig(value); return *this;}
    inline JobConfigInput& WithTemporalStatisticsConfig(TemporalStatisticsConfigInput&& value) { SetTemporalStatisticsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline const ZonalStatisticsConfigInput& GetZonalStatisticsConfig() const{ return m_zonalStatisticsConfig; }
    inline bool ZonalStatisticsConfigHasBeenSet() const { return m_zonalStatisticsConfigHasBeenSet; }
    inline void SetZonalStatisticsConfig(const ZonalStatisticsConfigInput& value) { m_zonalStatisticsConfigHasBeenSet = true; m_zonalStatisticsConfig = value; }
    inline void SetZonalStatisticsConfig(ZonalStatisticsConfigInput&& value) { m_zonalStatisticsConfigHasBeenSet = true; m_zonalStatisticsConfig = std::move(value); }
    inline JobConfigInput& WithZonalStatisticsConfig(const ZonalStatisticsConfigInput& value) { SetZonalStatisticsConfig(value); return *this;}
    inline JobConfigInput& WithZonalStatisticsConfig(ZonalStatisticsConfigInput&& value) { SetZonalStatisticsConfig(std::move(value)); return *this;}
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
