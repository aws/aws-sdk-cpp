/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/privatenetworks/model/SitePlan.h>
#include <aws/privatenetworks/model/NetworkSiteStatus.h>
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
namespace PrivateNetworks
{
namespace Model
{

  /**
   * <p>Information about a network site.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/privatenetworks-2021-12-03/NetworkSite">AWS
   * API Reference</a></p>
   */
  class NetworkSite
  {
  public:
    AWS_PRIVATENETWORKS_API NetworkSite();
    AWS_PRIVATENETWORKS_API NetworkSite(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API NetworkSite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRIVATENETWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline NetworkSite& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline NetworkSite& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline NetworkSite& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }
    inline NetworkSite& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}
    inline NetworkSite& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}
    inline NetworkSite& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the network site.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline NetworkSite& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline NetworkSite& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current plan of the network site.</p>
     */
    inline const SitePlan& GetCurrentPlan() const{ return m_currentPlan; }
    inline bool CurrentPlanHasBeenSet() const { return m_currentPlanHasBeenSet; }
    inline void SetCurrentPlan(const SitePlan& value) { m_currentPlanHasBeenSet = true; m_currentPlan = value; }
    inline void SetCurrentPlan(SitePlan&& value) { m_currentPlanHasBeenSet = true; m_currentPlan = std::move(value); }
    inline NetworkSite& WithCurrentPlan(const SitePlan& value) { SetCurrentPlan(value); return *this;}
    inline NetworkSite& WithCurrentPlan(SitePlan&& value) { SetCurrentPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network site.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline NetworkSite& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline NetworkSite& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline NetworkSite& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }
    inline NetworkSite& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}
    inline NetworkSite& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}
    inline NetworkSite& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const{ return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    inline void SetNetworkSiteArn(const Aws::String& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = value; }
    inline void SetNetworkSiteArn(Aws::String&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::move(value); }
    inline void SetNetworkSiteArn(const char* value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn.assign(value); }
    inline NetworkSite& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}
    inline NetworkSite& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}
    inline NetworkSite& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteName() const{ return m_networkSiteName; }
    inline bool NetworkSiteNameHasBeenSet() const { return m_networkSiteNameHasBeenSet; }
    inline void SetNetworkSiteName(const Aws::String& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = value; }
    inline void SetNetworkSiteName(Aws::String&& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = std::move(value); }
    inline void SetNetworkSiteName(const char* value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName.assign(value); }
    inline NetworkSite& WithNetworkSiteName(const Aws::String& value) { SetNetworkSiteName(value); return *this;}
    inline NetworkSite& WithNetworkSiteName(Aws::String&& value) { SetNetworkSiteName(std::move(value)); return *this;}
    inline NetworkSite& WithNetworkSiteName(const char* value) { SetNetworkSiteName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pending plan of the network site.</p>
     */
    inline const SitePlan& GetPendingPlan() const{ return m_pendingPlan; }
    inline bool PendingPlanHasBeenSet() const { return m_pendingPlanHasBeenSet; }
    inline void SetPendingPlan(const SitePlan& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = value; }
    inline void SetPendingPlan(SitePlan&& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = std::move(value); }
    inline NetworkSite& WithPendingPlan(const SitePlan& value) { SetPendingPlan(value); return *this;}
    inline NetworkSite& WithPendingPlan(SitePlan&& value) { SetPendingPlan(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the network site.</p>
     */
    inline const NetworkSiteStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const NetworkSiteStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(NetworkSiteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline NetworkSite& WithStatus(const NetworkSiteStatus& value) { SetStatus(value); return *this;}
    inline NetworkSite& WithStatus(NetworkSiteStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reason of the network site.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline NetworkSite& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline NetworkSite& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline NetworkSite& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    SitePlan m_currentPlan;
    bool m_currentPlanHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;

    Aws::String m_networkSiteName;
    bool m_networkSiteNameHasBeenSet = false;

    SitePlan m_pendingPlan;
    bool m_pendingPlanHasBeenSet = false;

    NetworkSiteStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
