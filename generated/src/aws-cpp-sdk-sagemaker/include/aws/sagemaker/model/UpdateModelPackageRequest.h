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
    AWS_SAGEMAKER_API UpdateModelPackageRequest() = default;

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
    inline const Aws::String& GetModelPackageArn() const { return m_modelPackageArn; }
    inline bool ModelPackageArnHasBeenSet() const { return m_modelPackageArnHasBeenSet; }
    template<typename ModelPackageArnT = Aws::String>
    void SetModelPackageArn(ModelPackageArnT&& value) { m_modelPackageArnHasBeenSet = true; m_modelPackageArn = std::forward<ModelPackageArnT>(value); }
    template<typename ModelPackageArnT = Aws::String>
    UpdateModelPackageRequest& WithModelPackageArn(ModelPackageArnT&& value) { SetModelPackageArn(std::forward<ModelPackageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approval status of the model.</p>
     */
    inline ModelApprovalStatus GetModelApprovalStatus() const { return m_modelApprovalStatus; }
    inline bool ModelApprovalStatusHasBeenSet() const { return m_modelApprovalStatusHasBeenSet; }
    inline void SetModelApprovalStatus(ModelApprovalStatus value) { m_modelApprovalStatusHasBeenSet = true; m_modelApprovalStatus = value; }
    inline UpdateModelPackageRequest& WithModelApprovalStatus(ModelApprovalStatus value) { SetModelApprovalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the approval status of the model.</p>
     */
    inline const Aws::String& GetApprovalDescription() const { return m_approvalDescription; }
    inline bool ApprovalDescriptionHasBeenSet() const { return m_approvalDescriptionHasBeenSet; }
    template<typename ApprovalDescriptionT = Aws::String>
    void SetApprovalDescription(ApprovalDescriptionT&& value) { m_approvalDescriptionHasBeenSet = true; m_approvalDescription = std::forward<ApprovalDescriptionT>(value); }
    template<typename ApprovalDescriptionT = Aws::String>
    UpdateModelPackageRequest& WithApprovalDescription(ApprovalDescriptionT&& value) { SetApprovalDescription(std::forward<ApprovalDescriptionT>(value)); return *this;}
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
    UpdateModelPackageRequest& WithCustomerMetadataProperties(CustomerMetadataPropertiesT&& value) { SetCustomerMetadataProperties(std::forward<CustomerMetadataPropertiesT>(value)); return *this;}
    template<typename CustomerMetadataPropertiesKeyT = Aws::String, typename CustomerMetadataPropertiesValueT = Aws::String>
    UpdateModelPackageRequest& AddCustomerMetadataProperties(CustomerMetadataPropertiesKeyT&& key, CustomerMetadataPropertiesValueT&& value) {
      m_customerMetadataPropertiesHasBeenSet = true; m_customerMetadataProperties.emplace(std::forward<CustomerMetadataPropertiesKeyT>(key), std::forward<CustomerMetadataPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The metadata properties associated with the model package versions to
     * remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerMetadataPropertiesToRemove() const { return m_customerMetadataPropertiesToRemove; }
    inline bool CustomerMetadataPropertiesToRemoveHasBeenSet() const { return m_customerMetadataPropertiesToRemoveHasBeenSet; }
    template<typename CustomerMetadataPropertiesToRemoveT = Aws::Vector<Aws::String>>
    void SetCustomerMetadataPropertiesToRemove(CustomerMetadataPropertiesToRemoveT&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove = std::forward<CustomerMetadataPropertiesToRemoveT>(value); }
    template<typename CustomerMetadataPropertiesToRemoveT = Aws::Vector<Aws::String>>
    UpdateModelPackageRequest& WithCustomerMetadataPropertiesToRemove(CustomerMetadataPropertiesToRemoveT&& value) { SetCustomerMetadataPropertiesToRemove(std::forward<CustomerMetadataPropertiesToRemoveT>(value)); return *this;}
    template<typename CustomerMetadataPropertiesToRemoveT = Aws::String>
    UpdateModelPackageRequest& AddCustomerMetadataPropertiesToRemove(CustomerMetadataPropertiesToRemoveT&& value) { m_customerMetadataPropertiesToRemoveHasBeenSet = true; m_customerMetadataPropertiesToRemove.emplace_back(std::forward<CustomerMetadataPropertiesToRemoveT>(value)); return *this; }
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
    inline const Aws::Vector<AdditionalInferenceSpecificationDefinition>& GetAdditionalInferenceSpecificationsToAdd() const { return m_additionalInferenceSpecificationsToAdd; }
    inline bool AdditionalInferenceSpecificationsToAddHasBeenSet() const { return m_additionalInferenceSpecificationsToAddHasBeenSet; }
    template<typename AdditionalInferenceSpecificationsToAddT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    void SetAdditionalInferenceSpecificationsToAdd(AdditionalInferenceSpecificationsToAddT&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd = std::forward<AdditionalInferenceSpecificationsToAddT>(value); }
    template<typename AdditionalInferenceSpecificationsToAddT = Aws::Vector<AdditionalInferenceSpecificationDefinition>>
    UpdateModelPackageRequest& WithAdditionalInferenceSpecificationsToAdd(AdditionalInferenceSpecificationsToAddT&& value) { SetAdditionalInferenceSpecificationsToAdd(std::forward<AdditionalInferenceSpecificationsToAddT>(value)); return *this;}
    template<typename AdditionalInferenceSpecificationsToAddT = AdditionalInferenceSpecificationDefinition>
    UpdateModelPackageRequest& AddAdditionalInferenceSpecificationsToAdd(AdditionalInferenceSpecificationsToAddT&& value) { m_additionalInferenceSpecificationsToAddHasBeenSet = true; m_additionalInferenceSpecificationsToAdd.emplace_back(std::forward<AdditionalInferenceSpecificationsToAddT>(value)); return *this; }
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
    UpdateModelPackageRequest& WithInferenceSpecification(InferenceSpecificationT&& value) { SetInferenceSpecification(std::forward<InferenceSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URI of the source for the model package.</p>
     */
    inline const Aws::String& GetSourceUri() const { return m_sourceUri; }
    inline bool SourceUriHasBeenSet() const { return m_sourceUriHasBeenSet; }
    template<typename SourceUriT = Aws::String>
    void SetSourceUri(SourceUriT&& value) { m_sourceUriHasBeenSet = true; m_sourceUri = std::forward<SourceUriT>(value); }
    template<typename SourceUriT = Aws::String>
    UpdateModelPackageRequest& WithSourceUri(SourceUriT&& value) { SetSourceUri(std::forward<SourceUriT>(value)); return *this;}
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
    UpdateModelPackageRequest& WithModelCard(ModelCardT&& value) { SetModelCard(std::forward<ModelCardT>(value)); return *this;}
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
    UpdateModelPackageRequest& WithModelLifeCycle(ModelLifeCycleT&& value) { SetModelLifeCycle(std::forward<ModelLifeCycleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique token that guarantees that the call to this API is idempotent. </p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateModelPackageRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelPackageArn;
    bool m_modelPackageArnHasBeenSet = false;

    ModelApprovalStatus m_modelApprovalStatus{ModelApprovalStatus::NOT_SET};
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
