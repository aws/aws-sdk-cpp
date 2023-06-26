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


    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline const NumericalDimensionField& GetNumericalDimensionField() const{ return m_numericalDimensionField; }

    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline bool NumericalDimensionFieldHasBeenSet() const { return m_numericalDimensionFieldHasBeenSet; }

    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline void SetNumericalDimensionField(const NumericalDimensionField& value) { m_numericalDimensionFieldHasBeenSet = true; m_numericalDimensionField = value; }

    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline void SetNumericalDimensionField(NumericalDimensionField&& value) { m_numericalDimensionFieldHasBeenSet = true; m_numericalDimensionField = std::move(value); }

    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline DimensionField& WithNumericalDimensionField(const NumericalDimensionField& value) { SetNumericalDimensionField(value); return *this;}

    /**
     * <p>The dimension type field with numerical type columns.</p>
     */
    inline DimensionField& WithNumericalDimensionField(NumericalDimensionField&& value) { SetNumericalDimensionField(std::move(value)); return *this;}


    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline const CategoricalDimensionField& GetCategoricalDimensionField() const{ return m_categoricalDimensionField; }

    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline bool CategoricalDimensionFieldHasBeenSet() const { return m_categoricalDimensionFieldHasBeenSet; }

    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline void SetCategoricalDimensionField(const CategoricalDimensionField& value) { m_categoricalDimensionFieldHasBeenSet = true; m_categoricalDimensionField = value; }

    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline void SetCategoricalDimensionField(CategoricalDimensionField&& value) { m_categoricalDimensionFieldHasBeenSet = true; m_categoricalDimensionField = std::move(value); }

    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline DimensionField& WithCategoricalDimensionField(const CategoricalDimensionField& value) { SetCategoricalDimensionField(value); return *this;}

    /**
     * <p>The dimension type field with categorical type columns.</p>
     */
    inline DimensionField& WithCategoricalDimensionField(CategoricalDimensionField&& value) { SetCategoricalDimensionField(std::move(value)); return *this;}


    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline const DateDimensionField& GetDateDimensionField() const{ return m_dateDimensionField; }

    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline bool DateDimensionFieldHasBeenSet() const { return m_dateDimensionFieldHasBeenSet; }

    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline void SetDateDimensionField(const DateDimensionField& value) { m_dateDimensionFieldHasBeenSet = true; m_dateDimensionField = value; }

    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline void SetDateDimensionField(DateDimensionField&& value) { m_dateDimensionFieldHasBeenSet = true; m_dateDimensionField = std::move(value); }

    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline DimensionField& WithDateDimensionField(const DateDimensionField& value) { SetDateDimensionField(value); return *this;}

    /**
     * <p>The dimension type field with date type columns.</p>
     */
    inline DimensionField& WithDateDimensionField(DateDimensionField&& value) { SetDateDimensionField(std::move(value)); return *this;}

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
