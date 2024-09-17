/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FilledMapShapeConditionalFormatting.h>
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
   * <p>Conditional formatting options of a
   * <code>FilledMapVisual</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapConditionalFormattingOption">AWS
   * API Reference</a></p>
   */
  class FilledMapConditionalFormattingOption
  {
  public:
    AWS_QUICKSIGHT_API FilledMapConditionalFormattingOption();
    AWS_QUICKSIGHT_API FilledMapConditionalFormattingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapConditionalFormattingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditional formatting that determines the shape of the filled map.</p>
     */
    inline const FilledMapShapeConditionalFormatting& GetShape() const{ return m_shape; }
    inline bool ShapeHasBeenSet() const { return m_shapeHasBeenSet; }
    inline void SetShape(const FilledMapShapeConditionalFormatting& value) { m_shapeHasBeenSet = true; m_shape = value; }
    inline void SetShape(FilledMapShapeConditionalFormatting&& value) { m_shapeHasBeenSet = true; m_shape = std::move(value); }
    inline FilledMapConditionalFormattingOption& WithShape(const FilledMapShapeConditionalFormatting& value) { SetShape(value); return *this;}
    inline FilledMapConditionalFormattingOption& WithShape(FilledMapShapeConditionalFormatting&& value) { SetShape(std::move(value)); return *this;}
    ///@}
  private:

    FilledMapShapeConditionalFormatting m_shape;
    bool m_shapeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
