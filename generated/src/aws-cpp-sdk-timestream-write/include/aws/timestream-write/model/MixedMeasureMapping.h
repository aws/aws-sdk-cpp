/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/MeasureValueType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/MultiMeasureAttributeMapping.h>
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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MixedMeasureMapping">AWS
   * API Reference</a></p>
   */
  class MixedMeasureMapping
  {
  public:
    AWS_TIMESTREAMWRITE_API MixedMeasureMapping();
    AWS_TIMESTREAMWRITE_API MixedMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MixedMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetMeasureName() const{ return m_measureName; }

    /**
     * <p/>
     */
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMeasureName(const Aws::String& value) { m_measureNameHasBeenSet = true; m_measureName = value; }

    /**
     * <p/>
     */
    inline void SetMeasureName(Aws::String&& value) { m_measureNameHasBeenSet = true; m_measureName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetMeasureName(const char* value) { m_measureNameHasBeenSet = true; m_measureName.assign(value); }

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMeasureName(const Aws::String& value) { SetMeasureName(value); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMeasureName(Aws::String&& value) { SetMeasureName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMeasureName(const char* value) { SetMeasureName(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetSourceColumn() const{ return m_sourceColumn; }

    /**
     * <p/>
     */
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetSourceColumn(const Aws::String& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = value; }

    /**
     * <p/>
     */
    inline void SetSourceColumn(Aws::String&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::move(value); }

    /**
     * <p/>
     */
    inline void SetSourceColumn(const char* value) { m_sourceColumnHasBeenSet = true; m_sourceColumn.assign(value); }

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithSourceColumn(const Aws::String& value) { SetSourceColumn(value); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithSourceColumn(Aws::String&& value) { SetSourceColumn(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithSourceColumn(const char* value) { SetSourceColumn(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetTargetMeasureName() const{ return m_targetMeasureName; }

    /**
     * <p/>
     */
    inline bool TargetMeasureNameHasBeenSet() const { return m_targetMeasureNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTargetMeasureName(const Aws::String& value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName = value; }

    /**
     * <p/>
     */
    inline void SetTargetMeasureName(Aws::String&& value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetTargetMeasureName(const char* value) { m_targetMeasureNameHasBeenSet = true; m_targetMeasureName.assign(value); }

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(const Aws::String& value) { SetTargetMeasureName(value); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(Aws::String&& value) { SetTargetMeasureName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithTargetMeasureName(const char* value) { SetTargetMeasureName(value); return *this;}


    /**
     * <p/>
     */
    inline const MeasureValueType& GetMeasureValueType() const{ return m_measureValueType; }

    /**
     * <p/>
     */
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMeasureValueType(const MeasureValueType& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }

    /**
     * <p/>
     */
    inline void SetMeasureValueType(MeasureValueType&& value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = std::move(value); }

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMeasureValueType(const MeasureValueType& value) { SetMeasureValueType(value); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMeasureValueType(MeasureValueType&& value) { SetMeasureValueType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<MultiMeasureAttributeMapping>& GetMultiMeasureAttributeMappings() const{ return m_multiMeasureAttributeMappings; }

    /**
     * <p/>
     */
    inline bool MultiMeasureAttributeMappingsHasBeenSet() const { return m_multiMeasureAttributeMappingsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = value; }

    /**
     * <p/>
     */
    inline void SetMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings = std::move(value); }

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMultiMeasureAttributeMappings(const Aws::Vector<MultiMeasureAttributeMapping>& value) { SetMultiMeasureAttributeMappings(value); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& WithMultiMeasureAttributeMappings(Aws::Vector<MultiMeasureAttributeMapping>&& value) { SetMultiMeasureAttributeMappings(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline MixedMeasureMapping& AddMultiMeasureAttributeMappings(const MultiMeasureAttributeMapping& value) { m_multiMeasureAttributeMappingsHasBeenSet = true; m_multiMeasureAttributeMappings.push_back(value); return *this; }

    /**
     * <p/>
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
} // namespace TimestreamWrite
} // namespace Aws
