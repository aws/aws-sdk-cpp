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
    AWS_QUICKSIGHT_API MetricComparisonComputation();
    AWS_QUICKSIGHT_API MetricComparisonComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MetricComparisonComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MetricComparisonComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}
    inline MetricComparisonComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}
    inline MetricComparisonComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}
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
    inline MetricComparisonComputation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MetricComparisonComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MetricComparisonComputation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline MetricComparisonComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}
    inline MetricComparisonComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline const MeasureField& GetFromValue() const{ return m_fromValue; }
    inline bool FromValueHasBeenSet() const { return m_fromValueHasBeenSet; }
    inline void SetFromValue(const MeasureField& value) { m_fromValueHasBeenSet = true; m_fromValue = value; }
    inline void SetFromValue(MeasureField&& value) { m_fromValueHasBeenSet = true; m_fromValue = std::move(value); }
    inline MetricComparisonComputation& WithFromValue(const MeasureField& value) { SetFromValue(value); return *this;}
    inline MetricComparisonComputation& WithFromValue(MeasureField&& value) { SetFromValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline const MeasureField& GetTargetValue() const{ return m_targetValue; }
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }
    inline void SetTargetValue(const MeasureField& value) { m_targetValueHasBeenSet = true; m_targetValue = value; }
    inline void SetTargetValue(MeasureField&& value) { m_targetValueHasBeenSet = true; m_targetValue = std::move(value); }
    inline MetricComparisonComputation& WithTargetValue(const MeasureField& value) { SetTargetValue(value); return *this;}
    inline MetricComparisonComputation& WithTargetValue(MeasureField&& value) { SetTargetValue(std::move(value)); return *this;}
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
