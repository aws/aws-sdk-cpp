/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateChannelResult
  {
  public:
    AWS_MEDIAPACKAGEV2_API CreateChannelResult();
    AWS_MEDIAPACKAGEV2_API CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEV2_API CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline CreateChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline CreateChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) associated with the resource.</p>
     */
    inline CreateChannelResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelName = value; }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelName = std::move(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline void SetChannelName(const char* value) { m_channelName.assign(value); }

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline CreateChannelResult& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline CreateChannelResult& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel. The name is the primary identifier for
     * the channel, and must be unique for your account in the AWS Region and channel
     * group.</p>
     */
    inline CreateChannelResult& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline const Aws::String& GetChannelGroupName() const{ return m_channelGroupName; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(const Aws::String& value) { m_channelGroupName = value; }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(Aws::String&& value) { m_channelGroupName = std::move(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline void SetChannelGroupName(const char* value) { m_channelGroupName.assign(value); }

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelResult& WithChannelGroupName(const Aws::String& value) { SetChannelGroupName(value); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelResult& WithChannelGroupName(Aws::String&& value) { SetChannelGroupName(std::move(value)); return *this;}

    /**
     * <p>The name that describes the channel group. The name is the primary identifier
     * for the channel group, and must be unique for your account in the AWS
     * Region.</p>
     */
    inline CreateChannelResult& WithChannelGroupName(const char* value) { SetChannelGroupName(value); return *this;}


    /**
     * <p>The date and time the channel was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the channel was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the channel was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the channel was created.</p>
     */
    inline CreateChannelResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the channel was created.</p>
     */
    inline CreateChannelResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAt = value; }

    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAt = std::move(value); }

    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline CreateChannelResult& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The date and time the channel was modified.</p>
     */
    inline CreateChannelResult& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The description for your channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description for your channel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description for your channel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description for your channel.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description for your channel.</p>
     */
    inline CreateChannelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description for your channel.</p>
     */
    inline CreateChannelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description for your channel.</p>
     */
    inline CreateChannelResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<IngestEndpoint>& GetIngestEndpoints() const{ return m_ingestEndpoints; }

    
    inline void SetIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { m_ingestEndpoints = value; }

    
    inline void SetIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { m_ingestEndpoints = std::move(value); }

    
    inline CreateChannelResult& WithIngestEndpoints(const Aws::Vector<IngestEndpoint>& value) { SetIngestEndpoints(value); return *this;}

    
    inline CreateChannelResult& WithIngestEndpoints(Aws::Vector<IngestEndpoint>&& value) { SetIngestEndpoints(std::move(value)); return *this;}

    
    inline CreateChannelResult& AddIngestEndpoints(const IngestEndpoint& value) { m_ingestEndpoints.push_back(value); return *this; }

    
    inline CreateChannelResult& AddIngestEndpoints(IngestEndpoint&& value) { m_ingestEndpoints.push_back(std::move(value)); return *this; }


    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(const Aws::String& value) { m_eTag = value; }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(Aws::String&& value) { m_eTag = std::move(value); }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline void SetETag(const char* value) { m_eTag.assign(value); }

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline CreateChannelResult& WithETag(const Aws::String& value) { SetETag(value); return *this;}

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline CreateChannelResult& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}

    /**
     * <p>The current Entity Tag (ETag) associated with this resource. The entity tag
     * can be used to safely make concurrent updates to the resource.</p>
     */
    inline CreateChannelResult& WithETag(const char* value) { SetETag(value); return *this;}


    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The comma-separated list of tag key:value pairs assigned to the channel.</p>
     */
    inline CreateChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_channelName;

    Aws::String m_channelGroupName;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_modifiedAt;

    Aws::String m_description;

    Aws::Vector<IngestEndpoint> m_ingestEndpoints;

    Aws::String m_eTag;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
