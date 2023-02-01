/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceImportJobStatus.h>
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
  class StartReferenceImportJobResult
  {
  public:
    AWS_OMICS_API StartReferenceImportJobResult();
    AWS_OMICS_API StartReferenceImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API StartReferenceImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline StartReferenceImportJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline StartReferenceImportJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline StartReferenceImportJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline StartReferenceImportJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline StartReferenceImportJobResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The job's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreId = value; }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreId = std::move(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreId.assign(value); }

    /**
     * <p>The job's reference store ID.</p>
     */
    inline StartReferenceImportJobResult& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline StartReferenceImportJobResult& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The job's reference store ID.</p>
     */
    inline StartReferenceImportJobResult& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}


    /**
     * <p>The job's service role ARN.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The job's service role ARN.</p>
     */
    inline StartReferenceImportJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline StartReferenceImportJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The job's service role ARN.</p>
     */
    inline StartReferenceImportJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const ReferenceImportJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const ReferenceImportJobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(ReferenceImportJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline StartReferenceImportJobResult& WithStatus(const ReferenceImportJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline StartReferenceImportJobResult& WithStatus(ReferenceImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_id;

    Aws::String m_referenceStoreId;

    Aws::String m_roleArn;

    ReferenceImportJobStatus m_status;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
