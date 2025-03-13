/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/HumanLoopActivationOutput.h>
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
  class AnalyzeDocumentResult
  {
  public:
    AWS_TEXTRACT_API AnalyzeDocumentResult() = default;
    AWS_TEXTRACT_API AnalyzeDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    AnalyzeDocumentResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const { return m_blocks; }
    template<typename BlocksT = Aws::Vector<Block>>
    void SetBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks = std::forward<BlocksT>(value); }
    template<typename BlocksT = Aws::Vector<Block>>
    AnalyzeDocumentResult& WithBlocks(BlocksT&& value) { SetBlocks(std::forward<BlocksT>(value)); return *this;}
    template<typename BlocksT = Block>
    AnalyzeDocumentResult& AddBlocks(BlocksT&& value) { m_blocksHasBeenSet = true; m_blocks.emplace_back(std::forward<BlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const { return m_humanLoopActivationOutput; }
    template<typename HumanLoopActivationOutputT = HumanLoopActivationOutput>
    void SetHumanLoopActivationOutput(HumanLoopActivationOutputT&& value) { m_humanLoopActivationOutputHasBeenSet = true; m_humanLoopActivationOutput = std::forward<HumanLoopActivationOutputT>(value); }
    template<typename HumanLoopActivationOutputT = HumanLoopActivationOutput>
    AnalyzeDocumentResult& WithHumanLoopActivationOutput(HumanLoopActivationOutputT&& value) { SetHumanLoopActivationOutput(std::forward<HumanLoopActivationOutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline const Aws::String& GetAnalyzeDocumentModelVersion() const { return m_analyzeDocumentModelVersion; }
    template<typename AnalyzeDocumentModelVersionT = Aws::String>
    void SetAnalyzeDocumentModelVersion(AnalyzeDocumentModelVersionT&& value) { m_analyzeDocumentModelVersionHasBeenSet = true; m_analyzeDocumentModelVersion = std::forward<AnalyzeDocumentModelVersionT>(value); }
    template<typename AnalyzeDocumentModelVersionT = Aws::String>
    AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(AnalyzeDocumentModelVersionT&& value) { SetAnalyzeDocumentModelVersion(std::forward<AnalyzeDocumentModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AnalyzeDocumentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::Vector<Block> m_blocks;
    bool m_blocksHasBeenSet = false;

    HumanLoopActivationOutput m_humanLoopActivationOutput;
    bool m_humanLoopActivationOutputHasBeenSet = false;

    Aws::String m_analyzeDocumentModelVersion;
    bool m_analyzeDocumentModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
