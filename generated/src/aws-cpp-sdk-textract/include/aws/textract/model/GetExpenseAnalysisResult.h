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
#include <aws/textract/model/ExpenseDocument.h>
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
  class GetExpenseAnalysisResult
  {
  public:
    AWS_TEXTRACT_API GetExpenseAnalysisResult();
    AWS_TEXTRACT_API GetExpenseAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetExpenseAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline GetExpenseAnalysisResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    /**
     * <p>Information about a document that Amazon Textract processed.
     * <code>DocumentMetadata</code> is returned in every page of paginated responses
     * from an Amazon Textract operation.</p>
     */
    inline GetExpenseAnalysisResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p>The current status of the text detection job.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline GetExpenseAnalysisResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The current status of the text detection job.</p>
     */
    inline GetExpenseAnalysisResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetExpenseAnalysisResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetExpenseAnalysisResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Textract returns this token. You can use
     * this token in the subsequent request to retrieve the next set of text-detection
     * results.</p>
     */
    inline GetExpenseAnalysisResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline const Aws::Vector<ExpenseDocument>& GetExpenseDocuments() const{ return m_expenseDocuments; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline void SetExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { m_expenseDocuments = value; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline void SetExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { m_expenseDocuments = std::move(value); }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline GetExpenseAnalysisResult& WithExpenseDocuments(const Aws::Vector<ExpenseDocument>& value) { SetExpenseDocuments(value); return *this;}

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline GetExpenseAnalysisResult& WithExpenseDocuments(Aws::Vector<ExpenseDocument>&& value) { SetExpenseDocuments(std::move(value)); return *this;}

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline GetExpenseAnalysisResult& AddExpenseDocuments(const ExpenseDocument& value) { m_expenseDocuments.push_back(value); return *this; }

    /**
     * <p>The expenses detected by Amazon Textract.</p>
     */
    inline GetExpenseAnalysisResult& AddExpenseDocuments(ExpenseDocument&& value) { m_expenseDocuments.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline GetExpenseAnalysisResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline GetExpenseAnalysisResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline GetExpenseAnalysisResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warnings that occurred during the text-detection operation for the
     * document.</p>
     */
    inline GetExpenseAnalysisResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline GetExpenseAnalysisResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline GetExpenseAnalysisResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns if the detection job could not be completed. Contains explanation for
     * what error occured. </p>
     */
    inline GetExpenseAnalysisResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline const Aws::String& GetAnalyzeExpenseModelVersion() const{ return m_analyzeExpenseModelVersion; }

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline void SetAnalyzeExpenseModelVersion(const Aws::String& value) { m_analyzeExpenseModelVersion = value; }

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline void SetAnalyzeExpenseModelVersion(Aws::String&& value) { m_analyzeExpenseModelVersion = std::move(value); }

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline void SetAnalyzeExpenseModelVersion(const char* value) { m_analyzeExpenseModelVersion.assign(value); }

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(const Aws::String& value) { SetAnalyzeExpenseModelVersion(value); return *this;}

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(Aws::String&& value) { SetAnalyzeExpenseModelVersion(std::move(value)); return *this;}

    /**
     * <p>The current model version of AnalyzeExpense.</p>
     */
    inline GetExpenseAnalysisResult& WithAnalyzeExpenseModelVersion(const char* value) { SetAnalyzeExpenseModelVersion(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    Aws::String m_nextToken;

    Aws::Vector<ExpenseDocument> m_expenseDocuments;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeExpenseModelVersion;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
