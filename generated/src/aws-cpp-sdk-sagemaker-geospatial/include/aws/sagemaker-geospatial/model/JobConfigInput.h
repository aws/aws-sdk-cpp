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


    /**
     * <p/>
     */
    inline const BandMathConfigInput& GetBandMathConfig() const{ return m_bandMathConfig; }

    /**
     * <p/>
     */
    inline bool BandMathConfigHasBeenSet() const { return m_bandMathConfigHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetBandMathConfig(const BandMathConfigInput& value) { m_bandMathConfigHasBeenSet = true; m_bandMathConfig = value; }

    /**
     * <p/>
     */
    inline void SetBandMathConfig(BandMathConfigInput&& value) { m_bandMathConfigHasBeenSet = true; m_bandMathConfig = std::move(value); }

    /**
     * <p/>
     */
    inline JobConfigInput& WithBandMathConfig(const BandMathConfigInput& value) { SetBandMathConfig(value); return *this;}

    /**
     * <p/>
     */
    inline JobConfigInput& WithBandMathConfig(BandMathConfigInput&& value) { SetBandMathConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline const CloudMaskingConfigInput& GetCloudMaskingConfig() const{ return m_cloudMaskingConfig; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline bool CloudMaskingConfigHasBeenSet() const { return m_cloudMaskingConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline void SetCloudMaskingConfig(const CloudMaskingConfigInput& value) { m_cloudMaskingConfigHasBeenSet = true; m_cloudMaskingConfig = value; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline void SetCloudMaskingConfig(CloudMaskingConfigInput&& value) { m_cloudMaskingConfigHasBeenSet = true; m_cloudMaskingConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline JobConfigInput& WithCloudMaskingConfig(const CloudMaskingConfigInput& value) { SetCloudMaskingConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for cloud
     * masking.</p>
     */
    inline JobConfigInput& WithCloudMaskingConfig(CloudMaskingConfigInput&& value) { SetCloudMaskingConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline const CloudRemovalConfigInput& GetCloudRemovalConfig() const{ return m_cloudRemovalConfig; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline bool CloudRemovalConfigHasBeenSet() const { return m_cloudRemovalConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline void SetCloudRemovalConfig(const CloudRemovalConfigInput& value) { m_cloudRemovalConfigHasBeenSet = true; m_cloudRemovalConfig = value; }

    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline void SetCloudRemovalConfig(CloudRemovalConfigInput&& value) { m_cloudRemovalConfigHasBeenSet = true; m_cloudRemovalConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline JobConfigInput& WithCloudRemovalConfig(const CloudRemovalConfigInput& value) { SetCloudRemovalConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for cloud
     * removal.</p>
     */
    inline JobConfigInput& WithCloudRemovalConfig(CloudRemovalConfigInput&& value) { SetCloudRemovalConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline const GeoMosaicConfigInput& GetGeoMosaicConfig() const{ return m_geoMosaicConfig; }

    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline bool GeoMosaicConfigHasBeenSet() const { return m_geoMosaicConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline void SetGeoMosaicConfig(const GeoMosaicConfigInput& value) { m_geoMosaicConfigHasBeenSet = true; m_geoMosaicConfig = value; }

    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline void SetGeoMosaicConfig(GeoMosaicConfigInput&& value) { m_geoMosaicConfigHasBeenSet = true; m_geoMosaicConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline JobConfigInput& WithGeoMosaicConfig(const GeoMosaicConfigInput& value) { SetGeoMosaicConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for
     * geomosaic.</p>
     */
    inline JobConfigInput& WithGeoMosaicConfig(GeoMosaicConfigInput&& value) { SetGeoMosaicConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline const LandCoverSegmentationConfigInput& GetLandCoverSegmentationConfig() const{ return m_landCoverSegmentationConfig; }

    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline bool LandCoverSegmentationConfigHasBeenSet() const { return m_landCoverSegmentationConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline void SetLandCoverSegmentationConfig(const LandCoverSegmentationConfigInput& value) { m_landCoverSegmentationConfigHasBeenSet = true; m_landCoverSegmentationConfig = value; }

    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline void SetLandCoverSegmentationConfig(LandCoverSegmentationConfigInput&& value) { m_landCoverSegmentationConfigHasBeenSet = true; m_landCoverSegmentationConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline JobConfigInput& WithLandCoverSegmentationConfig(const LandCoverSegmentationConfigInput& value) { SetLandCoverSegmentationConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for land cover
     * segmentation.</p>
     */
    inline JobConfigInput& WithLandCoverSegmentationConfig(LandCoverSegmentationConfigInput&& value) { SetLandCoverSegmentationConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline const ResamplingConfigInput& GetResamplingConfig() const{ return m_resamplingConfig; }

    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline bool ResamplingConfigHasBeenSet() const { return m_resamplingConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline void SetResamplingConfig(const ResamplingConfigInput& value) { m_resamplingConfigHasBeenSet = true; m_resamplingConfig = value; }

    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline void SetResamplingConfig(ResamplingConfigInput&& value) { m_resamplingConfigHasBeenSet = true; m_resamplingConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline JobConfigInput& WithResamplingConfig(const ResamplingConfigInput& value) { SetResamplingConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for
     * resampling.</p>
     */
    inline JobConfigInput& WithResamplingConfig(ResamplingConfigInput&& value) { SetResamplingConfig(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const StackConfigInput& GetStackConfig() const{ return m_stackConfig; }

    /**
     * <p/>
     */
    inline bool StackConfigHasBeenSet() const { return m_stackConfigHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetStackConfig(const StackConfigInput& value) { m_stackConfigHasBeenSet = true; m_stackConfig = value; }

    /**
     * <p/>
     */
    inline void SetStackConfig(StackConfigInput&& value) { m_stackConfigHasBeenSet = true; m_stackConfig = std::move(value); }

    /**
     * <p/>
     */
    inline JobConfigInput& WithStackConfig(const StackConfigInput& value) { SetStackConfig(value); return *this;}

    /**
     * <p/>
     */
    inline JobConfigInput& WithStackConfig(StackConfigInput&& value) { SetStackConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline const TemporalStatisticsConfigInput& GetTemporalStatisticsConfig() const{ return m_temporalStatisticsConfig; }

    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline bool TemporalStatisticsConfigHasBeenSet() const { return m_temporalStatisticsConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline void SetTemporalStatisticsConfig(const TemporalStatisticsConfigInput& value) { m_temporalStatisticsConfigHasBeenSet = true; m_temporalStatisticsConfig = value; }

    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline void SetTemporalStatisticsConfig(TemporalStatisticsConfigInput&& value) { m_temporalStatisticsConfigHasBeenSet = true; m_temporalStatisticsConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline JobConfigInput& WithTemporalStatisticsConfig(const TemporalStatisticsConfigInput& value) { SetTemporalStatisticsConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for temporal
     * statistics.</p>
     */
    inline JobConfigInput& WithTemporalStatisticsConfig(TemporalStatisticsConfigInput&& value) { SetTemporalStatisticsConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline const ZonalStatisticsConfigInput& GetZonalStatisticsConfig() const{ return m_zonalStatisticsConfig; }

    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline bool ZonalStatisticsConfigHasBeenSet() const { return m_zonalStatisticsConfigHasBeenSet; }

    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline void SetZonalStatisticsConfig(const ZonalStatisticsConfigInput& value) { m_zonalStatisticsConfigHasBeenSet = true; m_zonalStatisticsConfig = value; }

    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline void SetZonalStatisticsConfig(ZonalStatisticsConfigInput&& value) { m_zonalStatisticsConfigHasBeenSet = true; m_zonalStatisticsConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline JobConfigInput& WithZonalStatisticsConfig(const ZonalStatisticsConfigInput& value) { SetZonalStatisticsConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration for zonal
     * statistics.</p>
     */
    inline JobConfigInput& WithZonalStatisticsConfig(ZonalStatisticsConfigInput&& value) { SetZonalStatisticsConfig(std::move(value)); return *this;}

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
