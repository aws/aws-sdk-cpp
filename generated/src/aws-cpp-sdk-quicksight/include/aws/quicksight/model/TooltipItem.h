/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldTooltipItem.h>
#include <aws/quicksight/model/ColumnTooltipItem.h>
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
   * <p>The tooltip.</p> <p>This is a union type structure. For this structure to be
   * valid, only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TooltipItem">AWS
   * API Reference</a></p>
   */
  class TooltipItem
  {
  public:
    AWS_QUICKSIGHT_API TooltipItem() = default;
    AWS_QUICKSIGHT_API TooltipItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TooltipItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The tooltip item for the fields.</p>
     */
    inline const FieldTooltipItem& GetFieldTooltipItem() const { return m_fieldTooltipItem; }
    inline bool FieldTooltipItemHasBeenSet() const { return m_fieldTooltipItemHasBeenSet; }
    template<typename FieldTooltipItemT = FieldTooltipItem>
    void SetFieldTooltipItem(FieldTooltipItemT&& value) { m_fieldTooltipItemHasBeenSet = true; m_fieldTooltipItem = std::forward<FieldTooltipItemT>(value); }
    template<typename FieldTooltipItemT = FieldTooltipItem>
    TooltipItem& WithFieldTooltipItem(FieldTooltipItemT&& value) { SetFieldTooltipItem(std::forward<FieldTooltipItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tooltip item for the columns that are not part of a field well.</p>
     */
    inline const ColumnTooltipItem& GetColumnTooltipItem() const { return m_columnTooltipItem; }
    inline bool ColumnTooltipItemHasBeenSet() const { return m_columnTooltipItemHasBeenSet; }
    template<typename ColumnTooltipItemT = ColumnTooltipItem>
    void SetColumnTooltipItem(ColumnTooltipItemT&& value) { m_columnTooltipItemHasBeenSet = true; m_columnTooltipItem = std::forward<ColumnTooltipItemT>(value); }
    template<typename ColumnTooltipItemT = ColumnTooltipItem>
    TooltipItem& WithColumnTooltipItem(ColumnTooltipItemT&& value) { SetColumnTooltipItem(std::forward<ColumnTooltipItemT>(value)); return *this;}
    ///@}
  private:

    FieldTooltipItem m_fieldTooltipItem;
    bool m_fieldTooltipItemHasBeenSet = false;

    ColumnTooltipItem m_columnTooltipItem;
    bool m_columnTooltipItemHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
