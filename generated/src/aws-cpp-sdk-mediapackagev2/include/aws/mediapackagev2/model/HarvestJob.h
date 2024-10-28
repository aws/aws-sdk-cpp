/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/model/Destination.h>
#include <aws/mediapackagev2/model/HarvestedManifests.h>
#include <aws/mediapackagev2/model/HarvesterScheduleConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mediapackagev2/model/HarvestJobStatus.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Represents a harvest job resource in MediaPackage v2, which is used to export
   * content from an origin endpoint to an S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/HarvestJob">AWS
   * API Reference</a></p>
   */
  class HarvestJob
  {
  public:
    AWS_MEDIAPACKAGEV2_API HarvestJob();
    AWS_MEDIAPACKAGEV2_API HarvestJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API HarvestJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the channel group containing the channel associated with this
     * harvest job.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline bool ChannelGroupNameHasBeenSet() const { return m_channelGroupNameHasBeenSet; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName.assign(value); }
    inline HarvestJob& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline HarvestJob& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline HarvestJob& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel associated with this harvest job.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }
    inline HarvestJob& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline HarvestJob& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline HarvestJob& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint associated with this harvest job.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline bool OriginEndpointNameHasBeenSet() const { return m_originEndpointNameHasBeenSet; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName.assign(value); }
    inline HarvestJob& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline HarvestJob& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline HarvestJob& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 destination where the harvested content will be placed.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Destination& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline HarvestJob& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline HarvestJob& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the harvest job.</p>
     */
    inline const Aws::String& GetHarvestJobName() const{ return m_harvestJobName; }
    inline bool HarvestJobNameHasBeenSet() const { return m_harvestJobNameHasBeenSet; }
    inline void SetHarvestJobName(const Aws::String& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = value; }
    inline void SetHarvestJobName(Aws::String&& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = std::move(value); }
    inline void SetHarvestJobName(const char* value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName.assign(value); }
    inline HarvestJob& WithHarvestJobName(const Aws::String& value) { SetHarvestJobName(value); return *this;}
    inline HarvestJob& WithHarvestJobName(Aws::String&& value) { SetHarvestJobName(std::move(value)); return *this;}
    inline HarvestJob& WithHarvestJobName(const char* value) { SetHarvestJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of manifests that are being or have been harvested.</p>
     */
    inline const HarvestedManifests& GetHarvestedManifests() const{ return m_harvestedManifests; }
    inline bool HarvestedManifestsHasBeenSet() const { return m_harvestedManifestsHasBeenSet; }
    inline void SetHarvestedManifests(const HarvestedManifests& value) { m_harvestedManifestsHasBeenSet = true; m_harvestedManifests = value; }
    inline void SetHarvestedManifests(HarvestedManifests&& value) { m_harvestedManifestsHasBeenSet = true; m_harvestedManifests = std::move(value); }
    inline HarvestJob& WithHarvestedManifests(const HarvestedManifests& value) { SetHarvestedManifests(value); return *this;}
    inline HarvestJob& WithHarvestedManifests(HarvestedManifests&& value) { SetHarvestedManifests(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the harvest job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline HarvestJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline HarvestJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline HarvestJob& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for when the harvest job is scheduled to run.</p>
     */
    inline const HarvesterScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const HarvesterScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(HarvesterScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline HarvestJob& WithScheduleConfiguration(const HarvesterScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline HarvestJob& WithScheduleConfiguration(HarvesterScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the harvest job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline HarvestJob& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline HarvestJob& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline HarvestJob& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the harvest job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline HarvestJob& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline HarvestJob& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the harvest job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline HarvestJob& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline HarvestJob& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the harvest job (e.g., QUEUED, IN_PROGRESS, CANCELLED,
     * COMPLETED, FAILED).</p>
     */
    inline const HarvestJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const HarvestJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(HarvestJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline HarvestJob& WithStatus(const HarvestJobStatus& value) { SetStatus(value); return *this;}
    inline HarvestJob& WithStatus(HarvestJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the harvest job encountered any issues.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline HarvestJob& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline HarvestJob& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline HarvestJob& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the harvest job. Used for concurrency control.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline HarvestJob& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline HarvestJob& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline HarvestJob& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;
    bool m_channelGroupNameHasBeenSet = false;

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet = false;

    Aws::String m_originEndpointName;
    bool m_originEndpointNameHasBeenSet = false;

    Destination m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_harvestJobName;
    bool m_harvestJobNameHasBeenSet = false;

    HarvestedManifests m_harvestedManifests;
    bool m_harvestedManifestsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    HarvesterScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    HarvestJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
