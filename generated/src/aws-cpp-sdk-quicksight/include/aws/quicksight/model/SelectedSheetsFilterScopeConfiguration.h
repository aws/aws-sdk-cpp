/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SheetVisualScopingConfiguration.h>
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
   * <p>The configuration for applying a filter to specific sheets or visuals. You
   * can apply this filter to multiple visuals that are on one sheet or to all
   * visuals on a sheet.</p> <p>This is a union type structure. For this structure to
   * be valid, only one of the attributes can be defined.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SelectedSheetsFilterScopeConfiguration">AWS
   * API Reference</a></p>
   */
  class SelectedSheetsFilterScopeConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SelectedSheetsFilterScopeConfiguration() = default;
    AWS_QUICKSIGHT_API SelectedSheetsFilterScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SelectedSheetsFilterScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The sheet ID and visual IDs of the sheet and visuals that the filter is
     * applied to.</p>
     */
    inline const Aws::Vector<SheetVisualScopingConfiguration>& GetSheetVisualScopingConfigurations() const { return m_sheetVisualScopingConfigurations; }
    inline bool SheetVisualScopingConfigurationsHasBeenSet() const { return m_sheetVisualScopingConfigurationsHasBeenSet; }
    template<typename SheetVisualScopingConfigurationsT = Aws::Vector<SheetVisualScopingConfiguration>>
    void SetSheetVisualScopingConfigurations(SheetVisualScopingConfigurationsT&& value) { m_sheetVisualScopingConfigurationsHasBeenSet = true; m_sheetVisualScopingConfigurations = std::forward<SheetVisualScopingConfigurationsT>(value); }
    template<typename SheetVisualScopingConfigurationsT = Aws::Vector<SheetVisualScopingConfiguration>>
    SelectedSheetsFilterScopeConfiguration& WithSheetVisualScopingConfigurations(SheetVisualScopingConfigurationsT&& value) { SetSheetVisualScopingConfigurations(std::forward<SheetVisualScopingConfigurationsT>(value)); return *this;}
    template<typename SheetVisualScopingConfigurationsT = SheetVisualScopingConfiguration>
    SelectedSheetsFilterScopeConfiguration& AddSheetVisualScopingConfigurations(SheetVisualScopingConfigurationsT&& value) { m_sheetVisualScopingConfigurationsHasBeenSet = true; m_sheetVisualScopingConfigurations.emplace_back(std::forward<SheetVisualScopingConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SheetVisualScopingConfiguration> m_sheetVisualScopingConfigurations;
    bool m_sheetVisualScopingConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
