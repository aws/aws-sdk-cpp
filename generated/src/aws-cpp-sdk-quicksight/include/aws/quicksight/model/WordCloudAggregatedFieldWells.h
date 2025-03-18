/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The aggregated field wells of a word cloud.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WordCloudAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class WordCloudAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WordCloudAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group by field well of a word cloud. Values are grouped by group by
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGroupBy() const { return m_groupBy; }
    inline bool GroupByHasBeenSet() const { return m_groupByHasBeenSet; }
    template<typename GroupByT = Aws::Vector<DimensionField>>
    void SetGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy = std::forward<GroupByT>(value); }
    template<typename GroupByT = Aws::Vector<DimensionField>>
    WordCloudAggregatedFieldWells& WithGroupBy(GroupByT&& value) { SetGroupBy(std::forward<GroupByT>(value)); return *this;}
    template<typename GroupByT = DimensionField>
    WordCloudAggregatedFieldWells& AddGroupBy(GroupByT&& value) { m_groupByHasBeenSet = true; m_groupBy.emplace_back(std::forward<GroupByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size field well of a word cloud. Values are aggregated based on group by
     * fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    template<typename SizeT = Aws::Vector<MeasureField>>
    void SetSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size = std::forward<SizeT>(value); }
    template<typename SizeT = Aws::Vector<MeasureField>>
    WordCloudAggregatedFieldWells& WithSize(SizeT&& value) { SetSize(std::forward<SizeT>(value)); return *this;}
    template<typename SizeT = MeasureField>
    WordCloudAggregatedFieldWells& AddSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size.emplace_back(std::forward<SizeT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_groupBy;
    bool m_groupByHasBeenSet = false;

    Aws::Vector<MeasureField> m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
