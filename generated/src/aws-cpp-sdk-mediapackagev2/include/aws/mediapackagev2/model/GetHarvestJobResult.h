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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace mediapackagev2
{
namespace Model
{
  /**
   * <p>The response object containing the details of the requested harvest
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/GetHarvestJobResponse">AWS
   * API Reference</a></p>
   */
  class GetHarvestJobResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetHarvestJobResult() = default;
    AWS_MEDIAPACKAGEV2_API GetHarvestJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetHarvestJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the channel group containing the channel associated with the
     * harvest job.</p>
     */
    inline const Aws::String& GetChannelGroupName() const { return m_channelGroupName; }
    template<typename ChannelGroupNameT = Aws::String>
    void SetChannelGroupName(ChannelGroupNameT&& value) { m_channelGroupNameHasBeenSet = true; m_channelGroupName = std::forward<ChannelGroupNameT>(value); }
    template<typename ChannelGroupNameT = Aws::String>
    GetHarvestJobResult& WithChannelGroupName(ChannelGroupNameT&& value) { SetChannelGroupName(std::forward<ChannelGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel associated with the harvest job.</p>
     */
    inline const Aws::String& GetChannelName() const { return m_channelName; }
    template<typename ChannelNameT = Aws::String>
    void SetChannelName(ChannelNameT&& value) { m_channelNameHasBeenSet = true; m_channelName = std::forward<ChannelNameT>(value); }
    template<typename ChannelNameT = Aws::String>
    GetHarvestJobResult& WithChannelName(ChannelNameT&& value) { SetChannelName(std::forward<ChannelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint associated with the harvest job.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const { return m_originEndpointName; }
    template<typename OriginEndpointNameT = Aws::String>
    void SetOriginEndpointName(OriginEndpointNameT&& value) { m_originEndpointNameHasBeenSet = true; m_originEndpointName = std::forward<OriginEndpointNameT>(value); }
    template<typename OriginEndpointNameT = Aws::String>
    GetHarvestJobResult& WithOriginEndpointName(OriginEndpointNameT&& value) { SetOriginEndpointName(std::forward<OriginEndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 destination where the harvested content is being placed.</p>
     */
    inline const Destination& GetDestination() const { return m_destination; }
    template<typename DestinationT = Destination>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Destination>
    GetHarvestJobResult& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the harvest job.</p>
     */
    inline const Aws::String& GetHarvestJobName() const { return m_harvestJobName; }
    template<typename HarvestJobNameT = Aws::String>
    void SetHarvestJobName(HarvestJobNameT&& value) { m_harvestJobNameHasBeenSet = true; m_harvestJobName = std::forward<HarvestJobNameT>(value); }
    template<typename HarvestJobNameT = Aws::String>
    GetHarvestJobResult& WithHarvestJobName(HarvestJobNameT&& value) { SetHarvestJobName(std::forward<HarvestJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of manifests that are being or have been harvested.</p>
     */
    inline const HarvestedManifests& GetHarvestedManifests() const { return m_harvestedManifests; }
    template<typename HarvestedManifestsT = HarvestedManifests>
    void SetHarvestedManifests(HarvestedManifestsT&& value) { m_harvestedManifestsHasBeenSet = true; m_harvestedManifests = std::forward<HarvestedManifestsT>(value); }
    template<typename HarvestedManifestsT = HarvestedManifests>
    GetHarvestJobResult& WithHarvestedManifests(HarvestedManifestsT&& value) { SetHarvestedManifests(std::forward<HarvestedManifestsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the harvest job, if provided.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetHarvestJobResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for when the harvest job is scheduled to run, including
     * start and end times.</p>
     */
    inline const HarvesterScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    template<typename ScheduleConfigurationT = HarvesterScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = HarvesterScheduleConfiguration>
    GetHarvestJobResult& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the harvest job.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetHarvestJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the harvest job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetHarvestJobResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the harvest job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    GetHarvestJobResult& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the harvest job (e.g., QUEUED, IN_PROGRESS, CANCELLED,
     * COMPLETED, FAILED).</p>
     */
    inline HarvestJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(HarvestJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetHarvestJobResult& WithStatus(HarvestJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the harvest job encountered any issues.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    GetHarvestJobResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the harvest job. Used for concurrency control.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetHarvestJobResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags associated with the harvest job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetHarvestJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetHarvestJobResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHarvestJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    HarvestJobStatus m_status{HarvestJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
