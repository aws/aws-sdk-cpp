/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/EdgeOutputConfig.h>
#include <aws/sagemaker/model/EdgePackagingJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EdgePresetDeploymentOutput.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeEdgePackagingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult() = default;
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobArn() const { return m_edgePackagingJobArn; }
    template<typename EdgePackagingJobArnT = Aws::String>
    void SetEdgePackagingJobArn(EdgePackagingJobArnT&& value) { m_edgePackagingJobArnHasBeenSet = true; m_edgePackagingJobArn = std::forward<EdgePackagingJobArnT>(value); }
    template<typename EdgePackagingJobArnT = Aws::String>
    DescribeEdgePackagingJobResult& WithEdgePackagingJobArn(EdgePackagingJobArnT&& value) { SetEdgePackagingJobArn(std::forward<EdgePackagingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const { return m_edgePackagingJobName; }
    template<typename EdgePackagingJobNameT = Aws::String>
    void SetEdgePackagingJobName(EdgePackagingJobNameT&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::forward<EdgePackagingJobNameT>(value); }
    template<typename EdgePackagingJobNameT = Aws::String>
    DescribeEdgePackagingJobResult& WithEdgePackagingJobName(EdgePackagingJobNameT&& value) { SetEdgePackagingJobName(std::forward<EdgePackagingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    DescribeEdgePackagingJobResult& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    DescribeEdgePackagingJobResult& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const { return m_modelVersion; }
    template<typename ModelVersionT = Aws::String>
    void SetModelVersion(ModelVersionT&& value) { m_modelVersionHasBeenSet = true; m_modelVersion = std::forward<ModelVersionT>(value); }
    template<typename ModelVersionT = Aws::String>
    DescribeEdgePackagingJobResult& WithModelVersion(ModelVersionT&& value) { SetModelVersion(std::forward<ModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeEdgePackagingJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = EdgeOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = EdgeOutputConfig>
    DescribeEdgePackagingJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline const Aws::String& GetResourceKey() const { return m_resourceKey; }
    template<typename ResourceKeyT = Aws::String>
    void SetResourceKey(ResourceKeyT&& value) { m_resourceKeyHasBeenSet = true; m_resourceKey = std::forward<ResourceKeyT>(value); }
    template<typename ResourceKeyT = Aws::String>
    DescribeEdgePackagingJobResult& WithResourceKey(ResourceKeyT&& value) { SetResourceKey(std::forward<ResourceKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the packaging job.</p>
     */
    inline EdgePackagingJobStatus GetEdgePackagingJobStatus() const { return m_edgePackagingJobStatus; }
    inline void SetEdgePackagingJobStatus(EdgePackagingJobStatus value) { m_edgePackagingJobStatusHasBeenSet = true; m_edgePackagingJobStatus = value; }
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatus(EdgePackagingJobStatus value) { SetEdgePackagingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline const Aws::String& GetEdgePackagingJobStatusMessage() const { return m_edgePackagingJobStatusMessage; }
    template<typename EdgePackagingJobStatusMessageT = Aws::String>
    void SetEdgePackagingJobStatusMessage(EdgePackagingJobStatusMessageT&& value) { m_edgePackagingJobStatusMessageHasBeenSet = true; m_edgePackagingJobStatusMessage = std::forward<EdgePackagingJobStatusMessageT>(value); }
    template<typename EdgePackagingJobStatusMessageT = Aws::String>
    DescribeEdgePackagingJobResult& WithEdgePackagingJobStatusMessage(EdgePackagingJobStatusMessageT&& value) { SetEdgePackagingJobStatusMessage(std::forward<EdgePackagingJobStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeEdgePackagingJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeEdgePackagingJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline const Aws::String& GetModelArtifact() const { return m_modelArtifact; }
    template<typename ModelArtifactT = Aws::String>
    void SetModelArtifact(ModelArtifactT&& value) { m_modelArtifactHasBeenSet = true; m_modelArtifact = std::forward<ModelArtifactT>(value); }
    template<typename ModelArtifactT = Aws::String>
    DescribeEdgePackagingJobResult& WithModelArtifact(ModelArtifactT&& value) { SetModelArtifact(std::forward<ModelArtifactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline const Aws::String& GetModelSignature() const { return m_modelSignature; }
    template<typename ModelSignatureT = Aws::String>
    void SetModelSignature(ModelSignatureT&& value) { m_modelSignatureHasBeenSet = true; m_modelSignature = std::forward<ModelSignatureT>(value); }
    template<typename ModelSignatureT = Aws::String>
    DescribeEdgePackagingJobResult& WithModelSignature(ModelSignatureT&& value) { SetModelSignature(std::forward<ModelSignatureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline const EdgePresetDeploymentOutput& GetPresetDeploymentOutput() const { return m_presetDeploymentOutput; }
    template<typename PresetDeploymentOutputT = EdgePresetDeploymentOutput>
    void SetPresetDeploymentOutput(PresetDeploymentOutputT&& value) { m_presetDeploymentOutputHasBeenSet = true; m_presetDeploymentOutput = std::forward<PresetDeploymentOutputT>(value); }
    template<typename PresetDeploymentOutputT = EdgePresetDeploymentOutput>
    DescribeEdgePackagingJobResult& WithPresetDeploymentOutput(PresetDeploymentOutputT&& value) { SetPresetDeploymentOutput(std::forward<PresetDeploymentOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEdgePackagingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgePackagingJobArn;
    bool m_edgePackagingJobArnHasBeenSet = false;

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_modelVersion;
    bool m_modelVersionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EdgeOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_resourceKey;
    bool m_resourceKeyHasBeenSet = false;

    EdgePackagingJobStatus m_edgePackagingJobStatus{EdgePackagingJobStatus::NOT_SET};
    bool m_edgePackagingJobStatusHasBeenSet = false;

    Aws::String m_edgePackagingJobStatusMessage;
    bool m_edgePackagingJobStatusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_modelArtifact;
    bool m_modelArtifactHasBeenSet = false;

    Aws::String m_modelSignature;
    bool m_modelSignatureHasBeenSet = false;

    EdgePresetDeploymentOutput m_presetDeploymentOutput;
    bool m_presetDeploymentOutputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
