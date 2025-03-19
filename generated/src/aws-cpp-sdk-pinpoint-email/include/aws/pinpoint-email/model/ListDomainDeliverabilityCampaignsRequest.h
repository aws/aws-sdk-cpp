/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>Retrieve deliverability data for all the campaigns that used a specific
   * domain to send email during a specified time range. This data is available for a
   * domain only if you enabled the Deliverability dashboard
   * (<code>PutDeliverabilityDashboardOption</code> operation) for the
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDomainDeliverabilityCampaignsRequest">AWS
   * API Reference</a></p>
   */
  class ListDomainDeliverabilityCampaignsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API ListDomainDeliverabilityCampaignsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDomainDeliverabilityCampaigns"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;

    AWS_PINPOINTEMAIL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The first day, in Unix time format, that you want to obtain deliverability
     * data for.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    ListDomainDeliverabilityCampaignsRequest& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last day, in Unix time format, that you want to obtain deliverability
     * data for. This value has to be less than or equal to 30 days after the value of
     * the <code>StartDate</code> parameter.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const { return m_endDate; }
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }
    template<typename EndDateT = Aws::Utils::DateTime>
    void SetEndDate(EndDateT&& value) { m_endDateHasBeenSet = true; m_endDate = std::forward<EndDateT>(value); }
    template<typename EndDateT = Aws::Utils::DateTime>
    ListDomainDeliverabilityCampaignsRequest& WithEndDate(EndDateT&& value) { SetEndDate(std::forward<EndDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain to obtain deliverability data for.</p>
     */
    inline const Aws::String& GetSubscribedDomain() const { return m_subscribedDomain; }
    inline bool SubscribedDomainHasBeenSet() const { return m_subscribedDomainHasBeenSet; }
    template<typename SubscribedDomainT = Aws::String>
    void SetSubscribedDomain(SubscribedDomainT&& value) { m_subscribedDomainHasBeenSet = true; m_subscribedDomain = std::forward<SubscribedDomainT>(value); }
    template<typename SubscribedDomainT = Aws::String>
    ListDomainDeliverabilityCampaignsRequest& WithSubscribedDomain(SubscribedDomainT&& value) { SetSubscribedDomain(std::forward<SubscribedDomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that’s returned from a previous call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. This token indicates
     * the position of a campaign in the list of campaigns.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDomainDeliverabilityCampaignsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in response to a single call to the
     * <code>ListDomainDeliverabilityCampaigns</code> operation. If the number of
     * results is larger than the number that you specify in this parameter, the
     * response includes a <code>NextToken</code> element, which you can use to obtain
     * additional results.</p>
     */
    inline int GetPageSize() const { return m_pageSize; }
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }
    inline ListDomainDeliverabilityCampaignsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate{};
    bool m_endDateHasBeenSet = false;

    Aws::String m_subscribedDomain;
    bool m_subscribedDomainHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize{0};
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
