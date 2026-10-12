/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LoraConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/TrainingSessionModelConfig.h>
#include <aws/sagemaker/model/TrainingSessionOutputConfig.h>
#include <aws/sagemaker/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateTrainingSessionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateTrainingSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTrainingSession"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the training session.</p>
   */
  inline const Aws::String& GetTrainingSessionName() const { return m_trainingSessionName; }
  inline bool TrainingSessionNameHasBeenSet() const { return m_trainingSessionNameHasBeenSet; }
  template <typename TrainingSessionNameT = Aws::String>
  void SetTrainingSessionName(TrainingSessionNameT&& value) {
    m_trainingSessionNameHasBeenSet = true;
    m_trainingSessionName = std::forward<TrainingSessionNameT>(value);
  }
  template <typename TrainingSessionNameT = Aws::String>
  CreateTrainingSessionRequest& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model package group where checkpoints
   * and fine-tuned model artifacts are published.</p>
   */
  inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
  inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }
  template <typename ModelPackageGroupArnT = Aws::String>
  void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    m_modelPackageGroupArnHasBeenSet = true;
    m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value);
  }
  template <typename ModelPackageGroupArnT = Aws::String>
  CreateTrainingSessionRequest& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Low-Rank Adaptation (LoRA) configuration for the training session,
   * including the rank and alpha parameters.</p>
   */
  inline const LoraConfig& GetLoraConfig() const { return m_loraConfig; }
  inline bool LoraConfigHasBeenSet() const { return m_loraConfigHasBeenSet; }
  template <typename LoraConfigT = LoraConfig>
  void SetLoraConfig(LoraConfigT&& value) {
    m_loraConfigHasBeenSet = true;
    m_loraConfig = std::forward<LoraConfigT>(value);
  }
  template <typename LoraConfigT = LoraConfig>
  CreateTrainingSessionRequest& WithLoraConfig(LoraConfigT&& value) {
    SetLoraConfig(std::forward<LoraConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker assumes
   * to access resources on your behalf. The role must have permissions to access the
   * output S3 path and model package group.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateTrainingSessionRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Virtual Private Cloud (VPC) configuration for the training session.
   * Specify subnets and security groups to run the training session in your VPC.</p>
   */
  inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfig>
  CreateTrainingSessionRequest& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the base model, including the model ARN and end-user
   * license agreement (EULA) acceptance.</p>
   */
  inline const TrainingSessionModelConfig& GetModelConfig() const { return m_modelConfig; }
  inline bool ModelConfigHasBeenSet() const { return m_modelConfigHasBeenSet; }
  template <typename ModelConfigT = TrainingSessionModelConfig>
  void SetModelConfig(ModelConfigT&& value) {
    m_modelConfigHasBeenSet = true;
    m_modelConfig = std::forward<ModelConfigT>(value);
  }
  template <typename ModelConfigT = TrainingSessionModelConfig>
  CreateTrainingSessionRequest& WithModelConfig(ModelConfigT&& value) {
    SetModelConfig(std::forward<ModelConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the training session, including the S3 location
   * and optional encryption settings.</p>
   */
  inline const TrainingSessionOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = TrainingSessionOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = TrainingSessionOutputConfig>
  CreateTrainingSessionRequest& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key-value pairs to apply to the training session as tags. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateTrainingSessionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateTrainingSessionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionName;

  Aws::String m_modelPackageGroupArn;

  LoraConfig m_loraConfig;

  Aws::String m_roleArn;

  VpcConfig m_vpcConfig;

  TrainingSessionModelConfig m_modelConfig;

  TrainingSessionOutputConfig m_outputConfig;

  Aws::Vector<Tag> m_tags;
  bool m_trainingSessionNameHasBeenSet = false;
  bool m_modelPackageGroupArnHasBeenSet = false;
  bool m_loraConfigHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
  bool m_modelConfigHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
