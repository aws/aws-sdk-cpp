/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateJobPriorityResult
  {
  public:
    AWS_S3CONTROL_API UpdateJobPriorityResult();
    AWS_S3CONTROL_API UpdateJobPriorityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API UpdateJobPriorityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID for the job whose priority Amazon S3 updated.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline UpdateJobPriorityResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline UpdateJobPriorityResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline UpdateJobPriorityResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new priority assigned to the specified job.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline void SetPriority(int value) { m_priority = value; }
    inline UpdateJobPriorityResult& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateJobPriorityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateJobPriorityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateJobPriorityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline UpdateJobPriorityResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline UpdateJobPriorityResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline UpdateJobPriorityResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    int m_priority;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
