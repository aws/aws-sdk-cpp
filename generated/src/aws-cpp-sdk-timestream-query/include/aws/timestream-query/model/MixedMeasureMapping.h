/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-query/model/MeasureValueType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-query/model/MultiMeasureAttributeMapping.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>MixedMeasureMappings are mappings that can be used to ingest data into a
   * mixture of narrow and multi measures in the derived table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/MixedMeasureMapping">AWS
   * API Reference</a></p>
   */
  class MixedMeasureMapping
  {
  public:
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping();
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline const Aws::String& GetMeasureName() const{ return m_measureName; }

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline void SetMeasureName(const Aws::String& value) { m_measureNameHasBeenSet = true; m_measureName = value; }

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline void SetMeasureName(Aws::String&& value) { m_measureNameHasBeenSet = true; m_measureName = std::move(value); }

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline void SetMeasureName(const char* value) { m_measureNameHasBeenSet = true; m_measureName.assign(value); }

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline MixedMeasureMapping& WithMeasureName(const Aws::String& value) { SetMeasureName(value); return *this;}

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline MixedMeasureMapping& WithMeasureName(Aws::String&& value) { SetMeasureName(std::move(value)); return *this;}

    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline MixedMeasureMapping& WithMeasureName(const char* value) { SetMeasureName(value); return *this;}


    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline const Aws::String& GetSourceColumn() const{ return m_sourceColumn; }

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline void SetSourceColumn(const Aws::String& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = value; }

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline void SetSourceColumn(Aws::String&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::move(value); }

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline void SetSourceColumn(const char* value) { m_sourceColumnHasBeenSet = true; m_sourceColumn.assign(value); }

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline MixedMeasureMapping& WithSourceColumn(const Aws::String& value) { SetSourceColumn(value); return *this;}

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline MixedMeasureMapping& WithSourceColumn(Aws::String&& value) { SetSourceColumn(std::move(value)); return *this;}

    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline MixedMeasureMapping& WithSourceColumn(const char* value) { SetSourceColumn(value); return *this;}


    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline const Aws::String& GetTargetMeasureName() const{ return m_targetMeasureName; }

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline bool TargetMeasureNameHasBeenSet() const { return m_targetMeasureNameHasBeenSet; }

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline void SetTargetMeasureName(const Aws::String& value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName = value; }

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline void SetTargetMeasureName(Aws::String&& value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName = std::move(value); }

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline void SetTargetMeasureName(const char* value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName.assign(value); }

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(const Aws::String& value) { SetTargetMeasureName(value); return *this;}

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(Aws::String&& value) { SetTargetMeasureName(std::move(value)); return *this;}

    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(const char* value) { SetTargetMeasureName(value); return *this;}


    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline const MeasureValueType& GetMeasureValueType() const{ return m_measureValueType; }

    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }

    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline void SetMeasureValueType(const MeasureValueType& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }

    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline void SetMeasureValueType(MeasureValueType&& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = std::move(value); }

    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline MixedMeasureMapping& WithMeasureValueType(const MeasureValueType& value) { SetMeasureValueType(value); return *this;}

    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline MixedMeasureMapping& WithMeasureValueType(MeasureValueType&& value) { SetMeasureValueType(std::move(value)); return *this;}


    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const{ return m_multiMeasureAttributeMappings; }

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline void SetMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = value; }

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline void SetMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::move(value); }

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline MixedMeasureMapping& WithMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { SetMultiMeasureAttributeMappings(value); return *this;}

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline MixedMeasureMapping& WithMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { SetMultiMeasureAttributeMappings(std::move(value)); return *this;}

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline MixedMeasureMapping& AddMultiMeasureAttributeMappings(const MultiMeasureAttributeMapping& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(value); return *this; }

    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline MixedMeasureMapping& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMapping&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_measureName;
    bool m_measureNameHasBeenSet = false;

    Aws::String m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;

    Aws::String m_targetMeasureName;
    bool m_targetMeasureNameHasBeenSet = false;

    MeasureValueType m_measureValueType;
    bool m_measureValueTypeHasBeenSet = false;

    Aws::Vector<MultiMeasureAttributeMapping> m_multiMeasureAttributeMappings;
    bool m_multiMeasureAttributeMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
