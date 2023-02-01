/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GridLayoutConfiguration.h>
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
   * <p>The configuration that determines the elements and canvas size options of
   * sheet control.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetControlLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class SheetControlLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SheetControlLayoutConfiguration();
    AWS_QUICKSIGHT_API SheetControlLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline const GridLayoutConfiguration& GetGridLayout() const{ return m_gridLayout; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline bool GridLayoutHasBeenSet() const { return m_gridLayoutHasBeenSet; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline void SetGridLayout(const GridLayoutConfiguration& value) { m_gridLayoutHasBeenSet = true; m_gridLayout = value; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline void SetGridLayout(GridLayoutConfiguration&& value) { m_gridLayoutHasBeenSet = true; m_gridLayout = std::move(value); }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline SheetControlLayoutConfiguration& WithGridLayout(const GridLayoutConfiguration& value) { SetGridLayout(value); return *this;}

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline SheetControlLayoutConfiguration& WithGridLayout(GridLayoutConfiguration&& value) { SetGridLayout(std::move(value)); return *this;}

  private:

    GridLayoutConfiguration m_gridLayout;
    bool m_gridLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
