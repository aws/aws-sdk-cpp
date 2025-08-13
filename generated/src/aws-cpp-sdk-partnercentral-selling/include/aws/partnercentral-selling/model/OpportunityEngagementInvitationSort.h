/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/SortOrder.h>
#include <aws/partnercentral-selling/model/OpportunityEngagementInvitationSortName.h>
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
   * <p>Defines sorting options for retrieving Engagement Invitations. Sorting can be
   * done based on various criteria like the invitation date or status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/OpportunityEngagementInvitationSort">AWS
   * API Reference</a></p>
   */
  class OpportunityEngagementInvitationSort
  {
  public:
    AWS_PARTNERCENTRALSELLING_API OpportunityEngagementInvitationSort() = default;
    AWS_PARTNERCENTRALSELLING_API OpportunityEngagementInvitationSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API OpportunityEngagementInvitationSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines the order in which the Engagement Invitations are sorted. The values
     * can be <code>ASC</code> (ascending) or <code>DESC</code> (descending).</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline OpportunityEngagementInvitationSort& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the field by which the Engagement Invitations are sorted. Common
     * values include <code>InvitationDate</code> and <code>Status</code>.</p>
     */
    inline OpportunityEngagementInvitationSortName GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(OpportunityEngagementInvitationSortName value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline OpportunityEngagementInvitationSort& WithSortBy(OpportunityEngagementInvitationSortName value) { SetSortBy(value); return *this;}
    ///@}
  private:

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    OpportunityEngagementInvitationSortName m_sortBy{OpportunityEngagementInvitationSortName::NOT_SET};
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
