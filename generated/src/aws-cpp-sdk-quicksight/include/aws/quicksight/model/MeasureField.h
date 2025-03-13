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
    AWS_QUICKSIGHT_API MeasureField() = default;
    AWS_QUICKSIGHT_API MeasureField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MeasureField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measure type field with numerical type columns.</p>
     */
    inline const NumericalMeasureField& GetNumericalMeasureField() const { return m_numericalMeasureField; }
    inline bool NumericalMeasureFieldHasBeenSet() const { return m_numericalMeasureFieldHasBeenSet; }
    template<typename NumericalMeasureFieldT = NumericalMeasureField>
    void SetNumericalMeasureField(NumericalMeasureFieldT&& value) { m_numericalMeasureFieldHasBeenSet = true; m_numericalMeasureField = std::forward<NumericalMeasureFieldT>(value); }
    template<typename NumericalMeasureFieldT = NumericalMeasureField>
    MeasureField& WithNumericalMeasureField(NumericalMeasureFieldT&& value) { SetNumericalMeasureField(std::forward<NumericalMeasureFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure type field with categorical type columns.</p>
     */
    inline const CategoricalMeasureField& GetCategoricalMeasureField() const { return m_categoricalMeasureField; }
    inline bool CategoricalMeasureFieldHasBeenSet() const { return m_categoricalMeasureFieldHasBeenSet; }
    template<typename CategoricalMeasureFieldT = CategoricalMeasureField>
    void SetCategoricalMeasureField(CategoricalMeasureFieldT&& value) { m_categoricalMeasureFieldHasBeenSet = true; m_categoricalMeasureField = std::forward<CategoricalMeasureFieldT>(value); }
    template<typename CategoricalMeasureFieldT = CategoricalMeasureField>
    MeasureField& WithCategoricalMeasureField(CategoricalMeasureFieldT&& value) { SetCategoricalMeasureField(std::forward<CategoricalMeasureFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The measure type field with date type columns.</p>
     */
    inline const DateMeasureField& GetDateMeasureField() const { return m_dateMeasureField; }
    inline bool DateMeasureFieldHasBeenSet() const { return m_dateMeasureFieldHasBeenSet; }
    template<typename DateMeasureFieldT = DateMeasureField>
    void SetDateMeasureField(DateMeasureFieldT&& value) { m_dateMeasureFieldHasBeenSet = true; m_dateMeasureField = std::forward<DateMeasureFieldT>(value); }
    template<typename DateMeasureFieldT = DateMeasureField>
    MeasureField& WithDateMeasureField(DateMeasureFieldT&& value) { SetDateMeasureField(std::forward<DateMeasureFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The calculated measure field only used in pivot tables.</p>
     */
    inline const CalculatedMeasureField& GetCalculatedMeasureField() const { return m_calculatedMeasureField; }
    inline bool CalculatedMeasureFieldHasBeenSet() const { return m_calculatedMeasureFieldHasBeenSet; }
    template<typename CalculatedMeasureFieldT = CalculatedMeasureField>
    void SetCalculatedMeasureField(CalculatedMeasureFieldT&& value) { m_calculatedMeasureFieldHasBeenSet = true; m_calculatedMeasureField = std::forward<CalculatedMeasureFieldT>(value); }
    template<typename CalculatedMeasureFieldT = CalculatedMeasureField>
    MeasureField& WithCalculatedMeasureField(CalculatedMeasureFieldT&& value) { SetCalculatedMeasureField(std::forward<CalculatedMeasureFieldT>(value)); return *this;}
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
