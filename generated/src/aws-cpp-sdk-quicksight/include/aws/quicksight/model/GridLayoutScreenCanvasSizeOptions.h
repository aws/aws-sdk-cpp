/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ResizeOption.h>
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
   * <p>The options that determine the sizing of the canvas used in a grid
   * layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutScreenCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class GridLayoutScreenCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API GridLayoutScreenCanvasSizeOptions();
    AWS_QUICKSIGHT_API GridLayoutScreenCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GridLayoutScreenCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline const ResizeOption& GetResizeOption() const{ return m_resizeOption; }

    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline bool ResizeOptionHasBeenSet() const { return m_resizeOptionHasBeenSet; }

    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline void SetResizeOption(const ResizeOption& value) { m_resizeOptionHasBeenSet = true; m_resizeOption = value; }

    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline void SetResizeOption(ResizeOption&& value) { m_resizeOptionHasBeenSet = true; m_resizeOption = std::move(value); }

    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline GridLayoutScreenCanvasSizeOptions& WithResizeOption(const ResizeOption& value) { SetResizeOption(value); return *this;}

    /**
     * <p>This value determines the layout behavior when the viewport is resized.</p>
     * <ul> <li> <p> <code>FIXED</code>: A fixed width will be used when optimizing the
     * layout. In the Amazon QuickSight console, this option is called
     * <code>Classic</code>.</p> </li> <li> <p> <code>RESPONSIVE</code>: The width of
     * the canvas will be responsive and optimized to the view port. In the Amazon
     * QuickSight console, this option is called <code>Tiled</code>.</p> </li> </ul>
     */
    inline GridLayoutScreenCanvasSizeOptions& WithResizeOption(ResizeOption&& value) { SetResizeOption(std::move(value)); return *this;}


    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline const Aws::String& GetOptimizedViewPortWidth() const{ return m_optimizedViewPortWidth; }

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline bool OptimizedViewPortWidthHasBeenSet() const { return m_optimizedViewPortWidthHasBeenSet; }

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline void SetOptimizedViewPortWidth(const Aws::String& value) { m_optimizedViewPortWidthHasBeenSet = true; m_optimizedViewPortWidth = value; }

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline void SetOptimizedViewPortWidth(Aws::String&& value) { m_optimizedViewPortWidthHasBeenSet = true; m_optimizedViewPortWidth = std::move(value); }

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline void SetOptimizedViewPortWidth(const char* value) { m_optimizedViewPortWidthHasBeenSet = true; m_optimizedViewPortWidth.assign(value); }

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline GridLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(const Aws::String& value) { SetOptimizedViewPortWidth(value); return *this;}

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline GridLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(Aws::String&& value) { SetOptimizedViewPortWidth(std::move(value)); return *this;}

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline GridLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(const char* value) { SetOptimizedViewPortWidth(value); return *this;}

  private:

    ResizeOption m_resizeOption;
    bool m_resizeOptionHasBeenSet = false;

    Aws::String m_optimizedViewPortWidth;
    bool m_optimizedViewPortWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
