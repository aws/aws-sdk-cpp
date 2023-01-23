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
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult();
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeEdgePackagingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobArn() const{ return m_edgePackagingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobArn(const Aws::String& value) { m_edgePackagingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobArn(Aws::String&& value) { m_edgePackagingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobArn(const char* value) { m_edgePackagingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobArn(const Aws::String& value) { SetEdgePackagingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobArn(Aws::String&& value) { SetEdgePackagingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobArn(const char* value) { SetEdgePackagingJobArn(value); return *this;}


    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const{ return m_edgePackagingJobName; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const Aws::String& value) { m_edgePackagingJobName = value; }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(Aws::String&& value) { m_edgePackagingJobName = std::move(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline void SetEdgePackagingJobName(const char* value) { m_edgePackagingJobName.assign(value); }

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobName(const Aws::String& value) { SetEdgePackagingJobName(value); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobName(Aws::String&& value) { SetEdgePackagingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobName(const char* value) { SetEdgePackagingJobName(value); return *this;}


    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobName = value; }

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobName = std::move(value); }

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobName.assign(value); }

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline DescribeEdgePackagingJobResult& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline DescribeEdgePackagingJobResult& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the SageMaker Neo compilation job that is used to locate model
     * artifacts that are being packaged.</p>
     */
    inline DescribeEdgePackagingJobResult& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelName = value; }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelName = std::move(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline void SetModelName(const char* value) { m_modelName.assign(value); }

    /**
     * <p>The name of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The version of the model.</p>
     */
    inline const Aws::String& GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const Aws::String& value) { m_modelVersion = value; }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(Aws::String&& value) { m_modelVersion = std::move(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline void SetModelVersion(const char* value) { m_modelVersion.assign(value); }

    /**
     * <p>The version of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelVersion(const Aws::String& value) { SetModelVersion(value); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelVersion(Aws::String&& value) { SetModelVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the model.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelVersion(const char* value) { SetModelVersion(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline DescribeEdgePackagingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline DescribeEdgePackagingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to download and upload the model, and to contact Neo.</p>
     */
    inline DescribeEdgePackagingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline const EdgeOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline void SetOutputConfig(const EdgeOutputConfig& value) { m_outputConfig = value; }

    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline void SetOutputConfig(EdgeOutputConfig&& value) { m_outputConfig = std::move(value); }

    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithOutputConfig(const EdgeOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The output configuration for the edge packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithOutputConfig(EdgeOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline const Aws::String& GetResourceKey() const{ return m_resourceKey; }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline void SetResourceKey(const Aws::String& value) { m_resourceKey = value; }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline void SetResourceKey(Aws::String&& value) { m_resourceKey = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline void SetResourceKey(const char* value) { m_resourceKey.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline DescribeEdgePackagingJobResult& WithResourceKey(const Aws::String& value) { SetResourceKey(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline DescribeEdgePackagingJobResult& WithResourceKey(Aws::String&& value) { SetResourceKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key to use when encrypting the EBS volume the job
     * run on.</p>
     */
    inline DescribeEdgePackagingJobResult& WithResourceKey(const char* value) { SetResourceKey(value); return *this;}


    /**
     * <p>The current status of the packaging job.</p>
     */
    inline const EdgePackagingJobStatus& GetEdgePackagingJobStatus() const{ return m_edgePackagingJobStatus; }

    /**
     * <p>The current status of the packaging job.</p>
     */
    inline void SetEdgePackagingJobStatus(const EdgePackagingJobStatus& value) { m_edgePackagingJobStatus = value; }

    /**
     * <p>The current status of the packaging job.</p>
     */
    inline void SetEdgePackagingJobStatus(EdgePackagingJobStatus&& value) { m_edgePackagingJobStatus = std::move(value); }

    /**
     * <p>The current status of the packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatus(const EdgePackagingJobStatus& value) { SetEdgePackagingJobStatus(value); return *this;}

    /**
     * <p>The current status of the packaging job.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatus(EdgePackagingJobStatus&& value) { SetEdgePackagingJobStatus(std::move(value)); return *this;}


    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline const Aws::String& GetEdgePackagingJobStatusMessage() const{ return m_edgePackagingJobStatusMessage; }

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline void SetEdgePackagingJobStatusMessage(const Aws::String& value) { m_edgePackagingJobStatusMessage = value; }

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline void SetEdgePackagingJobStatusMessage(Aws::String&& value) { m_edgePackagingJobStatusMessage = std::move(value); }

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline void SetEdgePackagingJobStatusMessage(const char* value) { m_edgePackagingJobStatusMessage.assign(value); }

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatusMessage(const Aws::String& value) { SetEdgePackagingJobStatusMessage(value); return *this;}

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatusMessage(Aws::String&& value) { SetEdgePackagingJobStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Returns a message describing the job status and error messages.</p>
     */
    inline DescribeEdgePackagingJobResult& WithEdgePackagingJobStatusMessage(const char* value) { SetEdgePackagingJobStatusMessage(value); return *this;}


    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline DescribeEdgePackagingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp of when the packaging job was created.</p>
     */
    inline DescribeEdgePackagingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline DescribeEdgePackagingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The timestamp of when the job was last updated.</p>
     */
    inline DescribeEdgePackagingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline const Aws::String& GetModelArtifact() const{ return m_modelArtifact; }

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline void SetModelArtifact(const Aws::String& value) { m_modelArtifact = value; }

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline void SetModelArtifact(Aws::String&& value) { m_modelArtifact = std::move(value); }

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline void SetModelArtifact(const char* value) { m_modelArtifact.assign(value); }

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelArtifact(const Aws::String& value) { SetModelArtifact(value); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelArtifact(Aws::String&& value) { SetModelArtifact(std::move(value)); return *this;}

    /**
     * <p>The Amazon Simple Storage (S3) URI where model artifacts ares stored.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelArtifact(const char* value) { SetModelArtifact(value); return *this;}


    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline const Aws::String& GetModelSignature() const{ return m_modelSignature; }

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline void SetModelSignature(const Aws::String& value) { m_modelSignature = value; }

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline void SetModelSignature(Aws::String&& value) { m_modelSignature = std::move(value); }

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline void SetModelSignature(const char* value) { m_modelSignature.assign(value); }

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelSignature(const Aws::String& value) { SetModelSignature(value); return *this;}

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelSignature(Aws::String&& value) { SetModelSignature(std::move(value)); return *this;}

    /**
     * <p>The signature document of files in the model artifact.</p>
     */
    inline DescribeEdgePackagingJobResult& WithModelSignature(const char* value) { SetModelSignature(value); return *this;}


    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline const EdgePresetDeploymentOutput& GetPresetDeploymentOutput() const{ return m_presetDeploymentOutput; }

    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline void SetPresetDeploymentOutput(const EdgePresetDeploymentOutput& value) { m_presetDeploymentOutput = value; }

    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline void SetPresetDeploymentOutput(EdgePresetDeploymentOutput&& value) { m_presetDeploymentOutput = std::move(value); }

    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline DescribeEdgePackagingJobResult& WithPresetDeploymentOutput(const EdgePresetDeploymentOutput& value) { SetPresetDeploymentOutput(value); return *this;}

    /**
     * <p>The output of a SageMaker Edge Manager deployable resource.</p>
     */
    inline DescribeEdgePackagingJobResult& WithPresetDeploymentOutput(EdgePresetDeploymentOutput&& value) { SetPresetDeploymentOutput(std::move(value)); return *this;}

  private:

    Aws::String m_edgePackagingJobArn;

    Aws::String m_edgePackagingJobName;

    Aws::String m_compilationJobName;

    Aws::String m_modelName;

    Aws::String m_modelVersion;

    Aws::String m_roleArn;

    EdgeOutputConfig m_outputConfig;

    Aws::String m_resourceKey;

    EdgePackagingJobStatus m_edgePackagingJobStatus;

    Aws::String m_edgePackagingJobStatusMessage;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_modelArtifact;

    Aws::String m_modelSignature;

    EdgePresetDeploymentOutput m_presetDeploymentOutput;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
