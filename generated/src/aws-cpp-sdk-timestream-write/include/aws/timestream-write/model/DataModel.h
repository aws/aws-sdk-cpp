/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/TimeUnit.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/MultiMeasureMappings.h>
#include <aws/timestream-write/model/DimensionMapping.h>
#include <aws/timestream-write/model/MixedMeasureMapping.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Data model for a batch load task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DataModel">AWS
   * API Reference</a></p>
   */
  class DataModel
  {
  public:
    AWS_TIMESTREAMWRITE_API DataModel() = default;
    AWS_TIMESTREAMWRITE_API DataModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline const Aws::String& GetTimeColumn() const { return m_timeColumn; }
    inline bool TimeColumnHasBeenSet() const { return m_timeColumnHasBeenSet; }
    template<typename TimeColumnT = Aws::String>
    void SetTimeColumn(TimeColumnT&& value) { m_timeColumnHasBeenSet = true; m_timeColumn = std::forward<TimeColumnT>(value); }
    template<typename TimeColumnT = Aws::String>
    DataModel& WithTimeColumn(TimeColumnT&& value) { SetTimeColumn(std::forward<TimeColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline TimeUnit GetTimeUnit() const { return m_timeUnit; }
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }
    inline void SetTimeUnit(TimeUnit value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }
    inline DataModel& WithTimeUnit(TimeUnit value) { SetTimeUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const { return m_dimensionMappings; }
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    void SetDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::forward<DimensionMappingsT>(value); }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    DataModel& WithDimensionMappings(DimensionMappingsT&& value) { SetDimensionMappings(std::forward<DimensionMappingsT>(value)); return *this;}
    template<typename DimensionMappingsT = DimensionMapping>
    DataModel& AddDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.emplace_back(std::forward<DimensionMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline const MultiMeasureMappings& GetMultiMeasureMappings() const { return m_multiMeasureMappings; }
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }
    template<typename MultiMeasureMappingsT = MultiMeasureMappings>
    void SetMultiMeasureMappings(MultiMeasureMappingsT&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::forward<MultiMeasureMappingsT>(value); }
    template<typename MultiMeasureMappingsT = MultiMeasureMappings>
    DataModel& WithMultiMeasureMappings(MultiMeasureMappingsT&& value) { SetMultiMeasureMappings(std::forward<MultiMeasureMappingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline const Aws::Vector<MixedMeasureMapping>& GetMixedMeasureMappings() const { return m_mixedMeasureMappings; }
    inline bool MixedMeasureMappingsHasBeenSet() const { return m_mixedMeasureMappingsHasBeenSet; }
    template<typename MixedMeasureMappingsT = Aws::Vector<MixedMeasureMapping>>
    void SetMixedMeasureMappings(MixedMeasureMappingsT&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = std::forward<MixedMeasureMappingsT>(value); }
    template<typename MixedMeasureMappingsT = Aws::Vector<MixedMeasureMapping>>
    DataModel& WithMixedMeasureMappings(MixedMeasureMappingsT&& value) { SetMixedMeasureMappings(std::forward<MixedMeasureMappingsT>(value)); return *this;}
    template<typename MixedMeasureMappingsT = MixedMeasureMapping>
    DataModel& AddMixedMeasureMappings(MixedMeasureMappingsT&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.emplace_back(std::forward<MixedMeasureMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetMeasureNameColumn() const { return m_measureNameColumn; }
    inline bool MeasureNameColumnHasBeenSet() const { return m_measureNameColumnHasBeenSet; }
    template<typename MeasureNameColumnT = Aws::String>
    void SetMeasureNameColumn(MeasureNameColumnT&& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = std::forward<MeasureNameColumnT>(value); }
    template<typename MeasureNameColumnT = Aws::String>
    DataModel& WithMeasureNameColumn(MeasureNameColumnT&& value) { SetMeasureNameColumn(std::forward<MeasureNameColumnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timeColumn;
    bool m_timeColumnHasBeenSet = false;

    TimeUnit m_timeUnit{TimeUnit::NOT_SET};
    bool m_timeUnitHasBeenSet = false;

    Aws::Vector<DimensionMapping> m_dimensionMappings;
    bool m_dimensionMappingsHasBeenSet = false;

    MultiMeasureMappings m_multiMeasureMappings;
    bool m_multiMeasureMappingsHasBeenSet = false;

    Aws::Vector<MixedMeasureMapping> m_mixedMeasureMappings;
    bool m_mixedMeasureMappingsHasBeenSet = false;

    Aws::String m_measureNameColumn;
    bool m_measureNameColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
