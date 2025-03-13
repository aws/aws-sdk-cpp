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
   * <p>Aggregated field wells of a tree map.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TreeMapAggregatedFieldWells">AWS
   * API Reference</a></p>
   */
  class TreeMapAggregatedFieldWells
  {
  public:
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells() = default;
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TreeMapAggregatedFieldWells& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The group by field well of a tree map. Values are grouped based on group by
     * fields.</p>
     */
    inline const Aws::Vector<DimensionField>& GetGroups() const { return m_groups; }
    inline bool GroupsHasBeenSet() const { return m_groupsHasBeenSet; }
    template<typename GroupsT = Aws::Vector<DimensionField>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<DimensionField>>
    TreeMapAggregatedFieldWells& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = DimensionField>
    TreeMapAggregatedFieldWells& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The size field well of a tree map. Values are aggregated based on group by
     * fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetSizes() const { return m_sizes; }
    inline bool SizesHasBeenSet() const { return m_sizesHasBeenSet; }
    template<typename SizesT = Aws::Vector<MeasureField>>
    void SetSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes = std::forward<SizesT>(value); }
    template<typename SizesT = Aws::Vector<MeasureField>>
    TreeMapAggregatedFieldWells& WithSizes(SizesT&& value) { SetSizes(std::forward<SizesT>(value)); return *this;}
    template<typename SizesT = MeasureField>
    TreeMapAggregatedFieldWells& AddSizes(SizesT&& value) { m_sizesHasBeenSet = true; m_sizes.emplace_back(std::forward<SizesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The color field well of a tree map. Values are grouped by aggregations based
     * on group by fields.</p>
     */
    inline const Aws::Vector<MeasureField>& GetColors() const { return m_colors; }
    inline bool ColorsHasBeenSet() const { return m_colorsHasBeenSet; }
    template<typename ColorsT = Aws::Vector<MeasureField>>
    void SetColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors = std::forward<ColorsT>(value); }
    template<typename ColorsT = Aws::Vector<MeasureField>>
    TreeMapAggregatedFieldWells& WithColors(ColorsT&& value) { SetColors(std::forward<ColorsT>(value)); return *this;}
    template<typename ColorsT = MeasureField>
    TreeMapAggregatedFieldWells& AddColors(ColorsT&& value) { m_colorsHasBeenSet = true; m_colors.emplace_back(std::forward<ColorsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DimensionField> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::Vector<MeasureField> m_sizes;
    bool m_sizesHasBeenSet = false;

    Aws::Vector<MeasureField> m_colors;
    bool m_colorsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
