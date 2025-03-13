/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The collection of components that defines the time-series.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TimeSeriesConfig">AWS
   * API Reference</a></p>
   */
  class TimeSeriesConfig
  {
  public:
    AWS_SAGEMAKER_API TimeSeriesConfig() = default;
    AWS_SAGEMAKER_API TimeSeriesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const { return m_targetAttributeName; }
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }
    template<typename TargetAttributeNameT = Aws::String>
    void SetTargetAttributeName(TargetAttributeNameT&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::forward<TargetAttributeNameT>(value); }
    template<typename TargetAttributeNameT = Aws::String>
    TimeSeriesConfig& WithTargetAttributeName(TargetAttributeNameT&& value) { SetTargetAttributeName(std::forward<TargetAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline const Aws::String& GetTimestampAttributeName() const { return m_timestampAttributeName; }
    inline bool TimestampAttributeNameHasBeenSet() const { return m_timestampAttributeNameHasBeenSet; }
    template<typename TimestampAttributeNameT = Aws::String>
    void SetTimestampAttributeName(TimestampAttributeNameT&& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = std::forward<TimestampAttributeNameT>(value); }
    template<typename TimestampAttributeNameT = Aws::String>
    TimeSeriesConfig& WithTimestampAttributeName(TimestampAttributeNameT&& value) { SetTimestampAttributeName(std::forward<TimestampAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline const Aws::String& GetItemIdentifierAttributeName() const { return m_itemIdentifierAttributeName; }
    inline bool ItemIdentifierAttributeNameHasBeenSet() const { return m_itemIdentifierAttributeNameHasBeenSet; }
    template<typename ItemIdentifierAttributeNameT = Aws::String>
    void SetItemIdentifierAttributeName(ItemIdentifierAttributeNameT&& value) { m_itemIdentifierAttributeNameHasBeenSet = true; m_itemIdentifierAttributeName = std::forward<ItemIdentifierAttributeNameT>(value); }
    template<typename ItemIdentifierAttributeNameT = Aws::String>
    TimeSeriesConfig& WithItemIdentifierAttributeName(ItemIdentifierAttributeNameT&& value) { SetItemIdentifierAttributeName(std::forward<ItemIdentifierAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupingAttributeNames() const { return m_groupingAttributeNames; }
    inline bool GroupingAttributeNamesHasBeenSet() const { return m_groupingAttributeNamesHasBeenSet; }
    template<typename GroupingAttributeNamesT = Aws::Vector<Aws::String>>
    void SetGroupingAttributeNames(GroupingAttributeNamesT&& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames = std::forward<GroupingAttributeNamesT>(value); }
    template<typename GroupingAttributeNamesT = Aws::Vector<Aws::String>>
    TimeSeriesConfig& WithGroupingAttributeNames(GroupingAttributeNamesT&& value) { SetGroupingAttributeNames(std::forward<GroupingAttributeNamesT>(value)); return *this;}
    template<typename GroupingAttributeNamesT = Aws::String>
    TimeSeriesConfig& AddGroupingAttributeNames(GroupingAttributeNamesT&& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames.emplace_back(std::forward<GroupingAttributeNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_targetAttributeName;
    bool m_targetAttributeNameHasBeenSet = false;

    Aws::String m_timestampAttributeName;
    bool m_timestampAttributeNameHasBeenSet = false;

    Aws::String m_itemIdentifierAttributeName;
    bool m_itemIdentifierAttributeNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupingAttributeNames;
    bool m_groupingAttributeNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
