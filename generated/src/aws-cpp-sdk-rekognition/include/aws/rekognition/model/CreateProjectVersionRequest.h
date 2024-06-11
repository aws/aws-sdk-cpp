/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/OutputConfig.h>
#include <aws/rekognition/model/TrainingData.h>
#include <aws/rekognition/model/TestingData.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/rekognition/model/CustomizationFeatureConfig.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class CreateProjectVersionRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API CreateProjectVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProjectVersion"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the Amazon Rekognition project that will manage the project
     * version you want to train.</p>
     */
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline CreateProjectVersionRequest& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline CreateProjectVersionRequest& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline CreateProjectVersionRequest& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the version of the project version. This value must be unique.</p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline CreateProjectVersionRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline CreateProjectVersionRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline CreateProjectVersionRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket location to store the results of training. The bucket
     * can be any S3 bucket in your AWS account. You need <code>s3:PutObject</code>
     * permission on the bucket. </p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreateProjectVersionRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreateProjectVersionRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an external manifest that the services uses to train the project
     * version. If you specify <code>TrainingData</code> you must also specify
     * <code>TestingData</code>. The project must not have any associated datasets.
     * </p>
     */
    inline const TrainingData& GetTrainingData() const{ return m_trainingData; }
    inline bool TrainingDataHasBeenSet() const { return m_trainingDataHasBeenSet; }
    inline void SetTrainingData(const TrainingData& value) { m_trainingDataHasBeenSet = true; m_trainingData = value; }
    inline void SetTrainingData(TrainingData&& value) { m_trainingDataHasBeenSet = true; m_trainingData = std::move(value); }
    inline CreateProjectVersionRequest& WithTrainingData(const TrainingData& value) { SetTrainingData(value); return *this;}
    inline CreateProjectVersionRequest& WithTrainingData(TrainingData&& value) { SetTrainingData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an external manifest that the service uses to test the project
     * version. If you specify <code>TestingData</code> you must also specify
     * <code>TrainingData</code>. The project must not have any associated
     * datasets.</p>
     */
    inline const TestingData& GetTestingData() const{ return m_testingData; }
    inline bool TestingDataHasBeenSet() const { return m_testingDataHasBeenSet; }
    inline void SetTestingData(const TestingData& value) { m_testingDataHasBeenSet = true; m_testingData = value; }
    inline void SetTestingData(TestingData&& value) { m_testingDataHasBeenSet = true; m_testingData = std::move(value); }
    inline CreateProjectVersionRequest& WithTestingData(const TestingData& value) { SetTestingData(value); return *this;}
    inline CreateProjectVersionRequest& WithTestingData(TestingData&& value) { SetTestingData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the project
     * version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateProjectVersionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateProjectVersionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateProjectVersionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateProjectVersionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProjectVersionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProjectVersionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateProjectVersionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateProjectVersionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateProjectVersionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). You can
     * supply the Amazon Resource Name (ARN) of your KMS key, the ID of your KMS key,
     * an alias for your KMS key, or an alias ARN. The key is used to encrypt training
     * images, test images, and manifest files copied into the service for the project
     * version. Your source images are unaffected. The key is also used to encrypt
     * training results and manifest files written to the output Amazon S3 bucket
     * (<code>OutputConfig</code>).</p> <p>If you choose to use your own KMS key, you
     * need the following permissions on the KMS key.</p> <ul> <li>
     * <p>kms:CreateGrant</p> </li> <li> <p>kms:DescribeKey</p> </li> <li>
     * <p>kms:GenerateDataKey</p> </li> <li> <p>kms:Decrypt</p> </li> </ul> <p>If you
     * don't specify a value for <code>KmsKeyId</code>, images copied into the service
     * are encrypted using a key that AWS owns and manages.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline CreateProjectVersionRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline CreateProjectVersionRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline CreateProjectVersionRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description applied to the project version being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline CreateProjectVersionRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline CreateProjectVersionRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline CreateProjectVersionRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feature-specific configuration of the training job. If the job configuration
     * does not match the feature type associated with the project, an
     * InvalidParameterException is returned.</p>
     */
    inline const CustomizationFeatureConfig& GetFeatureConfig() const{ return m_featureConfig; }
    inline bool FeatureConfigHasBeenSet() const { return m_featureConfigHasBeenSet; }
    inline void SetFeatureConfig(const CustomizationFeatureConfig& value) { m_featureConfigHasBeenSet = true; m_featureConfig = value; }
    inline void SetFeatureConfig(CustomizationFeatureConfig&& value) { m_featureConfigHasBeenSet = true; m_featureConfig = std::move(value); }
    inline CreateProjectVersionRequest& WithFeatureConfig(const CustomizationFeatureConfig& value) { SetFeatureConfig(value); return *this;}
    inline CreateProjectVersionRequest& WithFeatureConfig(CustomizationFeatureConfig&& value) { SetFeatureConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    TrainingData m_trainingData;
    bool m_trainingDataHasBeenSet = false;

    TestingData m_testingData;
    bool m_testingDataHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;

    CustomizationFeatureConfig m_featureConfig;
    bool m_featureConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
