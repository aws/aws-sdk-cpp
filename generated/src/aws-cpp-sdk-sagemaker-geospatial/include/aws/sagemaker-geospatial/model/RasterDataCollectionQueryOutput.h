/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AreaOfInterest.h>
#include <aws/sagemaker-geospatial/model/PropertyFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/TimeRangeFilterOutput.h>
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
   * <p>The output structure contains the Raster Data Collection Query input along
   * with some additional metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionQueryOutput">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionQueryOutput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Area of Interest used in the search.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const { return m_areaOfInterest; }
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }
    template<typename AreaOfInterestT = AreaOfInterest>
    void SetAreaOfInterest(AreaOfInterestT&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::forward<AreaOfInterestT>(value); }
    template<typename AreaOfInterestT = AreaOfInterest>
    RasterDataCollectionQueryOutput& WithAreaOfInterest(AreaOfInterestT&& value) { SetAreaOfInterest(std::forward<AreaOfInterestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Property filters used in the search.</p>
     */
    inline const PropertyFilters& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = PropertyFilters>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = PropertyFilters>
    RasterDataCollectionQueryOutput& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Raster Data Collection against which the search is done.</p>
     */
    inline const Aws::String& GetRasterDataCollectionArn() const { return m_rasterDataCollectionArn; }
    inline bool RasterDataCollectionArnHasBeenSet() const { return m_rasterDataCollectionArnHasBeenSet; }
    template<typename RasterDataCollectionArnT = Aws::String>
    void SetRasterDataCollectionArn(RasterDataCollectionArnT&& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = std::forward<RasterDataCollectionArnT>(value); }
    template<typename RasterDataCollectionArnT = Aws::String>
    RasterDataCollectionQueryOutput& WithRasterDataCollectionArn(RasterDataCollectionArnT&& value) { SetRasterDataCollectionArn(std::forward<RasterDataCollectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the raster data collection.</p>
     */
    inline const Aws::String& GetRasterDataCollectionName() const { return m_rasterDataCollectionName; }
    inline bool RasterDataCollectionNameHasBeenSet() const { return m_rasterDataCollectionNameHasBeenSet; }
    template<typename RasterDataCollectionNameT = Aws::String>
    void SetRasterDataCollectionName(RasterDataCollectionNameT&& value) { m_rasterDataCollectionNameHasBeenSet = true; m_rasterDataCollectionName = std::forward<RasterDataCollectionNameT>(value); }
    template<typename RasterDataCollectionNameT = Aws::String>
    RasterDataCollectionQueryOutput& WithRasterDataCollectionName(RasterDataCollectionNameT&& value) { SetRasterDataCollectionName(std::forward<RasterDataCollectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TimeRange filter used in the search.</p>
     */
    inline const TimeRangeFilterOutput& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = TimeRangeFilterOutput>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = TimeRangeFilterOutput>
    RasterDataCollectionQueryOutput& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
    ///@}
  private:

    AreaOfInterest m_areaOfInterest;
    bool m_areaOfInterestHasBeenSet = false;

    PropertyFilters m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    Aws::String m_rasterDataCollectionArn;
    bool m_rasterDataCollectionArnHasBeenSet = false;

    Aws::String m_rasterDataCollectionName;
    bool m_rasterDataCollectionNameHasBeenSet = false;

    TimeRangeFilterOutput m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
