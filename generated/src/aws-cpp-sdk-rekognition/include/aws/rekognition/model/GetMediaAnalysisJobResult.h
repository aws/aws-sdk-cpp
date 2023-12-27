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


    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the media analysis job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline const MediaAnalysisOperationsConfig& GetOperationsConfig() const{ return m_operationsConfig; }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline void SetOperationsConfig(const MediaAnalysisOperationsConfig& value) { m_operationsConfig = value; }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline void SetOperationsConfig(MediaAnalysisOperationsConfig&& value) { m_operationsConfig = std::move(value); }

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline GetMediaAnalysisJobResult& WithOperationsConfig(const MediaAnalysisOperationsConfig& value) { SetOperationsConfig(value); return *this;}

    /**
     * <p>Operation configurations that were provided during job creation.</p>
     */
    inline GetMediaAnalysisJobResult& WithOperationsConfig(MediaAnalysisOperationsConfig&& value) { SetOperationsConfig(std::move(value)); return *this;}


    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline const MediaAnalysisJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline void SetStatus(const MediaAnalysisJobStatus& value) { m_status = value; }

    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline void SetStatus(MediaAnalysisJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithStatus(const MediaAnalysisJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the media analysis job.</p>
     */
    inline GetMediaAnalysisJobResult& WithStatus(MediaAnalysisJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline const MediaAnalysisJobFailureDetails& GetFailureDetails() const{ return m_failureDetails; }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline void SetFailureDetails(const MediaAnalysisJobFailureDetails& value) { m_failureDetails = value; }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline void SetFailureDetails(MediaAnalysisJobFailureDetails&& value) { m_failureDetails = std::move(value); }

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline GetMediaAnalysisJobResult& WithFailureDetails(const MediaAnalysisJobFailureDetails& value) { SetFailureDetails(value); return *this;}

    /**
     * <p>Details about the error that resulted in failure of the job.</p>
     */
    inline GetMediaAnalysisJobResult& WithFailureDetails(MediaAnalysisJobFailureDetails&& value) { SetFailureDetails(std::move(value)); return *this;}


    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestamp = value; }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestamp = std::move(value); }

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline GetMediaAnalysisJobResult& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The Unix date and time when the job was started.</p>
     */
    inline GetMediaAnalysisJobResult& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTimestamp() const{ return m_completionTimestamp; }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline void SetCompletionTimestamp(const Aws::Utils::DateTime& value) { m_completionTimestamp = value; }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline void SetCompletionTimestamp(Aws::Utils::DateTime&& value) { m_completionTimestamp = std::move(value); }

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline GetMediaAnalysisJobResult& WithCompletionTimestamp(const Aws::Utils::DateTime& value) { SetCompletionTimestamp(value); return *this;}

    /**
     * <p>The Unix date and time when the job finished.</p>
     */
    inline GetMediaAnalysisJobResult& WithCompletionTimestamp(Aws::Utils::DateTime&& value) { SetCompletionTimestamp(std::move(value)); return *this;}


    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline const MediaAnalysisInput& GetInput() const{ return m_input; }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline void SetInput(const MediaAnalysisInput& value) { m_input = value; }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline void SetInput(MediaAnalysisInput&& value) { m_input = std::move(value); }

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline GetMediaAnalysisJobResult& WithInput(const MediaAnalysisInput& value) { SetInput(value); return *this;}

    /**
     * <p>Reference to the input manifest that was provided in the job creation
     * request.</p>
     */
    inline GetMediaAnalysisJobResult& WithInput(MediaAnalysisInput&& value) { SetInput(std::move(value)); return *this;}


    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline const MediaAnalysisOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline void SetOutputConfig(const MediaAnalysisOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline void SetOutputConfig(MediaAnalysisOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline GetMediaAnalysisJobResult& WithOutputConfig(const MediaAnalysisOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Output configuration that was provided in the creation request.</p>
     */
    inline GetMediaAnalysisJobResult& WithOutputConfig(MediaAnalysisOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline GetMediaAnalysisJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline GetMediaAnalysisJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>KMS Key that was provided in the creation request.</p>
     */
    inline GetMediaAnalysisJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline const MediaAnalysisResults& GetResults() const{ return m_results; }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline void SetResults(const MediaAnalysisResults& value) { m_results = value; }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline void SetResults(MediaAnalysisResults&& value) { m_results = std::move(value); }

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline GetMediaAnalysisJobResult& WithResults(const MediaAnalysisResults& value) { SetResults(value); return *this;}

    /**
     * <p>Output manifest that contains prediction results.</p>
     */
    inline GetMediaAnalysisJobResult& WithResults(MediaAnalysisResults&& value) { SetResults(std::move(value)); return *this;}


    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline const MediaAnalysisManifestSummary& GetManifestSummary() const{ return m_manifestSummary; }

    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline void SetManifestSummary(const MediaAnalysisManifestSummary& value) { m_manifestSummary = value; }

    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline void SetManifestSummary(MediaAnalysisManifestSummary&& value) { m_manifestSummary = std::move(value); }

    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline GetMediaAnalysisJobResult& WithManifestSummary(const MediaAnalysisManifestSummary& value) { SetManifestSummary(value); return *this;}

    /**
     * <p>The summary manifest provides statistics on input manifest and errors
     * identified in the input manifest.</p>
     */
    inline GetMediaAnalysisJobResult& WithManifestSummary(MediaAnalysisManifestSummary&& value) { SetManifestSummary(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetMediaAnalysisJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetMediaAnalysisJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetMediaAnalysisJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
