/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/ScalarMeasureValueType.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/MultiMeasureAttributeMapping">AWS
   * API Reference</a></p>
   */
  class MultiMeasureAttributeMapping
  {
  public:
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping() = default;
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API MultiMeasureAttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetSourceColumn() const { return m_sourceColumn; }
    inline bool SourceColumnHasBeenSet() const { return m_sourceColumnHasBeenSet; }
    template<typename SourceColumnT = Aws::String>
    void SetSourceColumn(SourceColumnT&& value) { m_sourceColumnHasBeenSet = true; m_sourceColumn = std::forward<SourceColumnT>(value); }
    template<typename SourceColumnT = Aws::String>
    MultiMeasureAttributeMapping& WithSourceColumn(SourceColumnT&& value) { SetSourceColumn(std::forward<SourceColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetTargetMultiMeasureAttributeName() const { return m_targetMultiMeasureAttributeName; }
    inline bool TargetMultiMeasureAttributeNameHasBeenSet() const { return m_targetMultiMeasureAttributeNameHasBeenSet; }
    template<typename TargetMultiMeasureAttributeNameT = Aws::String>
    void SetTargetMultiMeasureAttributeName(TargetMultiMeasureAttributeNameT&& value) { m_targetMultiMeasureAttributeNameHasBeenSet = true; m_targetMultiMeasureAttributeName = std::forward<TargetMultiMeasureAttributeNameT>(value); }
    template<typename TargetMultiMeasureAttributeNameT = Aws::String>
    MultiMeasureAttributeMapping& WithTargetMultiMeasureAttributeName(TargetMultiMeasureAttributeNameT&& value) { SetTargetMultiMeasureAttributeName(std::forward<TargetMultiMeasureAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline ScalarMeasureValueType GetMeasureValueType() const { return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(ScalarMeasureValueType value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline MultiMeasureAttributeMapping& WithMeasureValueType(ScalarMeasureValueType value) { SetMeasureValueType(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceColumn;
    bool m_sourceColumnHasBeenSet = false;

    Aws::String m_targetMultiMeasureAttributeName;
    bool m_targetMultiMeasureAttributeNameHasBeenSet = false;

    ScalarMeasureValueType m_measureValueType{ScalarMeasureValueType::NOT_SET};
    bool m_measureValueTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
