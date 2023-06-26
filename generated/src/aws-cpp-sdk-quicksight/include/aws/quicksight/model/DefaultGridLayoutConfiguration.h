/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GridLayoutCanvasSizeOptions.h>
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
   * <p>The options that determine the default settings for a grid layout
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultGridLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultGridLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultGridLayoutConfiguration();
    AWS_QUICKSIGHT_API DefaultGridLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultGridLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline const GridLayoutCanvasSizeOptions& GetCanvasSizeOptions() const{ return m_canvasSizeOptions; }

    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }

    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline void SetCanvasSizeOptions(const GridLayoutCanvasSizeOptions& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = value; }

    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline void SetCanvasSizeOptions(GridLayoutCanvasSizeOptions&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::move(value); }

    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline DefaultGridLayoutConfiguration& WithCanvasSizeOptions(const GridLayoutCanvasSizeOptions& value) { SetCanvasSizeOptions(value); return *this;}

    /**
     * <p>Determines the screen canvas size options for a grid layout.</p>
     */
    inline DefaultGridLayoutConfiguration& WithCanvasSizeOptions(GridLayoutCanvasSizeOptions&& value) { SetCanvasSizeOptions(std::move(value)); return *this;}

  private:

    GridLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
