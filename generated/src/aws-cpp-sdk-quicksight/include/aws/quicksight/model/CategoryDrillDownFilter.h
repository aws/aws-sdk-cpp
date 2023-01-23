/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The numeric equality type drill down filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CategoryDrillDownFilter">AWS
   * API Reference</a></p>
   */
  class CategoryDrillDownFilter
  {
  public:
    AWS_QUICKSIGHT_API CategoryDrillDownFilter();
    AWS_QUICKSIGHT_API CategoryDrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CategoryDrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline CategoryDrillDownFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}

    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline CategoryDrillDownFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}


    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCategoryValues() const{ return m_categoryValues; }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline bool CategoryValuesHasBeenSet() const { return m_categoryValuesHasBeenSet; }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline void SetCategoryValues(const Aws::Vector<Aws::String>& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = value; }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline void SetCategoryValues(Aws::Vector<Aws::String>&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues = std::move(value); }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline CategoryDrillDownFilter& WithCategoryValues(const Aws::Vector<Aws::String>& value) { SetCategoryValues(value); return *this;}

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline CategoryDrillDownFilter& WithCategoryValues(Aws::Vector<Aws::String>&& value) { SetCategoryValues(std::move(value)); return *this;}

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline CategoryDrillDownFilter& AddCategoryValues(const Aws::String& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline CategoryDrillDownFilter& AddCategoryValues(Aws::String&& value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the string inputs that are the values of the category drill down
     * filter.</p>
     */
    inline CategoryDrillDownFilter& AddCategoryValues(const char* value) { m_categoryValuesHasBeenSet = true; m_categoryValues.push_back(value); return *this; }

  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    Aws::Vector<Aws::String> m_categoryValues;
    bool m_categoryValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
