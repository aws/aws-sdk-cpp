/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/JobDescriptor.h>
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
  class DescribeJobResult
  {
  public:
    AWS_S3CONTROL_API DescribeJobResult();
    AWS_S3CONTROL_API DescribeJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API DescribeJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Contains the configuration parameters and status for the job specified in the
     * <code>Describe Job</code> request.</p>
     */
    inline const JobDescriptor& GetJob() const{ return m_job; }
    inline void SetJob(const JobDescriptor& value) { m_job = value; }
    inline void SetJob(JobDescriptor&& value) { m_job = std::move(value); }
    inline DescribeJobResult& WithJob(const JobDescriptor& value) { SetJob(value); return *this;}
    inline DescribeJobResult& WithJob(JobDescriptor&& value) { SetJob(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline DescribeJobResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline DescribeJobResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline DescribeJobResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    JobDescriptor m_job;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
