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
   * <p>Maps a single source data field to a single record in the specified
   * Timestream for LiveAnalytics table.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/timestream/latest/developerguide/concepts.html">Amazon
   * Timestream for LiveAnalytics concepts</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/SingleMeasureMapping">AWS
   * API Reference</a></p>
   */
  class SingleMeasureMapping
  {
  public:
    AWS_PIPES_API SingleMeasureMapping() = default;
    AWS_PIPES_API SingleMeasureMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SingleMeasureMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Dynamic path of the source field to map to the measure in the record.</p>
     */
    inline const Aws::String& GetMeasureValue() const { return m_measureValue; }
    inline bool MeasureValueHasBeenSet() const { return m_measureValueHasBeenSet; }
    template<typename MeasureValueT = Aws::String>
    void SetMeasureValue(MeasureValueT&& value) { m_measureValueHasBeenSet = true; m_measureValue = std::forward<MeasureValueT>(value); }
    template<typename MeasureValueT = Aws::String>
    SingleMeasureMapping& WithMeasureValue(MeasureValueT&& value) { SetMeasureValue(std::forward<MeasureValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data type of the source field.</p>
     */
    inline MeasureValueType GetMeasureValueType() const { return m_measureValueType; }
    inline bool MeasureValueTypeHasBeenSet() const { return m_measureValueTypeHasBeenSet; }
    inline void SetMeasureValueType(MeasureValueType value) { m_measureValueTypeHasBeenSet = true; m_measureValueType = value; }
    inline SingleMeasureMapping& WithMeasureValueType(MeasureValueType value) { SetMeasureValueType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target measure name for the measurement attribute in the Timestream
     * table.</p>
     */
    inline const Aws::String& GetMeasureName() const { return m_measureName; }
    inline bool MeasureNameHasBeenSet() const { return m_measureNameHasBeenSet; }
    template<typename MeasureNameT = Aws::String>
    void SetMeasureName(MeasureNameT&& value) { m_measureNameHasBeenSet = true; m_measureName = std::forward<MeasureNameT>(value); }
    template<typename MeasureNameT = Aws::String>
    SingleMeasureMapping& WithMeasureName(MeasureNameT&& value) { SetMeasureName(std::forward<MeasureNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_measureValue;
    bool m_measureValueHasBeenSet = false;

    MeasureValueType m_measureValueType{MeasureValueType::NOT_SET};
    bool m_measureValueTypeHasBeenSet = false;

    Aws::String m_measureName;
    bool m_measureNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
