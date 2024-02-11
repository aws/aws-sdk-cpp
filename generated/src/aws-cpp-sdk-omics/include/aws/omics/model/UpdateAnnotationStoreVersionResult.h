/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class UpdateAnnotationStoreVersionResult
  {
  public:
    AWS_OMICS_API UpdateAnnotationStoreVersionResult();
    AWS_OMICS_API UpdateAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API UpdateAnnotationStoreVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The annotation store ID. </p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }

    /**
     * <p> The annotation store ID. </p>
     */
    inline void SetStoreId(const Aws::String& value) { m_storeId = value; }

    /**
     * <p> The annotation store ID. </p>
     */
    inline void SetStoreId(Aws::String&& value) { m_storeId = std::move(value); }

    /**
     * <p> The annotation store ID. </p>
     */
    inline void SetStoreId(const char* value) { m_storeId.assign(value); }

    /**
     * <p> The annotation store ID. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}

    /**
     * <p> The annotation store ID. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}

    /**
     * <p> The annotation store ID. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithStoreId(const char* value) { SetStoreId(value); return *this;}


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
    inline UpdateAnnotationStoreVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The annotation store version ID. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The annotation store version ID. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithId(const char* value) { SetId(value); return *this;}


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
    inline UpdateAnnotationStoreVersionResult& WithStatus(const VersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithStatus(VersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The name of an annotation store. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The name of an annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}

    /**
     * <p> The name of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}


    /**
     * <p> The description of an annotation store version. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> The description of an annotation store version. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateAnnotationStoreVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time stamp for when an annotation store version was created. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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
    inline UpdateAnnotationStoreVersionResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The time stamp for when an annotation store version was updated. </p>
     */
    inline UpdateAnnotationStoreVersionResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAnnotationStoreVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAnnotationStoreVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAnnotationStoreVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_storeId;

    Aws::String m_id;

    VersionStatus m_status;

    Aws::String m_name;

    Aws::String m_versionName;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
