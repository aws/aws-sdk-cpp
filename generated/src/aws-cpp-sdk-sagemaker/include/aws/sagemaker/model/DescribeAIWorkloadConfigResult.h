/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIDatasetConfig.h>
#include <aws/sagemaker/model/AIWorkloadConfigs.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class DescribeAIWorkloadConfigResult {
 public:
  AWS_SAGEMAKER_API DescribeAIWorkloadConfigResult() = default;
  AWS_SAGEMAKER_API DescribeAIWorkloadConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API DescribeAIWorkloadConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the AI workload configuration.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigName() const { return m_aIWorkloadConfigName; }
  template <typename AIWorkloadConfigNameT = Aws::String>
  void SetAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    m_aIWorkloadConfigNameHasBeenSet = true;
    m_aIWorkloadConfigName = std::forward<AIWorkloadConfigNameT>(value);
  }
  template <typename AIWorkloadConfigNameT = Aws::String>
  DescribeAIWorkloadConfigResult& WithAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    SetAIWorkloadConfigName(std::forward<AIWorkloadConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI workload configuration.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigArn() const { return m_aIWorkloadConfigArn; }
  template <typename AIWorkloadConfigArnT = Aws::String>
  void SetAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    m_aIWorkloadConfigArnHasBeenSet = true;
    m_aIWorkloadConfigArn = std::forward<AIWorkloadConfigArnT>(value);
  }
  template <typename AIWorkloadConfigArnT = Aws::String>
  DescribeAIWorkloadConfigResult& WithAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    SetAIWorkloadConfigArn(std::forward<AIWorkloadConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dataset configuration for the workload.</p>
   */
  inline const AIDatasetConfig& GetDatasetConfig() const { return m_datasetConfig; }
  template <typename DatasetConfigT = AIDatasetConfig>
  void SetDatasetConfig(DatasetConfigT&& value) {
    m_datasetConfigHasBeenSet = true;
    m_datasetConfig = std::forward<DatasetConfigT>(value);
  }
  template <typename DatasetConfigT = AIDatasetConfig>
  DescribeAIWorkloadConfigResult& WithDatasetConfig(DatasetConfigT&& value) {
    SetDatasetConfig(std::forward<DatasetConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The benchmark tool configuration and workload specification.</p>
   */
  inline const AIWorkloadConfigs& GetAIWorkloadConfigs() const { return m_aIWorkloadConfigs; }
  template <typename AIWorkloadConfigsT = AIWorkloadConfigs>
  void SetAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    m_aIWorkloadConfigsHasBeenSet = true;
    m_aIWorkloadConfigs = std::forward<AIWorkloadConfigsT>(value);
  }
  template <typename AIWorkloadConfigsT = AIWorkloadConfigs>
  DescribeAIWorkloadConfigResult& WithAIWorkloadConfigs(AIWorkloadConfigsT&& value) {
    SetAIWorkloadConfigs(std::forward<AIWorkloadConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the AI workload configuration.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  DescribeAIWorkloadConfigResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  DescribeAIWorkloadConfigResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the AI workload configuration was
   * created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeAIWorkloadConfigResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeAIWorkloadConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_aIWorkloadConfigName;

  Aws::String m_aIWorkloadConfigArn;

  AIDatasetConfig m_datasetConfig;

  AIWorkloadConfigs m_aIWorkloadConfigs;

  Aws::Vector<Tag> m_tags;

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_aIWorkloadConfigNameHasBeenSet = false;
  bool m_aIWorkloadConfigArnHasBeenSet = false;
  bool m_datasetConfigHasBeenSet = false;
  bool m_aIWorkloadConfigsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
