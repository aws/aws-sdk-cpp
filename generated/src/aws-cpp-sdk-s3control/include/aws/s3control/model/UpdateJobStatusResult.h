﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/JobStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class UpdateJobStatusResult
  {
  public:
    AWS_S3CONTROL_API UpdateJobStatusResult();
    AWS_S3CONTROL_API UpdateJobStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API UpdateJobStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID for the job whose status was updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline UpdateJobStatusResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline UpdateJobStatusResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline UpdateJobStatusResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the specified job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const JobStatus& value) { m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_status = std::move(value); }
    inline UpdateJobStatusResult& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline UpdateJobStatusResult& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the specified job's status was updated.</p>
     */
    inline const Aws::String& GetStatusUpdateReason() const{ return m_statusUpdateReason; }
    inline void SetStatusUpdateReason(const Aws::String& value) { m_statusUpdateReason = value; }
    inline void SetStatusUpdateReason(Aws::String&& value) { m_statusUpdateReason = std::move(value); }
    inline void SetStatusUpdateReason(const char* value) { m_statusUpdateReason.assign(value); }
    inline UpdateJobStatusResult& WithStatusUpdateReason(const Aws::String& value) { SetStatusUpdateReason(value); return *this;}
    inline UpdateJobStatusResult& WithStatusUpdateReason(Aws::String&& value) { SetStatusUpdateReason(std::move(value)); return *this;}
    inline UpdateJobStatusResult& WithStatusUpdateReason(const char* value) { SetStatusUpdateReason(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateJobStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateJobStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateJobStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline UpdateJobStatusResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline UpdateJobStatusResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline UpdateJobStatusResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    JobStatus m_status;

    Aws::String m_statusUpdateReason;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
