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
    AWS_REKOGNITION_API GetMediaAnalysisJobResult();
    AWS_REKOGNITION_API GetMediaAnalysisJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API GetMediaAnalysisJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline GetMediaAnalysisJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline GetMediaAnalysisJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline GetMediaAnalysisJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the media analysis job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobName.assign(value); }
    inline GetMediaAnalysisJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline GetMediaAnalysisJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline GetMediaAnalysisJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const{ return m_operationsConfig; }
    inline void SetOperationsConfig(const MediaAnalysisOperationsConfig& value) { m_operationsConfig = value; }
    inline void SetOperationsConfig(MediaAnalysisOperationsConfig&& value) { m_operationsConfig = std::move(value); }
    inline GetMediaAnalysisJobResult& WithOperationsConfig(const MediaAnalysisOperationsConfig& value) { SetOperationsConfig(value); return *this;}
    inline GetMediaAnalysisJobResult& WithOperationsConfig(MediaAnalysisOperationsConfig&& value) { SetOperationsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline const MediaAnalysisJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const MediaAnalysisJobStatus& value) { m_status = value; }
    inline void SetStatus(MediaAnalysisJobStatus&& value) { m_status = std::move(value); }
    inline GetMediaAnalysisJobResult& WithStatus(const MediaAnalysisJobStatus& value) { SetStatus(value); return *this;}
    inline GetMediaAnalysisJobResult& WithStatus(MediaAnalysisJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline const MediaAnalysisJobFailureDetails& GetFailureDetails() const{ return m_failureDetails; }
    inline void SetFailureDetails(const MediaAnalysisJobFailureDetails& value) { m_failureDetails = value; }
    inline void SetFailureDetails(MediaAnalysisJobFailureDetails&& value) { m_failureDetails = std::move(value); }
    inline GetMediaAnalysisJobResult& WithFailureDetails(const MediaAnalysisJobFailureDetails& value) { SetFailureDetails(value); return *this;}
    inline GetMediaAnalysisJobResult& WithFailureDetails(MediaAnalysisJobFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }
    inline GetMediaAnalysisJobResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline GetMediaAnalysisJobResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestamp = value; }
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestamp = std::move(value); }
    inline GetMediaAnalysisJobResult& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}
    inline GetMediaAnalysisJobResult& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline const MediaAnalysisInput& GetInput() const{ return m_input; }
    inline void SetInput(const MediaAnalysisInput& value) { m_input = value; }
    inline void SetInput(MediaAnalysisInput&& value) { m_input = std::move(value); }
    inline GetMediaAnalysisJobResult& WithInput(const MediaAnalysisInput& value) { SetInput(value); return *this;}
    inline GetMediaAnalysisJobResult& WithInput(MediaAnalysisInput&& value) { SetInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const MediaAnalysisOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(MediaAnalysisOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline GetMediaAnalysisJobResult& WithOutputConfig(const MediaAnalysisOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline GetMediaAnalysisJobResult& WithOutputConfig(MediaAnalysisOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline GetMediaAnalysisJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline GetMediaAnalysisJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline GetMediaAnalysisJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline const MediaAnalysisResults& GetResults() const{ return m_results; }
    inline void SetResults(const MediaAnalysisResults& value) { m_results = value; }
    inline void SetResults(MediaAnalysisResults&& value) { m_results = std::move(value); }
    inline GetMediaAnalysisJobResult& WithResults(const MediaAnalysisResults& value) { SetResults(value); return *this;}
    inline GetMediaAnalysisJobResult& WithResults(MediaAnalysisResults&& value) { SetResults(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline const MediaAnalysisManifestSummary& GetManifestSummary() const{ return m_manifestSummary; }
    inline void SetManifestSummary(const MediaAnalysisManifestSummary& value) { m_manifestSummary = value; }
    inline void SetManifestSummary(MediaAnalysisManifestSummary&& value) { m_manifestSummary = std::move(value); }
    inline GetMediaAnalysisJobResult& WithManifestSummary(const MediaAnalysisManifestSummary& value) { SetManifestSummary(value); return *this;}
    inline GetMediaAnalysisJobResult& WithManifestSummary(MediaAnalysisManifestSummary&& value) { SetManifestSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMediaAnalysisJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMediaAnalysisJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMediaAnalysisJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;

    Aws::String m_jobName;

    MediaAnalysisOperationsConfig m_operationsConfig;

    MediaAnalysisJobStatus m_status;

    MediaAnalysisJobFailureDetails m_failureDetails;

    Aws::Utils::DateTime m_creationTimestamp;

    Aws::Utils::DateTime m_completionTimestamp;

    MediaAnalysisInput m_input;

    MediaAnalysisOutputConfig m_outputConfig;

    Aws::String m_kmsKeyId;

    MediaAnalysisResults m_results;

    MediaAnalysisManifestSummary m_manifestSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
