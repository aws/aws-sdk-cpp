/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/InboxPlacementTrackingOption.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about the Deliverability dashboard
   * subscription for a verified domain that you use to send email and currently has
   * an active Deliverability dashboard subscription. If a Deliverability dashboard
   * subscription is active for a domain, you gain access to reputation, inbox
   * placement, and other metrics for the domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DomainDeliverabilityTrackingOption">AWS
   * API Reference</a></p>
   */
  class DomainDeliverabilityTrackingOption
  {
  public:
    AWS_SESV2_API DomainDeliverabilityTrackingOption() = default;
    AWS_SESV2_API DomainDeliverabilityTrackingOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DomainDeliverabilityTrackingOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A verified domain that’s associated with your Amazon Web Services account and
     * currently has an active Deliverability dashboard subscription.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DomainDeliverabilityTrackingOption& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when you enabled the Deliverability dashboard for the domain.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionStartDate() const { return m_subscriptionStartDate; }
    inline bool SubscriptionStartDateHasBeenSet() const { return m_subscriptionStartDateHasBeenSet; }
    template<typename SubscriptionStartDateT = Aws::Utils::DateTime>
    void SetSubscriptionStartDate(SubscriptionStartDateT&& value) { m_subscriptionStartDateHasBeenSet = true; m_subscriptionStartDate = std::forward<SubscriptionStartDateT>(value); }
    template<typename SubscriptionStartDateT = Aws::Utils::DateTime>
    DomainDeliverabilityTrackingOption& WithSubscriptionStartDate(SubscriptionStartDateT&& value) { SetSubscriptionStartDate(std::forward<SubscriptionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the inbox placement data settings
     * for the domain.</p>
     */
    inline const InboxPlacementTrackingOption& GetInboxPlacementTrackingOption() const { return m_inboxPlacementTrackingOption; }
    inline bool InboxPlacementTrackingOptionHasBeenSet() const { return m_inboxPlacementTrackingOptionHasBeenSet; }
    template<typename InboxPlacementTrackingOptionT = InboxPlacementTrackingOption>
    void SetInboxPlacementTrackingOption(InboxPlacementTrackingOptionT&& value) { m_inboxPlacementTrackingOptionHasBeenSet = true; m_inboxPlacementTrackingOption = std::forward<InboxPlacementTrackingOptionT>(value); }
    template<typename InboxPlacementTrackingOptionT = InboxPlacementTrackingOption>
    DomainDeliverabilityTrackingOption& WithInboxPlacementTrackingOption(InboxPlacementTrackingOptionT&& value) { SetInboxPlacementTrackingOption(std::forward<InboxPlacementTrackingOptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::Utils::DateTime m_subscriptionStartDate{};
    bool m_subscriptionStartDateHasBeenSet = false;

    InboxPlacementTrackingOption m_inboxPlacementTrackingOption;
    bool m_inboxPlacementTrackingOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
