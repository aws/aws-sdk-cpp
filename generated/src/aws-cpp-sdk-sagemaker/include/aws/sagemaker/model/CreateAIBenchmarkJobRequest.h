/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIBenchmarkNetworkConfig.h>
#include <aws/sagemaker/model/AIBenchmarkOutputConfig.h>
#include <aws/sagemaker/model/AIBenchmarkTarget.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateAIBenchmarkJobRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateAIBenchmarkJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAIBenchmarkJob"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the AI benchmark job. The name must be unique within your Amazon
   * Web Services account in the current Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetAIBenchmarkJobName() const { return m_aIBenchmarkJobName; }
  inline bool AIBenchmarkJobNameHasBeenSet() const { return m_aIBenchmarkJobNameHasBeenSet; }
  template <typename AIBenchmarkJobNameT = Aws::String>
  void SetAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    m_aIBenchmarkJobNameHasBeenSet = true;
    m_aIBenchmarkJobName = std::forward<AIBenchmarkJobNameT>(value);
  }
  template <typename AIBenchmarkJobNameT = Aws::String>
  CreateAIBenchmarkJobRequest& WithAIBenchmarkJobName(AIBenchmarkJobNameT&& value) {
    SetAIBenchmarkJobName(std::forward<AIBenchmarkJobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target endpoint to benchmark. Specify a SageMaker endpoint by providing
   * its name or Amazon Resource Name (ARN).</p>
   */
  inline const AIBenchmarkTarget& GetBenchmarkTarget() const { return m_benchmarkTarget; }
  inline bool BenchmarkTargetHasBeenSet() const { return m_benchmarkTargetHasBeenSet; }
  template <typename BenchmarkTargetT = AIBenchmarkTarget>
  void SetBenchmarkTarget(BenchmarkTargetT&& value) {
    m_benchmarkTargetHasBeenSet = true;
    m_benchmarkTarget = std::forward<BenchmarkTargetT>(value);
  }
  template <typename BenchmarkTargetT = AIBenchmarkTarget>
  CreateAIBenchmarkJobRequest& WithBenchmarkTarget(BenchmarkTargetT&& value) {
    SetBenchmarkTarget(std::forward<BenchmarkTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the benchmark job, including the Amazon S3
   * location where benchmark results are stored.</p>
   */
  inline const AIBenchmarkOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = AIBenchmarkOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AIBenchmarkOutputConfig>
  CreateAIBenchmarkJobRequest& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the AI workload configuration to
   * use for this benchmark job.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigIdentifier() const { return m_aIWorkloadConfigIdentifier; }
  inline bool AIWorkloadConfigIdentifierHasBeenSet() const { return m_aIWorkloadConfigIdentifierHasBeenSet; }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  void SetAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    m_aIWorkloadConfigIdentifierHasBeenSet = true;
    m_aIWorkloadConfigIdentifier = std::forward<AIWorkloadConfigIdentifierT>(value);
  }
  template <typename AIWorkloadConfigIdentifierT = Aws::String>
  CreateAIBenchmarkJobRequest& WithAIWorkloadConfigIdentifier(AIWorkloadConfigIdentifierT&& value) {
    SetAIWorkloadConfigIdentifier(std::forward<AIWorkloadConfigIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
   * AI to perform tasks on your behalf.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateAIBenchmarkJobRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The network configuration for the benchmark job, including VPC settings.</p>
   */
  inline const AIBenchmarkNetworkConfig& GetNetworkConfig() const { return m_networkConfig; }
  inline bool NetworkConfigHasBeenSet() const { return m_networkConfigHasBeenSet; }
  template <typename NetworkConfigT = AIBenchmarkNetworkConfig>
  void SetNetworkConfig(NetworkConfigT&& value) {
    m_networkConfigHasBeenSet = true;
    m_networkConfig = std::forward<NetworkConfigT>(value);
  }
  template <typename NetworkConfigT = AIBenchmarkNetworkConfig>
  CreateAIBenchmarkJobRequest& WithNetworkConfig(NetworkConfigT&& value) {
    SetNetworkConfig(std::forward<NetworkConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to Amazon Web Services resources to help you
   * categorize and organize them. Each tag consists of a key and a value, both of
   * which you define.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAIBenchmarkJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAIBenchmarkJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIBenchmarkJobName;

  AIBenchmarkTarget m_benchmarkTarget;

  AIBenchmarkOutputConfig m_outputConfig;

  Aws::String m_aIWorkloadConfigIdentifier;

  Aws::String m_roleArn;

  AIBenchmarkNetworkConfig m_networkConfig;

  Aws::Vector<Tag> m_tags;
  bool m_aIBenchmarkJobNameHasBeenSet = false;
  bool m_benchmarkTargetHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_aIWorkloadConfigIdentifierHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_networkConfigHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
