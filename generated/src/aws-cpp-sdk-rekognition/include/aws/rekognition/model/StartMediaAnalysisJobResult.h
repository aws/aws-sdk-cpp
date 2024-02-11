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
  class StartMediaAnalysisJobResult
  {
  public:
    AWS_REKOGNITION_API StartMediaAnalysisJobResult();
    AWS_REKOGNITION_API StartMediaAnalysisJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API StartMediaAnalysisJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifier for the created job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>Identifier for the created job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>Identifier for the created job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>Identifier for the created job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>Identifier for the created job.</p>
     */
    inline StartMediaAnalysisJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>Identifier for the created job.</p>
     */
    inline StartMediaAnalysisJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>Identifier for the created job.</p>
     */
    inline StartMediaAnalysisJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartMediaAnalysisJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartMediaAnalysisJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartMediaAnalysisJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
