/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The metric comparison computation configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MetricComparisonComputation">AWS
   * API Reference</a></p>
   */
  class MetricComparisonComputation
  {
  public:
    AWS_QUICKSIGHT_API MetricComparisonComputation() = default;
    AWS_QUICKSIGHT_API MetricComparisonComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MetricComparisonComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const { return m_computationId; }
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }
    template<typename ComputationIdT = Aws::String>
    void SetComputationId(ComputationIdT&& value) { m_computationIdHasBeenSet = true; m_computationId = std::forward<ComputationIdT>(value); }
    template<typename ComputationIdT = Aws::String>
    MetricComparisonComputation& WithComputationId(ComputationIdT&& value) { SetComputationId(std::forward<ComputationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricComparisonComputation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = DimensionField>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = DimensionField>
    MetricComparisonComputation& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline const MeasureField& GetFromValue() const { return m_fromValue; }
    inline bool FromValueHasBeenSet() const { return m_fromValueHasBeenSet; }
    template<typename FromValueT = MeasureField>
    void SetFromValue(FromValueT&& value) { m_fromValueHasBeenSet = true; m_fromValue = std::forward<FromValueT>(value); }
    template<typename FromValueT = MeasureField>
    MetricComparisonComputation& WithFromValue(FromValueT&& value) { SetFromValue(std::forward<FromValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline const MeasureField& GetTargetValue() const { return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    template<typename TargetValueT = MeasureField>
    void SetTargetValue(TargetValueT&& value) { m_targetValueHasBeenSet = true; m_targetValue = std::forward<TargetValueT>(value); }
    template<typename TargetValueT = MeasureField>
    MetricComparisonComputation& WithTargetValue(TargetValueT&& value) { SetTargetValue(std::forward<TargetValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    MeasureField m_fromValue;
    bool m_fromValueHasBeenSet = false;

    MeasureField m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
