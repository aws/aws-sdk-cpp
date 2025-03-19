/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GridLayoutCanvasSizeOptions.h>
#include <aws/quicksight/model/GridLayoutElement.h>
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
   * <p>The configuration for a grid layout. Also called a tiled layout.</p>
   * <p>Visuals snap to a grid with standard spacing and alignment. Dashboards are
   * displayed as designed, with options to fit to screen or view at actual
   * size.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/GridLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class GridLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API GridLayoutConfiguration() = default;
    AWS_QUICKSIGHT_API GridLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API GridLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The elements that are included in a grid layout.</p>
     */
    inline const Aws::Vector<GridLayoutElement>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<GridLayoutElement>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<GridLayoutElement>>
    GridLayoutConfiguration& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = GridLayoutElement>
    GridLayoutConfiguration& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const GridLayoutCanvasSizeOptions& GetCanvasSizeOptions() const { return m_canvasSizeOptions; }
    inline bool CanvasSizeOptionsHasBeenSet() const { return m_canvasSizeOptionsHasBeenSet; }
    template<typename CanvasSizeOptionsT = GridLayoutCanvasSizeOptions>
    void SetCanvasSizeOptions(CanvasSizeOptionsT&& value) { m_canvasSizeOptionsHasBeenSet = true; m_canvasSizeOptions = std::forward<CanvasSizeOptionsT>(value); }
    template<typename CanvasSizeOptionsT = GridLayoutCanvasSizeOptions>
    GridLayoutConfiguration& WithCanvasSizeOptions(CanvasSizeOptionsT&& value) { SetCanvasSizeOptions(std::forward<CanvasSizeOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GridLayoutElement> m_elements;
    bool m_elementsHasBeenSet = false;

    GridLayoutCanvasSizeOptions m_canvasSizeOptions;
    bool m_canvasSizeOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
