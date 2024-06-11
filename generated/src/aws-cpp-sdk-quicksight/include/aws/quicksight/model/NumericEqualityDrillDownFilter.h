/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NumericEqualityDrillDownFilter">AWS
   * API Reference</a></p>
   */
  class NumericEqualityDrillDownFilter
  {
  public:
    AWS_QUICKSIGHT_API NumericEqualityDrillDownFilter();
    AWS_QUICKSIGHT_API NumericEqualityDrillDownFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NumericEqualityDrillDownFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column that the filter is applied to.</p>
     */
    inline const ColumnIdentifier& GetColumn() const{ return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    inline void SetColumn(const ColumnIdentifier& value) { m_columnHasBeenSet = true; m_column = value; }
    inline void SetColumn(ColumnIdentifier&& value) { m_columnHasBeenSet = true; m_column = std::move(value); }
    inline NumericEqualityDrillDownFilter& WithColumn(const ColumnIdentifier& value) { SetColumn(value); return *this;}
    inline NumericEqualityDrillDownFilter& WithColumn(ColumnIdentifier&& value) { SetColumn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the double input numeric drill down filter.</p>
     */
    inline double GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline NumericEqualityDrillDownFilter& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
