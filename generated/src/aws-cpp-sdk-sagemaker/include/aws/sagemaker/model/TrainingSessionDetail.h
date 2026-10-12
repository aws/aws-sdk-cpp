/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BillableTokenUsage.h>
#include <aws/sagemaker/model/LoraConfig.h>
#include <aws/sagemaker/model/Tag.h>
#include <aws/sagemaker/model/TrainingSessionModelConfig.h>
#include <aws/sagemaker/model/TrainingSessionOutputConfig.h>
#include <aws/sagemaker/model/TrainingSessionStatus.h>
#include <aws/sagemaker/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Contains detailed information about a training session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSessionDetail">AWS
 * API Reference</a></p>
 */
class TrainingSessionDetail {
 public:
  AWS_SAGEMAKER_API TrainingSessionDetail() = default;
  AWS_SAGEMAKER_API TrainingSessionDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingSessionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the training session.</p>
   */
  inline const Aws::String& GetTrainingSessionArn() const { return m_trainingSessionArn; }
  inline bool TrainingSessionArnHasBeenSet() const { return m_trainingSessionArnHasBeenSet; }
  template <typename TrainingSessionArnT = Aws::String>
  void SetTrainingSessionArn(TrainingSessionArnT&& value) {
    m_trainingSessionArnHasBeenSet = true;
    m_trainingSessionArn = std::forward<TrainingSessionArnT>(value);
  }
  template <typename TrainingSessionArnT = Aws::String>
  TrainingSessionDetail& WithTrainingSessionArn(TrainingSessionArnT&& value) {
    SetTrainingSessionArn(std::forward<TrainingSessionArnT>(value));
    return *this;
  }
  ///@}

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
  TrainingSessionDetail& WithTrainingSessionName(TrainingSessionNameT&& value) {
    SetTrainingSessionName(std::forward<TrainingSessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the training session.</p>
   */
  inline TrainingSessionStatus GetTrainingSessionStatus() const { return m_trainingSessionStatus; }
  inline bool TrainingSessionStatusHasBeenSet() const { return m_trainingSessionStatusHasBeenSet; }
  inline void SetTrainingSessionStatus(TrainingSessionStatus value) {
    m_trainingSessionStatusHasBeenSet = true;
    m_trainingSessionStatus = value;
  }
  inline TrainingSessionDetail& WithTrainingSessionStatus(TrainingSessionStatus value) {
    SetTrainingSessionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the model package group where checkpoints
   * are published.</p>
   */
  inline const Aws::String& GetModelPackageGroupArn() const { return m_modelPackageGroupArn; }
  inline bool ModelPackageGroupArnHasBeenSet() const { return m_modelPackageGroupArnHasBeenSet; }
  template <typename ModelPackageGroupArnT = Aws::String>
  void SetModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    m_modelPackageGroupArnHasBeenSet = true;
    m_modelPackageGroupArn = std::forward<ModelPackageGroupArnT>(value);
  }
  template <typename ModelPackageGroupArnT = Aws::String>
  TrainingSessionDetail& WithModelPackageGroupArn(ModelPackageGroupArnT&& value) {
    SetModelPackageGroupArn(std::forward<ModelPackageGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the training session was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  TrainingSessionDetail& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the training session was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  TrainingSessionDetail& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the training session ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  TrainingSessionDetail& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the training session failed or is blocked, detailed error information.</p>
   */
  inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = Aws::String>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::String>
  TrainingSessionDetail& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sequence number of the last training operation received by the
   * session.</p>
   */
  inline int GetLastReceivedSequenceNumber() const { return m_lastReceivedSequenceNumber; }
  inline bool LastReceivedSequenceNumberHasBeenSet() const { return m_lastReceivedSequenceNumberHasBeenSet; }
  inline void SetLastReceivedSequenceNumber(int value) {
    m_lastReceivedSequenceNumberHasBeenSet = true;
    m_lastReceivedSequenceNumber = value;
  }
  inline TrainingSessionDetail& WithLastReceivedSequenceNumber(int value) {
    SetLastReceivedSequenceNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billable token usage for the training session.</p>
   */
  inline const BillableTokenUsage& GetBillableTokenUsage() const { return m_billableTokenUsage; }
  inline bool BillableTokenUsageHasBeenSet() const { return m_billableTokenUsageHasBeenSet; }
  template <typename BillableTokenUsageT = BillableTokenUsage>
  void SetBillableTokenUsage(BillableTokenUsageT&& value) {
    m_billableTokenUsageHasBeenSet = true;
    m_billableTokenUsage = std::forward<BillableTokenUsageT>(value);
  }
  template <typename BillableTokenUsageT = BillableTokenUsage>
  TrainingSessionDetail& WithBillableTokenUsage(BillableTokenUsageT&& value) {
    SetBillableTokenUsage(std::forward<BillableTokenUsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Virtual Private Cloud (VPC) configuration for the training session.</p>
   */
  inline const VpcConfig& GetVpcConfig() const { return m_vpcConfig; }
  inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
  template <typename VpcConfigT = VpcConfig>
  void SetVpcConfig(VpcConfigT&& value) {
    m_vpcConfigHasBeenSet = true;
    m_vpcConfig = std::forward<VpcConfigT>(value);
  }
  template <typename VpcConfigT = VpcConfig>
  TrainingSessionDetail& WithVpcConfig(VpcConfigT&& value) {
    SetVpcConfig(std::forward<VpcConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role associated with the training
   * session.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  TrainingSessionDetail& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Low-Rank Adaptation (LoRA) configuration for the training session.</p>
   */
  inline const LoraConfig& GetLoraConfig() const { return m_loraConfig; }
  inline bool LoraConfigHasBeenSet() const { return m_loraConfigHasBeenSet; }
  template <typename LoraConfigT = LoraConfig>
  void SetLoraConfig(LoraConfigT&& value) {
    m_loraConfigHasBeenSet = true;
    m_loraConfig = std::forward<LoraConfigT>(value);
  }
  template <typename LoraConfigT = LoraConfig>
  TrainingSessionDetail& WithLoraConfig(LoraConfigT&& value) {
    SetLoraConfig(std::forward<LoraConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the base model.</p>
   */
  inline const TrainingSessionModelConfig& GetModelConfig() const { return m_modelConfig; }
  inline bool ModelConfigHasBeenSet() const { return m_modelConfigHasBeenSet; }
  template <typename ModelConfigT = TrainingSessionModelConfig>
  void SetModelConfig(ModelConfigT&& value) {
    m_modelConfigHasBeenSet = true;
    m_modelConfig = std::forward<ModelConfigT>(value);
  }
  template <typename ModelConfigT = TrainingSessionModelConfig>
  TrainingSessionDetail& WithModelConfig(ModelConfigT&& value) {
    SetModelConfig(std::forward<ModelConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the training session.</p>
   */
  inline const TrainingSessionOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = TrainingSessionOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = TrainingSessionOutputConfig>
  TrainingSessionDetail& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the training session.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  TrainingSessionDetail& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  TrainingSessionDetail& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_trainingSessionArn;

  Aws::String m_trainingSessionName;

  TrainingSessionStatus m_trainingSessionStatus{TrainingSessionStatus::NOT_SET};

  Aws::String m_modelPackageGroupArn;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_errorDetails;

  int m_lastReceivedSequenceNumber{0};

  BillableTokenUsage m_billableTokenUsage;

  VpcConfig m_vpcConfig;

  Aws::String m_roleArn;

  LoraConfig m_loraConfig;

  TrainingSessionModelConfig m_modelConfig;

  TrainingSessionOutputConfig m_outputConfig;

  Aws::Vector<Tag> m_tags;
  bool m_trainingSessionArnHasBeenSet = false;
  bool m_trainingSessionNameHasBeenSet = false;
  bool m_trainingSessionStatusHasBeenSet = false;
  bool m_modelPackageGroupArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_lastReceivedSequenceNumberHasBeenSet = false;
  bool m_billableTokenUsageHasBeenSet = false;
  bool m_vpcConfigHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_loraConfigHasBeenSet = false;
  bool m_modelConfigHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
