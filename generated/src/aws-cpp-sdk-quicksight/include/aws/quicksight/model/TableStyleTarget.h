/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/StyledCellType.h>
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
   * <p>The table style target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableStyleTarget">AWS
   * API Reference</a></p>
   */
  class TableStyleTarget
  {
  public:
    AWS_QUICKSIGHT_API TableStyleTarget();
    AWS_QUICKSIGHT_API TableStyleTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableStyleTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The cell type of the table style target.</p>
     */
    inline const StyledCellType& GetCellType() const{ return m_cellType; }

    /**
     * <p>The cell type of the table style target.</p>
     */
    inline bool CellTypeHasBeenSet() const { return m_cellTypeHasBeenSet; }

    /**
     * <p>The cell type of the table style target.</p>
     */
    inline void SetCellType(const StyledCellType& value) { m_cellTypeHasBeenSet = true; m_cellType = value; }

    /**
     * <p>The cell type of the table style target.</p>
     */
    inline void SetCellType(StyledCellType&& value) { m_cellTypeHasBeenSet = true; m_cellType = std::move(value); }

    /**
     * <p>The cell type of the table style target.</p>
     */
    inline TableStyleTarget& WithCellType(const StyledCellType& value) { SetCellType(value); return *this;}

    /**
     * <p>The cell type of the table style target.</p>
     */
    inline TableStyleTarget& WithCellType(StyledCellType&& value) { SetCellType(std::move(value)); return *this;}

  private:

    StyledCellType m_cellType;
    bool m_cellTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
