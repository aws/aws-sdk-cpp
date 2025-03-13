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
    AWS_REKOGNITION_API CreateProjectVersionRequest() = default;

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
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    CreateProjectVersionRequest& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the version of the project version. This value must be unique.</p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    CreateProjectVersionRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 bucket location to store the results of training. The bucket
     * can be any S3 bucket in your AWS account. You need <code>s3:PutObject</code>
     * permission on the bucket. </p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    CreateProjectVersionRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an external manifest that the services uses to train the project
     * version. If you specify <code>TrainingData</code> you must also specify
     * <code>TestingData</code>. The project must not have any associated datasets.
     * </p>
     */
    inline const TrainingData& GetTrainingData() const { return m_trainingData; }
    inline bool TrainingDataHasBeenSet() const { return m_trainingDataHasBeenSet; }
    template<typename TrainingDataT = TrainingData>
    void SetTrainingData(TrainingDataT&& value) { m_trainingDataHasBeenSet = true; m_trainingData = std::forward<TrainingDataT>(value); }
    template<typename TrainingDataT = TrainingData>
    CreateProjectVersionRequest& WithTrainingData(TrainingDataT&& value) { SetTrainingData(std::forward<TrainingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies an external manifest that the service uses to test the project
     * version. If you specify <code>TestingData</code> you must also specify
     * <code>TrainingData</code>. The project must not have any associated
     * datasets.</p>
     */
    inline const TestingData& GetTestingData() const { return m_testingData; }
    inline bool TestingDataHasBeenSet() const { return m_testingDataHasBeenSet; }
    template<typename TestingDataT = TestingData>
    void SetTestingData(TestingDataT&& value) { m_testingDataHasBeenSet = true; m_testingData = std::forward<TestingDataT>(value); }
    template<typename TestingDataT = TestingData>
    CreateProjectVersionRequest& WithTestingData(TestingDataT&& value) { SetTestingData(std::forward<TestingDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A set of tags (key-value pairs) that you want to attach to the project
     * version. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateProjectVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateProjectVersionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateProjectVersionRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description applied to the project version being created.</p>
     */
    inline const Aws::String& GetVersionDescription() const { return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    template<typename VersionDescriptionT = Aws::String>
    void SetVersionDescription(VersionDescriptionT&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::forward<VersionDescriptionT>(value); }
    template<typename VersionDescriptionT = Aws::String>
    CreateProjectVersionRequest& WithVersionDescription(VersionDescriptionT&& value) { SetVersionDescription(std::forward<VersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Feature-specific configuration of the training job. If the job configuration
     * does not match the feature type associated with the project, an
     * InvalidParameterException is returned.</p>
     */
    inline const CustomizationFeatureConfig& GetFeatureConfig() const { return m_featureConfig; }
    inline bool FeatureConfigHasBeenSet() const { return m_featureConfigHasBeenSet; }
    template<typename FeatureConfigT = CustomizationFeatureConfig>
    void SetFeatureConfig(FeatureConfigT&& value) { m_featureConfigHasBeenSet = true; m_featureConfig = std::forward<FeatureConfigT>(value); }
    template<typename FeatureConfigT = CustomizationFeatureConfig>
    CreateProjectVersionRequest& WithFeatureConfig(FeatureConfigT&& value) { SetFeatureConfig(std::forward<FeatureConfigT>(value)); return *this;}
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
