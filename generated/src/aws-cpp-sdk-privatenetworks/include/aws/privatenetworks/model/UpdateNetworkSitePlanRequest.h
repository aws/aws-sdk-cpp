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
    AWS_PRIVATENETWORKS_API UpdateNetworkSitePlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkSitePlan"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}


    /**
     * <p>The pending plan.</p>
     */
    inline const SitePlan& GetPendingPlan() const{ return m_pendingPlan; }

    /**
     * <p>The pending plan.</p>
     */
    inline bool PendingPlanHasBeenSet() const { return m_pendingPlanHasBeenSet; }

    /**
     * <p>The pending plan.</p>
     */
    inline void SetPendingPlan(const SitePlan& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = value; }

    /**
     * <p>The pending plan.</p>
     */
    inline void SetPendingPlan(SitePlan&& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = std::move(value); }

    /**
     * <p>The pending plan.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithPendingPlan(const SitePlan& value) { SetPendingPlan(value); return *this;}

    /**
     * <p>The pending plan.</p>
     */
    inline UpdateNetworkSitePlanRequest& WithPendingPlan(SitePlan&& value) { SetPendingPlan(std::move(value)); return *this;}

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
