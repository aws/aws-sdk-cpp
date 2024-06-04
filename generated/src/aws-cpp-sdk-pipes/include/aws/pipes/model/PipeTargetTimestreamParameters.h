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
    AWS_PIPES_API PipeTargetTimestreamParameters();
    AWS_PIPES_API PipeTargetTimestreamParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API PipeTargetTimestreamParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline const Aws::String& GetTimeValue() const{ return m_timeValue; }

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline bool TimeValueHasBeenSet() const { return m_timeValueHasBeenSet; }

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline void SetTimeValue(const Aws::String& value) { m_timeValueHasBeenSet = true; m_timeValue = value; }

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline void SetTimeValue(Aws::String&& value) { m_timeValueHasBeenSet = true; m_timeValue = std::move(value); }

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline void SetTimeValue(const char* value) { m_timeValueHasBeenSet = true; m_timeValue.assign(value); }

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimeValue(const Aws::String& value) { SetTimeValue(value); return *this;}

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimeValue(Aws::String&& value) { SetTimeValue(std::move(value)); return *this;}

    /**
     * <p>Dynamic path to the source data field that represents the time value for your
     * data.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimeValue(const char* value) { SetTimeValue(value); return *this;}


    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline const EpochTimeUnit& GetEpochTimeUnit() const{ return m_epochTimeUnit; }

    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline bool EpochTimeUnitHasBeenSet() const { return m_epochTimeUnitHasBeenSet; }

    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline void SetEpochTimeUnit(const EpochTimeUnit& value) { m_epochTimeUnitHasBeenSet = true; m_epochTimeUnit = value; }

    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline void SetEpochTimeUnit(EpochTimeUnit&& value) { m_epochTimeUnitHasBeenSet = true; m_epochTimeUnit = std::move(value); }

    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithEpochTimeUnit(const EpochTimeUnit& value) { SetEpochTimeUnit(value); return *this;}

    /**
     * <p>The granularity of the time units used. Default is
     * <code>MILLISECONDS</code>.</p> <p>Required if <code>TimeFieldType</code> is
     * specified as <code>EPOCH</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithEpochTimeUnit(EpochTimeUnit&& value) { SetEpochTimeUnit(std::move(value)); return *this;}


    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline const TimeFieldType& GetTimeFieldType() const{ return m_timeFieldType; }

    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline bool TimeFieldTypeHasBeenSet() const { return m_timeFieldTypeHasBeenSet; }

    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline void SetTimeFieldType(const TimeFieldType& value) { m_timeFieldTypeHasBeenSet = true; m_timeFieldType = value; }

    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline void SetTimeFieldType(TimeFieldType&& value) { m_timeFieldTypeHasBeenSet = true; m_timeFieldType = std::move(value); }

    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimeFieldType(const TimeFieldType& value) { SetTimeFieldType(value); return *this;}

    /**
     * <p>The type of time value used.</p> <p>The default is <code>EPOCH</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimeFieldType(TimeFieldType&& value) { SetTimeFieldType(std::move(value)); return *this;}


    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = value; }

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::move(value); }

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormatHasBeenSet = true; m_timestampFormat.assign(value); }

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>How to format the timestamps. For example,
     * <code>YYYY-MM-DDThh:mm:ss.sssTZD</code>.</p> <p>Required if
     * <code>TimeFieldType</code> is specified as <code>TIMESTAMP_FORMAT</code>.</p>
     */
    inline PipeTargetTimestreamParameters& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}


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
    inline const Aws::String& GetVersionValue() const{ return m_versionValue; }

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
    inline bool VersionValueHasBeenSet() const { return m_versionValueHasBeenSet; }

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
    inline void SetVersionValue(const Aws::String& value) { m_versionValueHasBeenSet = true; m_versionValue = value; }

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
    inline void SetVersionValue(Aws::String&& value) { m_versionValueHasBeenSet = true; m_versionValue = std::move(value); }

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
    inline void SetVersionValue(const char* value) { m_versionValueHasBeenSet = true; m_versionValue.assign(value); }

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
    inline PipeTargetTimestreamParameters& WithVersionValue(const Aws::String& value) { SetVersionValue(value); return *this;}

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
    inline PipeTargetTimestreamParameters& WithVersionValue(Aws::String&& value) { SetVersionValue(std::move(value)); return *this;}

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
    inline PipeTargetTimestreamParameters& WithVersionValue(const char* value) { SetVersionValue(value); return *this;}


    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline const Aws::Vector<DimensionMapping>& GetDimensionMappings() const{ return m_dimensionMappings; }

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline bool DimensionMappingsHasBeenSet() const { return m_dimensionMappingsHasBeenSet; }

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline void SetDimensionMappings(const Aws::Vector<DimensionMapping>& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = value; }

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline void SetDimensionMappings(Aws::Vector<DimensionMapping>&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings = std::move(value); }

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline PipeTargetTimestreamParameters& WithDimensionMappings(const Aws::Vector<DimensionMapping>& value) { SetDimensionMappings(value); return *this;}

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline PipeTargetTimestreamParameters& WithDimensionMappings(Aws::Vector<DimensionMapping>&& value) { SetDimensionMappings(std::move(value)); return *this;}

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline PipeTargetTimestreamParameters& AddDimensionMappings(const DimensionMapping& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(value); return *this; }

    /**
     * <p>Map source data to dimensions in the target Timestream for LiveAnalytics
     * table.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
     * Timestream for LiveAnalytics concepts</a> </p>
     */
    inline PipeTargetTimestreamParameters& AddDimensionMappings(DimensionMapping&& value) { m_dimensionMappingsHasBeenSet = true; m_dimensionMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline const Aws::Vector<SingleMeasureMapping>& GetSingleMeasureMappings() const{ return m_singleMeasureMappings; }

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline bool SingleMeasureMappingsHasBeenSet() const { return m_singleMeasureMappingsHasBeenSet; }

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline void SetSingleMeasureMappings(const Aws::Vector<SingleMeasureMapping>& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings = value; }

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline void SetSingleMeasureMappings(Aws::Vector<SingleMeasureMapping>&& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings = std::move(value); }

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& WithSingleMeasureMappings(const Aws::Vector<SingleMeasureMapping>& value) { SetSingleMeasureMappings(value); return *this;}

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& WithSingleMeasureMappings(Aws::Vector<SingleMeasureMapping>&& value) { SetSingleMeasureMappings(std::move(value)); return *this;}

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& AddSingleMeasureMappings(const SingleMeasureMapping& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings.push_back(value); return *this; }

    /**
     * <p>Mappings of single source data fields to individual records in the specified
     * Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& AddSingleMeasureMappings(SingleMeasureMapping&& value) { m_singleMeasureMappingsHasBeenSet = true; m_singleMeasureMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline const Aws::Vector<MultiMeasureMapping>& GetMultiMeasureMappings() const{ return m_multiMeasureMappings; }

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline bool MultiMeasureMappingsHasBeenSet() const { return m_multiMeasureMappingsHasBeenSet; }

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline void SetMultiMeasureMappings(const Aws::Vector<MultiMeasureMapping>& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = value; }

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline void SetMultiMeasureMappings(Aws::Vector<MultiMeasureMapping>&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings = std::move(value); }

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& WithMultiMeasureMappings(const Aws::Vector<MultiMeasureMapping>& value) { SetMultiMeasureMappings(value); return *this;}

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& WithMultiMeasureMappings(Aws::Vector<MultiMeasureMapping>&& value) { SetMultiMeasureMappings(std::move(value)); return *this;}

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& AddMultiMeasureMappings(const MultiMeasureMapping& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings.push_back(value); return *this; }

    /**
     * <p>Maps multiple measures from the source event to the same record in the
     * specified Timestream for LiveAnalytics table.</p>
     */
    inline PipeTargetTimestreamParameters& AddMultiMeasureMappings(MultiMeasureMapping&& value) { m_multiMeasureMappingsHasBeenSet = true; m_multiMeasureMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_timeValue;
    bool m_timeValueHasBeenSet = false;

    EpochTimeUnit m_epochTimeUnit;
    bool m_epochTimeUnitHasBeenSet = false;

    TimeFieldType m_timeFieldType;
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
