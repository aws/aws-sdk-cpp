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


    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p> The parent Availability Zone for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p> The parent Availability Zone ID for the network site. </p>
     */
    inline NetworkSite& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


    /**
     * <p>The creation time of the network site.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The creation time of the network site.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The creation time of the network site.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The creation time of the network site.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The creation time of the network site.</p>
     */
    inline NetworkSite& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The creation time of the network site.</p>
     */
    inline NetworkSite& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The current plan of the network site.</p>
     */
    inline const SitePlan& GetCurrentPlan() const{ return m_currentPlan; }

    /**
     * <p>The current plan of the network site.</p>
     */
    inline bool CurrentPlanHasBeenSet() const { return m_currentPlanHasBeenSet; }

    /**
     * <p>The current plan of the network site.</p>
     */
    inline void SetCurrentPlan(const SitePlan& value) { m_currentPlanHasBeenSet = true; m_currentPlan = value; }

    /**
     * <p>The current plan of the network site.</p>
     */
    inline void SetCurrentPlan(SitePlan&& value) { m_currentPlanHasBeenSet = true; m_currentPlan = std::move(value); }

    /**
     * <p>The current plan of the network site.</p>
     */
    inline NetworkSite& WithCurrentPlan(const SitePlan& value) { SetCurrentPlan(value); return *this;}

    /**
     * <p>The current plan of the network site.</p>
     */
    inline NetworkSite& WithCurrentPlan(SitePlan&& value) { SetCurrentPlan(std::move(value)); return *this;}


    /**
     * <p>The description of the network site.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network site.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the network site.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the network site.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the network site.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the network site.</p>
     */
    inline NetworkSite& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network site.</p>
     */
    inline NetworkSite& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the network site.</p>
     */
    inline NetworkSite& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline NetworkSite& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline NetworkSite& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network to which the network site
     * belongs.</p>
     */
    inline NetworkSite& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


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
    inline NetworkSite& WithNetworkSiteArn(const Aws::String& value) { SetNetworkSiteArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline NetworkSite& WithNetworkSiteArn(Aws::String&& value) { SetNetworkSiteArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline NetworkSite& WithNetworkSiteArn(const char* value) { SetNetworkSiteArn(value); return *this;}


    /**
     * <p>The name of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteName() const{ return m_networkSiteName; }

    /**
     * <p>The name of the network site.</p>
     */
    inline bool NetworkSiteNameHasBeenSet() const { return m_networkSiteNameHasBeenSet; }

    /**
     * <p>The name of the network site.</p>
     */
    inline void SetNetworkSiteName(const Aws::String& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = value; }

    /**
     * <p>The name of the network site.</p>
     */
    inline void SetNetworkSiteName(Aws::String&& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = std::move(value); }

    /**
     * <p>The name of the network site.</p>
     */
    inline void SetNetworkSiteName(const char* value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName.assign(value); }

    /**
     * <p>The name of the network site.</p>
     */
    inline NetworkSite& WithNetworkSiteName(const Aws::String& value) { SetNetworkSiteName(value); return *this;}

    /**
     * <p>The name of the network site.</p>
     */
    inline NetworkSite& WithNetworkSiteName(Aws::String&& value) { SetNetworkSiteName(std::move(value)); return *this;}

    /**
     * <p>The name of the network site.</p>
     */
    inline NetworkSite& WithNetworkSiteName(const char* value) { SetNetworkSiteName(value); return *this;}


    /**
     * <p>The pending plan of the network site.</p>
     */
    inline const SitePlan& GetPendingPlan() const{ return m_pendingPlan; }

    /**
     * <p>The pending plan of the network site.</p>
     */
    inline bool PendingPlanHasBeenSet() const { return m_pendingPlanHasBeenSet; }

    /**
     * <p>The pending plan of the network site.</p>
     */
    inline void SetPendingPlan(const SitePlan& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = value; }

    /**
     * <p>The pending plan of the network site.</p>
     */
    inline void SetPendingPlan(SitePlan&& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = std::move(value); }

    /**
     * <p>The pending plan of the network site.</p>
     */
    inline NetworkSite& WithPendingPlan(const SitePlan& value) { SetPendingPlan(value); return *this;}

    /**
     * <p>The pending plan of the network site.</p>
     */
    inline NetworkSite& WithPendingPlan(SitePlan&& value) { SetPendingPlan(std::move(value)); return *this;}


    /**
     * <p>The status of the network site.</p>
     */
    inline const NetworkSiteStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the network site.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the network site.</p>
     */
    inline void SetStatus(const NetworkSiteStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the network site.</p>
     */
    inline void SetStatus(NetworkSiteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the network site.</p>
     */
    inline NetworkSite& WithStatus(const NetworkSiteStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the network site.</p>
     */
    inline NetworkSite& WithStatus(NetworkSiteStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The status reason of the network site.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>The status reason of the network site.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>The status reason of the network site.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>The status reason of the network site.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>The status reason of the network site.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>The status reason of the network site.</p>
     */
    inline NetworkSite& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>The status reason of the network site.</p>
     */
    inline NetworkSite& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>The status reason of the network site.</p>
     */
    inline NetworkSite& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

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
