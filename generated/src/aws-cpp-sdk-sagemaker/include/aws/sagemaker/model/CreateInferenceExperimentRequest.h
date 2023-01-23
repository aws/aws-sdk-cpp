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
    AWS_SAGEMAKER_API CreateInferenceExperimentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceExperiment"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the inference experiment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline const InferenceExperimentType& GetType() const{ return m_type; }

    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline void SetType(const InferenceExperimentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline void SetType(InferenceExperimentType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline CreateInferenceExperimentRequest& WithType(const InferenceExperimentType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the inference experiment that you want to run. The following
     * types of experiments are possible: </p> <ul> <li> <p> <code>ShadowMode</code>:
     * You can use this type to validate a shadow variant. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/shadow-tests.html">Shadow
     * tests</a>. </p> </li> </ul>
     */
    inline CreateInferenceExperimentRequest& WithType(InferenceExperimentType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline void SetSchedule(const InferenceExperimentSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline void SetSchedule(InferenceExperimentSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline CreateInferenceExperimentRequest& WithSchedule(const InferenceExperimentSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p> The duration for which you want the inference experiment to run. If you
     * don't specify this field, the experiment automatically starts immediately upon
     * creation and concludes after 7 days. </p>
     */
    inline CreateInferenceExperimentRequest& WithSchedule(InferenceExperimentSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>A description for the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the inference experiment.</p>
     */
    inline CreateInferenceExperimentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline CreateInferenceExperimentRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline CreateInferenceExperimentRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline CreateInferenceExperimentRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline CreateInferenceExperimentRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline CreateInferenceExperimentRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p> The name of the Amazon SageMaker endpoint on which you want to run the
     * inference experiment. </p>
     */
    inline CreateInferenceExperimentRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline const Aws::Vector<ModelVariantConfig>& GetModelVariants() const{ return m_modelVariants; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline bool ModelVariantsHasBeenSet() const { return m_modelVariantsHasBeenSet; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline void SetModelVariants(const Aws::Vector<ModelVariantConfig>& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = value; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline void SetModelVariants(Aws::Vector<ModelVariantConfig>&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants = std::move(value); }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline CreateInferenceExperimentRequest& WithModelVariants(const Aws::Vector<ModelVariantConfig>& value) { SetModelVariants(value); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline CreateInferenceExperimentRequest& WithModelVariants(Aws::Vector<ModelVariantConfig>&& value) { SetModelVariants(std::move(value)); return *this;}

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline CreateInferenceExperimentRequest& AddModelVariants(const ModelVariantConfig& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.push_back(value); return *this; }

    /**
     * <p> An array of <code>ModelVariantConfig</code> objects. There is one for each
     * variant in the inference experiment. Each <code>ModelVariantConfig</code> object
     * in the array describes the infrastructure configuration for the corresponding
     * variant. </p>
     */
    inline CreateInferenceExperimentRequest& AddModelVariants(ModelVariantConfig&& value) { m_modelVariantsHasBeenSet = true; m_modelVariants.push_back(std::move(value)); return *this; }


    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline const InferenceExperimentDataStorageConfig& GetDataStorageConfig() const{ return m_dataStorageConfig; }

    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline bool DataStorageConfigHasBeenSet() const { return m_dataStorageConfigHasBeenSet; }

    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline void SetDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = value; }

    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline void SetDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { m_dataStorageConfigHasBeenSet = true; m_dataStorageConfig = std::move(value); }

    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline CreateInferenceExperimentRequest& WithDataStorageConfig(const InferenceExperimentDataStorageConfig& value) { SetDataStorageConfig(value); return *this;}

    /**
     * <p> The Amazon S3 location and configuration for storing inference request and
     * response data. </p> <p> This is an optional parameter that you can use for data
     * capture. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor-data-capture.html">Capture
     * data</a>. </p>
     */
    inline CreateInferenceExperimentRequest& WithDataStorageConfig(InferenceExperimentDataStorageConfig&& value) { SetDataStorageConfig(std::move(value)); return *this;}


    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline const ShadowModeConfig& GetShadowModeConfig() const{ return m_shadowModeConfig; }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline bool ShadowModeConfigHasBeenSet() const { return m_shadowModeConfigHasBeenSet; }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline void SetShadowModeConfig(const ShadowModeConfig& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = value; }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline void SetShadowModeConfig(ShadowModeConfig&& value) { m_shadowModeConfigHasBeenSet = true; m_shadowModeConfig = std::move(value); }

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline CreateInferenceExperimentRequest& WithShadowModeConfig(const ShadowModeConfig& value) { SetShadowModeConfig(value); return *this;}

    /**
     * <p> The configuration of <code>ShadowMode</code> inference experiment type. Use
     * this field to specify a production variant which takes all the inference
     * requests, and a shadow variant to which Amazon SageMaker replicates a percentage
     * of the inference requests. For the shadow variant also specify the percentage of
     * requests that Amazon SageMaker replicates. </p>
     */
    inline CreateInferenceExperimentRequest& WithShadowModeConfig(ShadowModeConfig&& value) { SetShadowModeConfig(std::move(value)); return *this;}


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
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

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
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

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
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

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
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

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
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

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
    inline CreateInferenceExperimentRequest& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

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
    inline CreateInferenceExperimentRequest& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

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
    inline CreateInferenceExperimentRequest& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}


    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline CreateInferenceExperimentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline CreateInferenceExperimentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline CreateInferenceExperimentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p> Array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/ARG/latest/userguide/tagging.html">Tagging
     * your Amazon Web Services Resources</a>. </p>
     */
    inline CreateInferenceExperimentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentType m_type;
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
