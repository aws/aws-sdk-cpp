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
  class CreateJobResult
  {
  public:
    AWS_S3CONTROL_API CreateJobResult();
    AWS_S3CONTROL_API CreateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline CreateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline CreateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for this job. Amazon S3 generates this ID automatically and returns it
     * after a successful <code>Create Job</code> request.</p>
     */
    inline CreateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
