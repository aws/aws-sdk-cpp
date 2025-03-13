/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/Block.h>
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
  class DetectDocumentTextResult
  {
  public:
    AWS_TEXTRACT_API DetectDocumentTextResult() = default;
    AWS_TEXTRACT_API DetectDocumentTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API DetectDocumentTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    DetectDocumentTextResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    DetectDocumentTextResult& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    DetectDocumentTextResult& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetDetectDocumentTextModelVersion() const { return m_detectDocumentTextModelVersion; }
    template<typename DetectDocumentTextModelVersionT = Aws::String>
    void SetDetectDocumentTextModelVersion(DetectDocumentTextModelVersionT&& value) { m_detectDocumentTextModelVersionHasBeenSet = true; m_detectDocumentTextModelVersion = std::forward<DetectDocumentTextModelVersionT>(value); }
    template<typename DetectDocumentTextModelVersionT = Aws::String>
    DetectDocumentTextResult& WithDetectDocumentTextModelVersion(DetectDocumentTextModelVersionT&& value) { SetDetectDocumentTextModelVersion(std::forward<DetectDocumentTextModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectDocumentTextResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;

    Aws::String m_detectDocumentTextModelVersion;
    bool m_detectDocumentTextModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
