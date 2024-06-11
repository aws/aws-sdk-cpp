/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/ApplicationAggregatedStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace mgn
{
namespace Model
{
  class ArchiveApplicationResult
  {
  public:
    AWS_MGN_API ArchiveApplicationResult();
    AWS_MGN_API ArchiveApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ArchiveApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Application aggregated status.</p>
     */
    inline const ApplicationAggregatedStatus& GetApplicationAggregatedStatus() const{ return m_applicationAggregatedStatus; }
    inline void SetApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { m_applicationAggregatedStatus = value; }
    inline void SetApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { m_applicationAggregatedStatus = std::move(value); }
    inline ArchiveApplicationResult& WithApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { SetApplicationAggregatedStatus(value); return *this;}
    inline ArchiveApplicationResult& WithApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { SetApplicationAggregatedStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }
    inline void SetApplicationID(const Aws::String& value) { m_applicationID = value; }
    inline void SetApplicationID(Aws::String&& value) { m_applicationID = std::move(value); }
    inline void SetApplicationID(const char* value) { m_applicationID.assign(value); }
    inline ArchiveApplicationResult& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}
    inline ArchiveApplicationResult& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline ArchiveApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ArchiveApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTime = std::move(value); }
    inline void SetCreationDateTime(const char* value) { m_creationDateTime.assign(value); }
    inline ArchiveApplicationResult& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}
    inline ArchiveApplicationResult& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline ArchiveApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ArchiveApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }
    inline void SetIsArchived(bool value) { m_isArchived = value; }
    inline ArchiveApplicationResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }
    inline void SetLastModifiedDateTime(const Aws::String& value) { m_lastModifiedDateTime = value; }
    inline void SetLastModifiedDateTime(Aws::String&& value) { m_lastModifiedDateTime = std::move(value); }
    inline void SetLastModifiedDateTime(const char* value) { m_lastModifiedDateTime.assign(value); }
    inline ArchiveApplicationResult& WithLastModifiedDateTime(const Aws::String& value) { SetLastModifiedDateTime(value); return *this;}
    inline ArchiveApplicationResult& WithLastModifiedDateTime(Aws::String&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithLastModifiedDateTime(const char* value) { SetLastModifiedDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline ArchiveApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ArchiveApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline ArchiveApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline ArchiveApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline ArchiveApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline ArchiveApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ArchiveApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ArchiveApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline ArchiveApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline ArchiveApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline ArchiveApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Application wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }
    inline void SetWaveID(const Aws::String& value) { m_waveID = value; }
    inline void SetWaveID(Aws::String&& value) { m_waveID = std::move(value); }
    inline void SetWaveID(const char* value) { m_waveID.assign(value); }
    inline ArchiveApplicationResult& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}
    inline ArchiveApplicationResult& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithWaveID(const char* value) { SetWaveID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ArchiveApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ArchiveApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ArchiveApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ApplicationAggregatedStatus m_applicationAggregatedStatus;

    Aws::String m_applicationID;

    Aws::String m_arn;

    Aws::String m_creationDateTime;

    Aws::String m_description;

    bool m_isArchived;

    Aws::String m_lastModifiedDateTime;

    Aws::String m_name;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_waveID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
