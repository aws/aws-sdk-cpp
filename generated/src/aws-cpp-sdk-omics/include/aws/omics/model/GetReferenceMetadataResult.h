/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ReferenceFiles.h>
#include <aws/omics/model/ReferenceCreationType.h>
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
  class GetReferenceMetadataResult
  {
  public:
    AWS_OMICS_API GetReferenceMetadataResult();
    AWS_OMICS_API GetReferenceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReferenceMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetReferenceMetadataResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReferenceMetadataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetReferenceMetadataResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetReferenceMetadataResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreId = value; }
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreId = std::move(value); }
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreId.assign(value); }
    inline GetReferenceMetadataResult& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}
    inline GetReferenceMetadataResult& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline const Aws::String& GetMd5() const{ return m_md5; }
    inline void SetMd5(const Aws::String& value) { m_md5 = value; }
    inline void SetMd5(Aws::String&& value) { m_md5 = std::move(value); }
    inline void SetMd5(const char* value) { m_md5.assign(value); }
    inline GetReferenceMetadataResult& WithMd5(const Aws::String& value) { SetMd5(value); return *this;}
    inline GetReferenceMetadataResult& WithMd5(Aws::String&& value) { SetMd5(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithMd5(const char* value) { SetMd5(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's status.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const ReferenceStatus& value) { m_status = value; }
    inline void SetStatus(ReferenceStatus&& value) { m_status = std::move(value); }
    inline GetReferenceMetadataResult& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}
    inline GetReferenceMetadataResult& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetReferenceMetadataResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetReferenceMetadataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetReferenceMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetReferenceMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the reference was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetReferenceMetadataResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetReferenceMetadataResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the reference was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }
    inline GetReferenceMetadataResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}
    inline GetReferenceMetadataResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's files.</p>
     */
    inline const ReferenceFiles& GetFiles() const{ return m_files; }
    inline void SetFiles(const ReferenceFiles& value) { m_files = value; }
    inline void SetFiles(ReferenceFiles&& value) { m_files = std::move(value); }
    inline GetReferenceMetadataResult& WithFiles(const ReferenceFiles& value) { SetFiles(value); return *this;}
    inline GetReferenceMetadataResult& WithFiles(ReferenceFiles&& value) { SetFiles(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's creation type.</p>
     */
    inline const ReferenceCreationType& GetCreationType() const{ return m_creationType; }
    inline void SetCreationType(const ReferenceCreationType& value) { m_creationType = value; }
    inline void SetCreationType(ReferenceCreationType&& value) { m_creationType = std::move(value); }
    inline GetReferenceMetadataResult& WithCreationType(const ReferenceCreationType& value) { SetCreationType(value); return *this;}
    inline GetReferenceMetadataResult& WithCreationType(ReferenceCreationType&& value) { SetCreationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's creation job ID.</p>
     */
    inline const Aws::String& GetCreationJobId() const{ return m_creationJobId; }
    inline void SetCreationJobId(const Aws::String& value) { m_creationJobId = value; }
    inline void SetCreationJobId(Aws::String&& value) { m_creationJobId = std::move(value); }
    inline void SetCreationJobId(const char* value) { m_creationJobId.assign(value); }
    inline GetReferenceMetadataResult& WithCreationJobId(const Aws::String& value) { SetCreationJobId(value); return *this;}
    inline GetReferenceMetadataResult& WithCreationJobId(Aws::String&& value) { SetCreationJobId(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithCreationJobId(const char* value) { SetCreationJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetReferenceMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetReferenceMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetReferenceMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_referenceStoreId;

    Aws::String m_md5;

    ReferenceStatus m_status;

    Aws::String m_name;

    Aws::String m_description;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_updateTime;

    ReferenceFiles m_files;

    ReferenceCreationType m_creationType;

    Aws::String m_creationJobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
