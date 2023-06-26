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
    AWS_QUICKSIGHT_API ShapeConditionalFormat();
    AWS_QUICKSIGHT_API ShapeConditionalFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ShapeConditionalFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline const ConditionalFormattingColor& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline void SetBackgroundColor(const ConditionalFormattingColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline void SetBackgroundColor(ConditionalFormattingColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline ShapeConditionalFormat& WithBackgroundColor(const ConditionalFormattingColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * <p>The conditional formatting for the shape background color of a filled map
     * visual.</p>
     */
    inline ShapeConditionalFormat& WithBackgroundColor(ConditionalFormattingColor&& value) { SetBackgroundColor(std::move(value)); return *this;}

  private:

    ConditionalFormattingColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
