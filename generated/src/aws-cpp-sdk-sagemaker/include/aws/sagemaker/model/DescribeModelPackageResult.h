/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
#include <aws/sagemaker/model/ModelPackageValidationSpecification.h>
#include <aws/sagemaker/model/ModelPackageStatus.h>
#include <aws/sagemaker/model/ModelPackageStatusDetails.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/sagemaker/model/ModelMetrics.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/DriftCheckBaselines.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SkipModelValidation.h>
#include <aws/sagemaker/model/ModelPackageSecurityConfig.h>
#include <aws/sagemaker/model/ModelPackageModelCard.h>
#include <aws/sagemaker/model/ModelLifeCycle.h>
#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
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
  class DescribeModelPackageResult
  {
  public:
    AWS_SAGEMAKER_API DescribeModelPackageResult() = default;
    AWS_SAGEMAKER_API DescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model package being described.</p>
     */
    inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
    template<typename ModelPackageNameT = Aws::String>
    void SetModelPackageName(ModelPackageNameT&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::forward<ModelPackageNameT>(value); }
    template<typename ModelPackageNameT = Aws::String>
    DescribeModelPackageResult& WithModelPackageName(ModelPackageNameT&& value) { SetModelPackageName(std::forward<ModelPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    DescribeModelPackageResult& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model package.</p>
     */
    inline int GetModelPackageVersion() const { return m_modelPackageVersion; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }
    inline DescribeModelPackageResult& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
    template<typename ModelPackageArnT = Aws::String>
    void SetModelPackageArn(ModelPackageArnT&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::forward<ModelPackageArnT>(value); }
    template<typename ModelPackageArnT = Aws::String>
    DescribeModelPackageResult& WithModelPackageArn(ModelPackageArnT&& value) { SetModelPackageArn(std::forward<ModelPackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief summary of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const { return m_modelPackageDescription; }
    template<typename ModelPackageDescriptionT = Aws::String>
    void SetModelPackageDescription(ModelPackageDescriptionT&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::forward<ModelPackageDescriptionT>(value); }
    template<typename ModelPackageDescriptionT = Aws::String>
    DescribeModelPackageResult& WithModelPackageDescription(ModelPackageDescriptionT&& value) { SetModelPackageDescription(std::forward<ModelPackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeModelPackageResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about inference jobs that you can run with models based on this model
     * package.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
    template<typename InferenceSpecificationT = InferenceSpecification>
    void SetInferenceSpecification(InferenceSpecificationT&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::forward<InferenceSpecificationT>(value); }
    template<typename InferenceSpecificationT = InferenceSpecification>
    DescribeModelPackageResult& WithInferenceSpecification(InferenceSpecificationT&& value) { SetInferenceSpecification(std::forward<InferenceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const { return m_sourceAlgorithmSpecification; }
    template<typename SourceAlgorithmSpecificationT = SourceAlgorithmSpecification>
    void SetSourceAlgorithmSpecification(SourceAlgorithmSpecificationT&& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = std::forward<SourceAlgorithmSpecificationT>(value); }
    template<typename SourceAlgorithmSpecificationT = SourceAlgorithmSpecification>
    DescribeModelPackageResult& WithSourceAlgorithmSpecification(SourceAlgorithmSpecificationT&& value) { SetSourceAlgorithmSpecification(std::forward<SourceAlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const { return m_validationSpecification; }
    template<typename ValidationSpecificationT = ModelPackageValidationSpecification>
    void SetValidationSpecification(ValidationSpecificationT&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::forward<ValidationSpecificationT>(value); }
    template<typename ValidationSpecificationT = ModelPackageValidationSpecification>
    DescribeModelPackageResult& WithValidationSpecification(ValidationSpecificationT&& value) { SetValidationSpecification(std::forward<ValidationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model package.</p>
     */
    inline ModelPackageStatus GetModelPackageStatus() const { return m_modelPackageStatus; }
    inline void SetModelPackageStatus(ModelPackageStatus value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }
    inline DescribeModelPackageResult& WithModelPackageStatus(ModelPackageStatus value) { SetModelPackageStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline const ModelPackageStatusDetails& GetModelPackageStatusDetails() const { return m_modelPackageStatusDetails; }
    template<typename ModelPackageStatusDetailsT = ModelPackageStatusDetails>
    void SetModelPackageStatusDetails(ModelPackageStatusDetailsT&& value) { m_modelPackageStatusDetailsHasBeenSet = true; m_modelPackageStatusDetails = std::forward<ModelPackageStatusDetailsT>(value); }
    template<typename ModelPackageStatusDetailsT = ModelPackageStatusDetails>
    DescribeModelPackageResult& WithModelPackageStatusDetails(ModelPackageStatusDetailsT&& value) { SetModelPackageStatusDetails(std::forward<ModelPackageStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the model package is certified for listing on Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const { return m_certifyForMarketplace; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }
    inline DescribeModelPackageResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model package.</p>
     */
    inline ModelApprovalStatus GetModelApprovalStatus() const { return m_modelApprovalStatus; }
    inline void SetModelApprovalStatus(ModelApprovalStatus value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline DescribeModelPackageResult& WithModelApprovalStatus(ModelApprovalStatus value) { SetModelApprovalStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribeModelPackageResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const { return m_metadataProperties; }
    template<typename MetadataPropertiesT = MetadataProperties>
    void SetMetadataProperties(MetadataPropertiesT&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::forward<MetadataPropertiesT>(value); }
    template<typename MetadataPropertiesT = MetadataProperties>
    DescribeModelPackageResult& WithMetadataProperties(MetadataPropertiesT&& value) { SetMetadataProperties(std::forward<MetadataPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics for the model.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const { return m_modelMetrics; }
    template<typename ModelMetricsT = ModelMetrics>
    void SetModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::forward<ModelMetricsT>(value); }
    template<typename ModelMetricsT = ModelMetrics>
    DescribeModelPackageResult& WithModelMetrics(ModelMetricsT&& value) { SetModelMetrics(std::forward<ModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeModelPackageResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribeModelPackageResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description provided for the model approval.</p>
     */
    inline const Aws::String& GetApprovalDescription() const { return m_approvalDescription; }
    template<typename ApprovalDescriptionT = Aws::String>
    void SetApprovalDescription(ApprovalDescriptionT&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::forward<ApprovalDescriptionT>(value); }
    template<typename ApprovalDescriptionT = Aws::String>
    DescribeModelPackageResult& WithApprovalDescription(ApprovalDescriptionT&& value) { SetApprovalDescription(std::forward<ApprovalDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    DescribeModelPackageResult& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    DescribeModelPackageResult& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const { return m_samplePayloadUrl; }
    template<typename SamplePayloadUrlT = Aws::String>
    void SetSamplePayloadUrl(SamplePayloadUrlT&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::forward<SamplePayloadUrlT>(value); }
    template<typename SamplePayloadUrlT = Aws::String>
    DescribeModelPackageResult& WithSamplePayloadUrl(SamplePayloadUrlT&& value) { SetSamplePayloadUrl(std::forward<SamplePayloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const { return m_customerMetadataProperties; }
    template<typename CustomerMetadataPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomerMetadataProperties(CustomerMetadataPropertiesT&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::forward<CustomerMetadataPropertiesT>(value); }
    template<typename CustomerMetadataPropertiesT = Aws::Map<Aws::String, Aws::String>>
    DescribeModelPackageResult& WithCustomerMetadataProperties(CustomerMetadataPropertiesT&& value) { SetCustomerMetadataProperties(std::forward<CustomerMetadataPropertiesT>(value)); return *this;}
    template<typename CustomerMetadataPropertiesKeyT = Aws::String, typename CustomerMetadataPropertiesValueT = Aws::String>
    DescribeModelPackageResult& AddCustomerMetadataProperties(CustomerMetadataPropertiesKeyT&& key, CustomerMetadataPropertiesValueT&& value) {
      m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::forward<CustomerMetadataPropertiesKeyT>(key), std::forward<CustomerMetadataPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline const DriftCheckBaselines& GetDriftCheckBaselines() const { return m_driftCheckBaselines; }
    template<typename DriftCheckBaselinesT = DriftCheckBaselines>
    void SetDriftCheckBaselines(DriftCheckBaselinesT&& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = std::forward<DriftCheckBaselinesT>(value); }
    template<typename DriftCheckBaselinesT = DriftCheckBaselines>
    DescribeModelPackageResult& WithDriftCheckBaselines(DriftCheckBaselinesT&& value) { SetDriftCheckBaselines(std::forward<DriftCheckBaselinesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const { return m_additionalInferenceSpecifications; }
    template<typename AdditionalInferenceSpecificationsT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    void SetAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = std::forward<AdditionalInferenceSpecificationsT>(value); }
    template<typename AdditionalInferenceSpecificationsT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    DescribeModelPackageResult& WithAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { SetAdditionalInferenceSpecifications(std::forward<AdditionalInferenceSpecificationsT>(value)); return *this;}
    template<typename AdditionalInferenceSpecificationsT = AdditionalInferenceSpecificationDefinition>
    DescribeModelPackageResult& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.emplace_back(std::forward<AdditionalInferenceSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if you want to skip model validation.</p>
     */
    inline SkipModelValidation GetSkipModelValidation() const { return m_skipModelValidation; }
    inline void SetSkipModelValidation(SkipModelValidation value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = value; }
    inline DescribeModelPackageResult& WithSkipModelValidation(SkipModelValidation value) { SetSkipModelValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline const Aws::String& GetSourceUri() const { return m_sourceUri; }
    template<typename SourceUriT = Aws::String>
    void SetSourceUri(SourceUriT&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::forward<SourceUriT>(value); }
    template<typename SourceUriT = Aws::String>
    DescribeModelPackageResult& WithSourceUri(SourceUriT&& value) { SetSourceUri(std::forward<SourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline const ModelPackageSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    template<typename SecurityConfigT = ModelPackageSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = ModelPackageSecurityConfig>
    DescribeModelPackageResult& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model card associated with the model package. Since
     * <code>ModelPackageModelCard</code> is tied to a model package, it is a specific
     * usage of a model card and its schema is simplified compared to the schema of
     * <code>ModelCard</code>. The <code>ModelPackageModelCard</code> schema does not
     * include <code>model_package_details</code>, and <code>model_overview</code> is
     * composed of the <code>model_creator</code> and <code>model_artifact</code>
     * properties. For more information about the model package model card schema, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-registry-details.html#model-card-schema">Model
     * package model card schema</a>. For more information about the model card
     * associated with the model package, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-registry-details.html">View
     * the Details of a Model Version</a>.</p>
     */
    inline const ModelPackageModelCard& GetModelCard() const { return m_modelCard; }
    template<typename ModelCardT = ModelPackageModelCard>
    void SetModelCard(ModelCardT&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::forward<ModelCardT>(value); }
    template<typename ModelCardT = ModelPackageModelCard>
    DescribeModelPackageResult& WithModelCard(ModelCardT&& value) { SetModelCard(std::forward<ModelCardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure describing the current state of the model in its life cycle.
     * </p>
     */
    inline const ModelLifeCycle& GetModelLifeCycle() const { return m_modelLifeCycle; }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    void SetModelLifeCycle(ModelLifeCycleT&& value) { m_modelLifeCycleHasBeenSet = true; m_modelLifeCycle = std::forward<ModelLifeCycleT>(value); }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    DescribeModelPackageResult& WithModelLifeCycle(ModelLifeCycleT&& value) { SetModelLifeCycle(std::forward<ModelLifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeModelPackageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    int m_modelPackageVersion{0};
    bool m_modelPackageVersionHasBeenSet = false;

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;
    bool m_sourceAlgorithmSpecificationHasBeenSet = false;

    ModelPackageValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet = false;

    ModelPackageStatus m_modelPackageStatus{ModelPackageStatus::NOT_SET};
    bool m_modelPackageStatusHasBeenSet = false;

    ModelPackageStatusDetails m_modelPackageStatusDetails;
    bool m_modelPackageStatusDetailsHasBeenSet = false;

    bool m_certifyForMarketplace{false};
    bool m_certifyForMarketplaceHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus{ModelApprovalStatus::NOT_SET};
    bool m_modelApprovalStatusHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    ModelMetrics m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::String m_approvalDescription;
    bool m_approvalDescriptionHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_samplePayloadUrl;
    bool m_samplePayloadUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customerMetadataProperties;
    bool m_customerMetadataPropertiesHasBeenSet = false;

    DriftCheckBaselines m_driftCheckBaselines;
    bool m_driftCheckBaselinesHasBeenSet = false;

    Aws::Vector<AdditionalInferenceSpecificationDefinition> m_additionalInferenceSpecifications;
    bool m_additionalInferenceSpecificationsHasBeenSet = false;

    SkipModelValidation m_skipModelValidation{SkipModelValidation::NOT_SET};
    bool m_skipModelValidationHasBeenSet = false;

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    ModelPackageSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    ModelPackageModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;

    ModelLifeCycle m_modelLifeCycle;
    bool m_modelLifeCycleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
