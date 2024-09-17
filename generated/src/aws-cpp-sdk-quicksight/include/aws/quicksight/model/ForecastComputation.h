/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/ForecastComputationSeasonality.h>
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
   * <p>The forecast computation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ForecastComputation">AWS
   * API Reference</a></p>
   */
  class ForecastComputation
  {
  public:
    AWS_QUICKSIGHT_API ForecastComputation();
    AWS_QUICKSIGHT_API ForecastComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ForecastComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ForecastComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}
    inline ForecastComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}
    inline ForecastComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}
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
    inline ForecastComputation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ForecastComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ForecastComputation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline ForecastComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}
    inline ForecastComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline ForecastComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}
    inline ForecastComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The periods forward setup of a forecast computation.</p>
     */
    inline int GetPeriodsForward() const{ return m_periodsForward; }
    inline bool PeriodsForwardHasBeenSet() const { return m_periodsForwardHasBeenSet; }
    inline void SetPeriodsForward(int value) { m_periodsForwardHasBeenSet = true; m_periodsForward = value; }
    inline ForecastComputation& WithPeriodsForward(int value) { SetPeriodsForward(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The periods backward setup of a forecast computation.</p>
     */
    inline int GetPeriodsBackward() const{ return m_periodsBackward; }
    inline bool PeriodsBackwardHasBeenSet() const { return m_periodsBackwardHasBeenSet; }
    inline void SetPeriodsBackward(int value) { m_periodsBackwardHasBeenSet = true; m_periodsBackward = value; }
    inline ForecastComputation& WithPeriodsBackward(int value) { SetPeriodsBackward(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper boundary setup of a forecast computation.</p>
     */
    inline double GetUpperBoundary() const{ return m_upperBoundary; }
    inline bool UpperBoundaryHasBeenSet() const { return m_upperBoundaryHasBeenSet; }
    inline void SetUpperBoundary(double value) { m_upperBoundaryHasBeenSet = true; m_upperBoundary = value; }
    inline ForecastComputation& WithUpperBoundary(double value) { SetUpperBoundary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower boundary setup of a forecast computation.</p>
     */
    inline double GetLowerBoundary() const{ return m_lowerBoundary; }
    inline bool LowerBoundaryHasBeenSet() const { return m_lowerBoundaryHasBeenSet; }
    inline void SetLowerBoundary(double value) { m_lowerBoundaryHasBeenSet = true; m_lowerBoundary = value; }
    inline ForecastComputation& WithLowerBoundary(double value) { SetLowerBoundary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prediction interval setup of a forecast computation.</p>
     */
    inline int GetPredictionInterval() const{ return m_predictionInterval; }
    inline bool PredictionIntervalHasBeenSet() const { return m_predictionIntervalHasBeenSet; }
    inline void SetPredictionInterval(int value) { m_predictionIntervalHasBeenSet = true; m_predictionInterval = value; }
    inline ForecastComputation& WithPredictionInterval(int value) { SetPredictionInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline const ForecastComputationSeasonality& GetSeasonality() const{ return m_seasonality; }
    inline bool SeasonalityHasBeenSet() const { return m_seasonalityHasBeenSet; }
    inline void SetSeasonality(const ForecastComputationSeasonality& value) { m_seasonalityHasBeenSet = true; m_seasonality = value; }
    inline void SetSeasonality(ForecastComputationSeasonality&& value) { m_seasonalityHasBeenSet = true; m_seasonality = std::move(value); }
    inline ForecastComputation& WithSeasonality(const ForecastComputationSeasonality& value) { SetSeasonality(value); return *this;}
    inline ForecastComputation& WithSeasonality(ForecastComputationSeasonality&& value) { SetSeasonality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom seasonality value setup of a forecast computation.</p>
     */
    inline int GetCustomSeasonalityValue() const{ return m_customSeasonalityValue; }
    inline bool CustomSeasonalityValueHasBeenSet() const { return m_customSeasonalityValueHasBeenSet; }
    inline void SetCustomSeasonalityValue(int value) { m_customSeasonalityValueHasBeenSet = true; m_customSeasonalityValue = value; }
    inline ForecastComputation& WithCustomSeasonalityValue(int value) { SetCustomSeasonalityValue(value); return *this;}
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

    int m_periodsForward;
    bool m_periodsForwardHasBeenSet = false;

    int m_periodsBackward;
    bool m_periodsBackwardHasBeenSet = false;

    double m_upperBoundary;
    bool m_upperBoundaryHasBeenSet = false;

    double m_lowerBoundary;
    bool m_lowerBoundaryHasBeenSet = false;

    int m_predictionInterval;
    bool m_predictionIntervalHasBeenSet = false;

    ForecastComputationSeasonality m_seasonality;
    bool m_seasonalityHasBeenSet = false;

    int m_customSeasonalityValue;
    bool m_customSeasonalityValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
