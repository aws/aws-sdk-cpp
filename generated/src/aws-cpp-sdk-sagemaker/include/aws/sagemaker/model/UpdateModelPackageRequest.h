/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelApprovalStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceSpecification.h>
#include <aws/sagemaker/model/AdditionalInferenceSpecificationDefinition.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateModelPackageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateModelPackageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateModelPackage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline UpdateModelPackageRequest& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}


    /**
     * <p>The approval status of the model.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }

    /**
     * <p>The approval status of the model.</p>
     */
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }

    /**
     * <p>The approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}

    /**
     * <p>The approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}


    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline bool ApprovalDescriptionHasBeenSet() const { return m_approvalDescriptionHasBeenSet; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = value; }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::move(value); }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline void SetApprovalDescription(const char* value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription.assign(value); }

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline UpdateModelPackageRequest& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}


    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline bool CustomerMetadataPropertiesHasBeenSet() const { return m_customerMetadataPropertiesHasBeenSet; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = value; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::move(value); }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }


    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerMetadataPropertiesToRemove() const{ return m_customerMetadataPropertiesToRemove; }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline bool CustomerMetadataPropertiesToRemoveHasBeenSet() const { return m_customerMetadataPropertiesToRemoveHasBeenSet; }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline void SetCustomerMetadataPropertiesToRemove(const Aws::Vector<Aws::String>& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove = value; }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline void SetCustomerMetadataPropertiesToRemove(Aws::Vector<Aws::String>&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove = std::move(value); }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline UpdateModelPackageRequest& WithCustomerMetadataPropertiesToRemove(const Aws::Vector<Aws::String>& value) { SetCustomerMetadataPropertiesToRemove(value); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline UpdateModelPackageRequest& WithCustomerMetadataPropertiesToRemove(Aws::Vector<Aws::String>&& value) { SetCustomerMetadataPropertiesToRemove(std::move(value)); return *this;}

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(const Aws::String& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(value); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(Aws::String&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(const char* value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(value); return *this; }


    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecificationsToAdd() const{ return m_additionalInferenceSpecificationsToAdd; }

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline bool AdditionalInferenceSpecificationsToAddHasBeenSet() const { return m_additionalInferenceSpecificationsToAddHasBeenSet; }

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline void SetAdditionalInferenceSpecificationsToAdd(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd = value; }

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline void SetAdditionalInferenceSpecificationsToAdd(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd = std::move(value); }

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline UpdateModelPackageRequest& WithAdditionalInferenceSpecificationsToAdd(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecificationsToAdd(value); return *this;}

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline UpdateModelPackageRequest& WithAdditionalInferenceSpecificationsToAdd(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecificationsToAdd(std::move(value)); return *this;}

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline UpdateModelPackageRequest& AddAdditionalInferenceSpecificationsToAdd(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd.push_back(value); return *this; }

    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline UpdateModelPackageRequest& AddAdditionalInferenceSpecificationsToAdd(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd.push_back(std::move(value)); return *this; }


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

    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline bool InferenceSpecificationHasBeenSet() const { return m_inferenceSpecificationHasBeenSet; }

    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline void SetInferenceSpecification(const InferenceSpecification& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = value; }

    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline void SetInferenceSpecification(InferenceSpecification&& value) { m_inferenceSpecificationHasBeenSet = true; m_inferenceSpecification = std::move(value); }

    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline UpdateModelPackageRequest& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}

    /**
     * <p>Specifies details about inference jobs that you can run with models based on
     * this model package, including the following information:</p> <ul> <li> <p>The
     * Amazon ECR paths of containers that contain the inference code and model
     * artifacts.</p> </li> <li> <p>The instance types that the model package supports
     * for transform jobs and real-time endpoints used for inference.</p> </li> <li>
     * <p>The input and output content formats that the model package supports for
     * inference.</p> </li> </ul>
     */
    inline UpdateModelPackageRequest& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}


    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline const Aws::String& GetSourceUri() const{ return m_sourceUri; }

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline void SetSourceUri(const Aws::String& value) { m_sourceUriHasBeenSet = true; m_sourceUri = value; }

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline void SetSourceUri(Aws::String&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::move(value); }

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline void SetSourceUri(const char* value) { m_sourceUriHasBeenSet = true; m_sourceUri.assign(value); }

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline UpdateModelPackageRequest& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline UpdateModelPackageRequest& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline UpdateModelPackageRequest& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}

  private:

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus;
    bool m_modelApprovalStatusHasBeenSet = false;

    Aws::String m_approvalDescription;
    bool m_approvalDescriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customerMetadataProperties;
    bool m_customerMetadataPropertiesHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerMetadataPropertiesToRemove;
    bool m_customerMetadataPropertiesToRemoveHasBeenSet = false;

    Aws::Vector<AdditionalInferenceSpecificationDefinition> m_additionalInferenceSpecificationsToAdd;
    bool m_additionalInferenceSpecificationsToAddHasBeenSet = false;

    InferenceSpecification m_inferenceSpecification;
    bool m_inferenceSpecificationHasBeenSet = false;

    Aws::String m_sourceUri;
    bool m_sourceUriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
