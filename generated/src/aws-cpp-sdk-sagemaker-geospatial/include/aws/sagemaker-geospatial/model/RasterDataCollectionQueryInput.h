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
   * <p>The input structure for Raster Data Collection Query containing the Area of
   * Interest, TimeRange Filters, and Property Filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionQueryInput">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionQueryInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The area of interest being queried for the raster data collection.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const { return m_areaOfInterest; }
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }
    template<typename AreaOfInterestT = AreaOfInterest>
    void SetAreaOfInterest(AreaOfInterestT&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::forward<AreaOfInterestT>(value); }
    template<typename AreaOfInterestT = AreaOfInterest>
    RasterDataCollectionQueryInput& WithAreaOfInterest(AreaOfInterestT&& value) { SetAreaOfInterest(std::forward<AreaOfInterestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Property filters used in the Raster Data Collection Query.</p>
     */
    inline const PropertyFilters& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = PropertyFilters>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = PropertyFilters>
    RasterDataCollectionQueryInput& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the raster data collection.</p>
     */
    inline const Aws::String& GetRasterDataCollectionArn() const { return m_rasterDataCollectionArn; }
    inline bool RasterDataCollectionArnHasBeenSet() const { return m_rasterDataCollectionArnHasBeenSet; }
    template<typename RasterDataCollectionArnT = Aws::String>
    void SetRasterDataCollectionArn(RasterDataCollectionArnT&& value) { m_rasterDataCollectionArnHasBeenSet = true; m_rasterDataCollectionArn = std::forward<RasterDataCollectionArnT>(value); }
    template<typename RasterDataCollectionArnT = Aws::String>
    RasterDataCollectionQueryInput& WithRasterDataCollectionArn(RasterDataCollectionArnT&& value) { SetRasterDataCollectionArn(std::forward<RasterDataCollectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TimeRange Filter used in the RasterDataCollection Query.</p>
     */
    inline const TimeRangeFilterInput& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = TimeRangeFilterInput>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = TimeRangeFilterInput>
    RasterDataCollectionQueryInput& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
    ///@}
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
