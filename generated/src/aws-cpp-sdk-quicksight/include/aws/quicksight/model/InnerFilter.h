/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CategoryInnerFilter.h>
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
   * <p>The <code>InnerFilter</code> defines the subset of data to be used with the
   * <code>NestedFilter</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/InnerFilter">AWS
   * API Reference</a></p>
   */
  class InnerFilter
  {
  public:
    AWS_QUICKSIGHT_API InnerFilter() = default;
    AWS_QUICKSIGHT_API InnerFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API InnerFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>CategoryInnerFilter</code> filters text values for the
     * <code>NestedFilter</code>.</p>
     */
    inline const CategoryInnerFilter& GetCategoryInnerFilter() const { return m_categoryInnerFilter; }
    inline bool CategoryInnerFilterHasBeenSet() const { return m_categoryInnerFilterHasBeenSet; }
    template<typename CategoryInnerFilterT = CategoryInnerFilter>
    void SetCategoryInnerFilter(CategoryInnerFilterT&& value) { m_categoryInnerFilterHasBeenSet = true; m_categoryInnerFilter = std::forward<CategoryInnerFilterT>(value); }
    template<typename CategoryInnerFilterT = CategoryInnerFilter>
    InnerFilter& WithCategoryInnerFilter(CategoryInnerFilterT&& value) { SetCategoryInnerFilter(std::forward<CategoryInnerFilterT>(value)); return *this;}
    ///@}
  private:

    CategoryInnerFilter m_categoryInnerFilter;
    bool m_categoryInnerFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
