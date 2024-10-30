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
    AWS_SAGEMAKER_API CreateModelPackageRequest();

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
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }
    inline CreateModelPackageRequest& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}
    inline CreateModelPackageRequest& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package group that this
     * model version belongs to.</p> <p>This parameter is required for versioned
     * models, and does not apply to unversioned models.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }
    inline CreateModelPackageRequest& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline CreateModelPackageRequest& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }
    inline CreateModelPackageRequest& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}
    inline CreateModelPackageRequest& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}
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
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }
    inline CreateModelPackageRequest& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}
    inline CreateModelPackageRequest& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies configurations for one or more transform jobs that SageMaker runs
     * to test the model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }
    inline bool ValidationSpecificationHasBeenSet() const { return m_validationSpecificationHasBeenSet; }
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = value; }
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::move(value); }
    inline CreateModelPackageRequest& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}
    inline CreateModelPackageRequest& WithValidationSpecification(ModelPackageValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const{ return m_sourceAlgorithmSpecification; }
    inline bool SourceAlgorithmSpecificationHasBeenSet() const { return m_sourceAlgorithmSpecificationHasBeenSet; }
    inline void SetSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = value; }
    inline void SetSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = std::move(value); }
    inline CreateModelPackageRequest& WithSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { SetSourceAlgorithmSpecification(value); return *this;}
    inline CreateModelPackageRequest& WithSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { SetSourceAlgorithmSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to certify the model package for listing on Amazon Web Services
     * Marketplace.</p> <p>This parameter is optional for unversioned models, and does
     * not apply to versioned models.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }
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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateModelPackageRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateModelPackageRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateModelPackageRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateModelPackageRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether the model is approved for deployment.</p> <p>This parameter is
     * optional for versioned models, and does not apply to unversioned models.</p>
     * <p>For versioned models, the value of this parameter must be set to
     * <code>Approved</code> to deploy the model.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }
    inline CreateModelPackageRequest& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}
    inline CreateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline CreateModelPackageRequest& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline CreateModelPackageRequest& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that contains model metrics reports.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const{ return m_modelMetrics; }
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }
    inline void SetModelMetrics(const ModelMetrics& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = value; }
    inline void SetModelMetrics(ModelMetrics&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::move(value); }
    inline CreateModelPackageRequest& WithModelMetrics(const ModelMetrics& value) { SetModelMetrics(value); return *this;}
    inline CreateModelPackageRequest& WithModelMetrics(ModelMetrics&& value) { SetModelMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique token that guarantees that the call to this API is idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateModelPackageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateModelPackageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning domain of your model package and its components. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline CreateModelPackageRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline CreateModelPackageRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithDomain(const char* value) { SetDomain(value); return *this;}
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
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline CreateModelPackageRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline CreateModelPackageRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithTask(const char* value) { SetTask(value); return *this;}
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
    inline const Aws::String& GetSamplePayloadUrl() const{ return m_samplePayloadUrl; }
    inline bool SamplePayloadUrlHasBeenSet() const { return m_samplePayloadUrlHasBeenSet; }
    inline void SetSamplePayloadUrl(const Aws::String& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = value; }
    inline void SetSamplePayloadUrl(Aws::String&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::move(value); }
    inline void SetSamplePayloadUrl(const char* value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl.assign(value); }
    inline CreateModelPackageRequest& WithSamplePayloadUrl(const Aws::String& value) { SetSamplePayloadUrl(value); return *this;}
    inline CreateModelPackageRequest& WithSamplePayloadUrl(Aws::String&& value) { SetSamplePayloadUrl(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithSamplePayloadUrl(const char* value) { SetSamplePayloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }
    inline bool CustomerMetadataPropertiesHasBeenSet() const { return m_customerMetadataPropertiesHasBeenSet; }
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = value; }
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::move(value); }
    inline CreateModelPackageRequest& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}
    inline CreateModelPackageRequest& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline CreateModelPackageRequest& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package. For more information, see the topic on <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/pipelines-quality-clarify-baseline-lifecycle.html#pipelines-quality-clarify-baseline-drift-detection">Drift
     * Detection against Previous Baselines in SageMaker Pipelines</a> in the <i>Amazon
     * SageMaker Developer Guide</i>. </p>
     */
    inline const DriftCheckBaselines& GetDriftCheckBaselines() const{ return m_driftCheckBaselines; }
    inline bool DriftCheckBaselinesHasBeenSet() const { return m_driftCheckBaselinesHasBeenSet; }
    inline void SetDriftCheckBaselines(const DriftCheckBaselines& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = value; }
    inline void SetDriftCheckBaselines(DriftCheckBaselines&& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = std::move(value); }
    inline CreateModelPackageRequest& WithDriftCheckBaselines(const DriftCheckBaselines& value) { SetDriftCheckBaselines(value); return *this;}
    inline CreateModelPackageRequest& WithDriftCheckBaselines(DriftCheckBaselines&& value) { SetDriftCheckBaselines(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts. </p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const{ return m_additionalInferenceSpecifications; }
    inline bool AdditionalInferenceSpecificationsHasBeenSet() const { return m_additionalInferenceSpecificationsHasBeenSet; }
    inline void SetAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = value; }
    inline void SetAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = std::move(value); }
    inline CreateModelPackageRequest& WithAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecifications(value); return *this;}
    inline CreateModelPackageRequest& WithAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecifications(std::move(value)); return *this;}
    inline CreateModelPackageRequest& AddAdditionalInferenceSpecifications(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.push_back(value); return *this; }
    inline CreateModelPackageRequest& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if you want to skip model validation.</p>
     */
    inline const SkipModelValidation& GetSkipModelValidation() const{ return m_skipModelValidation; }
    inline bool SkipModelValidationHasBeenSet() const { return m_skipModelValidationHasBeenSet; }
    inline void SetSkipModelValidation(const SkipModelValidation& value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = value; }
    inline void SetSkipModelValidation(SkipModelValidation&& value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = std::move(value); }
    inline CreateModelPackageRequest& WithSkipModelValidation(const SkipModelValidation& value) { SetSkipModelValidation(value); return *this;}
    inline CreateModelPackageRequest& WithSkipModelValidation(SkipModelValidation&& value) { SetSkipModelValidation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package. If you want to clone a model
     * package, set it to the model package Amazon Resource Name (ARN). If you want to
     * register a model, set it to the model ARN.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }
    inline CreateModelPackageRequest& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}
    inline CreateModelPackageRequest& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}
    inline CreateModelPackageRequest& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline const ModelPackageSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    inline void SetSecurityConfig(const ModelPackageSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }
    inline void SetSecurityConfig(ModelPackageSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }
    inline CreateModelPackageRequest& WithSecurityConfig(const ModelPackageSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline CreateModelPackageRequest& WithSecurityConfig(ModelPackageSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
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
    inline const ModelPackageModelCard& GetModelCard() const{ return m_modelCard; }
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    inline void SetModelCard(const ModelPackageModelCard& value) { m_modelCardHasBeenSet = true; m_modelCard = value; }
    inline void SetModelCard(ModelPackageModelCard&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::move(value); }
    inline CreateModelPackageRequest& WithModelCard(const ModelPackageModelCard& value) { SetModelCard(value); return *this;}
    inline CreateModelPackageRequest& WithModelCard(ModelPackageModelCard&& value) { SetModelCard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure describing the current state of the model in its life cycle.
     * </p>
     */
    inline const ModelLifeCycle& GetModelLifeCycle() const{ return m_modelLifeCycle; }
    inline bool ModelLifeCycleHasBeenSet() const { return m_modelLifeCycleHasBeenSet; }
    inline void SetModelLifeCycle(const ModelLifeCycle& value) { m_modelLifeCycleHasBeenSet = true; m_modelLifeCycle = value; }
    inline void SetModelLifeCycle(ModelLifeCycle&& value) { m_modelLifeCycleHasBeenSet = true; m_modelLifeCycle = std::move(value); }
    inline CreateModelPackageRequest& WithModelLifeCycle(const ModelLifeCycle& value) { SetModelLifeCycle(value); return *this;}
    inline CreateModelPackageRequest& WithModelLifeCycle(ModelLifeCycle&& value) { SetModelLifeCycle(std::move(value)); return *this;}
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

    bool m_certifyForMarketplace;
    bool m_certifyForMarketplaceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    ModelMetrics m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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

    SkipModelValidation m_skipModelValidation;
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
