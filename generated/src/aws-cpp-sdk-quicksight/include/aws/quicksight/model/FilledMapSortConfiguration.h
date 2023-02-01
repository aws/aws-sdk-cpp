/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FieldSortOptions.h>
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
   * <p>The sort configuration of a <code>FilledMapVisual</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilledMapSortConfiguration">AWS
   * API Reference</a></p>
   */
  class FilledMapSortConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FilledMapSortConfiguration();
    AWS_QUICKSIGHT_API FilledMapSortConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilledMapSortConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline const Aws::Vector<FieldSortOptions>& GetCategorySort() const{ return m_categorySort; }

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline bool CategorySortHasBeenSet() const { return m_categorySortHasBeenSet; }

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline void SetCategorySort(const Aws::Vector<FieldSortOptions>& value) { m_categorySortHasBeenSet = true; m_categorySort = value; }

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline void SetCategorySort(Aws::Vector<FieldSortOptions>&& value) { m_categorySortHasBeenSet = true; m_categorySort = std::move(value); }

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline FilledMapSortConfiguration& WithCategorySort(const Aws::Vector<FieldSortOptions>& value) { SetCategorySort(value); return *this;}

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline FilledMapSortConfiguration& WithCategorySort(Aws::Vector<FieldSortOptions>&& value) { SetCategorySort(std::move(value)); return *this;}

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline FilledMapSortConfiguration& AddCategorySort(const FieldSortOptions& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(value); return *this; }

    /**
     * <p>The sort configuration of the location fields.</p>
     */
    inline FilledMapSortConfiguration& AddCategorySort(FieldSortOptions&& value) { m_categorySortHasBeenSet = true; m_categorySort.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FieldSortOptions> m_categorySort;
    bool m_categorySortHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
