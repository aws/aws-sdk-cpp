/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/model/SortOrder.h>
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
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   * <p>An object that contains two attributes, <code>SortBy</code> and
   * <code>SortOrder</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/Sort">AWS
   * API Reference</a></p>
   */
  class Sort
  {
  public:
    AWS_MARKETPLACECATALOG_API Sort() = default;
    AWS_MARKETPLACECATALOG_API Sort(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Sort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For <code>ListEntities</code>, supported attributes include
     * <code>LastModifiedDate</code> (default) and <code>EntityId</code>. In addition
     * to <code>LastModifiedDate</code> and <code>EntityId</code>, each
     * <code>EntityType</code> might support additional fields.</p> <p>For
     * <code>ListChangeSets</code>, supported attributes include <code>StartTime</code>
     * and <code>EndTime</code>.</p>
     */
    inline const Aws::String& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::String>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::String>
    Sort& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting order. Can be <code>ASCENDING</code> or <code>DESCENDING</code>.
     * The default value is <code>DESCENDING</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline Sort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
