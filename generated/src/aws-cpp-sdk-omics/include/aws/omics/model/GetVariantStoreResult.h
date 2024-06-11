/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/omics/model/StoreStatus.h>
#include <aws/omics/model/SseConfig.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{
  class GetVariantStoreResult
  {
  public:
    AWS_OMICS_API GetVariantStoreResult();
    AWS_OMICS_API GetVariantStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetVariantStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetVariantStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetVariantStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's genome reference.</p>
     */
    inline const ReferenceItem& GetReference() const{ return m_reference; }
    inline void SetReference(const ReferenceItem& value) { m_reference = value; }
    inline void SetReference(ReferenceItem&& value) { m_reference = std::move(value); }
    inline GetVariantStoreResult& WithReference(const ReferenceItem& value) { SetReference(value); return *this;}
    inline GetVariantStoreResult& WithReference(ReferenceItem&& value) { SetReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StoreStatus& value) { m_status = value; }
    inline void SetStatus(StoreStatus&& value) { m_status = std::move(value); }
    inline GetVariantStoreResult& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}
    inline GetVariantStoreResult& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's ARN.</p>
     */
    inline const Aws::String& GetStoreArn() const{ return m_storeArn; }
    inline void SetStoreArn(const Aws::String& value) { m_storeArn = value; }
    inline void SetStoreArn(Aws::String&& value) { m_storeArn = std::move(value); }
    inline void SetStoreArn(const char* value) { m_storeArn.assign(value); }
    inline GetVariantStoreResult& WithStoreArn(const Aws::String& value) { SetStoreArn(value); return *this;}
    inline GetVariantStoreResult& WithStoreArn(Aws::String&& value) { SetStoreArn(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithStoreArn(const char* value) { SetStoreArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetVariantStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetVariantStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetVariantStoreResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetVariantStoreResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's server-side encryption (SSE) settings.</p>
     */
    inline const SseConfig& GetSseConfig() const{ return m_sseConfig; }
    inline void SetSseConfig(const SseConfig& value) { m_sseConfig = value; }
    inline void SetSseConfig(SseConfig&& value) { m_sseConfig = std::move(value); }
    inline GetVariantStoreResult& WithSseConfig(const SseConfig& value) { SetSseConfig(value); return *this;}
    inline GetVariantStoreResult& WithSseConfig(SseConfig&& value) { SetSseConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetVariantStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetVariantStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetVariantStoreResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetVariantStoreResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetVariantStoreResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetVariantStoreResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetVariantStoreResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetVariantStoreResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetVariantStoreResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetVariantStoreResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetVariantStoreResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetVariantStoreResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetVariantStoreResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The store's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetVariantStoreResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetVariantStoreResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's size in bytes.</p>
     */
    inline long long GetStoreSizeBytes() const{ return m_storeSizeBytes; }
    inline void SetStoreSizeBytes(long long value) { m_storeSizeBytes = value; }
    inline GetVariantStoreResult& WithStoreSizeBytes(long long value) { SetStoreSizeBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetVariantStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetVariantStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetVariantStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    ReferenceItem m_reference;

    StoreStatus m_status;

    Aws::String m_storeArn;

    Aws::String m_name;

    Aws::String m_description;

    SseConfig m_sseConfig;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_statusMessage;

    long long m_storeSizeBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
