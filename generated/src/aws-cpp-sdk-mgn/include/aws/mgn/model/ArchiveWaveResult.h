/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/WaveAggregatedStatus.h>
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
namespace mgn
{
namespace Model
{
  class ArchiveWaveResult
  {
  public:
    AWS_MGN_API ArchiveWaveResult();
    AWS_MGN_API ArchiveWaveResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ArchiveWaveResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Wave ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ArchiveWaveResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ArchiveWaveResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTime.assign(value); }
    inline ArchiveWaveResult& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline ArchiveWaveResult& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline ArchiveWaveResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ArchiveWaveResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline void SetIsArchived(bool value) { m_isArchived = value; }
    inline ArchiveWaveResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }
    inline void SetLastModifiedDateTime(const Aws::String& value) { m_lastModifiedDateTime = value; }
    inline void SetLastModifiedDateTime(Aws::String&& value) { m_lastModifiedDateTime = std::move(value); }
    inline void SetLastModifiedDateTime(const char* value) { m_lastModifiedDateTime.assign(value); }
    inline ArchiveWaveResult& WithLastModifiedDateTime(const Aws::String& value) { SetLastModifiedDateTime(value); return *this;}
    inline ArchiveWaveResult& WithLastModifiedDateTime(Aws::String&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithLastModifiedDateTime(const char* value) { SetLastModifiedDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline ArchiveWaveResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ArchiveWaveResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline ArchiveWaveResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ArchiveWaveResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ArchiveWaveResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline ArchiveWaveResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ArchiveWaveResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ArchiveWaveResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ArchiveWaveResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ArchiveWaveResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ArchiveWaveResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wave aggregated status.</p>
     */
    inline const WaveAggregatedStatus& GetWaveAggregatedStatus() const{ return m_waveAggregatedStatus; }
    inline void SetWaveAggregatedStatus(const WaveAggregatedStatus& value) { m_waveAggregatedStatus = value; }
    inline void SetWaveAggregatedStatus(WaveAggregatedStatus&& value) { m_waveAggregatedStatus = std::move(value); }
    inline ArchiveWaveResult& WithWaveAggregatedStatus(const WaveAggregatedStatus& value) { SetWaveAggregatedStatus(value); return *this;}
    inline ArchiveWaveResult& WithWaveAggregatedStatus(WaveAggregatedStatus&& value) { SetWaveAggregatedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }
    inline void SetWaveID(const Aws::String& value) { m_waveID = value; }
    inline void SetWaveID(Aws::String&& value) { m_waveID = std::move(value); }
    inline void SetWaveID(const char* value) { m_waveID.assign(value); }
    inline ArchiveWaveResult& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}
    inline ArchiveWaveResult& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithWaveID(const char* value) { SetWaveID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ArchiveWaveResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ArchiveWaveResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ArchiveWaveResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_creationDateTime;

    Aws::String m_description;

    bool m_isArchived;

    Aws::String m_lastModifiedDateTime;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    WaveAggregatedStatus m_waveAggregatedStatus;

    Aws::String m_waveID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
