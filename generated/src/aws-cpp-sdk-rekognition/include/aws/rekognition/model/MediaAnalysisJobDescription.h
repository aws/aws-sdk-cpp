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


    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of a media analysis job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of a media analysis job.</p>
     */
    inline MediaAnalysisJobDescription& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const{ return m_operationsConfig; }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline bool OperationsConfigHasBeenSet() const { return m_operationsConfigHasBeenSet; }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline void SetOperationsConfig(const MediaAnalysisOperationsConfig& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = value; }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline void SetOperationsConfig(MediaAnalysisOperationsConfig&& value) { m_operationsConfigHasBeenSet = true; m_operationsConfig = std::move(value); }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline MediaAnalysisJobDescription& WithOperationsConfig(const MediaAnalysisOperationsConfig& value) { SetOperationsConfig(value); return *this;}

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline MediaAnalysisJobDescription& WithOperationsConfig(MediaAnalysisOperationsConfig&& value) { SetOperationsConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline const MediaAnalysisJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline void SetStatus(const MediaAnalysisJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline void SetStatus(MediaAnalysisJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline MediaAnalysisJobDescription& WithStatus(const MediaAnalysisJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the media analysis job being retrieved.</p>
     */
    inline MediaAnalysisJobDescription& WithStatus(MediaAnalysisJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline const MediaAnalysisJobFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline bool FailureDetailsHasBeenSet() const { return m_failureDetailsHasBeenSet; }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline void SetFailureDetails(const MediaAnalysisJobFailureDetails& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = value; }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline void SetFailureDetails(MediaAnalysisJobFailureDetails&& value) { m_failureDetailsHasBeenSet = true; m_failureDetails = std::move(value); }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline MediaAnalysisJobDescription& WithFailureDetails(const MediaAnalysisJobFailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline MediaAnalysisJobDescription& WithFailureDetails(MediaAnalysisJobFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline MediaAnalysisJobDescription& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline MediaAnalysisJobDescription& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline bool CompletionTimestampHasBeenSet() const { return m_completionTimestampHasBeenSet; }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = value; }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestampHasBeenSet = true; m_completionTimestamp = std::move(value); }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline MediaAnalysisJobDescription& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline MediaAnalysisJobDescription& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}


    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline const MediaAnalysisInput& GetInput() const{ return m_input; }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline void SetInput(const MediaAnalysisInput& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline void SetInput(MediaAnalysisInput&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline MediaAnalysisJobDescription& WithInput(const MediaAnalysisInput& value) { SetInput(value); return *this;}

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline MediaAnalysisJobDescription& WithInput(MediaAnalysisInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline void SetOutputConfig(const MediaAnalysisOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline void SetOutputConfig(MediaAnalysisOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline MediaAnalysisJobDescription& WithOutputConfig(const MediaAnalysisOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline MediaAnalysisJobDescription& WithOutputConfig(MediaAnalysisOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline MediaAnalysisJobDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline MediaAnalysisJobDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline MediaAnalysisJobDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline const MediaAnalysisResults& GetResults() const{ return m_results; }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline void SetResults(const MediaAnalysisResults& value) { m_resultsHasBeenSet = true; m_results = value; }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline void SetResults(MediaAnalysisResults&& value) { m_resultsHasBeenSet = true; m_results = std::move(value); }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline MediaAnalysisJobDescription& WithResults(const MediaAnalysisResults& value) { SetResults(value); return *this;}

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline MediaAnalysisJobDescription& WithResults(MediaAnalysisResults&& value) { SetResults(std::move(value)); return *this;}


    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline const MediaAnalysisManifestSummary& GetManifestSummary() const{ return m_manifestSummary; }

    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline bool ManifestSummaryHasBeenSet() const { return m_manifestSummaryHasBeenSet; }

    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline void SetManifestSummary(const MediaAnalysisManifestSummary& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = value; }

    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline void SetManifestSummary(MediaAnalysisManifestSummary&& value) { m_manifestSummaryHasBeenSet = true; m_manifestSummary = std::move(value); }

    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline MediaAnalysisJobDescription& WithManifestSummary(const MediaAnalysisManifestSummary& value) { SetManifestSummary(value); return *this;}

    /**
     * <p>Provides statistics on input manifest and errors identified in the input
     * manifest.</p>
     */
    inline MediaAnalysisJobDescription& WithManifestSummary(MediaAnalysisManifestSummary&& value) { SetManifestSummary(std::move(value)); return *this;}

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
