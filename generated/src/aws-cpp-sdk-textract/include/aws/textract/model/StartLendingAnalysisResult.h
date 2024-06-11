﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
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
namespace Textract
{
namespace Model
{
  class StartLendingAnalysisResult
  {
  public:
    AWS_TEXTRACT_API StartLendingAnalysisResult();
    AWS_TEXTRACT_API StartLendingAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API StartLendingAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the lending or text-detection job. The
     * <code>JobId</code> is returned from <code>StartLendingAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline StartLendingAnalysisResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline StartLendingAnalysisResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline StartLendingAnalysisResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartLendingAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartLendingAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartLendingAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
