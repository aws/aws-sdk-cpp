/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIDatasetConfig.h>
#include <aws/sagemaker/model/AIWorkloadConfigs.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateAIWorkloadConfigRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateAIWorkloadConfigRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAIWorkloadConfig"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the AI workload configuration. The name must be unique within
   * your Amazon Web Services account in the current Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigName() const { return m_aIWorkloadConfigName; }
  inline bool AIWorkloadConfigNameHasBeenSet() const { return m_aIWorkloadConfigNameHasBeenSet; }
  template <typename AIWorkloadConfigNameT = Aws::String>
  void SetAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    m_aIWorkloadConfigNameHasBeenSet = true;
    m_aIWorkloadConfigName = std::forward<AIWorkloadConfigNameT>(value);
  }
  template <typename AIWorkloadConfigNameT = Aws::String>
  CreateAIWorkloadConfigRequest& WithAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    SetAIWorkloadConfigName(std::forward<AIWorkloadConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dataset configuration for the workload. Specify input data channels with
   * their data sources for benchmark workloads.</p>
   */
  inline const AIDatasetConfig& GetDatasetConfig() const { return m_datasetConfig; }
  inline bool DatasetConfigHasBeenSet() const { return m_datasetConfigHasBeenSet; }
  template <typename DatasetConfigT = AIDatasetConfig>
  void SetDatasetConfig(DatasetConfigT&& value) {
    m_datasetConfigHasBeenSet = true;
    m_datasetConfig = std::forward<DatasetConfigT>(value);
  }
  template <typename DatasetConfigT = AIDatasetConfig>
  CreateAIWorkloadConfigRequest& WithDatasetConfig(DatasetConfigT&& value) {
    SetDatasetConfig(std::forward<DatasetConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The benchmark tool configuration and workload specification. Provide the
   * specification as an inline YAML or JSON string.</p>
   */
  inline const AIWorkloadConfigs& GetAIWorkloadConfigs() const { return m_aIWorkloadConfigs; }
  inline bool AIWorkloadConfigsHasBeenSet() const { return m_aIWorkloadConfigsHasBeenSet; }
  template <typename AIWorkloadConfigsT = AIWorkloadConfigs>
  void SetAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    m_aIWorkloadConfigsHasBeenSet = true;
    m_aIWorkloadConfigs = std::forward<AIWorkloadConfigsT>(value);
  }
  template <typename AIWorkloadConfigsT = AIWorkloadConfigs>
  CreateAIWorkloadConfigRequest& WithAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    SetAIWorkloadConfigs(std::forward<AIWorkloadConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to Amazon Web Services resources to help you
   * categorize and organize them. Each tag consists of a key and a value, both of
   * which you define. For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a> in the Amazon Web Services General
   * Reference.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAIWorkloadConfigRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAIWorkloadConfigRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIWorkloadConfigName;

  AIDatasetConfig m_datasetConfig;

  AIWorkloadConfigs m_aIWorkloadConfigs;

  Aws::Vector<Tag> m_tags;
  bool m_aIWorkloadConfigNameHasBeenSet = false;
  bool m_datasetConfigHasBeenSet = false;
  bool m_aIWorkloadConfigsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
