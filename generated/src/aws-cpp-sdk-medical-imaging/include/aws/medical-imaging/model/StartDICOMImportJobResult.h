/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medical-imaging/model/JobStatus.h>
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
namespace MedicalImaging
{
namespace Model
{
  class StartDICOMImportJobResult
  {
  public:
    AWS_MEDICALIMAGING_API StartDICOMImportJobResult();
    AWS_MEDICALIMAGING_API StartDICOMImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDICALIMAGING_API StartDICOMImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data store identifier.</p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreId = value; }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreId = std::move(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline void SetDatastoreId(const char* value) { m_datastoreId.assign(value); }

    /**
     * <p>The data store identifier.</p>
     */
    inline StartDICOMImportJobResult& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline StartDICOMImportJobResult& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}

    /**
     * <p>The data store identifier.</p>
     */
    inline StartDICOMImportJobResult& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}


    /**
     * <p>The import job identifier.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The import job identifier.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The import job identifier.</p>
     */
    inline StartDICOMImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The import job identifier.</p>
     */
    inline StartDICOMImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The import job identifier.</p>
     */
    inline StartDICOMImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The import job status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The import job status.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The import job status.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The import job status.</p>
     */
    inline StartDICOMImportJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The import job status.</p>
     */
    inline StartDICOMImportJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the import job was submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmittedAt() const{ return m_submittedAt; }

    /**
     * <p>The timestamp when the import job was submitted.</p>
     */
    inline void SetSubmittedAt(const Aws::Utils::DateTime& value) { m_submittedAt = value; }

    /**
     * <p>The timestamp when the import job was submitted.</p>
     */
    inline void SetSubmittedAt(Aws::Utils::DateTime&& value) { m_submittedAt = std::move(value); }

    /**
     * <p>The timestamp when the import job was submitted.</p>
     */
    inline StartDICOMImportJobResult& WithSubmittedAt(const Aws::Utils::DateTime& value) { SetSubmittedAt(value); return *this;}

    /**
     * <p>The timestamp when the import job was submitted.</p>
     */
    inline StartDICOMImportJobResult& WithSubmittedAt(Aws::Utils::DateTime&& value) { SetSubmittedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDICOMImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDICOMImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDICOMImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_datastoreId;

    Aws::String m_jobId;

    JobStatus m_jobStatus;

    Aws::Utils::DateTime m_submittedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
