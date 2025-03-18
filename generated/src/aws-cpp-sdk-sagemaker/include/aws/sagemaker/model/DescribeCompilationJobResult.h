/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompilationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/StoppingCondition.h>
#include <aws/sagemaker/model/ModelArtifacts.h>
#include <aws/sagemaker/model/ModelDigests.h>
#include <aws/sagemaker/model/InputConfig.h>
#include <aws/sagemaker/model/OutputConfig.h>
#include <aws/sagemaker/model/NeoVpcConfig.h>
#include <aws/sagemaker/model/DerivedInformation.h>
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
  class DescribeCompilationJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeCompilationJobResult() = default;
    AWS_SAGEMAKER_API DescribeCompilationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeCompilationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    DescribeCompilationJobResult& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model compilation job.</p>
     */
    inline const Aws::String& GetCompilationJobArn() const { return m_compilationJobArn; }
    template<typename CompilationJobArnT = Aws::String>
    void SetCompilationJobArn(CompilationJobArnT&& value) { m_compilationJobArnHasBeenSet = true; m_compilationJobArn = std::forward<CompilationJobArnT>(value); }
    template<typename CompilationJobArnT = Aws::String>
    DescribeCompilationJobResult& WithCompilationJobArn(CompilationJobArnT&& value) { SetCompilationJobArn(std::forward<CompilationJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model compilation job.</p>
     */
    inline CompilationJobStatus GetCompilationJobStatus() const { return m_compilationJobStatus; }
    inline void SetCompilationJobStatus(CompilationJobStatus value) { m_compilationJobStatusHasBeenSet = true; m_compilationJobStatus = value; }
    inline DescribeCompilationJobResult& WithCompilationJobStatus(CompilationJobStatus value) { SetCompilationJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job started the
     * <code>CompilationJob</code> instances. </p> <p>You are billed for the time
     * between this timestamp and the timestamp in the <code>CompilationEndTime</code>
     * field. In Amazon CloudWatch Logs, the start time might be later than this time.
     * That's because it takes time to download the compilation job, which depends on
     * the size of the compilation job container. </p>
     */
    inline const Aws::Utils::DateTime& GetCompilationStartTime() const { return m_compilationStartTime; }
    template<typename CompilationStartTimeT = Aws::Utils::DateTime>
    void SetCompilationStartTime(CompilationStartTimeT&& value) { m_compilationStartTimeHasBeenSet = true; m_compilationStartTime = std::forward<CompilationStartTimeT>(value); }
    template<typename CompilationStartTimeT = Aws::Utils::DateTime>
    DescribeCompilationJobResult& WithCompilationStartTime(CompilationStartTimeT&& value) { SetCompilationStartTime(std::forward<CompilationStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the model compilation job on a compilation job instance ended.
     * For a successful or stopped job, this is when the job's model artifacts have
     * finished uploading. For a failed job, this is when Amazon SageMaker AI detected
     * that the job failed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompilationEndTime() const { return m_compilationEndTime; }
    template<typename CompilationEndTimeT = Aws::Utils::DateTime>
    void SetCompilationEndTime(CompilationEndTimeT&& value) { m_compilationEndTimeHasBeenSet = true; m_compilationEndTime = std::forward<CompilationEndTimeT>(value); }
    template<typename CompilationEndTimeT = Aws::Utils::DateTime>
    DescribeCompilationJobResult& WithCompilationEndTime(CompilationEndTimeT&& value) { SetCompilationEndTime(std::forward<CompilationEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker AI ends the compilation job. Use this
     * API to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    DescribeCompilationJobResult& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inference image to use when compiling a model. Specify an image only if
     * the target device is a cloud instance.</p>
     */
    inline const Aws::String& GetInferenceImage() const { return m_inferenceImage; }
    template<typename InferenceImageT = Aws::String>
    void SetInferenceImage(InferenceImageT&& value) { m_inferenceImageHasBeenSet = true; m_inferenceImage = std::forward<InferenceImageT>(value); }
    template<typename InferenceImageT = Aws::String>
    DescribeCompilationJobResult& WithInferenceImage(InferenceImageT&& value) { SetInferenceImage(std::forward<InferenceImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the versioned model package that was
     * provided to SageMaker Neo when you initiated a compilation job.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const { return m_modelPackageVersionArn; }
    template<typename ModelPackageVersionArnT = Aws::String>
    void SetModelPackageVersionArn(ModelPackageVersionArnT&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::forward<ModelPackageVersionArnT>(value); }
    template<typename ModelPackageVersionArnT = Aws::String>
    DescribeCompilationJobResult& WithModelPackageVersionArn(ModelPackageVersionArnT&& value) { SetModelPackageVersionArn(std::forward<ModelPackageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model compilation job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeCompilationJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the status of the model compilation job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeCompilationJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a model compilation job failed, the reason it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeCompilationJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location in Amazon S3 that has been configured for
     * storing the model artifacts used in the compilation job.</p>
     */
    inline const ModelArtifacts& GetModelArtifacts() const { return m_modelArtifacts; }
    template<typename ModelArtifactsT = ModelArtifacts>
    void SetModelArtifacts(ModelArtifactsT&& value) { m_modelArtifactsHasBeenSet = true; m_modelArtifacts = std::forward<ModelArtifactsT>(value); }
    template<typename ModelArtifactsT = ModelArtifacts>
    DescribeCompilationJobResult& WithModelArtifacts(ModelArtifactsT&& value) { SetModelArtifacts(std::forward<ModelArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a BLAKE2 hash value that identifies the compiled model artifacts in
     * Amazon S3.</p>
     */
    inline const ModelDigests& GetModelDigests() const { return m_modelDigests; }
    template<typename ModelDigestsT = ModelDigests>
    void SetModelDigests(ModelDigestsT&& value) { m_modelDigestsHasBeenSet = true; m_modelDigests = std::forward<ModelDigestsT>(value); }
    template<typename ModelDigestsT = ModelDigests>
    DescribeCompilationJobResult& WithModelDigests(ModelDigestsT&& value) { SetModelDigests(std::forward<ModelDigestsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that Amazon SageMaker AI
     * assumes to perform the model compilation job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeCompilationJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the location in Amazon S3 of the input model artifacts, the
     * name and shape of the expected data inputs, and the framework in which the model
     * was trained.</p>
     */
    inline const InputConfig& GetInputConfig() const { return m_inputConfig; }
    template<typename InputConfigT = InputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = InputConfig>
    DescribeCompilationJobResult& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the output location for the compiled model and the target
     * device that the model runs on.</p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    DescribeCompilationJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your compilation job to connect to.
     * Control access to your models by configuring the VPC. For more information, see
     * <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const NeoVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    template<typename VpcConfigT = NeoVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = NeoVpcConfig>
    DescribeCompilationJobResult& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information that SageMaker Neo automatically derived about the model.</p>
     */
    inline const DerivedInformation& GetDerivedInformation() const { return m_derivedInformation; }
    template<typename DerivedInformationT = DerivedInformation>
    void SetDerivedInformation(DerivedInformationT&& value) { m_derivedInformationHasBeenSet = true; m_derivedInformation = std::forward<DerivedInformationT>(value); }
    template<typename DerivedInformationT = DerivedInformation>
    DescribeCompilationJobResult& WithDerivedInformation(DerivedInformationT&& value) { SetDerivedInformation(std::forward<DerivedInformationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCompilationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_compilationJobArn;
    bool m_compilationJobArnHasBeenSet = false;

    CompilationJobStatus m_compilationJobStatus{CompilationJobStatus::NOT_SET};
    bool m_compilationJobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_compilationStartTime{};
    bool m_compilationStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_compilationEndTime{};
    bool m_compilationEndTimeHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::String m_inferenceImage;
    bool m_inferenceImageHasBeenSet = false;

    Aws::String m_modelPackageVersionArn;
    bool m_modelPackageVersionArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    ModelArtifacts m_modelArtifacts;
    bool m_modelArtifactsHasBeenSet = false;

    ModelDigests m_modelDigests;
    bool m_modelDigestsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    InputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    NeoVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    DerivedInformation m_derivedInformation;
    bool m_derivedInformationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
