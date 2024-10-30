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
#include <aws/sagemaker/model/ModelPackageModelCard.h>
#include <aws/sagemaker/model/ModelLifeCycle.h>
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model package.</p>
     */
    inline const Aws::String& GetModelPackageArn() const{ return m_modelPackageArn; }
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
    inline void SetModelPackageArn(const Aws::String& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = value; }
    inline void SetModelPackageArn(Aws::String&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::move(value); }
    inline void SetModelPackageArn(const char* value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn.assign(value); }
    inline UpdateModelPackageRequest& WithModelPackageArn(const Aws::String& value) { SetModelPackageArn(value); return *this;}
    inline UpdateModelPackageRequest& WithModelPackageArn(Aws::String&& value) { SetModelPackageArn(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& WithModelPackageArn(const char* value) { SetModelPackageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model.</p>
     */
    inline const ModelApprovalStatus& GetModelApprovalStatus() const{ return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(const ModelApprovalStatus& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline void SetModelApprovalStatus(ModelApprovalStatus&& value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = std::move(value); }
    inline UpdateModelPackageRequest& WithModelApprovalStatus(const ModelApprovalStatus& value) { SetModelApprovalStatus(value); return *this;}
    inline UpdateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus&& value) { SetModelApprovalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline const Aws::String& GetApprovalDescription() const{ return m_approvalDescription; }
    inline bool ApprovalDescriptionHasBeenSet() const { return m_approvalDescriptionHasBeenSet; }
    inline void SetApprovalDescription(const Aws::String& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = value; }
    inline void SetApprovalDescription(Aws::String&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::move(value); }
    inline void SetApprovalDescription(const char* value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription.assign(value); }
    inline UpdateModelPackageRequest& WithApprovalDescription(const Aws::String& value) { SetApprovalDescription(value); return *this;}
    inline UpdateModelPackageRequest& WithApprovalDescription(Aws::String&& value) { SetApprovalDescription(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& WithApprovalDescription(const char* value) { SetApprovalDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomerMetadataProperties() const{ return m_customerMetadataProperties; }
    inline bool CustomerMetadataPropertiesHasBeenSet() const { return m_customerMetadataPropertiesHasBeenSet; }
    inline void SetCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = value; }
    inline void SetCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties = std::move(value); }
    inline UpdateModelPackageRequest& WithCustomerMetadataProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetCustomerMetadataProperties(value); return *this;}
    inline UpdateModelPackageRequest& WithCustomerMetadataProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetCustomerMetadataProperties(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const Aws::String& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const Aws::String& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const char* key, Aws::String&& value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, std::move(value)); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(Aws::String&& key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::move(key), value); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataProperties(const char* key, const char* value) { m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerMetadataPropertiesToRemove() const{ return m_customerMetadataPropertiesToRemove; }
    inline bool CustomerMetadataPropertiesToRemoveHasBeenSet() const { return m_customerMetadataPropertiesToRemoveHasBeenSet; }
    inline void SetCustomerMetadataPropertiesToRemove(const Aws::Vector<Aws::String>& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove = value; }
    inline void SetCustomerMetadataPropertiesToRemove(Aws::Vector<Aws::String>&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove = std::move(value); }
    inline UpdateModelPackageRequest& WithCustomerMetadataPropertiesToRemove(const Aws::Vector<Aws::String>& value) { SetCustomerMetadataPropertiesToRemove(value); return *this;}
    inline UpdateModelPackageRequest& WithCustomerMetadataPropertiesToRemove(Aws::Vector<Aws::String>&& value) { SetCustomerMetadataPropertiesToRemove(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(const Aws::String& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(value); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(Aws::String&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(const char* value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of additional Inference Specification objects to be added to the
     * existing array additional Inference Specification. Total number of additional
     * Inference Specifications can not exceed 15. Each additional Inference
     * Specification specifies artifacts based on this model package that can be used
     * on inference endpoints. Generally used with SageMaker Neo to store the compiled
     * artifacts.</p>
     */
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecificationsToAdd() const{ return m_additionalInferenceSpecificationsToAdd; }
    inline bool AdditionalInferenceSpecificationsToAddHasBeenSet() const { return m_additionalInferenceSpecificationsToAddHasBeenSet; }
    inline void SetAdditionalInferenceSpecificationsToAdd(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd = value; }
    inline void SetAdditionalInferenceSpecificationsToAdd(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd = std::move(value); }
    inline UpdateModelPackageRequest& WithAdditionalInferenceSpecificationsToAdd(const Aws::Vector<AdditionalInferenceSpecificationDefinition>& value) { SetAdditionalInferenceSpecificationsToAdd(value); return *this;}
    inline UpdateModelPackageRequest& WithAdditionalInferenceSpecificationsToAdd(Aws::Vector<AdditionalInferenceSpecificationDefinition>&& value) { SetAdditionalInferenceSpecificationsToAdd(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& AddAdditionalInferenceSpecificationsToAdd(const AdditionalInferenceSpecificationDefinition& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd.push_back(value); return *this; }
    inline UpdateModelPackageRequest& AddAdditionalInferenceSpecificationsToAdd(AdditionalInferenceSpecificationDefinition&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd.push_back(std::move(value)); return *this; }
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
    inline UpdateModelPackageRequest& WithInferenceSpecification(const InferenceSpecification& value) { SetInferenceSpecification(value); return *this;}
    inline UpdateModelPackageRequest& WithInferenceSpecification(InferenceSpecification&& value) { SetInferenceSpecification(std::move(value)); return *this;}
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
    inline UpdateModelPackageRequest& WithSourceUri(const Aws::String& value) { SetSourceUri(value); return *this;}
    inline UpdateModelPackageRequest& WithSourceUri(Aws::String&& value) { SetSourceUri(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& WithSourceUri(const char* value) { SetSourceUri(value); return *this;}
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
    inline UpdateModelPackageRequest& WithModelCard(const ModelPackageModelCard& value) { SetModelCard(value); return *this;}
    inline UpdateModelPackageRequest& WithModelCard(ModelPackageModelCard&& value) { SetModelCard(std::move(value)); return *this;}
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
    inline UpdateModelPackageRequest& WithModelLifeCycle(const ModelLifeCycle& value) { SetModelLifeCycle(value); return *this;}
    inline UpdateModelPackageRequest& WithModelLifeCycle(ModelLifeCycle&& value) { SetModelLifeCycle(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique token that guarantees that the call to this API is idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateModelPackageRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateModelPackageRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateModelPackageRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
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

    ModelPackageModelCard m_modelCard;
    bool m_modelCardHasBeenSet = false;

    ModelLifeCycle m_modelLifeCycle;
    bool m_modelLifeCycleHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
