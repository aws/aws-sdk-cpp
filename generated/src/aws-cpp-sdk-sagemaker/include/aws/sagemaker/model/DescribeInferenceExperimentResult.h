/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/sagemaker/model/InferenceExperimentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EndpointMetadata.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExperimentDataStorageConfig.h>
#include <aws/sagemaker/model/ShadowModeConfig.h>
#include <aws/sagemaker/model/ModelVariantConfigSummary.h>
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
  class DescribeInferenceExperimentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult() = default;
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeInferenceExperimentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the inference experiment being described.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeInferenceExperimentResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the inference experiment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeInferenceExperimentResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the inference experiment.</p>
     */
    inline InferenceExperimentType GetType() const { return m_type; }
    inline void SetType(InferenceExperimentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeInferenceExperimentResult& WithType(InferenceExperimentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration for which the inference experiment ran or will run.</p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const { return m_schedule; }
    template<typename ScheduleT = InferenceExperimentSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InferenceExperimentSchedule>
    DescribeInferenceExperimentResult& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the inference experiment. The following are the possible
     * statuses for an inference experiment: </p> <ul> <li> <p> <code>Creating</code> -
     * Amazon SageMaker is creating your experiment. </p> </li> <li> <p>
     * <code>Created</code> - Amazon SageMaker has finished the creation of your
     * experiment and will begin the experiment at the scheduled time. </p> </li> <li>
     * <p> <code>Updating</code> - When you make changes to your experiment, your
     * experiment shows as updating. </p> </li> <li> <p> <code>Starting</code> - Amazon
     * SageMaker is beginning your experiment. </p> </li> <li> <p> <code>Running</code>
     * - Your experiment is in progress. </p> </li> <li> <p> <code>Stopping</code> -
     * Amazon SageMaker is stopping your experiment. </p> </li> <li> <p>
     * <code>Completed</code> - Your experiment has completed. </p> </li> <li> <p>
     * <code>Cancelled</code> - When you conclude your experiment early using the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StopInferenceExperiment.html">StopInferenceExperiment</a>
     * API, or if any operation fails with an unexpected error, it shows as cancelled.
     * </p> </li> </ul>
     */
    inline InferenceExperimentStatus GetStatus() const { return m_status; }
    inline void SetStatus(InferenceExperimentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeInferenceExperimentResult& WithStatus(InferenceExperimentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message or client-specified <code>Reason</code> from the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_StopInferenceExperiment.html">StopInferenceExperiment</a>
     * API, that explains the status of the inference experiment. </p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    DescribeInferenceExperimentResult& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeInferenceExperimentResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which you created the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeInferenceExperimentResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp at which the inference experiment was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    DescribeInferenceExperimentResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which you last modified the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeInferenceExperimentResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeInferenceExperimentResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of the endpoint on which the inference experiment ran.</p>
     */
    inline const EndpointMetadata& GetEndpointMetadata() const { return m_endpointMetadata; }
    template<typename EndpointMetadataT = EndpointMetadata>
    void SetEndpointMetadata(EndpointMetadataT&& value) { m_endpointMetadataHasBeenSet = true; m_endpointMetadata = std::forward<EndpointMetadataT>(value); }
    template<typename EndpointMetadataT = EndpointMetadata>
    DescribeInferenceExperimentResult& WithEndpointMetadata(EndpointMetadataT&& value) { SetEndpointMetadata(std::forward<EndpointMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ModelVariantConfigSummary</code> objects. There is one for
     * each variant in the inference experiment. Each
     * <code>ModelVariantConfigSummary</code> object in the array describes the
     * infrastructure configuration for deploying the corresponding variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfigSummary>& GetModelVariants() const { return m_modelVariants; }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfigSummary>>
    void SetModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = std::forward<ModelVariantsT>(value); }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfigSummary>>
    DescribeInferenceExperimentResult& WithModelVariants(ModelVariantsT&& value) { SetModelVariants(std::forward<ModelVariantsT>(value)); return *this;}
    template<typename ModelVariantsT = ModelVariantConfigSummary>
    DescribeInferenceExperimentResult& AddModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.emplace_back(std::forward<ModelVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 location and configuration for storing inference request and
     * response data.</p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const { return m_dataStorageConfig; }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    void SetDataStorageConfig(DataStorageConfigT&& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = std::forward<DataStorageConfigT>(value); }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    DescribeInferenceExperimentResult& WithDataStorageConfig(DataStorageConfigT&& value) { SetDataStorageConfig(std::forward<DataStorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type,
     * which shows the production variant that takes all the inference requests, and
     * the shadow variant to which Amazon SageMaker replicates a percentage of the
     * inference requests. For the shadow variant it also shows the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const { return m_shadowModeConfig; }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    void SetShadowModeConfig(ShadowModeConfigT&& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = std::forward<ShadowModeConfigT>(value); }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    DescribeInferenceExperimentResult& WithShadowModeConfig(ShadowModeConfigT&& value) { SetShadowModeConfig(std::forward<ShadowModeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateInferenceExperiment.html">CreateInferenceExperiment</a>.
     * </p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    DescribeInferenceExperimentResult& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInferenceExperimentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentType m_type{InferenceExperimentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InferenceExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    InferenceExperimentStatus m_status{InferenceExperimentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EndpointMetadata m_endpointMetadata;
    bool m_endpointMetadataHasBeenSet = false;

    Aws::Vector<ModelVariantConfigSummary> m_modelVariants;
    bool m_modelVariantsHasBeenSet = false;

    InferenceExperimentDataStorageConfig m_dataStorageConfig;
    bool m_dataStorageConfigHasBeenSet = false;

    ShadowModeConfig m_shadowModeConfig;
    bool m_shadowModeConfigHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
