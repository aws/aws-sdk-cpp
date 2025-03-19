/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The option that determines the hierarchy of any <code>DateTime</code>
   * fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateTimeHierarchy">AWS
   * API Reference</a></p>
   */
  class DateTimeHierarchy
  {
  public:
    AWS_QUICKSIGHT_API DateTimeHierarchy() = default;
    AWS_QUICKSIGHT_API DateTimeHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hierarchy ID of the <code>DateTime</code> hierarchy.</p>
     */
    inline const Aws::String& GetHierarchyId() const { return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    template<typename HierarchyIdT = Aws::String>
    void SetHierarchyId(HierarchyIdT&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::forward<HierarchyIdT>(value); }
    template<typename HierarchyIdT = Aws::String>
    DateTimeHierarchy& WithHierarchyId(HierarchyIdT&& value) { SetHierarchyId(std::forward<HierarchyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the drill down filters for the
     * <code>DateTime</code> hierarchy.</p>
     */
    inline const Aws::Vector<DrillDownFilter>& GetDrillDownFilters() const { return m_drillDownFilters; }
    inline bool DrillDownFiltersHasBeenSet() const { return m_drillDownFiltersHasBeenSet; }
    template<typename DrillDownFiltersT = Aws::Vector<DrillDownFilter>>
    void SetDrillDownFilters(DrillDownFiltersT&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = std::forward<DrillDownFiltersT>(value); }
    template<typename DrillDownFiltersT = Aws::Vector<DrillDownFilter>>
    DateTimeHierarchy& WithDrillDownFilters(DrillDownFiltersT&& value) { SetDrillDownFilters(std::forward<DrillDownFiltersT>(value)); return *this;}
    template<typename DrillDownFiltersT = DrillDownFilter>
    DateTimeHierarchy& AddDrillDownFilters(DrillDownFiltersT&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.emplace_back(std::forward<DrillDownFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    Aws::Vector<DrillDownFilter> m_drillDownFilters;
    bool m_drillDownFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
