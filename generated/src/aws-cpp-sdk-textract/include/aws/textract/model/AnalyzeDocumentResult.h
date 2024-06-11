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
    AWS_TEXTRACT_API AnalyzeDocumentResult();
    AWS_TEXTRACT_API AnalyzeDocumentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeDocumentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata about the analyzed document. An example is the number of pages.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline AnalyzeDocumentResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline AnalyzeDocumentResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The items that are detected and analyzed by <code>AnalyzeDocument</code>.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }
    inline AnalyzeDocumentResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}
    inline AnalyzeDocumentResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}
    inline AnalyzeDocumentResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }
    inline AnalyzeDocumentResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Shows the results of the human in the loop evaluation.</p>
     */
    inline const HumanLoopActivationOutput& GetHumanLoopActivationOutput() const{ return m_humanLoopActivationOutput; }
    inline void SetHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { m_humanLoopActivationOutput = value; }
    inline void SetHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { m_humanLoopActivationOutput = std::move(value); }
    inline AnalyzeDocumentResult& WithHumanLoopActivationOutput(const HumanLoopActivationOutput& value) { SetHumanLoopActivationOutput(value); return *this;}
    inline AnalyzeDocumentResult& WithHumanLoopActivationOutput(HumanLoopActivationOutput&& value) { SetHumanLoopActivationOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model used to analyze the document.</p>
     */
    inline const Aws::String& GetAnalyzeDocumentModelVersion() const{ return m_analyzeDocumentModelVersion; }
    inline void SetAnalyzeDocumentModelVersion(const Aws::String& value) { m_analyzeDocumentModelVersion = value; }
    inline void SetAnalyzeDocumentModelVersion(Aws::String&& value) { m_analyzeDocumentModelVersion = std::move(value); }
    inline void SetAnalyzeDocumentModelVersion(const char* value) { m_analyzeDocumentModelVersion.assign(value); }
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(const Aws::String& value) { SetAnalyzeDocumentModelVersion(value); return *this;}
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(Aws::String&& value) { SetAnalyzeDocumentModelVersion(std::move(value)); return *this;}
    inline AnalyzeDocumentResult& WithAnalyzeDocumentModelVersion(const char* value) { SetAnalyzeDocumentModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AnalyzeDocumentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AnalyzeDocumentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AnalyzeDocumentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;

    Aws::Vector<Block> m_blocks;

    HumanLoopActivationOutput m_humanLoopActivationOutput;

    Aws::String m_analyzeDocumentModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
