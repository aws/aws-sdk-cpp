/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{
  class StartContentModerationResult
  {
  public:
    AWS_REKOGNITION_API StartContentModerationResult();
    AWS_REKOGNITION_API StartContentModerationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API StartContentModerationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline StartContentModerationResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline StartContentModerationResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the content analysis job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetContentModeration</code>.</p>
     */
    inline StartContentModerationResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartContentModerationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartContentModerationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartContentModerationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
