/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AreaOfInterest.h>
#include <aws/sagemaker-geospatial/model/PropertyFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/TimeRangeFilterInput.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionQueryInput">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionQueryInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput();
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const{ return m_areaOfInterest; }

    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }

    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline void SetAreaOfInterest(const AreaOfInterest& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = value; }

    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline void SetAreaOfInterest(AreaOfInterest&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::move(value); }

    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline RasterDataCollectionQueryInput& WithAreaOfInterest(const AreaOfInterest& value) { SetAreaOfInterest(value); return *this;}

    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline RasterDataCollectionQueryInput& WithAreaOfInterest(AreaOfInterest&& value) { SetAreaOfInterest(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const PropertyFilters& GetPropertyFilters() const{ return m_propertyFilters; }

    /**
     * <p/>
     */
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPropertyFilters(const PropertyFilters& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }

    /**
     * <p/>
     */
    inline void SetPropertyFilters(PropertyFilters&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }

    /**
     * <p/>
     */
    inline RasterDataCollectionQueryInput& WithPropertyFilters(const PropertyFilters& value) { SetPropertyFilters(value); return *this;}

    /**
     * <p/>
     */
    inline RasterDataCollectionQueryInput& WithPropertyFilters(PropertyFilters&& value) { SetPropertyFilters(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetRasterDataCollectionArn() const{ return m_rasterDataCollectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline bool RasterDataCollectionArnHasBeenSet() const { return m_rasterDataCollectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetRasterDataCollectionArn(const Aws::String& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetRasterDataCollectionArn(Aws::String&& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline void SetRasterDataCollectionArn(const char* value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionQueryInput& WithRasterDataCollectionArn(const Aws::String& value) { SetRasterDataCollectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionQueryInput& WithRasterDataCollectionArn(Aws::String&& value) { SetRasterDataCollectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline RasterDataCollectionQueryInput& WithRasterDataCollectionArn(const char* value) { SetRasterDataCollectionArn(value); return *this;}


    /**
     * <p/>
     */
    inline const TimeRangeFilterInput& GetTimeRangeFilter() const{ return m_timeRangeFilter; }

    /**
     * <p/>
     */
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTimeRangeFilter(const TimeRangeFilterInput& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }

    /**
     * <p/>
     */
    inline void SetTimeRangeFilter(TimeRangeFilterInput&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }

    /**
     * <p/>
     */
    inline RasterDataCollectionQueryInput& WithTimeRangeFilter(const TimeRangeFilterInput& value) { SetTimeRangeFilter(value); return *this;}

    /**
     * <p/>
     */
    inline RasterDataCollectionQueryInput& WithTimeRangeFilter(TimeRangeFilterInput&& value) { SetTimeRangeFilter(std::move(value)); return *this;}

  private:

    AreaOfInterest m_areaOfInterest;
    bool m_areaOfInterestHasBeenSet = false;

    PropertyFilters m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    Aws::String m_rasterDataCollectionArn;
    bool m_rasterDataCollectionArnHasBeenSet = false;

    TimeRangeFilterInput m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
