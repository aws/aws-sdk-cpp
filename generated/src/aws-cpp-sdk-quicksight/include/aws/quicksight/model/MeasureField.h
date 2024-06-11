/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericalMeasureField.h>
#include <aws/quicksight/model/CategoricalMeasureField.h>
#include <aws/quicksight/model/DateMeasureField.h>
#include <aws/quicksight/model/CalculatedMeasureField.h>
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
   * <p>The measure (metric) type field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MeasureField">AWS
   * API Reference</a></p>
   */
  class MeasureField
  {
  public:
    AWS_QUICKSIGHT_API MeasureField();
    AWS_QUICKSIGHT_API MeasureField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MeasureField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measure type field with numerical type columns.</p>
     */
    inline const NumericalMeasureField& GetNumericalMeasureField() const{ return m_numericalMeasureField; }
    inline bool NumericalMeasureFieldHasBeenSet() const { return m_numericalMeasureFieldHasBeenSet; }
    inline void SetNumericalMeasureField(const NumericalMeasureField& value) { m_numericalMeasureFieldHasBeenSet = true; m_numericalMeasureField = value; }
    inline void SetNumericalMeasureField(NumericalMeasureField&& value) { m_numericalMeasureFieldHasBeenSet = true; m_numericalMeasureField = std::move(value); }
    inline MeasureField& WithNumericalMeasureField(const NumericalMeasureField& value) { SetNumericalMeasureField(value); return *this;}
    inline MeasureField& WithNumericalMeasureField(NumericalMeasureField&& value) { SetNumericalMeasureField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure type field with categorical type columns.</p>
     */
    inline const CategoricalMeasureField& GetCategoricalMeasureField() const{ return m_categoricalMeasureField; }
    inline bool CategoricalMeasureFieldHasBeenSet() const { return m_categoricalMeasureFieldHasBeenSet; }
    inline void SetCategoricalMeasureField(const CategoricalMeasureField& value) { m_categoricalMeasureFieldHasBeenSet = true; m_categoricalMeasureField = value; }
    inline void SetCategoricalMeasureField(CategoricalMeasureField&& value) { m_categoricalMeasureFieldHasBeenSet = true; m_categoricalMeasureField = std::move(value); }
    inline MeasureField& WithCategoricalMeasureField(const CategoricalMeasureField& value) { SetCategoricalMeasureField(value); return *this;}
    inline MeasureField& WithCategoricalMeasureField(CategoricalMeasureField&& value) { SetCategoricalMeasureField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure type field with date type columns.</p>
     */
    inline const DateMeasureField& GetDateMeasureField() const{ return m_dateMeasureField; }
    inline bool DateMeasureFieldHasBeenSet() const { return m_dateMeasureFieldHasBeenSet; }
    inline void SetDateMeasureField(const DateMeasureField& value) { m_dateMeasureFieldHasBeenSet = true; m_dateMeasureField = value; }
    inline void SetDateMeasureField(DateMeasureField&& value) { m_dateMeasureFieldHasBeenSet = true; m_dateMeasureField = std::move(value); }
    inline MeasureField& WithDateMeasureField(const DateMeasureField& value) { SetDateMeasureField(value); return *this;}
    inline MeasureField& WithDateMeasureField(DateMeasureField&& value) { SetDateMeasureField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated measure field only used in pivot tables.</p>
     */
    inline const CalculatedMeasureField& GetCalculatedMeasureField() const{ return m_calculatedMeasureField; }
    inline bool CalculatedMeasureFieldHasBeenSet() const { return m_calculatedMeasureFieldHasBeenSet; }
    inline void SetCalculatedMeasureField(const CalculatedMeasureField& value) { m_calculatedMeasureFieldHasBeenSet = true; m_calculatedMeasureField = value; }
    inline void SetCalculatedMeasureField(CalculatedMeasureField&& value) { m_calculatedMeasureFieldHasBeenSet = true; m_calculatedMeasureField = std::move(value); }
    inline MeasureField& WithCalculatedMeasureField(const CalculatedMeasureField& value) { SetCalculatedMeasureField(value); return *this;}
    inline MeasureField& WithCalculatedMeasureField(CalculatedMeasureField&& value) { SetCalculatedMeasureField(std::move(value)); return *this;}
    ///@}
  private:

    NumericalMeasureField m_numericalMeasureField;
    bool m_numericalMeasureFieldHasBeenSet = false;

    CategoricalMeasureField m_categoricalMeasureField;
    bool m_categoricalMeasureFieldHasBeenSet = false;

    DateMeasureField m_dateMeasureField;
    bool m_dateMeasureFieldHasBeenSet = false;

    CalculatedMeasureField m_calculatedMeasureField;
    bool m_calculatedMeasureFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
