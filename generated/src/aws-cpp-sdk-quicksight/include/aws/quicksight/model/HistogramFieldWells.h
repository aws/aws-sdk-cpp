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
    AWS_QUICKSIGHT_API HistogramFieldWells() = default;
    AWS_QUICKSIGHT_API HistogramFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API HistogramFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field well configuration of a histogram.</p>
     */
    inline const HistogramAggregatedFieldWells& GetHistogramAggregatedFieldWells() const { return m_histogramAggregatedFieldWells; }
    inline bool HistogramAggregatedFieldWellsHasBeenSet() const { return m_histogramAggregatedFieldWellsHasBeenSet; }
    template<typename HistogramAggregatedFieldWellsT = HistogramAggregatedFieldWells>
    void SetHistogramAggregatedFieldWells(HistogramAggregatedFieldWellsT&& value) { m_histogramAggregatedFieldWellsHasBeenSet = true; m_histogramAggregatedFieldWells = std::forward<HistogramAggregatedFieldWellsT>(value); }
    template<typename HistogramAggregatedFieldWellsT = HistogramAggregatedFieldWells>
    HistogramFieldWells& WithHistogramAggregatedFieldWells(HistogramAggregatedFieldWellsT&& value) { SetHistogramAggregatedFieldWells(std::forward<HistogramAggregatedFieldWellsT>(value)); return *this;}
    ///@}
  private:

    HistogramAggregatedFieldWells m_histogramAggregatedFieldWells;
    bool m_histogramAggregatedFieldWellsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
