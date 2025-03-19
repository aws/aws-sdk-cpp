/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/textract/model/JobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Block.h>
#include <aws/textract/model/Warning.h>
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
  class GetDocumentTextDetectionResult
  {
  public:
    AWS_TEXTRACT_API GetDocumentTextDetectionResult() = default;
    AWS_TEXTRACT_API GetDocumentTextDetectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetDocumentTextDetectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract video operation.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    GetDocumentTextDetectionResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the text detection job.</p>
     */
    inline JobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(JobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline GetDocumentTextDetectionResult& WithJobStatus(JobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDocumentTextDetectionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the text-detection operation.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    GetDocumentTextDetectionResult& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    GetDocumentTextDetectionResult& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const { return m_warnings; }
    template<typename WarningsT = Aws::Vector<Warning>>
    void SetWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings = std::forward<WarningsT>(value); }
    template<typename WarningsT = Aws::Vector<Warning>>
    GetDocumentTextDetectionResult& WithWarnings(WarningsT&& value) { SetWarnings(std::forward<WarningsT>(value)); return *this;}
    template<typename WarningsT = Warning>
    GetDocumentTextDetectionResult& AddWarnings(WarningsT&& value) { m_warningsHasBeenSet = true; m_warnings.emplace_back(std::forward<WarningsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetDocumentTextDetectionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetDetectDocumentTextModelVersion() const { return m_detectDocumentTextModelVersion; }
    template<typename DetectDocumentTextModelVersionT = Aws::String>
    void SetDetectDocumentTextModelVersion(DetectDocumentTextModelVersionT&& value) { m_detectDocumentTextModelVersionHasBeenSet = true; m_detectDocumentTextModelVersion = std::forward<DetectDocumentTextModelVersionT>(value); }
    template<typename DetectDocumentTextModelVersionT = Aws::String>
    GetDocumentTextDetectionResult& WithDetectDocumentTextModelVersion(DetectDocumentTextModelVersionT&& value) { SetDetectDocumentTextModelVersion(std::forward<DetectDocumentTextModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDocumentTextDetectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    JobStatus m_jobStatus{JobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;

    Aws::Vector<Warning> m_warnings;
    bool m_warningsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_detectDocumentTextModelVersion;
    bool m_detectDocumentTextModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
