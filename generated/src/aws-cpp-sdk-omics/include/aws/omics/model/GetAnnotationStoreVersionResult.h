/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/VersionOptions.h>
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
  class GetAnnotationStoreVersionResult
  {
  public:
    AWS_OMICS_API GetAnnotationStoreVersionResult();
    AWS_OMICS_API GetAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetAnnotationStoreVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline void SetStoreId(const Aws::String& value) { m_storeId = value; }

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline void SetStoreId(Aws::String&& value) { m_storeId = std::move(value); }

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline void SetStoreId(const char* value) { m_storeId.assign(value); }

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}

    /**
     * <p> The store ID for annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStoreId(const char* value) { SetStoreId(value); return *this;}


    /**
     * <p> The annotation store version ID. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The annotation store version ID. </p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The annotation store version ID. </p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The annotation store version ID. </p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The annotation store version ID. </p>
     */
    inline GetAnnotationStoreVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The annotation store version ID. </p>
     */
    inline GetAnnotationStoreVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The annotation store version ID. </p>
     */
    inline GetAnnotationStoreVersionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const VersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(const VersionStatus& value) { m_status = value; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatus(VersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStatus(const VersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStatus(VersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline const Aws::String& GetVersionArn() const{ return m_versionArn; }

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline void SetVersionArn(const Aws::String& value) { m_versionArn = value; }

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline void SetVersionArn(Aws::String&& value) { m_versionArn = std::move(value); }

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline void SetVersionArn(const char* value) { m_versionArn.assign(value); }

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionArn(const Aws::String& value) { SetVersionArn(value); return *this;}

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionArn(Aws::String&& value) { SetVersionArn(std::move(value)); return *this;}

    /**
     * <p> The Arn for the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionArn(const char* value) { SetVersionArn(value); return *this;}


    /**
     * <p> The name of the annotation store. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the annotation store. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of the annotation store. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of the annotation store. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the annotation store. </p>
     */
    inline GetAnnotationStoreVersionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p> The name given to an annotation store version to distinguish it from others.
     * </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p> The description for an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description for an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline GetAnnotationStoreVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline GetAnnotationStoreVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline GetAnnotationStoreVersionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline GetAnnotationStoreVersionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> Any tags associated with an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p> The options for an annotation store version. </p>
     */
    inline const VersionOptions& GetVersionOptions() const{ return m_versionOptions; }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline void SetVersionOptions(const VersionOptions& value) { m_versionOptions = value; }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline void SetVersionOptions(VersionOptions&& value) { m_versionOptions = std::move(value); }

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionOptions(const VersionOptions& value) { SetVersionOptions(value); return *this;}

    /**
     * <p> The options for an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionOptions(VersionOptions&& value) { SetVersionOptions(std::move(value)); return *this;}


    /**
     * <p> The status of an annotation store version. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline GetAnnotationStoreVersionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p> The size of the annotation store version in Bytes. </p>
     */
    inline long long GetVersionSizeBytes() const{ return m_versionSizeBytes; }

    /**
     * <p> The size of the annotation store version in Bytes. </p>
     */
    inline void SetVersionSizeBytes(long long value) { m_versionSizeBytes = value; }

    /**
     * <p> The size of the annotation store version in Bytes. </p>
     */
    inline GetAnnotationStoreVersionResult& WithVersionSizeBytes(long long value) { SetVersionSizeBytes(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAnnotationStoreVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAnnotationStoreVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAnnotationStoreVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storeId;

    Aws::String m_id;

    VersionStatus m_status;

    Aws::String m_versionArn;

    Aws::String m_name;

    Aws::String m_versionName;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::Map<Aws::String, Aws::String> m_tags;

    VersionOptions m_versionOptions;

    Aws::String m_statusMessage;

    long long m_versionSizeBytes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
