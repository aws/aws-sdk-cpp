/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ConditionalFormattingColor.h>
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
   * <p>The shape conditional formatting of a filled map visual.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ShapeConditionalFormat">AWS
   * API Reference</a></p>
   */
  class ShapeConditionalFormat
  {
  public:
    AWS_QUICKSIGHT_API ShapeConditionalFormat() = default;
    AWS_QUICKSIGHT_API ShapeConditionalFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ShapeConditionalFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline const ConditionalFormattingColor& GetBackgroundColor() const { return m_backgroundColor; }
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }
    template<typename BackgroundColorT = ConditionalFormattingColor>
    void SetBackgroundColor(BackgroundColorT&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::forward<BackgroundColorT>(value); }
    template<typename BackgroundColorT = ConditionalFormattingColor>
    ShapeConditionalFormat& WithBackgroundColor(BackgroundColorT&& value) { SetBackgroundColor(std::forward<BackgroundColorT>(value)); return *this;}
    ///@}
  private:

    ConditionalFormattingColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
