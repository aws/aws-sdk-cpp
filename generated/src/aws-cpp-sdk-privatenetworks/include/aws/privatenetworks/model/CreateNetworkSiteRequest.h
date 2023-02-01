/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/SitePlan.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class CreateNetworkSiteRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API CreateNetworkSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkSite"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone that is the parent of this site. You can't change the
     * Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline const Aws::String& GetAvailabilityZoneId() const{ return m_availabilityZoneId; }

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZoneId(const Aws::String& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = value; }

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZoneId(Aws::String&& value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId = std::move(value); }

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline void SetAvailabilityZoneId(const char* value) { m_availabilityZoneIdHasBeenSet = true; m_availabilityZoneId.assign(value); }

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZoneId(const Aws::String& value) { SetAvailabilityZoneId(value); return *this;}

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZoneId(Aws::String&& value) { SetAvailabilityZoneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Availability Zone that is the parent of this site. You can't
     * change the Availability Zone after you create the site.</p>
     */
    inline CreateNetworkSiteRequest& WithAvailabilityZoneId(const char* value) { SetAvailabilityZoneId(value); return *this;}


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
    inline CreateNetworkSiteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateNetworkSiteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline CreateNetworkSiteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description of the site.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the site.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the site.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the site.</p>
     */
    inline CreateNetworkSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the site.</p>
     */
    inline CreateNetworkSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the site.</p>
     */
    inline CreateNetworkSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const{ return m_networkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(const Aws::String& value) { m_networkArnHasBeenSet = true; m_networkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(Aws::String&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline void SetNetworkArn(const char* value) { m_networkArnHasBeenSet = true; m_networkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkArn(const Aws::String& value) { SetNetworkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkArn(Aws::String&& value) { SetNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkArn(const char* value) { SetNetworkArn(value); return *this;}


    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline const Aws::String& GetNetworkSiteName() const{ return m_networkSiteName; }

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline bool NetworkSiteNameHasBeenSet() const { return m_networkSiteNameHasBeenSet; }

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline void SetNetworkSiteName(const Aws::String& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = value; }

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline void SetNetworkSiteName(Aws::String&& value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName = std::move(value); }

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline void SetNetworkSiteName(const char* value) { m_networkSiteNameHasBeenSet = true; m_networkSiteName.assign(value); }

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkSiteName(const Aws::String& value) { SetNetworkSiteName(value); return *this;}

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkSiteName(Aws::String&& value) { SetNetworkSiteName(std::move(value)); return *this;}

    /**
     * <p>The name of the site. You can't change the name after you create the
     * site.</p>
     */
    inline CreateNetworkSiteRequest& WithNetworkSiteName(const char* value) { SetNetworkSiteName(value); return *this;}


    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline const SitePlan& GetPendingPlan() const{ return m_pendingPlan; }

    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline bool PendingPlanHasBeenSet() const { return m_pendingPlanHasBeenSet; }

    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline void SetPendingPlan(const SitePlan& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = value; }

    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline void SetPendingPlan(SitePlan&& value) { m_pendingPlanHasBeenSet = true; m_pendingPlan = std::move(value); }

    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline CreateNetworkSiteRequest& WithPendingPlan(const SitePlan& value) { SetPendingPlan(value); return *this;}

    /**
     * <p>Information about the pending plan for this site.</p>
     */
    inline CreateNetworkSiteRequest& WithPendingPlan(SitePlan&& value) { SetPendingPlan(std::move(value)); return *this;}


    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The tags to apply to the network site. </p>
     */
    inline CreateNetworkSiteRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_availabilityZoneId;
    bool m_availabilityZoneIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;

    Aws::String m_networkSiteName;
    bool m_networkSiteNameHasBeenSet = false;

    SitePlan m_pendingPlan;
    bool m_pendingPlanHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
