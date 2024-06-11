﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
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
namespace MediaPackage
{
namespace Model
{
  class CreateChannelResult
  {
  public:
    AWS_MEDIAPACKAGE_API CreateChannelResult();
    AWS_MEDIAPACKAGE_API CreateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API CreateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateChannelResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateChannelResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateChannelResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the Channel was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }
    inline CreateChannelResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline CreateChannelResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline CreateChannelResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateChannelResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateChannelResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateChannelResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const{ return m_egressAccessLogs; }
    inline void SetEgressAccessLogs(const EgressAccessLogs& value) { m_egressAccessLogs = value; }
    inline void SetEgressAccessLogs(EgressAccessLogs&& value) { m_egressAccessLogs = std::move(value); }
    inline CreateChannelResult& WithEgressAccessLogs(const EgressAccessLogs& value) { SetEgressAccessLogs(value); return *this;}
    inline CreateChannelResult& WithEgressAccessLogs(EgressAccessLogs&& value) { SetEgressAccessLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsIngest& GetHlsIngest() const{ return m_hlsIngest; }
    inline void SetHlsIngest(const HlsIngest& value) { m_hlsIngest = value; }
    inline void SetHlsIngest(HlsIngest&& value) { m_hlsIngest = std::move(value); }
    inline CreateChannelResult& WithHlsIngest(const HlsIngest& value) { SetHlsIngest(value); return *this;}
    inline CreateChannelResult& WithHlsIngest(HlsIngest&& value) { SetHlsIngest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateChannelResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateChannelResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateChannelResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const IngressAccessLogs& GetIngressAccessLogs() const{ return m_ingressAccessLogs; }
    inline void SetIngressAccessLogs(const IngressAccessLogs& value) { m_ingressAccessLogs = value; }
    inline void SetIngressAccessLogs(IngressAccessLogs&& value) { m_ingressAccessLogs = std::move(value); }
    inline CreateChannelResult& WithIngressAccessLogs(const IngressAccessLogs& value) { SetIngressAccessLogs(value); return *this;}
    inline CreateChannelResult& WithIngressAccessLogs(IngressAccessLogs&& value) { SetIngressAccessLogs(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateChannelResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateChannelResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateChannelResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateChannelResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateChannelResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateChannelResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateChannelResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateChannelResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateChannelResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateChannelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateChannelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateChannelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_createdAt;

    Aws::String m_description;

    EgressAccessLogs m_egressAccessLogs;

    HlsIngest m_hlsIngest;

    Aws::String m_id;

    IngressAccessLogs m_ingressAccessLogs;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
