/**
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
  class StartDocumentAnalysisResult
  {
  public:
    AWS_TEXTRACT_API StartDocumentAnalysisResult();
    AWS_TEXTRACT_API StartDocumentAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API StartDocumentAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline StartDocumentAnalysisResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline StartDocumentAnalysisResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the document text detection job. Use <code>JobId</code> to
     * identify the job in a subsequent call to <code>GetDocumentAnalysis</code>. A
     * <code>JobId</code> value is only valid for 7 days.</p>
     */
    inline StartDocumentAnalysisResult& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_jobId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
