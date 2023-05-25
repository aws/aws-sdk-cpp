/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotTableAggregatedFieldWells.h>
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
   * <p>The field wells for a pivot table visual.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableFieldWells">AWS
   * API Reference</a></p>
   */
  class PivotTableFieldWells
  {
  public:
    AWS_QUICKSIGHT_API PivotTableFieldWells();
    AWS_QUICKSIGHT_API PivotTableFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline const PivotTableAggregatedFieldWells& GetPivotTableAggregatedFieldWells() const{ return m_pivotTableAggregatedFieldWells; }

    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline bool PivotTableAggregatedFieldWellsHasBeenSet() const { return m_pivotTableAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline void SetPivotTableAggregatedFieldWells(const PivotTableAggregatedFieldWells& value) { m_pivotTableAggregatedFieldWellsHasBeenSet = true; m_pivotTableAggregatedFieldWells = value; }

    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline void SetPivotTableAggregatedFieldWells(PivotTableAggregatedFieldWells&& value) { m_pivotTableAggregatedFieldWellsHasBeenSet = true; m_pivotTableAggregatedFieldWells = std::move(value); }

    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline PivotTableFieldWells& WithPivotTableAggregatedFieldWells(const PivotTableAggregatedFieldWells& value) { SetPivotTableAggregatedFieldWells(value); return *this;}

    /**
     * <p>The aggregated field well for the pivot table.</p>
     */
    inline PivotTableFieldWells& WithPivotTableAggregatedFieldWells(PivotTableAggregatedFieldWells&& value) { SetPivotTableAggregatedFieldWells(std::move(value)); return *this;}

  private:

    PivotTableAggregatedFieldWells m_pivotTableAggregatedFieldWells;
    bool m_pivotTableAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
