/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/TimeGranularity.h>
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
   * <p>The period to date computation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PeriodToDateComputation">AWS
   * API Reference</a></p>
   */
  class PeriodToDateComputation
  {
  public:
    AWS_QUICKSIGHT_API PeriodToDateComputation() = default;
    AWS_QUICKSIGHT_API PeriodToDateComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PeriodToDateComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    PeriodToDateComputation& WithComputationId(ComputationIdT&& value) { SetComputationId(std::forward<ComputationIdT>(value)); return *this;}
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
    PeriodToDateComputation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    PeriodToDateComputation& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = MeasureField>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = MeasureField>
    PeriodToDateComputation& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity setup of period to date computation. Choose from the
     * following options:</p> <ul> <li> <p>YEAR: Year to date.</p> </li> <li> <p>MONTH:
     * Month to date.</p> </li> </ul>
     */
    inline TimeGranularity GetPeriodTimeGranularity() const { return m_periodTimeGranularity; }
    inline bool PeriodTimeGranularityHasBeenSet() const { return m_periodTimeGranularityHasBeenSet; }
    inline void SetPeriodTimeGranularity(TimeGranularity value) { m_periodTimeGranularityHasBeenSet = true; m_periodTimeGranularity = value; }
    inline PeriodToDateComputation& WithPeriodTimeGranularity(TimeGranularity value) { SetPeriodTimeGranularity(value); return *this;}
    ///@}
  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    MeasureField m_value;
    bool m_valueHasBeenSet = false;

    TimeGranularity m_periodTimeGranularity{TimeGranularity::NOT_SET};
    bool m_periodTimeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
