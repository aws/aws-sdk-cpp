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
    AWS_TEXTRACT_API AnalyzeIDRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AnalyzeID"; }

    AWS_TEXTRACT_API Aws::String SerializePayload() const override;

    AWS_TEXTRACT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The document being passed to AnalyzeID.</p>
     */
    inline const Aws::Vector<Document>& GetDocumentPages() const { return m_documentPages; }
    inline bool DocumentPagesHasBeenSet() const { return m_documentPagesHasBeenSet; }
    template<typename DocumentPagesT = Aws::Vector<Document>>
    void SetDocumentPages(DocumentPagesT&& value) { m_documentPagesHasBeenSet = true; m_documentPages = std::forward<DocumentPagesT>(value); }
    template<typename DocumentPagesT = Aws::Vector<Document>>
    AnalyzeIDRequest& WithDocumentPages(DocumentPagesT&& value) { SetDocumentPages(std::forward<DocumentPagesT>(value)); return *this;}
    template<typename DocumentPagesT = Document>
    AnalyzeIDRequest& AddDocumentPages(DocumentPagesT&& value) { m_documentPagesHasBeenSet = true; m_documentPages.emplace_back(std::forward<DocumentPagesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Document> m_documentPages;
    bool m_documentPagesHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
