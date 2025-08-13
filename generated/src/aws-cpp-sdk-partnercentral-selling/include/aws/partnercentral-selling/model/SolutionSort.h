/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
#include <aws/partnercentral-selling/model/SolutionSortName.h>
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
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>Configures the solutions' response sorting that enables partners to order
   * solutions based on specified attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/SolutionSort">AWS
   * API Reference</a></p>
   */
  class SolutionSort
  {
  public:
    AWS_PARTNERCENTRALSELLING_API SolutionSort() = default;
    AWS_PARTNERCENTRALSELLING_API SolutionSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API SolutionSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the sorting order, either <code>Ascending</code> or
     * <code>Descending</code>. The default is <code>Descending</code>.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline SolutionSort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the attribute to sort by, such as <code>Name</code>,
     * <code>CreatedDate</code>, or <code>Status</code>.</p>
     */
    inline SolutionSortName GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SolutionSortName value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline SolutionSort& WithSortBy(SolutionSortName value) { SetSortBy(value); return *this;}
    ///@}
  private:

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    SolutionSortName m_sortBy{SolutionSortName::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
