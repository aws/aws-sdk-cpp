/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ReferenceFiles.h>
#include <aws/omics/model/ReferenceStatus.h>
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


    /**
     * <p>The reference's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The reference's ARN.</p>
     */
    inline GetReferenceMetadataResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline GetReferenceMetadataResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The reference's ARN.</p>
     */
    inline GetReferenceMetadataResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the reference was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the reference was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the reference was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the reference was created.</p>
     */
    inline GetReferenceMetadataResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the reference was created.</p>
     */
    inline GetReferenceMetadataResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The reference's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The reference's description.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The reference's description.</p>
     */
    inline GetReferenceMetadataResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The reference's description.</p>
     */
    inline GetReferenceMetadataResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The reference's description.</p>
     */
    inline GetReferenceMetadataResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The reference's files.</p>
     */
    inline const ReferenceFiles& GetFiles() const{ return m_files; }

    /**
     * <p>The reference's files.</p>
     */
    inline void SetFiles(const ReferenceFiles& value) { m_files = value; }

    /**
     * <p>The reference's files.</p>
     */
    inline void SetFiles(ReferenceFiles&& value) { m_files = std::move(value); }

    /**
     * <p>The reference's files.</p>
     */
    inline GetReferenceMetadataResult& WithFiles(const ReferenceFiles& value) { SetFiles(value); return *this;}

    /**
     * <p>The reference's files.</p>
     */
    inline GetReferenceMetadataResult& WithFiles(ReferenceFiles&& value) { SetFiles(std::move(value)); return *this;}


    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The reference's ID.</p>
     */
    inline GetReferenceMetadataResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline const Aws::String& GetMd5() const{ return m_md5; }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(const Aws::String& value) { m_md5 = value; }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(Aws::String&& value) { m_md5 = std::move(value); }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline void SetMd5(const char* value) { m_md5.assign(value); }

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline GetReferenceMetadataResult& WithMd5(const Aws::String& value) { SetMd5(value); return *this;}

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline GetReferenceMetadataResult& WithMd5(Aws::String&& value) { SetMd5(std::move(value)); return *this;}

    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline GetReferenceMetadataResult& WithMd5(const char* value) { SetMd5(value); return *this;}


    /**
     * <p>The reference's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The reference's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The reference's name.</p>
     */
    inline GetReferenceMetadataResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The reference's name.</p>
     */
    inline GetReferenceMetadataResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The reference's name.</p>
     */
    inline GetReferenceMetadataResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The reference's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreId = value; }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreId = std::move(value); }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreId.assign(value); }

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataResult& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataResult& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The reference's reference store ID.</p>
     */
    inline GetReferenceMetadataResult& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}


    /**
     * <p>The reference's status.</p>
     */
    inline const ReferenceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The reference's status.</p>
     */
    inline void SetStatus(const ReferenceStatus& value) { m_status = value; }

    /**
     * <p>The reference's status.</p>
     */
    inline void SetStatus(ReferenceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The reference's status.</p>
     */
    inline GetReferenceMetadataResult& WithStatus(const ReferenceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The reference's status.</p>
     */
    inline GetReferenceMetadataResult& WithStatus(ReferenceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>When the reference was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p>When the reference was updated.</p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTime = value; }

    /**
     * <p>When the reference was updated.</p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTime = std::move(value); }

    /**
     * <p>When the reference was updated.</p>
     */
    inline GetReferenceMetadataResult& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p>When the reference was updated.</p>
     */
    inline GetReferenceMetadataResult& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    ReferenceFiles m_files;

    Aws::String m_id;

    Aws::String m_md5;

    Aws::String m_name;

    Aws::String m_referenceStoreId;

    ReferenceStatus m_status;

    Aws::Utils::DateTime m_updateTime;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
