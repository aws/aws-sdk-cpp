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
    AWS_QUICKSIGHT_API DimensionField();
    AWS_QUICKSIGHT_API DimensionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DimensionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline const NumericalDimensionField& GetNumericalDimensionField() const{ return m_numericalDimensionField; }
    inline bool NumericalDimensionFieldHasBeenSet() const { return m_numericalDimensionFieldHasBeenSet; }
    inline void SetNumericalDimensionField(const NumericalDimensionField& value) { m_numericalDimensionFieldHasBeenSet = true; m_numericalDimensionField = value; }
    inline void SetNumericalDimensionField(NumericalDimensionField&& value) { m_numericalDimensionFieldHasBeenSet = true; m_numericalDimensionField = std::move(value); }
    inline DimensionField& WithNumericalDimensionField(const NumericalDimensionField& value) { SetNumericalDimensionField(value); return *this;}
    inline DimensionField& WithNumericalDimensionField(NumericalDimensionField&& value) { SetNumericalDimensionField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline const CategoricalDimensionField& GetCategoricalDimensionField() const{ return m_categoricalDimensionField; }
    inline bool CategoricalDimensionFieldHasBeenSet() const { return m_categoricalDimensionFieldHasBeenSet; }
    inline void SetCategoricalDimensionField(const CategoricalDimensionField& value) { m_categoricalDimensionFieldHasBeenSet = true; m_categoricalDimensionField = value; }
    inline void SetCategoricalDimensionField(CategoricalDimensionField&& value) { m_categoricalDimensionFieldHasBeenSet = true; m_categoricalDimensionField = std::move(value); }
    inline DimensionField& WithCategoricalDimensionField(const CategoricalDimensionField& value) { SetCategoricalDimensionField(value); return *this;}
    inline DimensionField& WithCategoricalDimensionField(CategoricalDimensionField&& value) { SetCategoricalDimensionField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline const DateDimensionField& GetDateDimensionField() const{ return m_dateDimensionField; }
    inline bool DateDimensionFieldHasBeenSet() const { return m_dateDimensionFieldHasBeenSet; }
    inline void SetDateDimensionField(const DateDimensionField& value) { m_dateDimensionFieldHasBeenSet = true; m_dateDimensionField = value; }
    inline void SetDateDimensionField(DateDimensionField&& value) { m_dateDimensionFieldHasBeenSet = true; m_dateDimensionField = std::move(value); }
    inline DimensionField& WithDateDimensionField(const DateDimensionField& value) { SetDateDimensionField(value); return *this;}
    inline DimensionField& WithDateDimensionField(DateDimensionField&& value) { SetDateDimensionField(std::move(value)); return *this;}
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
