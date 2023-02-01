/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/HistogramAggregatedFieldWells.h>
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
   * <p>The field well configuration of a histogram.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/HistogramFieldWells">AWS
   * API Reference</a></p>
   */
  class HistogramFieldWells
  {
  public:
    AWS_QUICKSIGHT_API HistogramFieldWells();
    AWS_QUICKSIGHT_API HistogramFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline const HistogramAggregatedFieldWells& GetHistogramAggregatedFieldWells() const{ return m_histogramAggregatedFieldWells; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline bool HistogramAggregatedFieldWellsHasBeenSet() const { return m_histogramAggregatedFieldWellsHasBeenSet; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline void SetHistogramAggregatedFieldWells(const HistogramAggregatedFieldWells& value) { m_histogramAggregatedFieldWellsHasBeenSet = true; m_histogramAggregatedFieldWells = value; }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline void SetHistogramAggregatedFieldWells(HistogramAggregatedFieldWells&& value) { m_histogramAggregatedFieldWellsHasBeenSet = true; m_histogramAggregatedFieldWells = std::move(value); }

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline HistogramFieldWells& WithHistogramAggregatedFieldWells(const HistogramAggregatedFieldWells& value) { SetHistogramAggregatedFieldWells(value); return *this;}

    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline HistogramFieldWells& WithHistogramAggregatedFieldWells(HistogramAggregatedFieldWells&& value) { SetHistogramAggregatedFieldWells(std::move(value)); return *this;}

  private:

    HistogramAggregatedFieldWells m_histogramAggregatedFieldWells;
    bool m_histogramAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
