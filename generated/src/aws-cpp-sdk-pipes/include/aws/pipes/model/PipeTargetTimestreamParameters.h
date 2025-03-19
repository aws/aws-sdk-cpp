/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/EpochTimeUnit.h>
#include <aws/pipes/model/TimeFieldType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pipes/model/DimensionMapping.h>
#include <aws/pipes/model/SingleMeasureMapping.h>
#include <aws/pipes/model/MultiMeasureMapping.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The parameters for using a Timestream for LiveAnalytics table as a
   * target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/PipeTargetTimestreamParameters">AWS
   * API Reference</a></p>
   */
  class PipeTargetTimestreamParameters
  {
  public:
    AWS_PIPES_API PipeTargetTimestreamParameters() = default;
    AWS_PIPES_API PipeTargetTimestreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetTimestreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline const Aws::String& GetTimeValue() const { return m_timeValue; }
    inline bool TimeValueHasBeenSet() const { return m_timeValueHasBeenSet; }
    template<typename TimeValueT = Aws::String>
    void SetTimeValue(TimeValueT&& value) { m_timeValueHasBeenSet = true; m_timeValue = std::forward<TimeValueT>(value); }
    template<typename TimeValueT = Aws::String>
    PipeTargetTimestreamParameters& WithTimeValue(TimeValueT&& value) { SetTimeValue(std::forward<TimeValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline EpochTimeUnit GetEpochTimeUnit() const { return m_epochTimeUnit; }
    inline bool EpochTimeUnitHasBeenSet() const { return m_epochTimeUnitHasBeenSet; }
    inline void SetEpochTimeUnit(EpochTimeUnit value) { m_epochTimeUnitHasBeenSet = true; m_epochTimeUnit = value; }
    inline PipeTargetTimestreamParameters& WithEpochTimeUnit(EpochTimeUnit value) { SetEpochTimeUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline TimeFieldType GetTimeFieldType() const { return m_timeFieldType; }
    inline bool TimeFieldTypeHasBeenSet() const { return m_timeFieldTypeHasBeenSet; }
    inline void SetTimeFieldType(TimeFieldType value) { m_timeFieldTypeHasBeenSet = true; m_timeFieldType = value; }
    inline PipeTargetTimestreamParameters& WithTimeFieldType(TimeFieldType value) { SetTimeFieldType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>How to format the timestamps. For example,
     * <code>yyyy-MM-dd'T'HH:mm:ss'Z'</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline const Aws::String& GetTimestampFormat() const { return m_timestampFormat; }
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }
    template<typename TimestampFormatT = Aws::String>
    void SetTimestampFormat(TimestampFormatT&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::forward<TimestampFormatT>(value); }
    template<typename TimestampFormatT = Aws::String>
    PipeTargetTimestreamParameters& WithTimestampFormat(TimestampFormatT&& value) { SetTimestampFormat(std::forward<TimestampFormatT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>64 bit version value or source data field that represents the version value
     * for your data.</p> <p>Write requests with a higher version number will update
     * the existing measure values of the record and version. In cases where the
     * measure value is the same, the version will still be updated. </p> <p>Default
     * value is 1. </p> <p>Timestream for LiveAnalytics does not support updating
     * partial measure values in a record.</p> <p>Write requests for duplicate data
     * with a higher version number will update the existing measure value and version.
     * In cases where the measure value is the same, <code>Version</code> will still be
     * updated. Default value is <code>1</code>.</p>  <p> <code>Version</code>
     * must be <code>1</code> or greater, or you will receive a
     * <code>ValidationException</code> error.</p> 
     */
    inline const Aws::String& GetVersionValue() const { return m_versionValue; }
    inline bool VersionValueHasBeenSet() const { return m_versionValueHasBeenSet; }
    template<typename VersionValueT = Aws::String>
    void SetVersionValue(VersionValueT&& value) { m_versionValueHasBeenSet = true; m_versionValue = std::forward<VersionValueT>(value); }
    template<typename VersionValueT = Aws::String>
    PipeTargetTimestreamParameters& WithVersionValue(VersionValueT&& value) { SetVersionValue(std::forward<VersionValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const { return m_dimensionMappings; }
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    void SetDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::forward<DimensionMappingsT>(value); }
    template<typename DimensionMappingsT = Aws::Vector<DimensionMapping>>
    PipeTargetTimestreamParameters& WithDimensionMappings(DimensionMappingsT&& value) { SetDimensionMappings(std::forward<DimensionMappingsT>(value)); return *this;}
    template<typename DimensionMappingsT = DimensionMapping>
    PipeTargetTimestreamParameters& AddDimensionMappings(DimensionMappingsT&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.emplace_back(std::forward<DimensionMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline const Aws::Vector<SingleMeasureMapping>& GetSingleMeasureMappings() const { return m_singleMeasureMappings; }
    inline bool SingleMeasureMappingsHasBeenSet() const { return m_singleMeasureMappingsHasBeenSet; }
    template<typename SingleMeasureMappingsT = Aws::Vector<SingleMeasureMapping>>
    void SetSingleMeasureMappings(SingleMeasureMappingsT&& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings = std::forward<SingleMeasureMappingsT>(value); }
    template<typename SingleMeasureMappingsT = Aws::Vector<SingleMeasureMapping>>
    PipeTargetTimestreamParameters& WithSingleMeasureMappings(SingleMeasureMappingsT&& value) { SetSingleMeasureMappings(std::forward<SingleMeasureMappingsT>(value)); return *this;}
    template<typename SingleMeasureMappingsT = SingleMeasureMapping>
    PipeTargetTimestreamParameters& AddSingleMeasureMappings(SingleMeasureMappingsT&& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings.emplace_back(std::forward<SingleMeasureMappingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline const Aws::Vector<MultiMeasureMapping>& GetMultiMeasureMappings() const { return m_multiMeasureMappings; }
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }
    template<typename MultiMeasureMappingsT = Aws::Vector<MultiMeasureMapping>>
    void SetMultiMeasureMappings(MultiMeasureMappingsT&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::forward<MultiMeasureMappingsT>(value); }
    template<typename MultiMeasureMappingsT = Aws::Vector<MultiMeasureMapping>>
    PipeTargetTimestreamParameters& WithMultiMeasureMappings(MultiMeasureMappingsT&& value) { SetMultiMeasureMappings(std::forward<MultiMeasureMappingsT>(value)); return *this;}
    template<typename MultiMeasureMappingsT = MultiMeasureMapping>
    PipeTargetTimestreamParameters& AddMultiMeasureMappings(MultiMeasureMappingsT&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings.emplace_back(std::forward<MultiMeasureMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_timeValue;
    bool m_timeValueHasBeenSet = false;

    EpochTimeUnit m_epochTimeUnit{EpochTimeUnit::NOT_SET};
    bool m_epochTimeUnitHasBeenSet = false;

    TimeFieldType m_timeFieldType{TimeFieldType::NOT_SET};
    bool m_timeFieldTypeHasBeenSet = false;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet = false;

    Aws::String m_versionValue;
    bool m_versionValueHasBeenSet = false;

    Aws::Vector<DimensionMapping> m_dimensionMappings;
    bool m_dimensionMappingsHasBeenSet = false;

    Aws::Vector<SingleMeasureMapping> m_singleMeasureMappings;
    bool m_singleMeasureMappingsHasBeenSet = false;

    Aws::Vector<MultiMeasureMapping> m_multiMeasureMappings;
    bool m_multiMeasureMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
