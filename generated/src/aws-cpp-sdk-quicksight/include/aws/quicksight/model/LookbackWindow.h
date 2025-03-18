/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/LookbackWindowSizeUnit.h>
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
   * <p>The lookback window setup of an incremental refresh
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LookbackWindow">AWS
   * API Reference</a></p>
   */
  class LookbackWindow
  {
  public:
    AWS_QUICKSIGHT_API LookbackWindow() = default;
    AWS_QUICKSIGHT_API LookbackWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LookbackWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the lookback window column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    LookbackWindow& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lookback window column size.</p>
     */
    inline long long GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }
    inline LookbackWindow& WithSize(long long value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline LookbackWindowSizeUnit GetSizeUnit() const { return m_sizeUnit; }
    inline bool SizeUnitHasBeenSet() const { return m_sizeUnitHasBeenSet; }
    inline void SetSizeUnit(LookbackWindowSizeUnit value) { m_sizeUnitHasBeenSet = true; m_sizeUnit = value; }
    inline LookbackWindow& WithSizeUnit(LookbackWindowSizeUnit value) { SetSizeUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    long long m_size{0};
    bool m_sizeHasBeenSet = false;

    LookbackWindowSizeUnit m_sizeUnit{LookbackWindowSizeUnit::NOT_SET};
    bool m_sizeUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
