/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/AreaOfInterest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/PropertyFilters.h>
#include <aws/sagemaker-geospatial/model/TimeRangeFilterInput.h>
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
   * <p>This is a RasterDataCollectionQueryInput containing AreaOfInterest, Time
   * Range filter and Property filters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/RasterDataCollectionQueryWithBandFilterInput">AWS
   * API Reference</a></p>
   */
  class RasterDataCollectionQueryWithBandFilterInput
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput() = default;
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const { return m_areaOfInterest; }
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }
    template<typename AreaOfInterestT = AreaOfInterest>
    void SetAreaOfInterest(AreaOfInterestT&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::forward<AreaOfInterestT>(value); }
    template<typename AreaOfInterestT = AreaOfInterest>
    RasterDataCollectionQueryWithBandFilterInput& WithAreaOfInterest(AreaOfInterestT&& value) { SetAreaOfInterest(std::forward<AreaOfInterestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBandFilter() const { return m_bandFilter; }
    inline bool BandFilterHasBeenSet() const { return m_bandFilterHasBeenSet; }
    template<typename BandFilterT = Aws::Vector<Aws::String>>
    void SetBandFilter(BandFilterT&& value) { m_bandFilterHasBeenSet = true; m_bandFilter = std::forward<BandFilterT>(value); }
    template<typename BandFilterT = Aws::Vector<Aws::String>>
    RasterDataCollectionQueryWithBandFilterInput& WithBandFilter(BandFilterT&& value) { SetBandFilter(std::forward<BandFilterT>(value)); return *this;}
    template<typename BandFilterT = Aws::String>
    RasterDataCollectionQueryWithBandFilterInput& AddBandFilter(BandFilterT&& value) { m_bandFilterHasBeenSet = true; m_bandFilter.emplace_back(std::forward<BandFilterT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline const PropertyFilters& GetPropertyFilters() const { return m_propertyFilters; }
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }
    template<typename PropertyFiltersT = PropertyFilters>
    void SetPropertyFilters(PropertyFiltersT&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::forward<PropertyFiltersT>(value); }
    template<typename PropertyFiltersT = PropertyFilters>
    RasterDataCollectionQueryWithBandFilterInput& WithPropertyFilters(PropertyFiltersT&& value) { SetPropertyFilters(std::forward<PropertyFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline const TimeRangeFilterInput& GetTimeRangeFilter() const { return m_timeRangeFilter; }
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }
    template<typename TimeRangeFilterT = TimeRangeFilterInput>
    void SetTimeRangeFilter(TimeRangeFilterT&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::forward<TimeRangeFilterT>(value); }
    template<typename TimeRangeFilterT = TimeRangeFilterInput>
    RasterDataCollectionQueryWithBandFilterInput& WithTimeRangeFilter(TimeRangeFilterT&& value) { SetTimeRangeFilter(std::forward<TimeRangeFilterT>(value)); return *this;}
    ///@}
  private:

    AreaOfInterest m_areaOfInterest;
    bool m_areaOfInterestHasBeenSet = false;

    Aws::Vector<Aws::String> m_bandFilter;
    bool m_bandFilterHasBeenSet = false;

    PropertyFilters m_propertyFilters;
    bool m_propertyFiltersHasBeenSet = false;

    TimeRangeFilterInput m_timeRangeFilter;
    bool m_timeRangeFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
