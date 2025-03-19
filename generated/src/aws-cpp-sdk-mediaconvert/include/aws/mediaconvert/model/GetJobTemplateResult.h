/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/JobTemplate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConvert
{
namespace Model
{
  class GetJobTemplateResult
  {
  public:
    AWS_MEDIACONVERT_API GetJobTemplateResult() = default;
    AWS_MEDIACONVERT_API GetJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API GetJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline const JobTemplate& GetJobTemplate() const { return m_jobTemplate; }
    template<typename JobTemplateT = JobTemplate>
    void SetJobTemplate(JobTemplateT&& value) { m_jobTemplateHasBeenSet = true; m_jobTemplate = std::forward<JobTemplateT>(value); }
    template<typename JobTemplateT = JobTemplate>
    GetJobTemplateResult& WithJobTemplate(JobTemplateT&& value) { SetJobTemplate(std::forward<JobTemplateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobTemplateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    JobTemplate m_jobTemplate;
    bool m_jobTemplateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
