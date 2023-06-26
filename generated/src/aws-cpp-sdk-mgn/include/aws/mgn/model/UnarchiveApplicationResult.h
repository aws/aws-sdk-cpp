﻿/**
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
  class UnarchiveApplicationResult
  {
  public:
    AWS_MGN_API UnarchiveApplicationResult();
    AWS_MGN_API UnarchiveApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API UnarchiveApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Application aggregated status.</p>
     */
    inline const ApplicationAggregatedStatus& GetApplicationAggregatedStatus() const{ return m_applicationAggregatedStatus; }

    /**
     * <p>Application aggregated status.</p>
     */
    inline void SetApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { m_applicationAggregatedStatus = value; }

    /**
     * <p>Application aggregated status.</p>
     */
    inline void SetApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { m_applicationAggregatedStatus = std::move(value); }

    /**
     * <p>Application aggregated status.</p>
     */
    inline UnarchiveApplicationResult& WithApplicationAggregatedStatus(const ApplicationAggregatedStatus& value) { SetApplicationAggregatedStatus(value); return *this;}

    /**
     * <p>Application aggregated status.</p>
     */
    inline UnarchiveApplicationResult& WithApplicationAggregatedStatus(ApplicationAggregatedStatus&& value) { SetApplicationAggregatedStatus(std::move(value)); return *this;}


    /**
     * <p>Application ID.</p>
     */
    inline const Aws::String& GetApplicationID() const{ return m_applicationID; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const Aws::String& value) { m_applicationID = value; }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(Aws::String&& value) { m_applicationID = std::move(value); }

    /**
     * <p>Application ID.</p>
     */
    inline void SetApplicationID(const char* value) { m_applicationID.assign(value); }

    /**
     * <p>Application ID.</p>
     */
    inline UnarchiveApplicationResult& WithApplicationID(const Aws::String& value) { SetApplicationID(value); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline UnarchiveApplicationResult& WithApplicationID(Aws::String&& value) { SetApplicationID(std::move(value)); return *this;}

    /**
     * <p>Application ID.</p>
     */
    inline UnarchiveApplicationResult& WithApplicationID(const char* value) { SetApplicationID(value); return *this;}


    /**
     * <p>Application ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Application ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Application ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Application ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Application ARN.</p>
     */
    inline UnarchiveApplicationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Application ARN.</p>
     */
    inline UnarchiveApplicationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Application ARN.</p>
     */
    inline UnarchiveApplicationResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Application creation dateTime.</p>
     */
    inline const Aws::String& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>Application creation dateTime.</p>
     */
    inline void SetCreationDateTime(const Aws::String& value) { m_creationDateTime = value; }

    /**
     * <p>Application creation dateTime.</p>
     */
    inline void SetCreationDateTime(Aws::String&& value) { m_creationDateTime = std::move(value); }

    /**
     * <p>Application creation dateTime.</p>
     */
    inline void SetCreationDateTime(const char* value) { m_creationDateTime.assign(value); }

    /**
     * <p>Application creation dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithCreationDateTime(const Aws::String& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>Application creation dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithCreationDateTime(Aws::String&& value) { SetCreationDateTime(std::move(value)); return *this;}

    /**
     * <p>Application creation dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithCreationDateTime(const char* value) { SetCreationDateTime(value); return *this;}


    /**
     * <p>Application description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Application description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Application description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>Application description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Application description.</p>
     */
    inline UnarchiveApplicationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Application description.</p>
     */
    inline UnarchiveApplicationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Application description.</p>
     */
    inline UnarchiveApplicationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Application archival status.</p>
     */
    inline bool GetIsArchived() const{ return m_isArchived; }

    /**
     * <p>Application archival status.</p>
     */
    inline void SetIsArchived(bool value) { m_isArchived = value; }

    /**
     * <p>Application archival status.</p>
     */
    inline UnarchiveApplicationResult& WithIsArchived(bool value) { SetIsArchived(value); return *this;}


    /**
     * <p>Application last modified dateTime.</p>
     */
    inline const Aws::String& GetLastModifiedDateTime() const{ return m_lastModifiedDateTime; }

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(const Aws::String& value) { m_lastModifiedDateTime = value; }

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(Aws::String&& value) { m_lastModifiedDateTime = std::move(value); }

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline void SetLastModifiedDateTime(const char* value) { m_lastModifiedDateTime.assign(value); }

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithLastModifiedDateTime(const Aws::String& value) { SetLastModifiedDateTime(value); return *this;}

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithLastModifiedDateTime(Aws::String&& value) { SetLastModifiedDateTime(std::move(value)); return *this;}

    /**
     * <p>Application last modified dateTime.</p>
     */
    inline UnarchiveApplicationResult& WithLastModifiedDateTime(const char* value) { SetLastModifiedDateTime(value); return *this;}


    /**
     * <p>Application name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Application name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Application name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Application name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Application name.</p>
     */
    inline UnarchiveApplicationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Application name.</p>
     */
    inline UnarchiveApplicationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Application name.</p>
     */
    inline UnarchiveApplicationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Application tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Application tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Application tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application tags.</p>
     */
    inline UnarchiveApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Application wave ID.</p>
     */
    inline const Aws::String& GetWaveID() const{ return m_waveID; }

    /**
     * <p>Application wave ID.</p>
     */
    inline void SetWaveID(const Aws::String& value) { m_waveID = value; }

    /**
     * <p>Application wave ID.</p>
     */
    inline void SetWaveID(Aws::String&& value) { m_waveID = std::move(value); }

    /**
     * <p>Application wave ID.</p>
     */
    inline void SetWaveID(const char* value) { m_waveID.assign(value); }

    /**
     * <p>Application wave ID.</p>
     */
    inline UnarchiveApplicationResult& WithWaveID(const Aws::String& value) { SetWaveID(value); return *this;}

    /**
     * <p>Application wave ID.</p>
     */
    inline UnarchiveApplicationResult& WithWaveID(Aws::String&& value) { SetWaveID(std::move(value)); return *this;}

    /**
     * <p>Application wave ID.</p>
     */
    inline UnarchiveApplicationResult& WithWaveID(const char* value) { SetWaveID(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UnarchiveApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UnarchiveApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UnarchiveApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
