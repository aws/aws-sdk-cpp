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
    AWS_SAGEMAKER_API DescribeModelPackageResult();
    AWS_SAGEMAKER_API DescribeModelPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeModelPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the model package being described.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageName = value; }
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageName = std::move(value); }
    inline void SetModelPackageName(const char* value) { m_modelPackageName.assign(value); }
    inline DescribeModelPackageResult& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the model is a versioned model, the name of the model group that the
     * versioned model belongs to.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupName.assign(value); }
    inline DescribeModelPackageResult& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the model package.</p>
     */
    inline int GetModelPackageVersion() const{ return m_modelPackageVersion; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersion = value; }
    inline DescribeModelPackageResult& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArn = value; }
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArn = std::move(value); }
    inline void SetModelPackageArn(const char* value) { m_modelPackageArn.assign(value); }
    inline DescribeModelPackageResult& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief summary of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescription = value; }
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescription = std::move(value); }
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescription.assign(value); }
    inline DescribeModelPackageResult& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp specifying when the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeModelPackageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeModelPackageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about inference jobs that you can run with models based on this model
     * package.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecification = value; }
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecification = std::move(value); }
    inline DescribeModelPackageResult& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}
    inline DescribeModelPackageResult& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the algorithm that was used to create the model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const{ return m_sourceAlgorithmSpecification; }
    inline void SetSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { m_sourceAlgorithmSpecification = value; }
    inline void SetSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { m_sourceAlgorithmSpecification = std::move(value); }
    inline DescribeModelPackageResult& WithSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { SetSourceAlgorithmSpecification(value); return *this;}
    inline DescribeModelPackageResult& WithSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { SetSourceAlgorithmSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configurations for one or more transform jobs that SageMaker runs to test the
     * model package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecification = value; }
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecification = std::move(value); }
    inline DescribeModelPackageResult& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}
    inline DescribeModelPackageResult& WithValidationSpecification(ModelPackageValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the model package.</p>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatus = value; }
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatus = std::move(value); }
    inline DescribeModelPackageResult& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the current status of the model package.</p>
     */
    inline const ModelPackageStatusDetails& GetModelPackageStatusDetails() const{ return m_modelPackageStatusDetails; }
    inline void SetModelPackageStatusDetails(const ModelPackageStatusDetails& value) { m_modelPackageStatusDetails = value; }
    inline void SetModelPackageStatusDetails(ModelPackageStatusDetails&& value) { m_modelPackageStatusDetails = std::move(value); }
    inline DescribeModelPackageResult& WithModelPackageStatusDetails(const ModelPackageStatusDetails& value) { SetModelPackageStatusDetails(value); return *this;}
    inline DescribeModelPackageResult& WithModelPackageStatusDetails(ModelPackageStatusDetails&& value) { SetModelPackageStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the model package is certified for listing on Amazon Web Services
     * Marketplace.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplace = value; }
    inline DescribeModelPackageResult& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model package.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatus = value; }
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatus = std::move(value); }
    inline DescribeModelPackageResult& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}
    inline DescribeModelPackageResult& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeModelPackageResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeModelPackageResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }
    inline DescribeModelPackageResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline DescribeModelPackageResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics for the model.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const{ return m_modelMetrics; }
    inline void SetModelMetrics(const ModelMetrics& value) { m_modelMetrics = value; }
    inline void SetModelMetrics(ModelMetrics&& value) { m_modelMetrics = std::move(value); }
    inline DescribeModelPackageResult& WithModelMetrics(const ModelMetrics& value) { SetModelMetrics(value); return *this;}
    inline DescribeModelPackageResult& WithModelMetrics(ModelMetrics&& value) { SetModelMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that the model package was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeModelPackageResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeModelPackageResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeModelPackageResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeModelPackageResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description provided for the model approval.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescription = value; }
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescription = std::move(value); }
    inline void SetApprovalDescription(const char* value) { m_approvalDescription.assign(value); }
    inline DescribeModelPackageResult& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}
    inline DescribeModelPackageResult& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning domain of the model package you specified. Common
     * machine learning domains include computer vision and natural language
     * processing.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline void SetDomain(const Aws::String& value) { m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domain.assign(value); }
    inline DescribeModelPackageResult& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline DescribeModelPackageResult& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task you specified that your model package accomplishes.
     * Common machine learning tasks include object detection and image
     * classification.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline void SetTask(const Aws::String& value) { m_task = value; }
    inline void SetTask(Aws::String&& value) { m_task = std::move(value); }
    inline void SetTask(const char* value) { m_task.assign(value); }
    inline DescribeModelPackageResult& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline DescribeModelPackageResult& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service (Amazon S3) path where the sample payload
     * are stored. This path points to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const{ return m_samplePayloadUrl; }
    inline void SetSamplePayloadUrl(const Aws::String& value) { m_samplePayloadUrl = value; }
    inline void SetSamplePayloadUrl(Aws::String&& value) { m_samplePayloadUrl = std::move(value); }
    inline void SetSamplePayloadUrl(const char* value) { m_samplePayloadUrl.assign(value); }
    inline DescribeModelPackageResult& WithSamplePayloadUrl(const Aws::String& value) { SetSamplePayloadUrl(value); return *this;}
    inline DescribeModelPackageResult& WithSamplePayloadUrl(Aws::String&& value) { SetSamplePayloadUrl(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithSamplePayloadUrl(const char* value) { SetSamplePayloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataProperties = value; }
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataProperties = std::move(value); }
    inline DescribeModelPackageResult& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}
    inline DescribeModelPackageResult& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataProperties.emplace(key, value); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline DescribeModelPackageResult& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataProperties.emplace(key, value); return *this; }
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
    inline void SetDriftCheckBaselines(const DriftCheckBaselines& value) { m_driftCheckBaselines = value; }
    inline void SetDriftCheckBaselines(DriftCheckBaselines&& value) { m_driftCheckBaselines = std::move(value); }
    inline DescribeModelPackageResult& WithDriftCheckBaselines(const DriftCheckBaselines& value) { SetDriftCheckBaselines(value); return *this;}
    inline DescribeModelPackageResult& WithDriftCheckBaselines(DriftCheckBaselines&& value) { SetDriftCheckBaselines(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects. Each additional
     * Inference Specification specifies artifacts based on this model package that can
     * be used on inference endpoints. Generally used with SageMaker Neo to store the
     * compiled artifacts.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const{ return m_additionalInferenceSpecifications; }
    inline void SetAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecifications = value; }
    inline void SetAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecifications = std::move(value); }
    inline DescribeModelPackageResult& WithAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecifications(value); return *this;}
    inline DescribeModelPackageResult& WithAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecifications(std::move(value)); return *this;}
    inline DescribeModelPackageResult& AddAdditionalInferenceSpecifications(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecifications.push_back(value); return *this; }
    inline DescribeModelPackageResult& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if you want to skip model validation.</p>
     */
    inline const SkipModelValidation& GetSkipModelValidation() const{ return m_skipModelValidation; }
    inline void SetSkipModelValidation(const SkipModelValidation& value) { m_skipModelValidation = value; }
    inline void SetSkipModelValidation(SkipModelValidation&& value) { m_skipModelValidation = std::move(value); }
    inline DescribeModelPackageResult& WithSkipModelValidation(const SkipModelValidation& value) { SetSkipModelValidation(value); return *this;}
    inline DescribeModelPackageResult& WithSkipModelValidation(SkipModelValidation&& value) { SetSkipModelValidation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }
    inline void SetSourceUri(const Aws::String& value) { m_sourceUri = value; }
    inline void SetSourceUri(Aws::String&& value) { m_sourceUri = std::move(value); }
    inline void SetSourceUri(const char* value) { m_sourceUri.assign(value); }
    inline DescribeModelPackageResult& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}
    inline DescribeModelPackageResult& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS Key ID (<code>KMSKeyId</code>) used for encryption of model package
     * information.</p>
     */
    inline const ModelPackageSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline void SetSecurityConfig(const ModelPackageSecurityConfig& value) { m_securityConfig = value; }
    inline void SetSecurityConfig(ModelPackageSecurityConfig&& value) { m_securityConfig = std::move(value); }
    inline DescribeModelPackageResult& WithSecurityConfig(const ModelPackageSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline DescribeModelPackageResult& WithSecurityConfig(ModelPackageSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
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
    inline void SetModelCard(const ModelPackageModelCard& value) { m_modelCard = value; }
    inline void SetModelCard(ModelPackageModelCard&& value) { m_modelCard = std::move(value); }
    inline DescribeModelPackageResult& WithModelCard(const ModelPackageModelCard& value) { SetModelCard(value); return *this;}
    inline DescribeModelPackageResult& WithModelCard(ModelPackageModelCard&& value) { SetModelCard(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure describing the current state of the model in its life cycle.
     * </p>
     */
    inline const ModelLifeCycle& GetModelLifeCycle() const{ return m_modelLifeCycle; }
    inline void SetModelLifeCycle(const ModelLifeCycle& value) { m_modelLifeCycle = value; }
    inline void SetModelLifeCycle(ModelLifeCycle&& value) { m_modelLifeCycle = std::move(value); }
    inline DescribeModelPackageResult& WithModelLifeCycle(const ModelLifeCycle& value) { SetModelLifeCycle(value); return *this;}
    inline DescribeModelPackageResult& WithModelLifeCycle(ModelLifeCycle&& value) { SetModelLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeModelPackageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeModelPackageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeModelPackageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;

    Aws::String m_modelPackageGroupName;

    int m_modelPackageVersion;

    Aws::String m_modelPackageArn;

    Aws::String m_modelPackageDescription;

    Aws::Utils::DateTime m_creationTime;

    InferenceSpecification m_inferenceSpecification;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;

    ModelPackageValidationSpecification m_validationSpecification;

    ModelPackageStatus m_modelPackageStatus;

    ModelPackageStatusDetails m_modelPackageStatusDetails;

    bool m_certifyForMarketplace;

    ModelApprovalStatus m_modelApprovalStatus;

    UserContext m_createdBy;

    MetadataProperties m_metadataProperties;

    ModelMetrics m_modelMetrics;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::String m_approvalDescription;

    Aws::String m_domain;

    Aws::String m_task;

    Aws::String m_samplePayloadUrl;

    Aws::Map<Aws::String, Aws::String> m_customerMetadataProperties;

    DriftCheckBaselines m_driftCheckBaselines;

    Aws::Vector<AdditionalInferenceSpecificationDefinition> m_additionalInferenceSpecifications;

    SkipModelValidation m_skipModelValidation;

    Aws::String m_sourceUri;

    ModelPackageSecurityConfig m_securityConfig;

    ModelPackageModelCard m_modelCard;

    ModelLifeCycle m_modelLifeCycle;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
