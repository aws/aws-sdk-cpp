/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/TextractRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/Document.h>
#include <utility>

namespace Aws
{
namespace Textract
{
namespace Model
{

  /**
   */
  class AnalyzeIDRequest : public TextractRequest
  {
  public:
    AWS_TEXTRACT_API AnalyzeIDRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AnalyzeID"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline const Aws::Vector<Document>& GetDocumentPages() const{ return m_documentPages; }

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline bool DocumentPagesHasBeenSet() const { return m_documentPagesHasBeenSet; }

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline void SetDocumentPages(const Aws::Vector<Document>& value) { m_documentPagesHasBeenSet = true; m_documentPages = value; }

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline void SetDocumentPages(Aws::Vector<Document>&& value) { m_documentPagesHasBeenSet = true; m_documentPages = std::move(value); }

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline AnalyzeIDRequest& WithDocumentPages(const Aws::Vector<Document>& value) { SetDocumentPages(value); return *this;}

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline AnalyzeIDRequest& WithDocumentPages(Aws::Vector<Document>&& value) { SetDocumentPages(std::move(value)); return *this;}

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline AnalyzeIDRequest& AddDocumentPages(const Document& value) { m_documentPagesHasBeenSet = true; m_documentPages.push_back(value); return *this; }

    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline AnalyzeIDRequest& AddDocumentPages(Document&& value) { m_documentPagesHasBeenSet = true; m_documentPages.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Document> m_documentPages;
    bool m_documentPagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
