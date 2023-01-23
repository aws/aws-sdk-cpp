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
    AWS_TEXTRACT_API DetectDocumentTextResult();
    AWS_TEXTRACT_API DetectDocumentTextResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API DetectDocumentTextResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline DetectDocumentTextResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Metadata about the document. It contains the number of pages that are
     * detected in the document.</p>
     */
    inline DetectDocumentTextResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline const Aws::Vector<Block>& GetBlocks() const{ return m_blocks; }

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline void SetBlocks(const Aws::Vector<Block>& value) { m_blocks = value; }

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline void SetBlocks(Aws::Vector<Block>&& value) { m_blocks = std::move(value); }

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& WithBlocks(const Aws::Vector<Block>& value) { SetBlocks(value); return *this;}

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& WithBlocks(Aws::Vector<Block>&& value) { SetBlocks(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& AddBlocks(const Block& value) { m_blocks.push_back(value); return *this; }

    /**
     * <p>An array of <code>Block</code> objects that contain the text that's detected
     * in the document.</p>
     */
    inline DetectDocumentTextResult& AddBlocks(Block&& value) { m_blocks.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetDetectDocumentTextModelVersion() const{ return m_detectDocumentTextModelVersion; }

    /**
     * <p/>
     */
    inline void SetDetectDocumentTextModelVersion(const Aws::String& value) { m_detectDocumentTextModelVersion = value; }

    /**
     * <p/>
     */
    inline void SetDetectDocumentTextModelVersion(Aws::String&& value) { m_detectDocumentTextModelVersion = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDetectDocumentTextModelVersion(const char* value) { m_detectDocumentTextModelVersion.assign(value); }

    /**
     * <p/>
     */
    inline DetectDocumentTextResult& WithDetectDocumentTextModelVersion(const Aws::String& value) { SetDetectDocumentTextModelVersion(value); return *this;}

    /**
     * <p/>
     */
    inline DetectDocumentTextResult& WithDetectDocumentTextModelVersion(Aws::String&& value) { SetDetectDocumentTextModelVersion(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DetectDocumentTextResult& WithDetectDocumentTextModelVersion(const char* value) { SetDetectDocumentTextModelVersion(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    Aws::Vector<Block> m_blocks;

    Aws::String m_detectDocumentTextModelVersion;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
