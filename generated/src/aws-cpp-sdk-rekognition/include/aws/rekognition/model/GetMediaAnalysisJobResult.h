/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/MediaAnalysisOperationsConfig.h>
#include <aws/rekognition/model/MediaAnalysisJobStatus.h>
#include <aws/rekognition/model/MediaAnalysisJobFailureDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/rekognition/model/MediaAnalysisInput.h>
#include <aws/rekognition/model/MediaAnalysisOutputConfig.h>
#include <aws/rekognition/model/MediaAnalysisResults.h>
#include <aws/rekognition/model/MediaAnalysisManifestSummary.h>
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
namespace Rekognition
{
namespace Model
{
  class GetMediaAnalysisJobResult
  {
  public:
    AWS_REKOGNITION_API GetMediaAnalysisJobResult() = default;
    AWS_REKOGNITION_API GetMediaAnalysisJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetMediaAnalysisJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetMediaAnalysisJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the media analysis job.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    GetMediaAnalysisJobResult& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const { return m_operationsConfig; }
    template<typename OperationsConfigT = MediaAnalysisOperationsConfig>
    void SetOperationsConfig(OperationsConfigT&& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = std::forward<OperationsConfigT>(value); }
    template<typename OperationsConfigT = MediaAnalysisOperationsConfig>
    GetMediaAnalysisJobResult& WithOperationsConfig(OperationsConfigT&& value) { SetOperationsConfig(std::forward<OperationsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline MediaAnalysisJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(MediaAnalysisJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetMediaAnalysisJobResult& WithStatus(MediaAnalysisJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline const MediaAnalysisJobFailureDetails& GetFailureDetails() const { return m_failureDetails; }
    template<typename FailureDetailsT = MediaAnalysisJobFailureDetails>
    void SetFailureDetails(FailureDetailsT&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::forward<FailureDetailsT>(value); }
    template<typename FailureDetailsT = MediaAnalysisJobFailureDetails>
    GetMediaAnalysisJobResult& WithFailureDetails(FailureDetailsT&& value) { SetFailureDetails(std::forward<FailureDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    GetMediaAnalysisJobResult& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const { return m_completionTimestamp; }
    template<typename CompletionTimestampT = Aws::Utils::DateTime>
    void SetCompletionTimestamp(CompletionTimestampT&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::forward<CompletionTimestampT>(value); }
    template<typename CompletionTimestampT = Aws::Utils::DateTime>
    GetMediaAnalysisJobResult& WithCompletionTimestamp(CompletionTimestampT&& value) { SetCompletionTimestamp(std::forward<CompletionTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline const MediaAnalysisInput& GetInput() const { return m_input; }
    template<typename InputT = MediaAnalysisInput>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = MediaAnalysisInput>
    GetMediaAnalysisJobResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = MediaAnalysisOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = MediaAnalysisOutputConfig>
    GetMediaAnalysisJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    GetMediaAnalysisJobResult& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline const MediaAnalysisResults& GetResults() const { return m_results; }
    template<typename ResultsT = MediaAnalysisResults>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = MediaAnalysisResults>
    GetMediaAnalysisJobResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline const MediaAnalysisManifestSummary& GetManifestSummary() const { return m_manifestSummary; }
    template<typename ManifestSummaryT = MediaAnalysisManifestSummary>
    void SetManifestSummary(ManifestSummaryT&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::forward<ManifestSummaryT>(value); }
    template<typename ManifestSummaryT = MediaAnalysisManifestSummary>
    GetMediaAnalysisJobResult& WithManifestSummary(ManifestSummaryT&& value) { SetManifestSummary(std::forward<ManifestSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMediaAnalysisJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    MediaAnalysisOperationsConfig m_operationsConfig;
    bool m_operationsConfigHasBeenSet = false;

    MediaAnalysisJobStatus m_status{MediaAnalysisJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    MediaAnalysisJobFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completionTimestamp{};
    bool m_completionTimestampHasBeenSet = false;

    MediaAnalysisInput m_input;
    bool m_inputHasBeenSet = false;

    MediaAnalysisOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    MediaAnalysisResults m_results;
    bool m_resultsHasBeenSet = false;

    MediaAnalysisManifestSummary m_manifestSummary;
    bool m_manifestSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
