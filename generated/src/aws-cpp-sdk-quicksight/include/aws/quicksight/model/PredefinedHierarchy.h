﻿/**
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
    AWS_QUICKSIGHT_API PredefinedHierarchy();
    AWS_QUICKSIGHT_API PredefinedHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PredefinedHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hierarchy ID of the predefined hierarchy.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }
    inline PredefinedHierarchy& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}
    inline PredefinedHierarchy& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}
    inline PredefinedHierarchy& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of columns that define the predefined hierarchy.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<ColumnIdentifier>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<ColumnIdentifier>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline PredefinedHierarchy& WithColumns(const Aws::Vector<ColumnIdentifier>& value) { SetColumns(value); return *this;}
    inline PredefinedHierarchy& WithColumns(Aws::Vector<ColumnIdentifier>&& value) { SetColumns(std::move(value)); return *this;}
    inline PredefinedHierarchy& AddColumns(const ColumnIdentifier& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline PredefinedHierarchy& AddColumns(ColumnIdentifier&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option that determines the drill down filters for the predefined
     * hierarchy.</p>
     */
    inline const Aws::Vector<DrillDownFilter>& GetDrillDownFilters() const{ return m_drillDownFilters; }
    inline bool DrillDownFiltersHasBeenSet() const { return m_drillDownFiltersHasBeenSet; }
    inline void SetDrillDownFilters(const Aws::Vector<DrillDownFilter>& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = value; }
    inline void SetDrillDownFilters(Aws::Vector<DrillDownFilter>&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = std::move(value); }
    inline PredefinedHierarchy& WithDrillDownFilters(const Aws::Vector<DrillDownFilter>& value) { SetDrillDownFilters(value); return *this;}
    inline PredefinedHierarchy& WithDrillDownFilters(Aws::Vector<DrillDownFilter>&& value) { SetDrillDownFilters(std::move(value)); return *this;}
    inline PredefinedHierarchy& AddDrillDownFilters(const DrillDownFilter& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.push_back(value); return *this; }
    inline PredefinedHierarchy& AddDrillDownFilters(DrillDownFilter&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.push_back(std::move(value)); return *this; }
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
