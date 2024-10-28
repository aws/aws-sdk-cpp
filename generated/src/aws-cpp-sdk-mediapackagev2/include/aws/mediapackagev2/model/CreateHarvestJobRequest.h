/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/Mediapackagev2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/HarvestedManifests.h>
#include <aws/mediapackagev2/model/HarvesterScheduleConfiguration.h>
#include <aws/mediapackagev2/model/Destination.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The request object for creating a new harvest job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateHarvestJobRequest">AWS
   * API Reference</a></p>
   */
  class CreateHarvestJobRequest : public Mediapackagev2Request
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateHarvestJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHarvestJob"; }

    AWS_MEDIAPACKAGEV2_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the channel group containing the channel from which to harvest
     * content.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }
    inline CreateHarvestJobRequest& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline CreateHarvestJobRequest& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel from which to harvest content.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline CreateHarvestJobRequest& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline CreateHarvestJobRequest& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint from which to harvest content.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }
    inline CreateHarvestJobRequest& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline CreateHarvestJobRequest& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description for the harvest job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateHarvestJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateHarvestJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of manifests to be harvested.</p>
     */
    inline const HarvestedManifests& GetHarvestedManifests() const{ return m_harvestedManifests; }
    inline bool HarvestedManifestsHasBeenSet() const { return m_harvestedManifestsHasBeenSet; }
    inline void SetHarvestedManifests(const HarvestedManifests& value) { m_harvestedManifestsHasBeenSet = true; m_harvestedManifests = value; }
    inline void SetHarvestedManifests(HarvestedManifests&& value) { m_harvestedManifestsHasBeenSet = true; m_harvestedManifests = std::move(value); }
    inline CreateHarvestJobRequest& WithHarvestedManifests(const HarvestedManifests& value) { SetHarvestedManifests(value); return *this;}
    inline CreateHarvestJobRequest& WithHarvestedManifests(HarvestedManifests&& value) { SetHarvestedManifests(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for when the harvest job should run, including start and
     * end times.</p>
     */
    inline const HarvesterScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const HarvesterScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(HarvesterScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline CreateHarvestJobRequest& WithScheduleConfiguration(const HarvesterScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline CreateHarvestJobRequest& WithScheduleConfiguration(HarvesterScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 destination where the harvested content will be placed.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline CreateHarvestJobRequest& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline CreateHarvestJobRequest& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateHarvestJobRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateHarvestJobRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the harvest job. This name must be unique within the channel.</p>
     */
    inline const Aws::String& GetHarvestJobName() const{ return m_harvestJobName; }
    inline bool HarvestJobNameHasBeenSet() const { return m_harvestJobNameHasBeenSet; }
    inline void SetHarvestJobName(const Aws::String& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = value; }
    inline void SetHarvestJobName(Aws::String&& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = std::move(value); }
    inline void SetHarvestJobName(const char* value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName.assign(value); }
    inline CreateHarvestJobRequest& WithHarvestJobName(const Aws::String& value) { SetHarvestJobName(value); return *this;}
    inline CreateHarvestJobRequest& WithHarvestJobName(Aws::String&& value) { SetHarvestJobName(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& WithHarvestJobName(const char* value) { SetHarvestJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags associated with the harvest job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateHarvestJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateHarvestJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateHarvestJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateHarvestJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateHarvestJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateHarvestJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateHarvestJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateHarvestJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateHarvestJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HarvestedManifests m_harvestedManifests;
    bool m_harvestedManifestsHasBeenSet = false;

    HarvesterScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_harvestJobName;
    bool m_harvestJobNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
