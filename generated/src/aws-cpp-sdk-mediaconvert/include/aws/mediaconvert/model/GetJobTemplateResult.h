﻿/**
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
    AWS_MEDIACONVERT_API GetJobTemplateResult();
    AWS_MEDIACONVERT_API GetJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONVERT_API GetJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A job template is a pre-made set of encoding instructions that you can use to
     * quickly create a job.
     */
    inline const JobTemplate& GetJobTemplate() const{ return m_jobTemplate; }
    inline void SetJobTemplate(const JobTemplate& value) { m_jobTemplate = value; }
    inline void SetJobTemplate(JobTemplate&& value) { m_jobTemplate = std::move(value); }
    inline GetJobTemplateResult& WithJobTemplate(const JobTemplate& value) { SetJobTemplate(value); return *this;}
    inline GetJobTemplateResult& WithJobTemplate(JobTemplate&& value) { SetJobTemplate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetJobTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetJobTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetJobTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    JobTemplate m_jobTemplate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
