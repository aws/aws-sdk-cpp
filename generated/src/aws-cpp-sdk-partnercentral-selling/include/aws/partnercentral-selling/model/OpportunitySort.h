/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/OpportunitySortName.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
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
   * <p>Object that configures response sorting.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunitySort">AWS
   * API Reference</a></p>
   */
  class OpportunitySort
  {
  public:
    AWS_PARTNERCENTRALSELLING_API OpportunitySort();
    AWS_PARTNERCENTRALSELLING_API OpportunitySort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunitySort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Field name to sort by.</p>
     */
    inline const OpportunitySortName& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const OpportunitySortName& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(OpportunitySortName&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline OpportunitySort& WithSortBy(const OpportunitySortName& value) { SetSortBy(value); return *this;}
    inline OpportunitySort& WithSortBy(OpportunitySortName&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sort order.</p> <p>Default: <code>Descending</code> </p>
     */
    inline const SortOrder& GetSortOrder() const{ return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(const SortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline void SetSortOrder(SortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }
    inline OpportunitySort& WithSortOrder(const SortOrder& value) { SetSortOrder(value); return *this;}
    inline OpportunitySort& WithSortOrder(SortOrder&& value) { SetSortOrder(std::move(value)); return *this;}
    ///@}
  private:

    OpportunitySortName m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
