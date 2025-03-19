/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/DrillDownFilter.h>
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
   * <p>The option that determines the hierarchy of the fields that are defined
   * during data preparation. These fields are available to use in any analysis that
   * uses the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PredefinedHierarchy">AWS
   * API Reference</a></p>
   */
  class PredefinedHierarchy
  {
  public:
    AWS_QUICKSIGHT_API PredefinedHierarchy() = default;
    AWS_QUICKSIGHT_API PredefinedHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PredefinedHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hierarchy ID of the predefined hierarchy.</p>
     */
    inline const Aws::String& GetHierarchyId() const { return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    template<typename HierarchyIdT = Aws::String>
    void SetHierarchyId(HierarchyIdT&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::forward<HierarchyIdT>(value); }
    template<typename HierarchyIdT = Aws::String>
    PredefinedHierarchy& WithHierarchyId(HierarchyIdT&& value) { SetHierarchyId(std::forward<HierarchyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns that define the predefined hierarchy.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<ColumnIdentifier>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<ColumnIdentifier>>
    PredefinedHierarchy& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = ColumnIdentifier>
    PredefinedHierarchy& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option that determines the drill down filters for the predefined
     * hierarchy.</p>
     */
    inline const Aws::Vector<DrillDownFilter>& GetDrillDownFilters() const { return m_drillDownFilters; }
    inline bool DrillDownFiltersHasBeenSet() const { return m_drillDownFiltersHasBeenSet; }
    template<typename DrillDownFiltersT = Aws::Vector<DrillDownFilter>>
    void SetDrillDownFilters(DrillDownFiltersT&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = std::forward<DrillDownFiltersT>(value); }
    template<typename DrillDownFiltersT = Aws::Vector<DrillDownFilter>>
    PredefinedHierarchy& WithDrillDownFilters(DrillDownFiltersT&& value) { SetDrillDownFilters(std::forward<DrillDownFiltersT>(value)); return *this;}
    template<typename DrillDownFiltersT = DrillDownFilter>
    PredefinedHierarchy& AddDrillDownFilters(DrillDownFiltersT&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.emplace_back(std::forward<DrillDownFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    Aws::Vector<ColumnIdentifier> m_columns;
    bool m_columnsHasBeenSet = false;

    Aws::Vector<DrillDownFilter> m_drillDownFilters;
    bool m_drillDownFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
