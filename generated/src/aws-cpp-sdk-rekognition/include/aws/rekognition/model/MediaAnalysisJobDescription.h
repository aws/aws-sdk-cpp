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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Description for a media analysis job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MediaAnalysisJobDescription">AWS
   * API Reference</a></p>
   */
  class MediaAnalysisJobDescription
  {
  public:
    AWS_REKOGNITION_API MediaAnalysisJobDescription();
    AWS_REKOGNITION_API MediaAnalysisJobDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MediaAnalysisJobDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline MediaAnalysisJobDescription& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline MediaAnalysisJobDescription& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline MediaAnalysisJobDescription& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a media analysis job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline MediaAnalysisJobDescription& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline MediaAnalysisJobDescription& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline MediaAnalysisJobDescription& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const{ return m_operationsConfig; }
    inline bool OperationsConfigHasBeenSet() const { return m_operationsConfigHasBeenSet; }
    inline void SetOperationsConfig(const MediaAnalysisOperationsConfig& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = value; }
    inline void SetOperationsConfig(MediaAnalysisOperationsConfig&& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = std::move(value); }
    inline MediaAnalysisJobDescription& WithOperationsConfig(const MediaAnalysisOperationsConfig& value) { SetOperationsConfig(value); return *this;}
    inline MediaAnalysisJobDescription& WithOperationsConfig(MediaAnalysisOperationsConfig&& value) { SetOperationsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline const MediaAnalysisJobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MediaAnalysisJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MediaAnalysisJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline MediaAnalysisJobDescription& WithStatus(const MediaAnalysisJobStatus& value) { SetStatus(value); return *this;}
    inline MediaAnalysisJobDescription& WithStatus(MediaAnalysisJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline const MediaAnalysisJobFailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }
    inline void SetFailureDetails(const MediaAnalysisJobFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }
    inline void SetFailureDetails(MediaAnalysisJobFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }
    inline MediaAnalysisJobDescription& WithFailureDetails(const MediaAnalysisJobFailureDetails& value) { SetFailureDetails(value); return *this;}
    inline MediaAnalysisJobDescription& WithFailureDetails(MediaAnalysisJobFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline MediaAnalysisJobDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline MediaAnalysisJobDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }
    inline bool CompletionTimestampHasBeenSet() const { return m_completionTimestampHasBeenSet; }
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = value; }
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::move(value); }
    inline MediaAnalysisJobDescription& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}
    inline MediaAnalysisJobDescription& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline const MediaAnalysisInput& GetInput() const{ return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    inline void SetInput(const MediaAnalysisInput& value) { m_inputHasBeenSet = true; m_input = value; }
    inline void SetInput(MediaAnalysisInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }
    inline MediaAnalysisJobDescription& WithInput(const MediaAnalysisInput& value) { SetInput(value); return *this;}
    inline MediaAnalysisJobDescription& WithInput(MediaAnalysisInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const MediaAnalysisOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(MediaAnalysisOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline MediaAnalysisJobDescription& WithOutputConfig(const MediaAnalysisOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline MediaAnalysisJobDescription& WithOutputConfig(MediaAnalysisOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline MediaAnalysisJobDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline MediaAnalysisJobDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline MediaAnalysisJobDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline const MediaAnalysisResults& GetResults() const{ return m_results; }
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
    inline void SetResults(const MediaAnalysisResults& value) { m_resultsHasBeenSet = true; m_results = value; }
    inline void SetResults(MediaAnalysisResults&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }
    inline MediaAnalysisJobDescription& WithResults(const MediaAnalysisResults& value) { SetResults(value); return *this;}
    inline MediaAnalysisJobDescription& WithResults(MediaAnalysisResults&& value) { SetResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline const MediaAnalysisManifestSummary& GetManifestSummary() const{ return m_manifestSummary; }
    inline bool ManifestSummaryHasBeenSet() const { return m_manifestSummaryHasBeenSet; }
    inline void SetManifestSummary(const MediaAnalysisManifestSummary& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = value; }
    inline void SetManifestSummary(MediaAnalysisManifestSummary&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::move(value); }
    inline MediaAnalysisJobDescription& WithManifestSummary(const MediaAnalysisManifestSummary& value) { SetManifestSummary(value); return *this;}
    inline MediaAnalysisJobDescription& WithManifestSummary(MediaAnalysisManifestSummary&& value) { SetManifestSummary(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    MediaAnalysisOperationsConfig m_operationsConfig;
    bool m_operationsConfigHasBeenSet = false;

    MediaAnalysisJobStatus m_status;
    bool m_statusHasBeenSet = false;

    MediaAnalysisJobFailureDetails m_failureDetails;
    bool m_failureDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_completionTimestamp;
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
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
