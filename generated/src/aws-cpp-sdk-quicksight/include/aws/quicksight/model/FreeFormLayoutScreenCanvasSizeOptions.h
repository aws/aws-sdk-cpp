/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
   * <p>The options that determine the sizing of the canvas used in a free-form
   * layout.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormLayoutScreenCanvasSizeOptions">AWS
   * API Reference</a></p>
   */
  class FreeFormLayoutScreenCanvasSizeOptions
  {
  public:
    AWS_QUICKSIGHT_API FreeFormLayoutScreenCanvasSizeOptions();
    AWS_QUICKSIGHT_API FreeFormLayoutScreenCanvasSizeOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormLayoutScreenCanvasSizeOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline FreeFormLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(const Aws::String& value) { SetOptimizedViewPortWidth(value); return *this;}

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline FreeFormLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(Aws::String&& value) { SetOptimizedViewPortWidth(std::move(value)); return *this;}

    /**
     * <p>The width that the view port will be optimized for when the layout
     * renders.</p>
     */
    inline FreeFormLayoutScreenCanvasSizeOptions& WithOptimizedViewPortWidth(const char* value) { SetOptimizedViewPortWidth(value); return *this;}

  private:

    Aws::String m_optimizedViewPortWidth;
    bool m_optimizedViewPortWidthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
