/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/JobStatus.h>
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
namespace Translate
{
namespace Model
{
  class StartTextTranslationJobResult
  {
  public:
    AWS_TRANSLATE_API StartTextTranslationJobResult();
    AWS_TRANSLATE_API StartTextTranslationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API StartTextTranslationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline StartTextTranslationJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline StartTextTranslationJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline StartTextTranslationJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The status of the job. Possible values include:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> - The job has been received and is queued for
     * processing.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon Translate is
     * processing the job.</p> </li> <li> <p> <code>COMPLETED</code> - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>
     * <code>COMPLETED_WITH_ERROR</code> - The job was completed with errors. The
     * errors can be analyzed in the job's output.</p> </li> <li> <p>
     * <code>FAILED</code> - The job did not complete. To get details, use the
     * <a>DescribeTextTranslationJob</a> operation.</p> </li> <li> <p>
     * <code>STOP_REQUESTED</code> - The user who started the job has requested that it
     * be stopped.</p> </li> <li> <p> <code>STOPPED</code> - The job has been
     * stopped.</p> </li> </ul>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The status of the job. Possible values include:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> - The job has been received and is queued for
     * processing.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon Translate is
     * processing the job.</p> </li> <li> <p> <code>COMPLETED</code> - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>
     * <code>COMPLETED_WITH_ERROR</code> - The job was completed with errors. The
     * errors can be analyzed in the job's output.</p> </li> <li> <p>
     * <code>FAILED</code> - The job did not complete. To get details, use the
     * <a>DescribeTextTranslationJob</a> operation.</p> </li> <li> <p>
     * <code>STOP_REQUESTED</code> - The user who started the job has requested that it
     * be stopped.</p> </li> <li> <p> <code>STOPPED</code> - The job has been
     * stopped.</p> </li> </ul>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The status of the job. Possible values include:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> - The job has been received and is queued for
     * processing.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon Translate is
     * processing the job.</p> </li> <li> <p> <code>COMPLETED</code> - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>
     * <code>COMPLETED_WITH_ERROR</code> - The job was completed with errors. The
     * errors can be analyzed in the job's output.</p> </li> <li> <p>
     * <code>FAILED</code> - The job did not complete. To get details, use the
     * <a>DescribeTextTranslationJob</a> operation.</p> </li> <li> <p>
     * <code>STOP_REQUESTED</code> - The user who started the job has requested that it
     * be stopped.</p> </li> <li> <p> <code>STOPPED</code> - The job has been
     * stopped.</p> </li> </ul>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The status of the job. Possible values include:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> - The job has been received and is queued for
     * processing.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon Translate is
     * processing the job.</p> </li> <li> <p> <code>COMPLETED</code> - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>
     * <code>COMPLETED_WITH_ERROR</code> - The job was completed with errors. The
     * errors can be analyzed in the job's output.</p> </li> <li> <p>
     * <code>FAILED</code> - The job did not complete. To get details, use the
     * <a>DescribeTextTranslationJob</a> operation.</p> </li> <li> <p>
     * <code>STOP_REQUESTED</code> - The user who started the job has requested that it
     * be stopped.</p> </li> <li> <p> <code>STOPPED</code> - The job has been
     * stopped.</p> </li> </ul>
     */
    inline StartTextTranslationJobResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The status of the job. Possible values include:</p> <ul> <li> <p>
     * <code>SUBMITTED</code> - The job has been received and is queued for
     * processing.</p> </li> <li> <p> <code>IN_PROGRESS</code> - Amazon Translate is
     * processing the job.</p> </li> <li> <p> <code>COMPLETED</code> - The job was
     * successfully completed and the output is available.</p> </li> <li> <p>
     * <code>COMPLETED_WITH_ERROR</code> - The job was completed with errors. The
     * errors can be analyzed in the job's output.</p> </li> <li> <p>
     * <code>FAILED</code> - The job did not complete. To get details, use the
     * <a>DescribeTextTranslationJob</a> operation.</p> </li> <li> <p>
     * <code>STOP_REQUESTED</code> - The user who started the job has requested that it
     * be stopped.</p> </li> <li> <p> <code>STOPPED</code> - The job has been
     * stopped.</p> </li> </ul>
     */
    inline StartTextTranslationJobResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobStatus m_jobStatus;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
