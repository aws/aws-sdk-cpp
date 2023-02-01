/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SortDirection.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/DataPathValue.h>
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
   * <p>Allows data paths to be sorted by a specific data value.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataPathSort">AWS
   * API Reference</a></p>
   */
  class DataPathSort
  {
  public:
    AWS_QUICKSIGHT_API DataPathSort();
    AWS_QUICKSIGHT_API DataPathSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataPathSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines the sort direction.</p>
     */
    inline const SortDirection& GetDirection() const{ return m_direction; }

    /**
     * <p>Determines the sort direction.</p>
     */
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }

    /**
     * <p>Determines the sort direction.</p>
     */
    inline void SetDirection(const SortDirection& value) { m_directionHasBeenSet = true; m_direction = value; }

    /**
     * <p>Determines the sort direction.</p>
     */
    inline void SetDirection(SortDirection&& value) { m_directionHasBeenSet = true; m_direction = std::move(value); }

    /**
     * <p>Determines the sort direction.</p>
     */
    inline DataPathSort& WithDirection(const SortDirection& value) { SetDirection(value); return *this;}

    /**
     * <p>Determines the sort direction.</p>
     */
    inline DataPathSort& WithDirection(SortDirection&& value) { SetDirection(std::move(value)); return *this;}


    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline const Aws::Vector<DataPathValue>& GetSortPaths() const{ return m_sortPaths; }

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline bool SortPathsHasBeenSet() const { return m_sortPathsHasBeenSet; }

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline void SetSortPaths(const Aws::Vector<DataPathValue>& value) { m_sortPathsHasBeenSet = true; m_sortPaths = value; }

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline void SetSortPaths(Aws::Vector<DataPathValue>&& value) { m_sortPathsHasBeenSet = true; m_sortPaths = std::move(value); }

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline DataPathSort& WithSortPaths(const Aws::Vector<DataPathValue>& value) { SetSortPaths(value); return *this;}

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline DataPathSort& WithSortPaths(Aws::Vector<DataPathValue>&& value) { SetSortPaths(std::move(value)); return *this;}

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline DataPathSort& AddSortPaths(const DataPathValue& value) { m_sortPathsHasBeenSet = true; m_sortPaths.push_back(value); return *this; }

    /**
     * <p>The list of data paths that need to be sorted.</p>
     */
    inline DataPathSort& AddSortPaths(DataPathValue&& value) { m_sortPathsHasBeenSet = true; m_sortPaths.push_back(std::move(value)); return *this; }

  private:

    SortDirection m_direction;
    bool m_directionHasBeenSet = false;

    Aws::Vector<DataPathValue> m_sortPaths;
    bool m_sortPathsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
