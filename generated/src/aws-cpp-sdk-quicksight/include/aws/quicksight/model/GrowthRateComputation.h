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
   * <p>The growth rate computation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GrowthRateComputation">AWS
   * API Reference</a></p>
   */
  class GrowthRateComputation
  {
  public:
    AWS_QUICKSIGHT_API GrowthRateComputation();
    AWS_QUICKSIGHT_API GrowthRateComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GrowthRateComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const{ return m_computationId; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const Aws::String& value) { m_computationIdHasBeenSet = true; m_computationId = value; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(Aws::String&& value) { m_computationIdHasBeenSet = true; m_computationId = std::move(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const char* value) { m_computationIdHasBeenSet = true; m_computationId.assign(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline GrowthRateComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline GrowthRateComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline GrowthRateComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}


    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a computation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline GrowthRateComputation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline GrowthRateComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline GrowthRateComputation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline GrowthRateComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline GrowthRateComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline GrowthRateComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline GrowthRateComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The period size setup of a growth rate computation.</p>
     */
    inline int GetPeriodSize() const{ return m_periodSize; }

    /**
     * <p>The period size setup of a growth rate computation.</p>
     */
    inline bool PeriodSizeHasBeenSet() const { return m_periodSizeHasBeenSet; }

    /**
     * <p>The period size setup of a growth rate computation.</p>
     */
    inline void SetPeriodSize(int value) { m_periodSizeHasBeenSet = true; m_periodSize = value; }

    /**
     * <p>The period size setup of a growth rate computation.</p>
     */
    inline GrowthRateComputation& WithPeriodSize(int value) { SetPeriodSize(value); return *this;}

  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    MeasureField m_value;
    bool m_valueHasBeenSet = false;

    int m_periodSize;
    bool m_periodSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
