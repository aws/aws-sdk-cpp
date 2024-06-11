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


    ///@{
    
    inline const DocumentMetadata& GetDocumentMetadata() const{ return m_documentMetadata; }
    inline void SetDocumentMetadata(const DocumentMetadata& value) { m_documentMetadata = value; }
    inline void SetDocumentMetadata(DocumentMetadata&& value) { m_documentMetadata = std::move(value); }
    inline GetLendingAnalysisSummaryResult& WithDocumentMetadata(const DocumentMetadata& value) { SetDocumentMetadata(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithDocumentMetadata(DocumentMetadata&& value) { SetDocumentMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the lending analysis job. </p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatus = std::move(value); }
    inline GetLendingAnalysisSummaryResult& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Contains summary information for documents grouped by type.</p>
     */
    inline const LendingSummary& GetSummary() const{ return m_summary; }
    inline void SetSummary(const LendingSummary& value) { m_summary = value; }
    inline void SetSummary(LendingSummary&& value) { m_summary = std::move(value); }
    inline GetLendingAnalysisSummaryResult& WithSummary(const LendingSummary& value) { SetSummary(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithSummary(LendingSummary&& value) { SetSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of warnings that occurred during the lending analysis operation.</p>
     */
    inline const Aws::Vector<Warning>& GetWarnings() const{ return m_warnings; }
    inline void SetWarnings(const Aws::Vector<Warning>& value) { m_warnings = value; }
    inline void SetWarnings(Aws::Vector<Warning>&& value) { m_warnings = std::move(value); }
    inline GetLendingAnalysisSummaryResult& WithWarnings(const Aws::Vector<Warning>& value) { SetWarnings(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithWarnings(Aws::Vector<Warning>&& value) { SetWarnings(std::move(value)); return *this;}
    inline GetLendingAnalysisSummaryResult& AddWarnings(const Warning& value) { m_warnings.push_back(value); return *this; }
    inline GetLendingAnalysisSummaryResult& AddWarnings(Warning&& value) { m_warnings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Returns if the lending analysis could not be completed. Contains explanation
     * for what error occurred.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline GetLendingAnalysisSummaryResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current model version of the Analyze Lending API.</p>
     */
    inline const Aws::String& GetAnalyzeLendingModelVersion() const{ return m_analyzeLendingModelVersion; }
    inline void SetAnalyzeLendingModelVersion(const Aws::String& value) { m_analyzeLendingModelVersion = value; }
    inline void SetAnalyzeLendingModelVersion(Aws::String&& value) { m_analyzeLendingModelVersion = std::move(value); }
    inline void SetAnalyzeLendingModelVersion(const char* value) { m_analyzeLendingModelVersion.assign(value); }
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(const Aws::String& value) { SetAnalyzeLendingModelVersion(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(Aws::String&& value) { SetAnalyzeLendingModelVersion(std::move(value)); return *this;}
    inline GetLendingAnalysisSummaryResult& WithAnalyzeLendingModelVersion(const char* value) { SetAnalyzeLendingModelVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetLendingAnalysisSummaryResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetLendingAnalysisSummaryResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetLendingAnalysisSummaryResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DocumentMetadata m_documentMetadata;

    JobStatus m_jobStatus;

    LendingSummary m_summary;

    Aws::Vector<Warning> m_warnings;

    Aws::String m_statusMessage;

    Aws::String m_analyzeLendingModelVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
