/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackagev2/model/InputType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mediapackagev2/model/InputSwitchConfiguration.h>
#include <aws/mediapackagev2/model/OutputHeaderConfiguration.h>
#include <aws/mediapackagev2/model/IngestEndpoint.h>
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
  class GetChannelResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API GetChannelResult();
    AWS_MEDIAPACKAGEV2_API GetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API GetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetChannelResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }
    inline GetChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}
    inline GetChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}
    inline GetChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }
    inline GetChannelResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}
    inline GetChannelResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}
    inline GetChannelResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetChannelResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetChannelResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }
    inline GetChannelResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline GetChannelResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for your channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetChannelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetChannelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetChannelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<IngestEndpoint>& GetIngestEndpoints() const{ return m_ingestEndpoints; }
    inline void SetIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { m_ingestEndpoints = value; }
    inline void SetIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { m_ingestEndpoints = std::move(value); }
    inline GetChannelResult& WithIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { SetIngestEndpoints(value); return *this;}
    inline GetChannelResult& WithIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { SetIngestEndpoints(std::move(value)); return *this;}
    inline GetChannelResult& AddIngestEndpoints(const IngestEndpoint& value) { m_ingestEndpoints.push_back(value); return *this; }
    inline GetChannelResult& AddIngestEndpoints(IngestEndpoint&& value) { m_ingestEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input type will be an immutable field which will be used to define
     * whether the channel will allow CMAF ingest or HLS ingest. If unprovided, it will
     * default to HLS to preserve current behavior.</p> <p>The allowed values are:</p>
     * <ul> <li> <p> <code>HLS</code> - The HLS streaming specification (which defines
     * M3U8 manifests and TS segments).</p> </li> <li> <p> <code>CMAF</code> - The
     * DASH-IF CMAF Ingest specification (which defines CMAF segments with optional
     * DASH manifests).</p> </li> </ul>
     */
    inline const InputType& GetInputType() const{ return m_inputType; }
    inline void SetInputType(const InputType& value) { m_inputType = value; }
    inline void SetInputType(InputType&& value) { m_inputType = std::move(value); }
    inline GetChannelResult& WithInputType(const InputType& value) { SetInputType(value); return *this;}
    inline GetChannelResult& WithInputType(InputType&& value) { SetInputType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline void SetETag(const Aws::String& value) { m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTag.assign(value); }
    inline GetChannelResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline GetChannelResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline GetChannelResult& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration for input switching based on the media quality confidence
     * score (MQCS) as provided from AWS Elemental MediaLive. This setting is valid
     * only when <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const InputSwitchConfiguration& GetInputSwitchConfiguration() const{ return m_inputSwitchConfiguration; }
    inline void SetInputSwitchConfiguration(const InputSwitchConfiguration& value) { m_inputSwitchConfiguration = value; }
    inline void SetInputSwitchConfiguration(InputSwitchConfiguration&& value) { m_inputSwitchConfiguration = std::move(value); }
    inline GetChannelResult& WithInputSwitchConfiguration(const InputSwitchConfiguration& value) { SetInputSwitchConfiguration(value); return *this;}
    inline GetChannelResult& WithInputSwitchConfiguration(InputSwitchConfiguration&& value) { SetInputSwitchConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for what common media server data (CMSD) headers AWS Elemental
     * MediaPackage includes in responses to the CDN. This setting is valid only when
     * <code>InputType</code> is <code>CMAF</code>.</p>
     */
    inline const OutputHeaderConfiguration& GetOutputHeaderConfiguration() const{ return m_outputHeaderConfiguration; }
    inline void SetOutputHeaderConfiguration(const OutputHeaderConfiguration& value) { m_outputHeaderConfiguration = value; }
    inline void SetOutputHeaderConfiguration(OutputHeaderConfiguration&& value) { m_outputHeaderConfiguration = std::move(value); }
    inline GetChannelResult& WithOutputHeaderConfiguration(const OutputHeaderConfiguration& value) { SetOutputHeaderConfiguration(value); return *this;}
    inline GetChannelResult& WithOutputHeaderConfiguration(OutputHeaderConfiguration&& value) { SetOutputHeaderConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_channelName;

    Aws::String m_channelGroupName;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_description;

    Aws::Vector<IngestEndpoint> m_ingestEndpoints;

    InputType m_inputType;

    Aws::String m_eTag;

    Aws::Map<Aws::String, Aws::String> m_tags;

    InputSwitchConfiguration m_inputSwitchConfiguration;

    OutputHeaderConfiguration m_outputHeaderConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
