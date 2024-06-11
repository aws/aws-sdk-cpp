/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/MaximumMinimumComputationType.h>
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
   * <p>The maximum and minimum computation configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MaximumMinimumComputation">AWS
   * API Reference</a></p>
   */
  class MaximumMinimumComputation
  {
  public:
    AWS_QUICKSIGHT_API MaximumMinimumComputation();
    AWS_QUICKSIGHT_API MaximumMinimumComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MaximumMinimumComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MaximumMinimumComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}
    inline MaximumMinimumComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}
    inline MaximumMinimumComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}
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
    inline MaximumMinimumComputation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MaximumMinimumComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MaximumMinimumComputation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }
    inline MaximumMinimumComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}
    inline MaximumMinimumComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline MaximumMinimumComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}
    inline MaximumMinimumComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of computation. Choose one of the following options:</p> <ul> <li>
     * <p>MAXIMUM: A maximum computation.</p> </li> <li> <p>MINIMUM: A minimum
     * computation.</p> </li> </ul>
     */
    inline const MaximumMinimumComputationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MaximumMinimumComputationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MaximumMinimumComputationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MaximumMinimumComputation& WithType(const MaximumMinimumComputationType& value) { SetType(value); return *this;}
    inline MaximumMinimumComputation& WithType(MaximumMinimumComputationType&& value) { SetType(std::move(value)); return *this;}
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

    MaximumMinimumComputationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
