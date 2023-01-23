/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/DocumentMetadata.h>
#include <aws/textract/model/JobStatus.h>
#include <aws/textract/model/LendingSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetLendingAnalysisSummaryResult
  {
  public:
    AWS_TEXTRACT_API GetLendingAnalysisSummaryResult();
    AWS_TEXTRACT_API GetLendingAnalysisSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetLendingAnalysisSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }

    
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }

    
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }

    
    inline GetLendingAnalysisSummaryResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}

    
    inline GetLendingAnalysisSummaryResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}


    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }

    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline GetLendingAnalysisSummaryResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline GetLendingAnalysisSummaryResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline const LendingSummary& GetSummary() const{ return m_summary; }

    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline void SetSummary(const LendingSummary& value) { m_summary = value; }

    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline void SetSummary(LendingSummary&& value) { m_summary = std::move(value); }

    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithSummary(const LendingSummary& value) { SetSummary(value); return *this;}

    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithSummary(LendingSummary&& value) { SetSummary(std::move(value)); return *this;}


    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline GetLendingAnalysisSummaryResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }

    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline GetLendingAnalysisSummaryResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }


    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline const Aws::String& GetAnalyzeLendingModelVersion() const{ return m_analyzeLendingModelVersion; }

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline void SetAnalyzeLendingModelVersion(const Aws::String& value) { m_analyzeLendingModelVersion = value; }

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline void SetAnalyzeLendingModelVersion(Aws::String&& value) { m_analyzeLendingModelVersion = std::move(value); }

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline void SetAnalyzeLendingModelVersion(const char* value) { m_analyzeLendingModelVersion.assign(value); }

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(const Aws::String& value) { SetAnalyzeLendingModelVersion(value); return *this;}

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(Aws::String&& value) { SetAnalyzeLendingModelVersion(std::move(value)); return *this;}

    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(const char* value) { SetAnalyzeLendingModelVersion(value); return *this;}

  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    LendingSummary m_summary;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeLendingModelVersion;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
