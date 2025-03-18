/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SelectedSheetsFilterScopeConfiguration.h>
#include <aws/quicksight/model/AllSheetsFilterScopeConfiguration.h>
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
   * <p>The scope configuration for a <code>FilterGroup</code>.</p> <p>This is a
   * union type structure. For this structure to be valid, only one of the attributes
   * can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterScopeConfiguration">AWS
   * API Reference</a></p>
   */
  class FilterScopeConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilterScopeConfiguration() = default;
    AWS_QUICKSIGHT_API FilterScopeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterScopeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for applying a filter to specific sheets.</p>
     */
    inline const SelectedSheetsFilterScopeConfiguration& GetSelectedSheets() const { return m_selectedSheets; }
    inline bool SelectedSheetsHasBeenSet() const { return m_selectedSheetsHasBeenSet; }
    template<typename SelectedSheetsT = SelectedSheetsFilterScopeConfiguration>
    void SetSelectedSheets(SelectedSheetsT&& value) { m_selectedSheetsHasBeenSet = true; m_selectedSheets = std::forward<SelectedSheetsT>(value); }
    template<typename SelectedSheetsT = SelectedSheetsFilterScopeConfiguration>
    FilterScopeConfiguration& WithSelectedSheets(SelectedSheetsT&& value) { SetSelectedSheets(std::forward<SelectedSheetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that applies a filter to all sheets. When you choose
     * <code>AllSheets</code> as the value for a <code>FilterScopeConfiguration</code>,
     * this filter is applied to all visuals of all sheets in an Analysis, Dashboard,
     * or Template. The <code>AllSheetsFilterScopeConfiguration</code> is chosen.</p>
     */
    inline const AllSheetsFilterScopeConfiguration& GetAllSheets() const { return m_allSheets; }
    inline bool AllSheetsHasBeenSet() const { return m_allSheetsHasBeenSet; }
    template<typename AllSheetsT = AllSheetsFilterScopeConfiguration>
    void SetAllSheets(AllSheetsT&& value) { m_allSheetsHasBeenSet = true; m_allSheets = std::forward<AllSheetsT>(value); }
    template<typename AllSheetsT = AllSheetsFilterScopeConfiguration>
    FilterScopeConfiguration& WithAllSheets(AllSheetsT&& value) { SetAllSheets(std::forward<AllSheetsT>(value)); return *this;}
    ///@}
  private:

    SelectedSheetsFilterScopeConfiguration m_selectedSheets;
    bool m_selectedSheetsHasBeenSet = false;

    AllSheetsFilterScopeConfiguration m_allSheets;
    bool m_allSheetsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
