/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
#include <aws/quicksight/model/SelectedTooltipType.h>
#include <aws/quicksight/model/FieldBasedTooltip.h>
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
   * <p>The display options for the visual tooltip.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TooltipOptions">AWS
   * API Reference</a></p>
   */
  class TooltipOptions
  {
  public:
    AWS_QUICKSIGHT_API TooltipOptions();
    AWS_QUICKSIGHT_API TooltipOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TooltipOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline const Visibility& GetTooltipVisibility() const{ return m_tooltipVisibility; }

    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline bool TooltipVisibilityHasBeenSet() const { return m_tooltipVisibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline void SetTooltipVisibility(const Visibility& value) { m_tooltipVisibilityHasBeenSet = true; m_tooltipVisibility = value; }

    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline void SetTooltipVisibility(Visibility&& value) { m_tooltipVisibilityHasBeenSet = true; m_tooltipVisibility = std::move(value); }

    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline TooltipOptions& WithTooltipVisibility(const Visibility& value) { SetTooltipVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the tooltip is visible.</p>
     */
    inline TooltipOptions& WithTooltipVisibility(Visibility&& value) { SetTooltipVisibility(std::move(value)); return *this;}


    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline const SelectedTooltipType& GetSelectedTooltipType() const{ return m_selectedTooltipType; }

    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline bool SelectedTooltipTypeHasBeenSet() const { return m_selectedTooltipTypeHasBeenSet; }

    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline void SetSelectedTooltipType(const SelectedTooltipType& value) { m_selectedTooltipTypeHasBeenSet = true; m_selectedTooltipType = value; }

    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline void SetSelectedTooltipType(SelectedTooltipType&& value) { m_selectedTooltipTypeHasBeenSet = true; m_selectedTooltipType = std::move(value); }

    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline TooltipOptions& WithSelectedTooltipType(const SelectedTooltipType& value) { SetSelectedTooltipType(value); return *this;}

    /**
     * <p>The selected type for the tooltip. Choose one of the following options:</p>
     * <ul> <li> <p> <code>BASIC</code>: A basic tooltip.</p> </li> <li> <p>
     * <code>DETAILED</code>: A detailed tooltip.</p> </li> </ul>
     */
    inline TooltipOptions& WithSelectedTooltipType(SelectedTooltipType&& value) { SetSelectedTooltipType(std::move(value)); return *this;}


    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline const FieldBasedTooltip& GetFieldBasedTooltip() const{ return m_fieldBasedTooltip; }

    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline bool FieldBasedTooltipHasBeenSet() const { return m_fieldBasedTooltipHasBeenSet; }

    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline void SetFieldBasedTooltip(const FieldBasedTooltip& value) { m_fieldBasedTooltipHasBeenSet = true; m_fieldBasedTooltip = value; }

    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline void SetFieldBasedTooltip(FieldBasedTooltip&& value) { m_fieldBasedTooltipHasBeenSet = true; m_fieldBasedTooltip = std::move(value); }

    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline TooltipOptions& WithFieldBasedTooltip(const FieldBasedTooltip& value) { SetFieldBasedTooltip(value); return *this;}

    /**
     * <p>The setup for the detailed tooltip. The tooltip setup is always saved. The
     * display type is decided based on the tooltip type.</p>
     */
    inline TooltipOptions& WithFieldBasedTooltip(FieldBasedTooltip&& value) { SetFieldBasedTooltip(std::move(value)); return *this;}

  private:

    Visibility m_tooltipVisibility;
    bool m_tooltipVisibilityHasBeenSet = false;

    SelectedTooltipType m_selectedTooltipType;
    bool m_selectedTooltipTypeHasBeenSet = false;

    FieldBasedTooltip m_fieldBasedTooltip;
    bool m_fieldBasedTooltipHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
