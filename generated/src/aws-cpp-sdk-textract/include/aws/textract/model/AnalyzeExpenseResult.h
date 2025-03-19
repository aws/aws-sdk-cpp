/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/model/ExpenseDocument.h>
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
  class AnalyzeExpenseResult
  {
  public:
    AWS_TEXTRACT_API AnalyzeExpenseResult() = default;
    AWS_TEXTRACT_API AnalyzeExpenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API AnalyzeExpenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const DocumentMetadata& GetDocumentMetadata() const { return m_documentMetadata; }
    template<typename DocumentMetadataT = DocumentMetadata>
    void SetDocumentMetadata(DocumentMetadataT&& value) { m_documentMetadataHasBeenSet = true; m_documentMetadata = std::forward<DocumentMetadataT>(value); }
    template<typename DocumentMetadataT = DocumentMetadata>
    AnalyzeExpenseResult& WithDocumentMetadata(DocumentMetadataT&& value) { SetDocumentMetadata(std::forward<DocumentMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseDocument>& GetExpenseDocuments() const { return m_expenseDocuments; }
    template<typename ExpenseDocumentsT = Aws::Vector<ExpenseDocument>>
    void SetExpenseDocuments(ExpenseDocumentsT&& value) { m_expenseDocumentsHasBeenSet = true; m_expenseDocuments = std::forward<ExpenseDocumentsT>(value); }
    template<typename ExpenseDocumentsT = Aws::Vector<ExpenseDocument>>
    AnalyzeExpenseResult& WithExpenseDocuments(ExpenseDocumentsT&& value) { SetExpenseDocuments(std::forward<ExpenseDocumentsT>(value)); return *this;}
    template<typename ExpenseDocumentsT = ExpenseDocument>
    AnalyzeExpenseResult& AddExpenseDocuments(ExpenseDocumentsT&& value) { m_expenseDocumentsHasBeenSet = true; m_expenseDocuments.emplace_back(std::forward<ExpenseDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AnalyzeExpenseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;
    bool m_documentMetadataHasBeenSet = false;

    Aws::Vector<ExpenseDocument> m_expenseDocuments;
    bool m_expenseDocumentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
