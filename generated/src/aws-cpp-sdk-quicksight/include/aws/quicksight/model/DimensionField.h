/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/NumericalDimensionField.h>
#include <aws/quicksight/model/CategoricalDimensionField.h>
#include <aws/quicksight/model/DateDimensionField.h>
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
   * <p>The dimension type field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DimensionField">AWS
   * API Reference</a></p>
   */
  class DimensionField
  {
  public:
    AWS_QUICKSIGHT_API DimensionField() = default;
    AWS_QUICKSIGHT_API DimensionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DimensionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline const NumericalDimensionField& GetNumericalDimensionField() const { return m_numericalDimensionField; }
    inline bool NumericalDimensionFieldHasBeenSet() const { return m_numericalDimensionFieldHasBeenSet; }
    template<typename NumericalDimensionFieldT = NumericalDimensionField>
    void SetNumericalDimensionField(NumericalDimensionFieldT&& value) { m_numericalDimensionFieldHasBeenSet = true; m_numericalDimensionField = std::forward<NumericalDimensionFieldT>(value); }
    template<typename NumericalDimensionFieldT = NumericalDimensionField>
    DimensionField& WithNumericalDimensionField(NumericalDimensionFieldT&& value) { SetNumericalDimensionField(std::forward<NumericalDimensionFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline const CategoricalDimensionField& GetCategoricalDimensionField() const { return m_categoricalDimensionField; }
    inline bool CategoricalDimensionFieldHasBeenSet() const { return m_categoricalDimensionFieldHasBeenSet; }
    template<typename CategoricalDimensionFieldT = CategoricalDimensionField>
    void SetCategoricalDimensionField(CategoricalDimensionFieldT&& value) { m_categoricalDimensionFieldHasBeenSet = true; m_categoricalDimensionField = std::forward<CategoricalDimensionFieldT>(value); }
    template<typename CategoricalDimensionFieldT = CategoricalDimensionField>
    DimensionField& WithCategoricalDimensionField(CategoricalDimensionFieldT&& value) { SetCategoricalDimensionField(std::forward<CategoricalDimensionFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline const DateDimensionField& GetDateDimensionField() const { return m_dateDimensionField; }
    inline bool DateDimensionFieldHasBeenSet() const { return m_dateDimensionFieldHasBeenSet; }
    template<typename DateDimensionFieldT = DateDimensionField>
    void SetDateDimensionField(DateDimensionFieldT&& value) { m_dateDimensionFieldHasBeenSet = true; m_dateDimensionField = std::forward<DateDimensionFieldT>(value); }
    template<typename DateDimensionFieldT = DateDimensionField>
    DimensionField& WithDateDimensionField(DateDimensionFieldT&& value) { SetDateDimensionField(std::forward<DateDimensionFieldT>(value)); return *this;}
    ///@}
  private:

    NumericalDimensionField m_numericalDimensionField;
    bool m_numericalDimensionFieldHasBeenSet = false;

    CategoricalDimensionField m_categoricalDimensionField;
    bool m_categoricalDimensionFieldHasBeenSet = false;

    DateDimensionField m_dateDimensionField;
    bool m_dateDimensionFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
