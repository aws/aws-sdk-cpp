/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/InferenceExperimentDataStorageConfig.h>
#include <aws/sagemaker/model/ShadowModeConfig.h>
#include <aws/sagemaker/model/ModelVariantConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateInferenceExperimentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceExperimentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name for the inference experiment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateInferenceExperimentRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline InferenceExperimentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InferenceExperimentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateInferenceExperimentRequest& WithType(InferenceExperimentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = InferenceExperimentSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InferenceExperimentSchedule>
    CreateInferenceExperimentRequest& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateInferenceExperimentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateInferenceExperimentRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    CreateInferenceExperimentRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetModelVariants() const { return m_modelVariants; }
    inline bool ModelVariantsHasBeenSet() const { return m_modelVariantsHasBeenSet; }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfig>>
    void SetModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = std::forward<ModelVariantsT>(value); }
    template<typename ModelVariantsT = Aws::Vector<ModelVariantConfig>>
    CreateInferenceExperimentRequest& WithModelVariants(ModelVariantsT&& value) { SetModelVariants(std::forward<ModelVariantsT>(value)); return *this;}
    template<typename ModelVariantsT = ModelVariantConfig>
    CreateInferenceExperimentRequest& AddModelVariants(ModelVariantsT&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.emplace_back(std::forward<ModelVariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const { return m_dataStorageConfig; }
    inline bool DataStorageConfigHasBeenSet() const { return m_dataStorageConfigHasBeenSet; }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    void SetDataStorageConfig(DataStorageConfigT&& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = std::forward<DataStorageConfigT>(value); }
    template<typename DataStorageConfigT = InferenceExperimentDataStorageConfig>
    CreateInferenceExperimentRequest& WithDataStorageConfig(DataStorageConfigT&& value) { SetDataStorageConfig(std::forward<DataStorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const { return m_shadowModeConfig; }
    inline bool ShadowModeConfigHasBeenSet() const { return m_shadowModeConfigHasBeenSet; }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    void SetShadowModeConfig(ShadowModeConfigT&& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = std::forward<ShadowModeConfigT>(value); }
    template<typename ShadowModeConfigT = ShadowModeConfig>
    CreateInferenceExperimentRequest& WithShadowModeConfig(ShadowModeConfigT&& value) { SetShadowModeConfig(std::forward<ShadowModeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Web Services Key Management Service (Amazon Web Services KMS) key
     * that Amazon SageMaker uses to encrypt data on the storage volume attached to the
     * ML compute instance that hosts the endpoint. The <code>KmsKey</code> can be any
     * of the following formats: </p> <ul> <li> <p>KMS key ID</p> <p>
     * <code>"1234abcd-12ab-34cd-56ef-1234567890ab"</code> </p> </li> <li> <p>Amazon
     * Resource Name (ARN) of a KMS key</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab"</code>
     * </p> </li> <li> <p>KMS key Alias</p> <p> <code>"alias/ExampleAlias"</code> </p>
     * </li> <li> <p>Amazon Resource Name (ARN) of a KMS key Alias</p> <p>
     * <code>"arn:aws:kms:us-west-2:111122223333:alias/ExampleAlias"</code> </p> </li>
     * </ul> <p> If you use a KMS key ID or an alias of your KMS key, the Amazon
     * SageMaker execution role must include permissions to call
     * <code>kms:Encrypt</code>. If you don't provide a KMS key ID, Amazon SageMaker
     * uses the default KMS key for Amazon S3 for your role's account. Amazon SageMaker
     * uses server-side encryption with KMS managed keys for
     * <code>OutputDataConfig</code>. If you use a bucket policy with an
     * <code>s3:PutObject</code> permission that only allows objects with server-side
     * encryption, set the condition key of
     * <code>s3:x-amz-server-side-encryption</code> to <code>"aws:kms"</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/UsingKMSEncryption.html">KMS
     * managed Encryption Keys</a> in the <i>Amazon Simple Storage Service Developer
     * Guide.</i> </p> <p> The KMS key policy must grant permission to the IAM role
     * that you specify in your <code>CreateEndpoint</code> and
     * <code>UpdateEndpoint</code> requests. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/key-policies.html">Using
     * Key Policies in Amazon Web Services KMS</a> in the <i>Amazon Web Services Key
     * Management Service Developer Guide</i>. </p>
     */
    inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
    template<typename KmsKeyT = Aws::String>
    void SetKmsKey(KmsKeyT&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::forward<KmsKeyT>(value); }
    template<typename KmsKeyT = Aws::String>
    CreateInferenceExperimentRequest& WithKmsKey(KmsKeyT&& value) { SetKmsKey(std::forward<KmsKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInferenceExperimentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInferenceExperimentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentType m_type{InferenceExperimentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InferenceExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::Vector<ModelVariantConfig> m_modelVariants;
    bool m_modelVariantsHasBeenSet = false;

    InferenceExperimentDataStorageConfig m_dataStorageConfig;
    bool m_dataStorageConfigHasBeenSet = false;

    ShadowModeConfig m_shadowModeConfig;
    bool m_shadowModeConfigHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
