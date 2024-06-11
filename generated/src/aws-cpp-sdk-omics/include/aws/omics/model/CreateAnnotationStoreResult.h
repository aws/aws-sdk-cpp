/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceItem.h>
#include <aws/omics/model/StoreFormat.h>
#include <aws/omics/model/StoreOptions.h>
#include <aws/omics/model/StoreStatus.h>
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
  class CreateAnnotationStoreResult
  {
  public:
    AWS_OMICS_API CreateAnnotationStoreResult();
    AWS_OMICS_API CreateAnnotationStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateAnnotationStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The store's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateAnnotationStoreResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateAnnotationStoreResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateAnnotationStoreResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's genome reference. Required for all stores except TSV format with
     * generic annotations.</p>
     */
    inline const ReferenceItem& GetReference() const{ return m_reference; }
    inline void SetReference(const ReferenceItem& value) { m_reference = value; }
    inline void SetReference(ReferenceItem&& value) { m_reference = std::move(value); }
    inline CreateAnnotationStoreResult& WithReference(const ReferenceItem& value) { SetReference(value); return *this;}
    inline CreateAnnotationStoreResult& WithReference(ReferenceItem&& value) { SetReference(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The annotation file format of the store.</p>
     */
    inline const StoreFormat& GetStoreFormat() const{ return m_storeFormat; }
    inline void SetStoreFormat(const StoreFormat& value) { m_storeFormat = value; }
    inline void SetStoreFormat(StoreFormat&& value) { m_storeFormat = std::move(value); }
    inline CreateAnnotationStoreResult& WithStoreFormat(const StoreFormat& value) { SetStoreFormat(value); return *this;}
    inline CreateAnnotationStoreResult& WithStoreFormat(StoreFormat&& value) { SetStoreFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's file parsing options.</p>
     */
    inline const StoreOptions& GetStoreOptions() const{ return m_storeOptions; }
    inline void SetStoreOptions(const StoreOptions& value) { m_storeOptions = value; }
    inline void SetStoreOptions(StoreOptions&& value) { m_storeOptions = std::move(value); }
    inline CreateAnnotationStoreResult& WithStoreOptions(const StoreOptions& value) { SetStoreOptions(value); return *this;}
    inline CreateAnnotationStoreResult& WithStoreOptions(StoreOptions&& value) { SetStoreOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's status.</p>
     */
    inline const StoreStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StoreStatus& value) { m_status = value; }
    inline void SetStatus(StoreStatus&& value) { m_status = std::move(value); }
    inline CreateAnnotationStoreResult& WithStatus(const StoreStatus& value) { SetStatus(value); return *this;}
    inline CreateAnnotationStoreResult& WithStatus(StoreStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The store's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateAnnotationStoreResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAnnotationStoreResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAnnotationStoreResult& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateAnnotationStoreResult& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline CreateAnnotationStoreResult& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline CreateAnnotationStoreResult& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the store was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline CreateAnnotationStoreResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline CreateAnnotationStoreResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAnnotationStoreResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAnnotationStoreResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAnnotationStoreResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    ReferenceItem m_reference;

    StoreFormat m_storeFormat;

    StoreOptions m_storeOptions;

    StoreStatus m_status;

    Aws::String m_name;

    Aws::String m_versionName;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
