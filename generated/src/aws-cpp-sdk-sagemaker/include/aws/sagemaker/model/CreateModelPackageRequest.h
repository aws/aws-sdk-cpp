/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/ModelPackageValidationSpecification.h>
#include <aws/sagemaker/model/SourceAlgorithmSpecification.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/sagemaker/model/ModelMetrics.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/DriftCheckBaselines.h>
#include <aws/sagemaker/model/SkipModelValidation.h>
#include <aws/sagemaker/model/ModelPackageSecurityConfig.h>
#include <aws/sagemaker/model/ModelPackageModelCard.h>
#include <aws/sagemaker/model/ModelLifeCycle.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateModelPackageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateModelPackageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelPackage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the model package. The name must have 1 to 63 characters. Valid
     * characters are a-z, A-Z, 0-9, and - (hyphen).</p> <p>This parameter is required
     * for unversioned models. It is not applicable to versioned models.</p>
     */
    inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    template<typename ModelPackageNameT = Aws::String>
    void SetModelPackageName(ModelPackageNameT&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::forward<ModelPackageNameT>(value); }
    template<typename ModelPackageNameT = Aws::String>
    CreateModelPackageRequest& WithModelPackageName(ModelPackageNameT&& value) { SetModelPackageName(std::forward<ModelPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package group that this
     * model version belongs to.</p> <p>This parameter is required for versioned
     * models, and does not apply to unversioned models.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const { return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    template<typename ModelPackageGroupNameT = Aws::String>
    void SetModelPackageGroupName(ModelPackageGroupNameT&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::forward<ModelPackageGroupNameT>(value); }
    template<typename ModelPackageGroupNameT = Aws::String>
    CreateModelPackageRequest& WithModelPackageGroupName(ModelPackageGroupNameT&& value) { SetModelPackageGroupName(std::forward<ModelPackageGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const { return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    template<typename ModelPackageDescriptionT = Aws::String>
    void SetModelPackageDescription(ModelPackageDescriptionT&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::forward<ModelPackageDescriptionT>(value); }
    template<typename ModelPackageDescriptionT = Aws::String>
    CreateModelPackageRequest& WithModelPackageDescription(ModelPackageDescriptionT&& value) { SetModelPackageDescription(std::forward<ModelPackageDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const { return m_inferenceSpecification; }
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }
    template<typename InferenceSpecificationT = InferenceSpecification>
    void SetInferenceSpecification(InferenceSpecificationT&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::forward<InferenceSpecificationT>(value); }
    template<typename InferenceSpecificationT = InferenceSpecification>
    CreateModelPackageRequest& WithInferenceSpecification(InferenceSpecificationT&& value) { SetInferenceSpecification(std::forward<InferenceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for one or more transform jobs that SageMaker runs
     * to test the model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const { return m_validationSpecification; }
    inline bool ValidationSpecificationHasBeenSet() const { return m_validationSpecificationHasBeenSet; }
    template<typename ValidationSpecificationT = ModelPackageValidationSpecification>
    void SetValidationSpecification(ValidationSpecificationT&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::forward<ValidationSpecificationT>(value); }
    template<typename ValidationSpecificationT = ModelPackageValidationSpecification>
    CreateModelPackageRequest& WithValidationSpecification(ValidationSpecificationT&& value) { SetValidationSpecification(std::forward<ValidationSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const { return m_sourceAlgorithmSpecification; }
    inline bool SourceAlgorithmSpecificationHasBeenSet() const { return m_sourceAlgorithmSpecificationHasBeenSet; }
    template<typename SourceAlgorithmSpecificationT = SourceAlgorithmSpecification>
    void SetSourceAlgorithmSpecification(SourceAlgorithmSpecificationT&& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = std::forward<SourceAlgorithmSpecificationT>(value); }
    template<typename SourceAlgorithmSpecificationT = SourceAlgorithmSpecification>
    CreateModelPackageRequest& WithSourceAlgorithmSpecification(SourceAlgorithmSpecificationT&& value) { SetSourceAlgorithmSpecification(std::forward<SourceAlgorithmSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to certify the model package for listing on Amazon Web Services
     * Marketplace.</p> <p>This parameter is optional for unversioned models, and does
     * not apply to versioned models.</p>
     */
    inline bool GetCertifyForMarketplace() const { return m_certifyForMarketplace; }
    inline bool CertifyForMarketplaceHasBeenSet() const { return m_certifyForMarketplaceHasBeenSet; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }
    inline CreateModelPackageRequest& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p> <p>If you supply <code>ModelPackageGroupName</code>,
     * your model package belongs to the model group you specify and uses the tags
     * associated with the model group. In this case, you cannot supply a
     * <code>tag</code> argument. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateModelPackageRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateModelPackageRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the model is approved for deployment.</p> <p>This parameter is
     * optional for versioned models, and does not apply to unversioned models.</p>
     * <p>For versioned models, the value of this parameter must be set to
     * <code>Approved</code> to deploy the model.</p>
     */
    inline ModelApprovalStatus GetModelApprovalStatus() const { return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(ModelApprovalStatus value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline CreateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus value) { SetModelApprovalStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const { return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    template<typename MetadataPropertiesT = MetadataProperties>
    void SetMetadataProperties(MetadataPropertiesT&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::forward<MetadataPropertiesT>(value); }
    template<typename MetadataPropertiesT = MetadataProperties>
    CreateModelPackageRequest& WithMetadataProperties(MetadataPropertiesT&& value) { SetMetadataProperties(std::forward<MetadataPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains model metrics reports.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const { return m_modelMetrics; }
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }
    template<typename ModelMetricsT = ModelMetrics>
    void SetModelMetrics(ModelMetricsT&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::forward<ModelMetricsT>(value); }
    template<typename ModelMetricsT = ModelMetrics>
    CreateModelPackageRequest& WithModelMetrics(ModelMetricsT&& value) { SetModelMetrics(std::forward<ModelMetricsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateModelPackageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning domain of your model package and its components. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    CreateModelPackageRequest& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task your model package accomplishes. Common machine
     * learning tasks include object detection and image classification. The following
     * tasks are supported by Inference Recommender:
     * <code>"IMAGE_CLASSIFICATION"</code> | <code>"OBJECT_DETECTION"</code> |
     * <code>"TEXT_GENERATION"</code> |<code>"IMAGE_SEGMENTATION"</code> |
     * <code>"FILL_MASK"</code> | <code>"CLASSIFICATION"</code> |
     * <code>"REGRESSION"</code> | <code>"OTHER"</code>.</p> <p>Specify "OTHER" if none
     * of the tasks listed fit your use case.</p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    CreateModelPackageRequest& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * is stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). This archive can hold multiple files that are all equally used in the
     * load test. Each file in the archive must satisfy the size constraints of the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_runtime_InvokeEndpoint.html#API_runtime_InvokeEndpoint_RequestSyntax">InvokeEndpoint</a>
     * call.</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const { return m_samplePayloadUrl; }
    inline bool SamplePayloadUrlHasBeenSet() const { return m_samplePayloadUrlHasBeenSet; }
    template<typename SamplePayloadUrlT = Aws::String>
    void SetSamplePayloadUrl(SamplePayloadUrlT&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::forward<SamplePayloadUrlT>(value); }
    template<typename SamplePayloadUrlT = Aws::String>
    CreateModelPackageRequest& WithSamplePayloadUrl(SamplePayloadUrlT&& value) { SetSamplePayloadUrl(std::forward<SamplePayloadUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const { return m_customerMetadataProperties; }
    inline bool CustomerMetadataPropertiesHasBeenSet() const { return m_customerMetadataPropertiesHasBeenSet; }
    template<typename CustomerMetadataPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomerMetadataProperties(CustomerMetadataPropertiesT&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::forward<CustomerMetadataPropertiesT>(value); }
    template<typename CustomerMetadataPropertiesT = Aws::Map<Aws::String, Aws::String>>
    CreateModelPackageRequest& WithCustomerMetadataProperties(CustomerMetadataPropertiesT&& value) { SetCustomerMetadataProperties(std::forward<CustomerMetadataPropertiesT>(value)); return *this;}
    template<typename CustomerMetadataPropertiesKeyT = Aws::String, typename CustomerMetadataPropertiesValueT = Aws::String>
    CreateModelPackageRequest& AddCustomerMetadataProperties(CustomerMetadataPropertiesKeyT&& key, CustomerMetadataPropertiesValueT&& value) {
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
    inline bool DriftCheckBaselinesHasBeenSet() const { return m_driftCheckBaselinesHasBeenSet; }
    template<typename DriftCheckBaselinesT = DriftCheckBaselines>
    void SetDriftCheckBaselines(DriftCheckBaselinesT&& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = std::forward<DriftCheckBaselinesT>(value); }
    template<typename DriftCheckBaselinesT = DriftCheckBaselines>
    CreateModelPackageRequest& WithDriftCheckBaselines(DriftCheckBaselinesT&& value) { SetDriftCheckBaselines(std::forward<DriftCheckBaselinesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts. </p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const { return m_additionalInferenceSpecifications; }
    inline bool AdditionalInferenceSpecificationsHasBeenSet() const { return m_additionalInferenceSpecificationsHasBeenSet; }
    template<typename AdditionalInferenceSpecificationsT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    void SetAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = std::forward<AdditionalInferenceSpecificationsT>(value); }
    template<typename AdditionalInferenceSpecificationsT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    CreateModelPackageRequest& WithAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { SetAdditionalInferenceSpecifications(std::forward<AdditionalInferenceSpecificationsT>(value)); return *this;}
    template<typename AdditionalInferenceSpecificationsT = AdditionalInferenceSpecificationDefinition>
    CreateModelPackageRequest& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationsT&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.emplace_back(std::forward<AdditionalInferenceSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if you want to skip model validation.</p>
     */
    inline SkipModelValidation GetSkipModelValidation() const { return m_skipModelValidation; }
    inline bool SkipModelValidationHasBeenSet() const { return m_skipModelValidationHasBeenSet; }
    inline void SetSkipModelValidation(SkipModelValidation value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = value; }
    inline CreateModelPackageRequest& WithSkipModelValidation(SkipModelValidation value) { SetSkipModelValidation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package. If you want to clone a model
     * package, set it to the model package Amazon Resource Name (ARN). If you want to
     * register a model, set it to the model ARN.</p>
     */
    inline const Aws::String& GetSourceUri() const { return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    template<typename SourceUriT = Aws::String>
    void SetSourceUri(SourceUriT&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::forward<SourceUriT>(value); }
    template<typename SourceUriT = Aws::String>
    CreateModelPackageRequest& WithSourceUri(SourceUriT&& value) { SetSourceUri(std::forward<SourceUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline const ModelPackageSecurityConfig& GetSecurityConfig() const { return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    template<typename SecurityConfigT = ModelPackageSecurityConfig>
    void SetSecurityConfig(SecurityConfigT&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::forward<SecurityConfigT>(value); }
    template<typename SecurityConfigT = ModelPackageSecurityConfig>
    CreateModelPackageRequest& WithSecurityConfig(SecurityConfigT&& value) { SetSecurityConfig(std::forward<SecurityConfigT>(value)); return *this;}
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
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    template<typename ModelCardT = ModelPackageModelCard>
    void SetModelCard(ModelCardT&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::forward<ModelCardT>(value); }
    template<typename ModelCardT = ModelPackageModelCard>
    CreateModelPackageRequest& WithModelCard(ModelCardT&& value) { SetModelCard(std::forward<ModelCardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure describing the current state of the model in its life cycle.
     * </p>
     */
    inline const ModelLifeCycle& GetModelLifeCycle() const { return m_modelLifeCycle; }
    inline bool ModelLifeCycleHasBeenSet() const { return m_modelLifeCycleHasBeenSet; }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    void SetModelLifeCycle(ModelLifeCycleT&& value) { m_modelLifeCycleHasBeenSet = true; m_modelLifeCycle = std::forward<ModelLifeCycleT>(value); }
    template<typename ModelLifeCycleT = ModelLifeCycle>
    CreateModelPackageRequest& WithModelLifeCycle(ModelLifeCycleT&& value) { SetModelLifeCycle(std::forward<ModelLifeCycleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    ModelPackageValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet = false;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;
    bool m_sourceAlgorithmSpecificationHasBeenSet = false;

    bool m_certifyForMarketplace{false};
    bool m_certifyForMarketplaceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus{ModelApprovalStatus::NOT_SET};
    bool m_modelApprovalStatusHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    ModelMetrics m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
