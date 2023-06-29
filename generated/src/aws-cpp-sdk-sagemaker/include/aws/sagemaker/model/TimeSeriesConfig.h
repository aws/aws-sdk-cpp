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
    AWS_SAGEMAKER_API TimeSeriesConfig();
    AWS_SAGEMAKER_API TimeSeriesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TimeSeriesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline const Aws::String& GetTargetAttributeName() const{ return m_targetAttributeName; }

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline bool TargetAttributeNameHasBeenSet() const { return m_targetAttributeNameHasBeenSet; }

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline void SetTargetAttributeName(const Aws::String& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = value; }

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline void SetTargetAttributeName(Aws::String&& value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName = std::move(value); }

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline void SetTargetAttributeName(const char* value) { m_targetAttributeNameHasBeenSet = true; m_targetAttributeName.assign(value); }

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline TimeSeriesConfig& WithTargetAttributeName(const Aws::String& value) { SetTargetAttributeName(value); return *this;}

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline TimeSeriesConfig& WithTargetAttributeName(Aws::String&& value) { SetTargetAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the column representing the target variable that you want to
     * predict for each item in your dataset. The data type of the target variable must
     * be numerical.</p>
     */
    inline TimeSeriesConfig& WithTargetAttributeName(const char* value) { SetTargetAttributeName(value); return *this;}


    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline const Aws::String& GetTimestampAttributeName() const{ return m_timestampAttributeName; }

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline bool TimestampAttributeNameHasBeenSet() const { return m_timestampAttributeNameHasBeenSet; }

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline void SetTimestampAttributeName(const Aws::String& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = value; }

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline void SetTimestampAttributeName(Aws::String&& value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName = std::move(value); }

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline void SetTimestampAttributeName(const char* value) { m_timestampAttributeNameHasBeenSet = true; m_timestampAttributeName.assign(value); }

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline TimeSeriesConfig& WithTimestampAttributeName(const Aws::String& value) { SetTimestampAttributeName(value); return *this;}

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline TimeSeriesConfig& WithTimestampAttributeName(Aws::String&& value) { SetTimestampAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the column indicating a point in time at which the target value
     * of a given item is recorded.</p>
     */
    inline TimeSeriesConfig& WithTimestampAttributeName(const char* value) { SetTimestampAttributeName(value); return *this;}


    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline const Aws::String& GetItemIdentifierAttributeName() const{ return m_itemIdentifierAttributeName; }

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline bool ItemIdentifierAttributeNameHasBeenSet() const { return m_itemIdentifierAttributeNameHasBeenSet; }

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline void SetItemIdentifierAttributeName(const Aws::String& value) { m_itemIdentifierAttributeNameHasBeenSet = true; m_itemIdentifierAttributeName = value; }

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline void SetItemIdentifierAttributeName(Aws::String&& value) { m_itemIdentifierAttributeNameHasBeenSet = true; m_itemIdentifierAttributeName = std::move(value); }

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline void SetItemIdentifierAttributeName(const char* value) { m_itemIdentifierAttributeNameHasBeenSet = true; m_itemIdentifierAttributeName.assign(value); }

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline TimeSeriesConfig& WithItemIdentifierAttributeName(const Aws::String& value) { SetItemIdentifierAttributeName(value); return *this;}

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline TimeSeriesConfig& WithItemIdentifierAttributeName(Aws::String&& value) { SetItemIdentifierAttributeName(std::move(value)); return *this;}

    /**
     * <p>The name of the column that represents the set of item identifiers for which
     * you want to predict the target value.</p>
     */
    inline TimeSeriesConfig& WithItemIdentifierAttributeName(const char* value) { SetItemIdentifierAttributeName(value); return *this;}


    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupingAttributeNames() const{ return m_groupingAttributeNames; }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline bool GroupingAttributeNamesHasBeenSet() const { return m_groupingAttributeNamesHasBeenSet; }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline void SetGroupingAttributeNames(const Aws::Vector<Aws::String>& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames = value; }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline void SetGroupingAttributeNames(Aws::Vector<Aws::String>&& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames = std::move(value); }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline TimeSeriesConfig& WithGroupingAttributeNames(const Aws::Vector<Aws::String>& value) { SetGroupingAttributeNames(value); return *this;}

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline TimeSeriesConfig& WithGroupingAttributeNames(Aws::Vector<Aws::String>&& value) { SetGroupingAttributeNames(std::move(value)); return *this;}

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline TimeSeriesConfig& AddGroupingAttributeNames(const Aws::String& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames.push_back(value); return *this; }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline TimeSeriesConfig& AddGroupingAttributeNames(Aws::String&& value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A set of columns names that can be grouped with the item identifier column to
     * create a composite key for which a target value is predicted.</p>
     */
    inline TimeSeriesConfig& AddGroupingAttributeNames(const char* value) { m_groupingAttributeNamesHasBeenSet = true; m_groupingAttributeNames.push_back(value); return *this; }

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
