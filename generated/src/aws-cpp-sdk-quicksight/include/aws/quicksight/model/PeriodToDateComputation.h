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
    AWS_QUICKSIGHT_API PeriodToDateComputation();
    AWS_QUICKSIGHT_API PeriodToDateComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PeriodToDateComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const{ return m_computationId; }
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }
    inline void SetComputationId(const Aws::String& value) { m_computationIdHasBeenSet = true; m_computationId = value; }
    inline void SetComputationId(Aws::String&& value) { m_computationIdHasBeenSet = true; m_computationId = std::move(value); }
    inline void SetComputationId(const char* value) { m_computationIdHasBeenSet = true; m_computationId.assign(value); }
    inline PeriodToDateComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}
    inline PeriodToDateComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}
    inline PeriodToDateComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PeriodToDateComputation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PeriodToDateComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PeriodToDateComputation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline PeriodToDateComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}
    inline PeriodToDateComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline PeriodToDateComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}
    inline PeriodToDateComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity setup of period to date computation. Choose from the
     * following options:</p> <ul> <li> <p>YEAR: Year to date.</p> </li> <li> <p>MONTH:
     * Month to date.</p> </li> </ul>
     */
    inline const TimeGranularity& GetPeriodTimeGranularity() const{ return m_periodTimeGranularity; }
    inline bool PeriodTimeGranularityHasBeenSet() const { return m_periodTimeGranularityHasBeenSet; }
    inline void SetPeriodTimeGranularity(const TimeGranularity& value) { m_periodTimeGranularityHasBeenSet = true; m_periodTimeGranularity = value; }
    inline void SetPeriodTimeGranularity(TimeGranularity&& value) { m_periodTimeGranularityHasBeenSet = true; m_periodTimeGranularity = std::move(value); }
    inline PeriodToDateComputation& WithPeriodTimeGranularity(const TimeGranularity& value) { SetPeriodTimeGranularity(value); return *this;}
    inline PeriodToDateComputation& WithPeriodTimeGranularity(TimeGranularity&& value) { SetPeriodTimeGranularity(std::move(value)); return *this;}
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

    TimeGranularity m_periodTimeGranularity;
    bool m_periodTimeGranularityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
