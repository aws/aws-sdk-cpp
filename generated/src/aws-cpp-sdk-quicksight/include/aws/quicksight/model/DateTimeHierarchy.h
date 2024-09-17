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
    AWS_QUICKSIGHT_API DateTimeHierarchy();
    AWS_QUICKSIGHT_API DateTimeHierarchy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateTimeHierarchy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hierarchy ID of the <code>DateTime</code> hierarchy.</p>
     */
    inline const Aws::String& GetHierarchyId() const{ return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    inline void SetHierarchyId(const Aws::String& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = value; }
    inline void SetHierarchyId(Aws::String&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::move(value); }
    inline void SetHierarchyId(const char* value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId.assign(value); }
    inline DateTimeHierarchy& WithHierarchyId(const Aws::String& value) { SetHierarchyId(value); return *this;}
    inline DateTimeHierarchy& WithHierarchyId(Aws::String&& value) { SetHierarchyId(std::move(value)); return *this;}
    inline DateTimeHierarchy& WithHierarchyId(const char* value) { SetHierarchyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that determines the drill down filters for the
     * <code>DateTime</code> hierarchy.</p>
     */
    inline const Aws::Vector<DrillDownFilter>& GetDrillDownFilters() const{ return m_drillDownFilters; }
    inline bool DrillDownFiltersHasBeenSet() const { return m_drillDownFiltersHasBeenSet; }
    inline void SetDrillDownFilters(const Aws::Vector<DrillDownFilter>& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = value; }
    inline void SetDrillDownFilters(Aws::Vector<DrillDownFilter>&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters = std::move(value); }
    inline DateTimeHierarchy& WithDrillDownFilters(const Aws::Vector<DrillDownFilter>& value) { SetDrillDownFilters(value); return *this;}
    inline DateTimeHierarchy& WithDrillDownFilters(Aws::Vector<DrillDownFilter>&& value) { SetDrillDownFilters(std::move(value)); return *this;}
    inline DateTimeHierarchy& AddDrillDownFilters(const DrillDownFilter& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.push_back(value); return *this; }
    inline DateTimeHierarchy& AddDrillDownFilters(DrillDownFilter&& value) { m_drillDownFiltersHasBeenSet = true; m_drillDownFilters.push_back(std::move(value)); return *this; }
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
