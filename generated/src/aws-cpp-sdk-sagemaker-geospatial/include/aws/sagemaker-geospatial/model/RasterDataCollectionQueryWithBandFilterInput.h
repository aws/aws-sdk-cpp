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
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput();
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API RasterDataCollectionQueryWithBandFilterInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline const AreaOfInterest& GetAreaOfInterest() const{ return m_areaOfInterest; }

    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline bool AreaOfInterestHasBeenSet() const { return m_areaOfInterestHasBeenSet; }

    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline void SetAreaOfInterest(const AreaOfInterest& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = value; }

    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline void SetAreaOfInterest(AreaOfInterest&& value) { m_areaOfInterestHasBeenSet = true; m_areaOfInterest = std::move(value); }

    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithAreaOfInterest(const AreaOfInterest& value) { SetAreaOfInterest(value); return *this;}

    /**
     * <p>The Area of interest to be used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithAreaOfInterest(AreaOfInterest&& value) { SetAreaOfInterest(std::move(value)); return *this;}


    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBandFilter() const{ return m_bandFilter; }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline bool BandFilterHasBeenSet() const { return m_bandFilterHasBeenSet; }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline void SetBandFilter(const Aws::Vector<Aws::String>& value) { m_bandFilterHasBeenSet = true; m_bandFilter = value; }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline void SetBandFilter(Aws::Vector<Aws::String>&& value) { m_bandFilterHasBeenSet = true; m_bandFilter = std::move(value); }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithBandFilter(const Aws::Vector<Aws::String>& value) { SetBandFilter(value); return *this;}

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithBandFilter(Aws::Vector<Aws::String>&& value) { SetBandFilter(std::move(value)); return *this;}

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& AddBandFilter(const Aws::String& value) { m_bandFilterHasBeenSet = true; m_bandFilter.push_back(value); return *this; }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& AddBandFilter(Aws::String&& value) { m_bandFilterHasBeenSet = true; m_bandFilter.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of Bands to be displayed in the result for each item.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& AddBandFilter(const char* value) { m_bandFilterHasBeenSet = true; m_bandFilter.push_back(value); return *this; }


    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline const PropertyFilters& GetPropertyFilters() const{ return m_propertyFilters; }

    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline bool PropertyFiltersHasBeenSet() const { return m_propertyFiltersHasBeenSet; }

    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline void SetPropertyFilters(const PropertyFilters& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = value; }

    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline void SetPropertyFilters(PropertyFilters&& value) { m_propertyFiltersHasBeenSet = true; m_propertyFilters = std::move(value); }

    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithPropertyFilters(const PropertyFilters& value) { SetPropertyFilters(value); return *this;}

    /**
     * <p>The Property Filters used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithPropertyFilters(PropertyFilters&& value) { SetPropertyFilters(std::move(value)); return *this;}


    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline const TimeRangeFilterInput& GetTimeRangeFilter() const{ return m_timeRangeFilter; }

    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline bool TimeRangeFilterHasBeenSet() const { return m_timeRangeFilterHasBeenSet; }

    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline void SetTimeRangeFilter(const TimeRangeFilterInput& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = value; }

    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline void SetTimeRangeFilter(TimeRangeFilterInput&& value) { m_timeRangeFilterHasBeenSet = true; m_timeRangeFilter = std::move(value); }

    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithTimeRangeFilter(const TimeRangeFilterInput& value) { SetTimeRangeFilter(value); return *this;}

    /**
     * <p>The TimeRange Filter used in the search query.</p>
     */
    inline RasterDataCollectionQueryWithBandFilterInput& WithTimeRangeFilter(TimeRangeFilterInput&& value) { SetTimeRangeFilter(std::move(value)); return *this;}

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
