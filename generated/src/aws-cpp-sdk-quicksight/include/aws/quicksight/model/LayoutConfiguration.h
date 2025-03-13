/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/GridLayoutConfiguration.h>
#include <aws/quicksight/model/FreeFormLayoutConfiguration.h>
#include <aws/quicksight/model/SectionBasedLayoutConfiguration.h>
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
   * <p>The configuration that determines what the type of layout will be used on a
   * sheet.</p> <p>This is a union type structure. For this structure to be valid,
   * only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class LayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API LayoutConfiguration() = default;
    AWS_QUICKSIGHT_API LayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A type of layout that can be used on a sheet. In a grid layout, visuals snap
     * to a grid with standard spacing and alignment. Dashboards are displayed as
     * designed, with options to fit to screen or view at actual size. A grid layout
     * can be configured to behave in one of two ways when the viewport is resized:
     * <code>FIXED</code> or <code>RESPONSIVE</code>.</p>
     */
    inline const GridLayoutConfiguration& GetGridLayout() const { return m_gridLayout; }
    inline bool GridLayoutHasBeenSet() const { return m_gridLayoutHasBeenSet; }
    template<typename GridLayoutT = GridLayoutConfiguration>
    void SetGridLayout(GridLayoutT&& value) { m_gridLayoutHasBeenSet = true; m_gridLayout = std::forward<GridLayoutT>(value); }
    template<typename GridLayoutT = GridLayoutConfiguration>
    LayoutConfiguration& WithGridLayout(GridLayoutT&& value) { SetGridLayout(std::forward<GridLayoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A free-form is optimized for a fixed width and has more control over the
     * exact placement of layout elements.</p>
     */
    inline const FreeFormLayoutConfiguration& GetFreeFormLayout() const { return m_freeFormLayout; }
    inline bool FreeFormLayoutHasBeenSet() const { return m_freeFormLayoutHasBeenSet; }
    template<typename FreeFormLayoutT = FreeFormLayoutConfiguration>
    void SetFreeFormLayout(FreeFormLayoutT&& value) { m_freeFormLayoutHasBeenSet = true; m_freeFormLayout = std::forward<FreeFormLayoutT>(value); }
    template<typename FreeFormLayoutT = FreeFormLayoutConfiguration>
    LayoutConfiguration& WithFreeFormLayout(FreeFormLayoutT&& value) { SetFreeFormLayout(std::forward<FreeFormLayoutT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A section based layout organizes visuals into multiple sections and has
     * customized header, footer and page break.</p>
     */
    inline const SectionBasedLayoutConfiguration& GetSectionBasedLayout() const { return m_sectionBasedLayout; }
    inline bool SectionBasedLayoutHasBeenSet() const { return m_sectionBasedLayoutHasBeenSet; }
    template<typename SectionBasedLayoutT = SectionBasedLayoutConfiguration>
    void SetSectionBasedLayout(SectionBasedLayoutT&& value) { m_sectionBasedLayoutHasBeenSet = true; m_sectionBasedLayout = std::forward<SectionBasedLayoutT>(value); }
    template<typename SectionBasedLayoutT = SectionBasedLayoutConfiguration>
    LayoutConfiguration& WithSectionBasedLayout(SectionBasedLayoutT&& value) { SetSectionBasedLayout(std::forward<SectionBasedLayoutT>(value)); return *this;}
    ///@}
  private:

    GridLayoutConfiguration m_gridLayout;
    bool m_gridLayoutHasBeenSet = false;

    FreeFormLayoutConfiguration m_freeFormLayout;
    bool m_freeFormLayoutHasBeenSet = false;

    SectionBasedLayoutConfiguration m_sectionBasedLayout;
    bool m_sectionBasedLayoutHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
