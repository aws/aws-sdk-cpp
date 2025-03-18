/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/DomainDeliverabilityTrackingOption.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Enable or disable the Deliverability dashboard. When you enable the
   * Deliverability dashboard, you gain access to reputation, deliverability, and
   * other metrics for the domains that you use to send email using Amazon SES API
   * v2. You also gain the ability to perform predictive inbox placement tests.</p>
   * <p>When you use the Deliverability dashboard, you pay a monthly subscription
   * charge, in addition to any other fees that you accrue by using Amazon SES and
   * other Amazon Web Services services. For more information about the features and
   * cost of a Deliverability dashboard subscription, see <a
   * href="http://aws.amazon.com/pinpoint/pricing/">Amazon Pinpoint
   * Pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutDeliverabilityDashboardOptionRequest">AWS
   * API Reference</a></p>
   */
  class PutDeliverabilityDashboardOptionRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API PutDeliverabilityDashboardOptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDeliverabilityDashboardOption"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies whether to enable the Deliverability dashboard. To enable the
     * dashboard, set this value to <code>true</code>.</p>
     */
    inline bool GetDashboardEnabled() const { return m_dashboardEnabled; }
    inline bool DashboardEnabledHasBeenSet() const { return m_dashboardEnabledHasBeenSet; }
    inline void SetDashboardEnabled(bool value) { m_dashboardEnabledHasBeenSet = true; m_dashboardEnabled = value; }
    inline PutDeliverabilityDashboardOptionRequest& WithDashboardEnabled(bool value) { SetDashboardEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, one for each verified domain that you use to send email
     * and enabled the Deliverability dashboard for.</p>
     */
    inline const Aws::Vector<DomainDeliverabilityTrackingOption>& GetSubscribedDomains() const { return m_subscribedDomains; }
    inline bool SubscribedDomainsHasBeenSet() const { return m_subscribedDomainsHasBeenSet; }
    template<typename SubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    void SetSubscribedDomains(SubscribedDomainsT&& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains = std::forward<SubscribedDomainsT>(value); }
    template<typename SubscribedDomainsT = Aws::Vector<DomainDeliverabilityTrackingOption>>
    PutDeliverabilityDashboardOptionRequest& WithSubscribedDomains(SubscribedDomainsT&& value) { SetSubscribedDomains(std::forward<SubscribedDomainsT>(value)); return *this;}
    template<typename SubscribedDomainsT = DomainDeliverabilityTrackingOption>
    PutDeliverabilityDashboardOptionRequest& AddSubscribedDomains(SubscribedDomainsT&& value) { m_subscribedDomainsHasBeenSet = true; m_subscribedDomains.emplace_back(std::forward<SubscribedDomainsT>(value)); return *this; }
    ///@}
  private:

    bool m_dashboardEnabled{false};
    bool m_dashboardEnabledHasBeenSet = false;

    Aws::Vector<DomainDeliverabilityTrackingOption> m_subscribedDomains;
    bool m_subscribedDomainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
