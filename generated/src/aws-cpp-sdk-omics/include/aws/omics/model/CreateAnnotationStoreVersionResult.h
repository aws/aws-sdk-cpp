/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionOptions.h>
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
  class CreateAnnotationStoreVersionResult
  {
  public:
    AWS_OMICS_API CreateAnnotationStoreVersionResult();
    AWS_OMICS_API CreateAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateAnnotationStoreVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A generated ID for the annotation store </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateAnnotationStoreVersionResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateAnnotationStoreVersionResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline void SetVersionName(const Aws::String& value) { m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionName.assign(value); }
    inline CreateAnnotationStoreVersionResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline CreateAnnotationStoreVersionResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the annotation store from which new versions are being created.
     * </p>
     */
    inline const Aws::String& GetStoreId() const{ return m_storeId; }
    inline void SetStoreId(const Aws::String& value) { m_storeId = value; }
    inline void SetStoreId(Aws::String&& value) { m_storeId = std::move(value); }
    inline void SetStoreId(const char* value) { m_storeId.assign(value); }
    inline CreateAnnotationStoreVersionResult& WithStoreId(const Aws::String& value) { SetStoreId(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithStoreId(Aws::String&& value) { SetStoreId(std::move(value)); return *this;}
    inline CreateAnnotationStoreVersionResult& WithStoreId(const char* value) { SetStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for an annotation store version. </p>
     */
    inline const VersionOptions& GetVersionOptions() const{ return m_versionOptions; }
    inline void SetVersionOptions(const VersionOptions& value) { m_versionOptions = value; }
    inline void SetVersionOptions(VersionOptions&& value) { m_versionOptions = std::move(value); }
    inline CreateAnnotationStoreVersionResult& WithVersionOptions(const VersionOptions& value) { SetVersionOptions(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithVersionOptions(VersionOptions&& value) { SetVersionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateAnnotationStoreVersionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAnnotationStoreVersionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a annotation store version. </p>
     */
    inline const VersionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const VersionStatus& value) { m_status = value; }
    inline void SetStatus(VersionStatus&& value) { m_status = std::move(value); }
    inline CreateAnnotationStoreVersionResult& WithStatus(const VersionStatus& value) { SetStatus(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithStatus(VersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for the creation of an annotation store version. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateAnnotationStoreVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAnnotationStoreVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAnnotationStoreVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAnnotationStoreVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_versionName;

    Aws::String m_storeId;

    VersionOptions m_versionOptions;

    Aws::String m_name;

    VersionStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
