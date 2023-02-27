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
    AWS_TIMESTREAMWRITE_API DataModel();
    AWS_TIMESTREAMWRITE_API DataModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline const Aws::String& GetTimeColumn() const{ return m_timeColumn; }

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline bool TimeColumnHasBeenSet() const { return m_timeColumnHasBeenSet; }

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline void SetTimeColumn(const Aws::String& value) { m_timeColumnHasBeenSet = true; m_timeColumn = value; }

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline void SetTimeColumn(Aws::String&& value) { m_timeColumnHasBeenSet = true; m_timeColumn = std::move(value); }

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline void SetTimeColumn(const char* value) { m_timeColumnHasBeenSet = true; m_timeColumn.assign(value); }

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline DataModel& WithTimeColumn(const Aws::String& value) { SetTimeColumn(value); return *this;}

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline DataModel& WithTimeColumn(Aws::String&& value) { SetTimeColumn(std::move(value)); return *this;}

    /**
     * <p>Source column to be mapped to time.</p>
     */
    inline DataModel& WithTimeColumn(const char* value) { SetTimeColumn(value); return *this;}


    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline const TimeUnit& GetTimeUnit() const{ return m_timeUnit; }

    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline bool TimeUnitHasBeenSet() const { return m_timeUnitHasBeenSet; }

    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline void SetTimeUnit(const TimeUnit& value) { m_timeUnitHasBeenSet = true; m_timeUnit = value; }

    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline void SetTimeUnit(TimeUnit&& value) { m_timeUnitHasBeenSet = true; m_timeUnit = std::move(value); }

    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline DataModel& WithTimeUnit(const TimeUnit& value) { SetTimeUnit(value); return *this;}

    /**
     * <p> The granularity of the timestamp unit. It indicates if the time value is in
     * seconds, milliseconds, nanoseconds, or other supported values. Default is
     * <code>MILLISECONDS</code>. </p>
     */
    inline DataModel& WithTimeUnit(TimeUnit&& value) { SetTimeUnit(std::move(value)); return *this;}


    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const{ return m_dimensionMappings; }

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline void SetDimensionMappings(const Aws::Vector<DimensionMapping>& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = value; }

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline void SetDimensionMappings(Aws::Vector<DimensionMapping>&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::move(value); }

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline DataModel& WithDimensionMappings(const Aws::Vector<DimensionMapping>& value) { SetDimensionMappings(value); return *this;}

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline DataModel& WithDimensionMappings(Aws::Vector<DimensionMapping>&& value) { SetDimensionMappings(std::move(value)); return *this;}

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline DataModel& AddDimensionMappings(const DimensionMapping& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(value); return *this; }

    /**
     * <p>Source to target mappings for dimensions.</p>
     */
    inline DataModel& AddDimensionMappings(DimensionMapping&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline const MultiMeasureMappings& GetMultiMeasureMappings() const{ return m_multiMeasureMappings; }

    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }

    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline void SetMultiMeasureMappings(const MultiMeasureMappings& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = value; }

    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline void SetMultiMeasureMappings(MultiMeasureMappings&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::move(value); }

    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline DataModel& WithMultiMeasureMappings(const MultiMeasureMappings& value) { SetMultiMeasureMappings(value); return *this;}

    /**
     * <p>Source to target mappings for multi-measure records.</p>
     */
    inline DataModel& WithMultiMeasureMappings(MultiMeasureMappings&& value) { SetMultiMeasureMappings(std::move(value)); return *this;}


    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline const Aws::Vector<MixedMeasureMapping>& GetMixedMeasureMappings() const{ return m_mixedMeasureMappings; }

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline bool MixedMeasureMappingsHasBeenSet() const { return m_mixedMeasureMappingsHasBeenSet; }

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline void SetMixedMeasureMappings(const Aws::Vector<MixedMeasureMapping>& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = value; }

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline void SetMixedMeasureMappings(Aws::Vector<MixedMeasureMapping>&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings = std::move(value); }

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline DataModel& WithMixedMeasureMappings(const Aws::Vector<MixedMeasureMapping>& value) { SetMixedMeasureMappings(value); return *this;}

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline DataModel& WithMixedMeasureMappings(Aws::Vector<MixedMeasureMapping>&& value) { SetMixedMeasureMappings(std::move(value)); return *this;}

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline DataModel& AddMixedMeasureMappings(const MixedMeasureMapping& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.push_back(value); return *this; }

    /**
     * <p>Source to target mappings for measures.</p>
     */
    inline DataModel& AddMixedMeasureMappings(MixedMeasureMapping&& value) { m_mixedMeasureMappingsHasBeenSet = true; m_mixedMeasureMappings.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetMeasureNameColumn() const{ return m_measureNameColumn; }

    /**
     * <p/>
     */
    inline bool MeasureNameColumnHasBeenSet() const { return m_measureNameColumnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMeasureNameColumn(const Aws::String& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = value; }

    /**
     * <p/>
     */
    inline void SetMeasureNameColumn(Aws::String&& value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMeasureNameColumn(const char* value) { m_measureNameColumnHasBeenSet = true; m_measureNameColumn.assign(value); }

    /**
     * <p/>
     */
    inline DataModel& WithMeasureNameColumn(const Aws::String& value) { SetMeasureNameColumn(value); return *this;}

    /**
     * <p/>
     */
    inline DataModel& WithMeasureNameColumn(Aws::String&& value) { SetMeasureNameColumn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataModel& WithMeasureNameColumn(const char* value) { SetMeasureNameColumn(value); return *this;}

  private:

    Aws::String m_timeColumn;
    bool m_timeColumnHasBeenSet = false;

    TimeUnit m_timeUnit;
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
