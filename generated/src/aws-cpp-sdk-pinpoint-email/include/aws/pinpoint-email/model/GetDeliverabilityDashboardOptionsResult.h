/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-email/model/DeliverabilityDashboardAccountStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-email/model/DomainDeliverabilityTrackingOption.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointEmail
{
namespace Model
{
  /**
   * <p>An object that shows the status of the Deliverability dashboard for your
   * Amazon Pinpoint account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/GetDeliverabilityDashboardOptionsResponse">AWS
   * API Reference</a></p>
   */
  class GetDeliverabilityDashboardOptionsResult
  {
  public:
    AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsResult() = default;
    AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTEMAIL_API GetDeliverabilityDashboardOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether the Deliverability dashboard is enabled for your Amazon
     * Pinpoint account. If this value is <code>true</code>, the dashboard is
     * enabled.</p>
     */
    inline bool GetDashboardEnabled() const { return m_dashboardEnabled; }
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabledHasBeenSet = true; m_dashboardEnabled = value; }
    inline GetDeliverabilityDashboardOptionsResult& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date, in Unix time format, when your current subscription to the
     * Deliverability dashboard is scheduled to expire, if your subscription is
     * scheduled to expire at the end of the current calendar month. This value is null
     * if you have an active subscription that isn’t due to expire at the end of the
     * month.</p>
     */
    inline const Aws::Utils::DateTime& GetSubscriptionExpiryDate() const { return m_subscriptionExpiryDate; }
    template<typename SubscriptionExpiryDateT = Aws::Utils::DateTime>
    void SetSubscriptionExpiryDate(SubscriptionExpiryDateT&& value) { m_subscriptionExpiryDateHasBeenSet = true; m_subscriptionExpiryDate = std::forward<SubscriptionExpiryDateT>(value); }
    template<typename SubscriptionExpiryDateT = Aws::Utils::DateTime>
    GetDeliverabilityDashboardOptionsResult& WithSubscriptionExpiryDate(SubscriptionExpiryDateT&& value) { SetSubscriptionExpiryDate(std::forward<SubscriptionExpiryDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of your Deliverability dashboard subscription. If this
     * value is <code>PENDING_EXPIRATION</code>, your subscription is scheduled to
     * expire at the end of the current calendar month.</p>
     */
    inline DeliverabilityDashboardAccountStatus GetAccountStatus() const { return m_accountStatus; }
    inline void SetAccountStatus(DeliverabilityDashboardAccountStatus value) { m_accountStatusHasBeenSet = true; m_accountStatus = value; }
    inline GetDeliverabilityDashboardOptionsResult& WithAccountStatus(DeliverabilityDashboardAccountStatus value) { SetAccountStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that isn’t
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetActiveSubscribedDomains() const { return m_activeSubscribedDomains; }
    template<typename ActiveSubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    void SetActiveSubscribedDomains(ActiveSubscribedDomainsT&& value) { m_activeSubscribedDomainsHasBeenSet = true; m_activeSubscribedDomains = std::forward<ActiveSubscribedDomainsT>(value); }
    template<typename ActiveSubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    GetDeliverabilityDashboardOptionsResult& WithActiveSubscribedDomains(ActiveSubscribedDomainsT&& value) { SetActiveSubscribedDomains(std::forward<ActiveSubscribedDomainsT>(value)); return *this;}
    template<typename ActiveSubscribedDomainsT = DomainDeliverabilityTrackingOption>
    GetDeliverabilityDashboardOptionsResult& AddActiveSubscribedDomains(ActiveSubscribedDomainsT&& value) { m_activeSubscribedDomainsHasBeenSet = true; m_activeSubscribedDomains.emplace_back(std::forward<ActiveSubscribedDomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and currently has an active Deliverability dashboard subscription that's
     * scheduled to expire at the end of the current calendar month.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetPendingExpirationSubscribedDomains() const { return m_pendingExpirationSubscribedDomains; }
    template<typename PendingExpirationSubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    void SetPendingExpirationSubscribedDomains(PendingExpirationSubscribedDomainsT&& value) { m_pendingExpirationSubscribedDomainsHasBeenSet = true; m_pendingExpirationSubscribedDomains = std::forward<PendingExpirationSubscribedDomainsT>(value); }
    template<typename PendingExpirationSubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    GetDeliverabilityDashboardOptionsResult& WithPendingExpirationSubscribedDomains(PendingExpirationSubscribedDomainsT&& value) { SetPendingExpirationSubscribedDomains(std::forward<PendingExpirationSubscribedDomainsT>(value)); return *this;}
    template<typename PendingExpirationSubscribedDomainsT = DomainDeliverabilityTrackingOption>
    GetDeliverabilityDashboardOptionsResult& AddPendingExpirationSubscribedDomains(PendingExpirationSubscribedDomainsT&& value) { m_pendingExpirationSubscribedDomainsHasBeenSet = true; m_pendingExpirationSubscribedDomains.emplace_back(std::forward<PendingExpirationSubscribedDomainsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDeliverabilityDashboardOptionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_dashboardEnabled{false};
    bool m_dashboardEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_subscriptionExpiryDate{};
    bool m_subscriptionExpiryDateHasBeenSet = false;

    DeliverabilityDashboardAccountStatus m_accountStatus{DeliverabilityDashboardAccountStatus::NOT_SET};
    bool m_accountStatusHasBeenSet = false;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_activeSubscribedDomains;
    bool m_activeSubscribedDomainsHasBeenSet = false;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_pendingExpirationSubscribedDomains;
    bool m_pendingExpirationSubscribedDomainsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
