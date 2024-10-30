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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageSecurityConfig.h>
#include <aws/sagemaker/model/ModelPackageModelCard.h>
#include <aws/sagemaker/model/ModelLifeCycle.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/DriftCheckBaselines.h>
#include <aws/sagemaker/model/SkipModelValidation.h>
#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A versioned model that can be deployed for SageMaker inference.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackage">AWS
   * API Reference</a></p>
   */
  class ModelPackage
  {
  public:
    AWS_SAGEMAKER_API ModelPackage();
    AWS_SAGEMAKER_API ModelPackage(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the model.</p>
     */
    inline const Aws::String& GetModelPackageName() const{ return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    inline void SetModelPackageName(const Aws::String& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = value; }
    inline void SetModelPackageName(Aws::String&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::move(value); }
    inline void SetModelPackageName(const char* value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName.assign(value); }
    inline ModelPackage& WithModelPackageName(const Aws::String& value) { SetModelPackageName(value); return *this;}
    inline ModelPackage& WithModelPackageName(Aws::String&& value) { SetModelPackageName(std::move(value)); return *this;}
    inline ModelPackage& WithModelPackageName(const char* value) { SetModelPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model group to which the model belongs.</p>
     */
    inline const Aws::String& GetModelPackageGroupName() const{ return m_modelPackageGroupName; }
    inline bool ModelPackageGroupNameHasBeenSet() const { return m_modelPackageGroupNameHasBeenSet; }
    inline void SetModelPackageGroupName(const Aws::String& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = value; }
    inline void SetModelPackageGroupName(Aws::String&& value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName = std::move(value); }
    inline void SetModelPackageGroupName(const char* value) { m_modelPackageGroupNameHasBeenSet = true; m_modelPackageGroupName.assign(value); }
    inline ModelPackage& WithModelPackageGroupName(const Aws::String& value) { SetModelPackageGroupName(value); return *this;}
    inline ModelPackage& WithModelPackageGroupName(Aws::String&& value) { SetModelPackageGroupName(std::move(value)); return *this;}
    inline ModelPackage& WithModelPackageGroupName(const char* value) { SetModelPackageGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of a versioned model.</p>
     */
    inline int GetModelPackageVersion() const{ return m_modelPackageVersion; }
    inline bool ModelPackageVersionHasBeenSet() const { return m_modelPackageVersionHasBeenSet; }
    inline void SetModelPackageVersion(int value) { m_modelPackageVersionHasBeenSet = true; m_modelPackageVersion = value; }
    inline ModelPackage& WithModelPackageVersion(int value) { SetModelPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }
    inline ModelPackage& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}
    inline ModelPackage& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}
    inline ModelPackage& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the model package.</p>
     */
    inline const Aws::String& GetModelPackageDescription() const{ return m_modelPackageDescription; }
    inline bool ModelPackageDescriptionHasBeenSet() const { return m_modelPackageDescriptionHasBeenSet; }
    inline void SetModelPackageDescription(const Aws::String& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = value; }
    inline void SetModelPackageDescription(Aws::String&& value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription = std::move(value); }
    inline void SetModelPackageDescription(const char* value) { m_modelPackageDescriptionHasBeenSet = true; m_modelPackageDescription.assign(value); }
    inline ModelPackage& WithModelPackageDescription(const Aws::String& value) { SetModelPackageDescription(value); return *this;}
    inline ModelPackage& WithModelPackageDescription(Aws::String&& value) { SetModelPackageDescription(std::move(value)); return *this;}
    inline ModelPackage& WithModelPackageDescription(const char* value) { SetModelPackageDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the model package was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ModelPackage& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ModelPackage& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines how to perform inference generation after a training job is run.</p>
     */
    inline const InferenceSpecification& GetInferenceSpecification() const{ return m_inferenceSpecification; }
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }
    inline ModelPackage& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}
    inline ModelPackage& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of algorithms that were used to create a model package.</p>
     */
    inline const SourceAlgorithmSpecification& GetSourceAlgorithmSpecification() const{ return m_sourceAlgorithmSpecification; }
    inline bool SourceAlgorithmSpecificationHasBeenSet() const { return m_sourceAlgorithmSpecificationHasBeenSet; }
    inline void SetSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = value; }
    inline void SetSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { m_sourceAlgorithmSpecificationHasBeenSet = true; m_sourceAlgorithmSpecification = std::move(value); }
    inline ModelPackage& WithSourceAlgorithmSpecification(const SourceAlgorithmSpecification& value) { SetSourceAlgorithmSpecification(value); return *this;}
    inline ModelPackage& WithSourceAlgorithmSpecification(SourceAlgorithmSpecification&& value) { SetSourceAlgorithmSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies batch transform jobs that SageMaker runs to validate your model
     * package.</p>
     */
    inline const ModelPackageValidationSpecification& GetValidationSpecification() const{ return m_validationSpecification; }
    inline bool ValidationSpecificationHasBeenSet() const { return m_validationSpecificationHasBeenSet; }
    inline void SetValidationSpecification(const ModelPackageValidationSpecification& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = value; }
    inline void SetValidationSpecification(ModelPackageValidationSpecification&& value) { m_validationSpecificationHasBeenSet = true; m_validationSpecification = std::move(value); }
    inline ModelPackage& WithValidationSpecification(const ModelPackageValidationSpecification& value) { SetValidationSpecification(value); return *this;}
    inline ModelPackage& WithValidationSpecification(ModelPackageValidationSpecification&& value) { SetValidationSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the model package. This can be one of the following values.</p>
     * <ul> <li> <p> <code>PENDING</code> - The model package is pending being
     * created.</p> </li> <li> <p> <code>IN_PROGRESS</code> - The model package is in
     * the process of being created.</p> </li> <li> <p> <code>COMPLETED</code> - The
     * model package was successfully created.</p> </li> <li> <p> <code>FAILED</code> -
     * The model package failed.</p> </li> <li> <p> <code>DELETING</code> - The model
     * package is in the process of being deleted.</p> </li> </ul>
     */
    inline const ModelPackageStatus& GetModelPackageStatus() const{ return m_modelPackageStatus; }
    inline bool ModelPackageStatusHasBeenSet() const { return m_modelPackageStatusHasBeenSet; }
    inline void SetModelPackageStatus(const ModelPackageStatus& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = value; }
    inline void SetModelPackageStatus(ModelPackageStatus&& value) { m_modelPackageStatusHasBeenSet = true; m_modelPackageStatus = std::move(value); }
    inline ModelPackage& WithModelPackageStatus(const ModelPackageStatus& value) { SetModelPackageStatus(value); return *this;}
    inline ModelPackage& WithModelPackageStatus(ModelPackageStatus&& value) { SetModelPackageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the validation and image scan statuses of the model package.</p>
     */
    inline const ModelPackageStatusDetails& GetModelPackageStatusDetails() const{ return m_modelPackageStatusDetails; }
    inline bool ModelPackageStatusDetailsHasBeenSet() const { return m_modelPackageStatusDetailsHasBeenSet; }
    inline void SetModelPackageStatusDetails(const ModelPackageStatusDetails& value) { m_modelPackageStatusDetailsHasBeenSet = true; m_modelPackageStatusDetails = value; }
    inline void SetModelPackageStatusDetails(ModelPackageStatusDetails&& value) { m_modelPackageStatusDetailsHasBeenSet = true; m_modelPackageStatusDetails = std::move(value); }
    inline ModelPackage& WithModelPackageStatusDetails(const ModelPackageStatusDetails& value) { SetModelPackageStatusDetails(value); return *this;}
    inline ModelPackage& WithModelPackageStatusDetails(ModelPackageStatusDetails&& value) { SetModelPackageStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the model package is to be certified to be listed on Amazon Web
     * Services Marketplace. For information about listing model packages on Amazon Web
     * Services Marketplace, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-mkt-list.html">List
     * Your Algorithm or Model Package on Amazon Web Services Marketplace</a>.</p>
     */
    inline bool GetCertifyForMarketplace() const{ return m_certifyForMarketplace; }
    inline bool CertifyForMarketplaceHasBeenSet() const { return m_certifyForMarketplaceHasBeenSet; }
    inline void SetCertifyForMarketplace(bool value) { m_certifyForMarketplaceHasBeenSet = true; m_certifyForMarketplace = value; }
    inline ModelPackage& WithCertifyForMarketplace(bool value) { SetCertifyForMarketplace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model. This can be one of the following
     * values.</p> <ul> <li> <p> <code>APPROVED</code> - The model is approved</p>
     * </li> <li> <p> <code>REJECTED</code> - The model is rejected.</p> </li> <li> <p>
     * <code>PENDING_MANUAL_APPROVAL</code> - The model is waiting for manual
     * approval.</p> </li> </ul>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }
    inline ModelPackage& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}
    inline ModelPackage& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the user who created or modified an experiment, trial,
     * trial component, lineage group, or project.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline ModelPackage& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline ModelPackage& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata properties of the tracking entity, trial, or trial component.</p>
     */
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline bool MetadataPropertiesHasBeenSet() const { return m_metadataPropertiesHasBeenSet; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataPropertiesHasBeenSet = true; m_metadataProperties = std::move(value); }
    inline ModelPackage& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline ModelPackage& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics for the model.</p>
     */
    inline const ModelMetrics& GetModelMetrics() const{ return m_modelMetrics; }
    inline bool ModelMetricsHasBeenSet() const { return m_modelMetricsHasBeenSet; }
    inline void SetModelMetrics(const ModelMetrics& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = value; }
    inline void SetModelMetrics(ModelMetrics&& value) { m_modelMetricsHasBeenSet = true; m_modelMetrics = std::move(value); }
    inline ModelPackage& WithModelMetrics(const ModelMetrics& value) { SetModelMetrics(value); return *this;}
    inline ModelPackage& WithModelMetrics(ModelMetrics&& value) { SetModelMetrics(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the model package was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline ModelPackage& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline ModelPackage& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the user who created or modified an experiment, trial,
     * trial component, lineage group, or project.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline ModelPackage& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline ModelPackage& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description provided when the model approval is set.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }
    inline bool ApprovalDescriptionHasBeenSet() const { return m_approvalDescriptionHasBeenSet; }
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = value; }
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::move(value); }
    inline void SetApprovalDescription(const char* value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription.assign(value); }
    inline ModelPackage& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}
    inline ModelPackage& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}
    inline ModelPackage& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}
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
    inline ModelPackage& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline ModelPackage& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline ModelPackage& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task your model package accomplishes. Common machine
     * learning tasks include object detection and image classification.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline ModelPackage& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline ModelPackage& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline ModelPackage& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Simple Storage Service path where the sample payload are stored.
     * This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix).</p>
     */
    inline const Aws::String& GetSamplePayloadUrl() const{ return m_samplePayloadUrl; }
    inline bool SamplePayloadUrlHasBeenSet() const { return m_samplePayloadUrlHasBeenSet; }
    inline void SetSamplePayloadUrl(const Aws::String& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = value; }
    inline void SetSamplePayloadUrl(Aws::String&& value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl = std::move(value); }
    inline void SetSamplePayloadUrl(const char* value) { m_samplePayloadUrlHasBeenSet = true; m_samplePayloadUrl.assign(value); }
    inline ModelPackage& WithSamplePayloadUrl(const Aws::String& value) { SetSamplePayloadUrl(value); return *this;}
    inline ModelPackage& WithSamplePayloadUrl(Aws::String&& value) { SetSamplePayloadUrl(std::move(value)); return *this;}
    inline ModelPackage& WithSamplePayloadUrl(const char* value) { SetSamplePayloadUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecifications() const{ return m_additionalInferenceSpecifications; }
    inline bool AdditionalInferenceSpecificationsHasBeenSet() const { return m_additionalInferenceSpecificationsHasBeenSet; }
    inline void SetAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = value; }
    inline void SetAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications = std::move(value); }
    inline ModelPackage& WithAdditionalInferenceSpecifications(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecifications(value); return *this;}
    inline ModelPackage& WithAdditionalInferenceSpecifications(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecifications(std::move(value)); return *this;}
    inline ModelPackage& AddAdditionalInferenceSpecifications(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.push_back(value); return *this; }
    inline ModelPackage& AddAdditionalInferenceSpecifications(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecificationsHasBeenSet = true; m_additionalInferenceSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }
    inline ModelPackage& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}
    inline ModelPackage& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}
    inline ModelPackage& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackageSecurityConfig& GetSecurityConfig() const{ return m_securityConfig; }
    inline bool SecurityConfigHasBeenSet() const { return m_securityConfigHasBeenSet; }
    inline void SetSecurityConfig(const ModelPackageSecurityConfig& value) { m_securityConfigHasBeenSet = true; m_securityConfig = value; }
    inline void SetSecurityConfig(ModelPackageSecurityConfig&& value) { m_securityConfigHasBeenSet = true; m_securityConfig = std::move(value); }
    inline ModelPackage& WithSecurityConfig(const ModelPackageSecurityConfig& value) { SetSecurityConfig(value); return *this;}
    inline ModelPackage& WithSecurityConfig(ModelPackageSecurityConfig&& value) { SetSecurityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ModelPackageModelCard& GetModelCard() const{ return m_modelCard; }
    inline bool ModelCardHasBeenSet() const { return m_modelCardHasBeenSet; }
    inline void SetModelCard(const ModelPackageModelCard& value) { m_modelCardHasBeenSet = true; m_modelCard = value; }
    inline void SetModelCard(ModelPackageModelCard&& value) { m_modelCardHasBeenSet = true; m_modelCard = std::move(value); }
    inline ModelPackage& WithModelCard(const ModelPackageModelCard& value) { SetModelCard(value); return *this;}
    inline ModelPackage& WithModelCard(ModelPackageModelCard&& value) { SetModelCard(std::move(value)); return *this;}
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
    inline ModelPackage& WithModelLifeCycle(const ModelLifeCycle& value) { SetModelLifeCycle(value); return *this;}
    inline ModelPackage& WithModelLifeCycle(ModelLifeCycle&& value) { SetModelLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tags associated with the model package. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ModelPackage& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModelPackage& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModelPackage& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ModelPackage& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata properties for the model package. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }
    inline bool CustomerMetadataPropertiesHasBeenSet() const { return m_customerMetadataPropertiesHasBeenSet; }
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = value; }
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::move(value); }
    inline ModelPackage& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}
    inline ModelPackage& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}
    inline ModelPackage& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline ModelPackage& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the drift check baselines that can be used when the model monitor
     * is set using the model package.</p>
     */
    inline const DriftCheckBaselines& GetDriftCheckBaselines() const{ return m_driftCheckBaselines; }
    inline bool DriftCheckBaselinesHasBeenSet() const { return m_driftCheckBaselinesHasBeenSet; }
    inline void SetDriftCheckBaselines(const DriftCheckBaselines& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = value; }
    inline void SetDriftCheckBaselines(DriftCheckBaselines&& value) { m_driftCheckBaselinesHasBeenSet = true; m_driftCheckBaselines = std::move(value); }
    inline ModelPackage& WithDriftCheckBaselines(const DriftCheckBaselines& value) { SetDriftCheckBaselines(value); return *this;}
    inline ModelPackage& WithDriftCheckBaselines(DriftCheckBaselines&& value) { SetDriftCheckBaselines(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if you want to skip model validation.</p>
     */
    inline const SkipModelValidation& GetSkipModelValidation() const{ return m_skipModelValidation; }
    inline bool SkipModelValidationHasBeenSet() const { return m_skipModelValidationHasBeenSet; }
    inline void SetSkipModelValidation(const SkipModelValidation& value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = value; }
    inline void SetSkipModelValidation(SkipModelValidation&& value) { m_skipModelValidationHasBeenSet = true; m_skipModelValidation = std::move(value); }
    inline ModelPackage& WithSkipModelValidation(const SkipModelValidation& value) { SetSkipModelValidation(value); return *this;}
    inline ModelPackage& WithSkipModelValidation(SkipModelValidation&& value) { SetSkipModelValidation(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_modelPackageGroupName;
    bool m_modelPackageGroupNameHasBeenSet = false;

    int m_modelPackageVersion;
    bool m_modelPackageVersionHasBeenSet = false;

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    Aws::String m_modelPackageDescription;
    bool m_modelPackageDescriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    SourceAlgorithmSpecification m_sourceAlgorithmSpecification;
    bool m_sourceAlgorithmSpecificationHasBeenSet = false;

    ModelPackageValidationSpecification m_validationSpecification;
    bool m_validationSpecificationHasBeenSet = false;

    ModelPackageStatus m_modelPackageStatus;
    bool m_modelPackageStatusHasBeenSet = false;

    ModelPackageStatusDetails m_modelPackageStatusDetails;
    bool m_modelPackageStatusDetailsHasBeenSet = false;

    bool m_certifyForMarketplace;
    bool m_certifyForMarketplaceHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    MetadataProperties m_metadataProperties;
    bool m_metadataPropertiesHasBeenSet = false;

    ModelMetrics m_modelMetrics;
    bool m_modelMetricsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
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

    Aws::Vector<AdditionalInferenceSpecificationDefinition> m_additionalInferenceSpecifications;
    bool m_additionalInferenceSpecificationsHasBeenSet = false;

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;

    ModelPackageSecurityConfig m_securityConfig;
    bool m_securityConfigHasBeenSet = false;

    ModelPackageModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;

    ModelLifeCycle m_modelLifeCycle;
    bool m_modelLifeCycleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customerMetadataProperties;
    bool m_customerMetadataPropertiesHasBeenSet = false;

    DriftCheckBaselines m_driftCheckBaselines;
    bool m_driftCheckBaselinesHasBeenSet = false;

    SkipModelValidation m_skipModelValidation;
    bool m_skipModelValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
