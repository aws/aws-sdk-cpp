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
   * <p>The response object returned after creating a harvest job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CreateHarvestJobResponse">AWS
   * API Reference</a></p>
   */
  class CreateHarvestJobResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateHarvestJobResult();
    AWS_MEDIAPACKAGEV2_API CreateHarvestJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API CreateHarvestJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the channel group containing the channel from which content is
     * being harvested.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }
    inline CreateHarvestJobResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline CreateHarvestJobResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the channel from which content is being harvested.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline CreateHarvestJobResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline CreateHarvestJobResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the origin endpoint from which content is being harvested.</p>
     */
    inline const Aws::String& GetOriginEndpointName() const{ return m_originEndpointName; }
    inline void SetOriginEndpointName(const Aws::String& value) { m_originEndpointName = value; }
    inline void SetOriginEndpointName(Aws::String&& value) { m_originEndpointName = std::move(value); }
    inline void SetOriginEndpointName(const char* value) { m_originEndpointName.assign(value); }
    inline CreateHarvestJobResult& WithOriginEndpointName(const Aws::String& value) { SetOriginEndpointName(value); return *this;}
    inline CreateHarvestJobResult& WithOriginEndpointName(Aws::String&& value) { SetOriginEndpointName(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithOriginEndpointName(const char* value) { SetOriginEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 destination where the harvested content will be placed.</p>
     */
    inline const Destination& GetDestination() const{ return m_destination; }
    inline void SetDestination(const Destination& value) { m_destination = value; }
    inline void SetDestination(Destination&& value) { m_destination = std::move(value); }
    inline CreateHarvestJobResult& WithDestination(const Destination& value) { SetDestination(value); return *this;}
    inline CreateHarvestJobResult& WithDestination(Destination&& value) { SetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the created harvest job.</p>
     */
    inline const Aws::String& GetHarvestJobName() const{ return m_harvestJobName; }
    inline void SetHarvestJobName(const Aws::String& value) { m_harvestJobName = value; }
    inline void SetHarvestJobName(Aws::String&& value) { m_harvestJobName = std::move(value); }
    inline void SetHarvestJobName(const char* value) { m_harvestJobName.assign(value); }
    inline CreateHarvestJobResult& WithHarvestJobName(const Aws::String& value) { SetHarvestJobName(value); return *this;}
    inline CreateHarvestJobResult& WithHarvestJobName(Aws::String&& value) { SetHarvestJobName(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithHarvestJobName(const char* value) { SetHarvestJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of manifests that will be harvested.</p>
     */
    inline const HarvestedManifests& GetHarvestedManifests() const{ return m_harvestedManifests; }
    inline void SetHarvestedManifests(const HarvestedManifests& value) { m_harvestedManifests = value; }
    inline void SetHarvestedManifests(HarvestedManifests&& value) { m_harvestedManifests = std::move(value); }
    inline CreateHarvestJobResult& WithHarvestedManifests(const HarvestedManifests& value) { SetHarvestedManifests(value); return *this;}
    inline CreateHarvestJobResult& WithHarvestedManifests(HarvestedManifests&& value) { SetHarvestedManifests(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the harvest job, if provided.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateHarvestJobResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateHarvestJobResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for when the harvest job will run, including start and end
     * times.</p>
     */
    inline const HarvesterScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline void SetScheduleConfiguration(const HarvesterScheduleConfiguration& value) { m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(HarvesterScheduleConfiguration&& value) { m_scheduleConfiguration = std::move(value); }
    inline CreateHarvestJobResult& WithScheduleConfiguration(const HarvesterScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline CreateHarvestJobResult& WithScheduleConfiguration(HarvesterScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created harvest job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateHarvestJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateHarvestJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the harvest job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline CreateHarvestJobResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline CreateHarvestJobResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the harvest job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline CreateHarvestJobResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline CreateHarvestJobResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the harvest job (e.g., CREATED, IN_PROGRESS, ABORTED,
     * COMPLETED, FAILED).</p>
     */
    inline const HarvestJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const HarvestJobStatus& value) { m_status = value; }
    inline void SetStatus(HarvestJobStatus&& value) { m_status = std::move(value); }
    inline CreateHarvestJobResult& WithStatus(const HarvestJobStatus& value) { SetStatus(value); return *this;}
    inline CreateHarvestJobResult& WithStatus(HarvestJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message if the harvest job creation failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessage.assign(value); }
    inline CreateHarvestJobResult& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline CreateHarvestJobResult& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the harvest job. Used for concurrency control.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline CreateHarvestJobResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline CreateHarvestJobResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of tags associated with the harvest job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateHarvestJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateHarvestJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateHarvestJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateHarvestJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateHarvestJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateHarvestJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateHarvestJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateHarvestJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateHarvestJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHarvestJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHarvestJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHarvestJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_channelGroupName;

    Aws::String m_channelName;

    Aws::String m_originEndpointName;

    Destination m_destination;

    Aws::String m_harvestJobName;

    HarvestedManifests m_harvestedManifests;

    Aws::String m_description;

    HarvesterScheduleConfiguration m_scheduleConfiguration;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    HarvestJobStatus m_status;

    Aws::String m_errorMessage;

    Aws::String m_eTag;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
