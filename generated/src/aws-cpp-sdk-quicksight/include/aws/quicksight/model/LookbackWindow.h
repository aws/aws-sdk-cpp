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
    AWS_QUICKSIGHT_API LookbackWindow();
    AWS_QUICKSIGHT_API LookbackWindow(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LookbackWindow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the lookback window column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline LookbackWindow& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline LookbackWindow& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the lookback window column.</p>
     */
    inline LookbackWindow& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The lookback window column size.</p>
     */
    inline long long GetSize() const{ return m_size; }

    /**
     * <p>The lookback window column size.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p>The lookback window column size.</p>
     */
    inline void SetSize(long long value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p>The lookback window column size.</p>
     */
    inline LookbackWindow& WithSize(long long value) { SetSize(value); return *this;}


    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline const LookbackWindowSizeUnit& GetSizeUnit() const{ return m_sizeUnit; }

    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline bool SizeUnitHasBeenSet() const { return m_sizeUnitHasBeenSet; }

    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline void SetSizeUnit(const LookbackWindowSizeUnit& value) { m_sizeUnitHasBeenSet = true; m_sizeUnit = value; }

    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline void SetSizeUnit(LookbackWindowSizeUnit&& value) { m_sizeUnitHasBeenSet = true; m_sizeUnit = std::move(value); }

    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline LookbackWindow& WithSizeUnit(const LookbackWindowSizeUnit& value) { SetSizeUnit(value); return *this;}

    /**
     * <p>The size unit that is used for the lookback window column. Valid values for
     * this structure are <code>HOUR</code>, <code>DAY</code>, and
     * <code>WEEK</code>.</p>
     */
    inline LookbackWindow& WithSizeUnit(LookbackWindowSizeUnit&& value) { SetSizeUnit(std::move(value)); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    long long m_size;
    bool m_sizeHasBeenSet = false;

    LookbackWindowSizeUnit m_sizeUnit;
    bool m_sizeUnitHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
