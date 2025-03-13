/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/SitePlan.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class UpdateNetworkSitePlanRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API UpdateNetworkSitePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkSitePlan"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateNetworkSitePlanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const { return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    template<typename NetworkSiteArnT = Aws::String>
    void SetNetworkSiteArn(NetworkSiteArnT&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::forward<NetworkSiteArnT>(value); }
    template<typename NetworkSiteArnT = Aws::String>
    UpdateNetworkSitePlanRequest& WithNetworkSiteArn(NetworkSiteArnT&& value) { SetNetworkSiteArn(std::forward<NetworkSiteArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending plan.</p>
     */
    inline const SitePlan& GetPendingPlan() const { return m_pendingPlan; }
    inline bool PendingPlanHasBeenSet() const { return m_pendingPlanHasBeenSet; }
    template<typename PendingPlanT = SitePlan>
    void SetPendingPlan(PendingPlanT&& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = std::forward<PendingPlanT>(value); }
    template<typename PendingPlanT = SitePlan>
    UpdateNetworkSitePlanRequest& WithPendingPlan(PendingPlanT&& value) { SetPendingPlan(std::forward<PendingPlanT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    SitePlan m_pendingPlan;
    bool m_pendingPlanHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
