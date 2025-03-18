/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pipes/model/MeasureValueType.h>
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
   * <p>A mapping of a source event data field to a measure in a Timestream for
   * LiveAnalytics record.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/MultiMeasureAttributeMapping">AWS
   * API Reference</a></p>
   */
  class MultiMeasureAttributeMapping
  {
  public:
    AWS_PIPES_API MultiMeasureAttributeMapping() = default;
    AWS_PIPES_API MultiMeasureAttributeMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MultiMeasureAttributeMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path to the measurement attribute in the source event.</p>
     */
    inline const Aws::String& GetMeasureValue() const { return m_measureValue; }
    inline bool MeasureValueHasBeenSet() const { return m_measureValueHasBeenSet; }
    template<typename MeasureValueT = Aws::String>
    void SetMeasureValue(MeasureValueT&& value) { m_measureValueHasBeenSet = true; m_measureValue = std::forward<MeasureValueT>(value); }
    template<typename MeasureValueT = Aws::String>
    MultiMeasureAttributeMapping& WithMeasureValue(MeasureValueT&& value) { SetMeasureValue(std::forward<MeasureValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data type of the measurement attribute in the source event.</p>
     */
    inline MeasureValueType GetMeasureValueType() const { return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(MeasureValueType value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline MultiMeasureAttributeMapping& WithMeasureValueType(MeasureValueType value) { SetMeasureValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target measure name to be used.</p>
     */
    inline const Aws::String& GetMultiMeasureAttributeName() const { return m_multiMeasureAttributeName; }
    inline bool MultiMeasureAttributeNameHasBeenSet() const { return m_multiMeasureAttributeNameHasBeenSet; }
    template<typename MultiMeasureAttributeNameT = Aws::String>
    void SetMultiMeasureAttributeName(MultiMeasureAttributeNameT&& value) { m_multiMeasureAttributeNameHasBeenSet = true; m_multiMeasureAttributeName = std::forward<MultiMeasureAttributeNameT>(value); }
    template<typename MultiMeasureAttributeNameT = Aws::String>
    MultiMeasureAttributeMapping& WithMultiMeasureAttributeName(MultiMeasureAttributeNameT&& value) { SetMultiMeasureAttributeName(std::forward<MultiMeasureAttributeNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_measureValue;
    bool m_measureValueHasBeenSet = false;

    MeasureValueType m_measureValueType{MeasureValueType::NOT_SET};
    bool m_measureValueTypeHasBeenSet = false;

    Aws::String m_multiMeasureAttributeName;
    bool m_multiMeasureAttributeNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
