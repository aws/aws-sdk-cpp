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
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping() = default;
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API MixedMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Refers to the value of measure_name in a result row. This field is required
     * if MeasureNameColumn is provided.</p>
     */
    inline const Aws::String& GetMeasureName() const { return m_measureName; }
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }
    template<typename MeasureNameT = Aws::String>
    void SetMeasureName(MeasureNameT&& value) { m_measureNameHasBeenSet = true; m_measureName = std::forward<MeasureNameT>(value); }
    template<typename MeasureNameT = Aws::String>
    MixedMeasureMapping& WithMeasureName(MeasureNameT&& value) { SetMeasureName(std::forward<MeasureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field refers to the source column from which measure-value is to be read
     * for result materialization.</p>
     */
    inline const Aws::String& GetSourceColumn() const { return m_sourceColumn; }
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
    template<typename SourceColumnT = Aws::String>
    void SetSourceColumn(SourceColumnT&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::forward<SourceColumnT>(value); }
    template<typename SourceColumnT = Aws::String>
    MixedMeasureMapping& WithSourceColumn(SourceColumnT&& value) { SetSourceColumn(std::forward<SourceColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target measure name to be used. If not provided, the target measure name by
     * default would be measure-name if provided, or sourceColumn otherwise. </p>
     */
    inline const Aws::String& GetTargetMeasureName() const { return m_targetMeasureName; }
    inline bool TargetMeasureNameHasBeenSet() const { return m_targetMeasureNameHasBeenSet; }
    template<typename TargetMeasureNameT = Aws::String>
    void SetTargetMeasureName(TargetMeasureNameT&& value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName = std::forward<TargetMeasureNameT>(value); }
    template<typename TargetMeasureNameT = Aws::String>
    MixedMeasureMapping& WithTargetMeasureName(TargetMeasureNameT&& value) { SetTargetMeasureName(std::forward<TargetMeasureNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the value that is to be read from sourceColumn. If the mapping is for
     * MULTI, use MeasureValueType.MULTI.</p>
     */
    inline MeasureValueType GetMeasureValueType() const { return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(MeasureValueType value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline MixedMeasureMapping& WithMeasureValueType(MeasureValueType value) { SetMeasureValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when measureValueType is MULTI. Attribute mappings for MULTI value
     * measures.</p>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const { return m_multiMeasureAttributeMappings; }
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    void SetMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::forward<MultiMeasureAttributeMappingsT>(value); }
    template<typename MultiMeasureAttributeMappingsT = Aws::Vector<MultiMeasureAttributeMapping>>
    MixedMeasureMapping& WithMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { SetMultiMeasureAttributeMappings(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this;}
    template<typename MultiMeasureAttributeMappingsT = MultiMeasureAttributeMapping>
    MixedMeasureMapping& AddMultiMeasureAttributeMappings(MultiMeasureAttributeMappingsT&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.emplace_back(std::forward<MultiMeasureAttributeMappingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_measureName;
    bool m_measureNameHasBeenSet = false;

    Aws::String m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;

    Aws::String m_targetMeasureName;
    bool m_targetMeasureNameHasBeenSet = false;

    MeasureValueType m_measureValueType{MeasureValueType::NOT_SET};
    bool m_measureValueTypeHasBeenSet = false;

    Aws::Vector<MultiMeasureAttributeMapping> m_multiMeasureAttributeMappings;
    bool m_multiMeasureAttributeMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
