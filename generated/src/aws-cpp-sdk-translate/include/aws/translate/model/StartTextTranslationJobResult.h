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
    AWS_TRANSLATE_API StartTextTranslationJobResult() = default;
    AWS_TRANSLATE_API StartTextTranslationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSLATE_API StartTextTranslationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier generated for the job. To get the status of a job, use this ID
     * with the <a>DescribeTextTranslationJob</a> operation.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    StartTextTranslationJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline StartTextTranslationJobResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTextTranslationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
