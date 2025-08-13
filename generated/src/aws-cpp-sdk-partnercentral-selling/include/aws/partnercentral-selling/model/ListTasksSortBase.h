/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
#include <aws/partnercentral-selling/model/ListTasksSortName.h>
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
   * <p> Defines the sorting parameters for listing tasks. This structure allows for
   * specifying the field to sort by and the order of sorting. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ListTasksSortBase">AWS
   * API Reference</a></p>
   */
  class ListTasksSortBase
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListTasksSortBase() = default;
    AWS_PARTNERCENTRALSELLING_API ListTasksSortBase(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API ListTasksSortBase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Determines the order in which the sorted results are presented. </p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListTasksSortBase& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the field by which the task list should be sorted. </p>
     */
    inline ListTasksSortName GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(ListTasksSortName value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListTasksSortBase& WithSortBy(ListTasksSortName value) { SetSortBy(value); return *this;}
    ///@}
  private:

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    ListTasksSortName m_sortBy{ListTasksSortName::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
