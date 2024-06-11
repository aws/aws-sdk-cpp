/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptunedata/Neptunedata_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptunedata/model/MlResourceDefinition.h>
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
namespace neptunedata
{
namespace Model
{
  class GetMLDataProcessingJobResult
  {
  public:
    AWS_NEPTUNEDATA_API GetMLDataProcessingJobResult();
    AWS_NEPTUNEDATA_API GetMLDataProcessingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NEPTUNEDATA_API GetMLDataProcessingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Status of the data processing job.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline GetMLDataProcessingJobResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline GetMLDataProcessingJobResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline GetMLDataProcessingJobResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this data-processing job.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetMLDataProcessingJobResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetMLDataProcessingJobResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetMLDataProcessingJobResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Definition of the data processing job.</p>
     */
    inline const MlResourceDefinition& GetProcessingJob() const{ return m_processingJob; }
    inline void SetProcessingJob(const MlResourceDefinition& value) { m_processingJob = value; }
    inline void SetProcessingJob(MlResourceDefinition&& value) { m_processingJob = std::move(value); }
    inline GetMLDataProcessingJobResult& WithProcessingJob(const MlResourceDefinition& value) { SetProcessingJob(value); return *this;}
    inline GetMLDataProcessingJobResult& WithProcessingJob(MlResourceDefinition&& value) { SetProcessingJob(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMLDataProcessingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMLDataProcessingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMLDataProcessingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_status;

    Aws::String m_id;

    MlResourceDefinition m_processingJob;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace neptunedata
} // namespace Aws
