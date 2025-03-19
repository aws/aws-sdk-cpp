/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DefaultGridLayoutConfiguration.h>
#include <aws/quicksight/model/DefaultFreeFormLayoutConfiguration.h>
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
   * <p>The options that determine the default settings for interactive layout
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DefaultInteractiveLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class DefaultInteractiveLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DefaultInteractiveLayoutConfiguration() = default;
    AWS_QUICKSIGHT_API DefaultInteractiveLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DefaultInteractiveLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The options that determine the default settings for a grid layout
     * configuration.</p>
     */
    inline const DefaultGridLayoutConfiguration& GetGrid() const { return m_grid; }
    inline bool GridHasBeenSet() const { return m_gridHasBeenSet; }
    template<typename GridT = DefaultGridLayoutConfiguration>
    void SetGrid(GridT&& value) { m_gridHasBeenSet = true; m_grid = std::forward<GridT>(value); }
    template<typename GridT = DefaultGridLayoutConfiguration>
    DefaultInteractiveLayoutConfiguration& WithGrid(GridT&& value) { SetGrid(std::forward<GridT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that determine the default settings of a free-form layout
     * configuration.</p>
     */
    inline const DefaultFreeFormLayoutConfiguration& GetFreeForm() const { return m_freeForm; }
    inline bool FreeFormHasBeenSet() const { return m_freeFormHasBeenSet; }
    template<typename FreeFormT = DefaultFreeFormLayoutConfiguration>
    void SetFreeForm(FreeFormT&& value) { m_freeFormHasBeenSet = true; m_freeForm = std::forward<FreeFormT>(value); }
    template<typename FreeFormT = DefaultFreeFormLayoutConfiguration>
    DefaultInteractiveLayoutConfiguration& WithFreeForm(FreeFormT&& value) { SetFreeForm(std::forward<FreeFormT>(value)); return *this;}
    ///@}
  private:

    DefaultGridLayoutConfiguration m_grid;
    bool m_gridHasBeenSet = false;

    DefaultFreeFormLayoutConfiguration m_freeForm;
    bool m_freeFormHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
