/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>Summary information about an AI workload configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIWorkloadConfigSummary">AWS
 * API Reference</a></p>
 */
class AIWorkloadConfigSummary {
 public:
  AWS_SAGEMAKER_API AIWorkloadConfigSummary() = default;
  AWS_SAGEMAKER_API AIWorkloadConfigSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIWorkloadConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the AI workload configuration.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigName() const { return m_aIWorkloadConfigName; }
  inline bool AIWorkloadConfigNameHasBeenSet() const { return m_aIWorkloadConfigNameHasBeenSet; }
  template <typename AIWorkloadConfigNameT = Aws::String>
  void SetAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    m_aIWorkloadConfigNameHasBeenSet = true;
    m_aIWorkloadConfigName = std::forward<AIWorkloadConfigNameT>(value);
  }
  template <typename AIWorkloadConfigNameT = Aws::String>
  AIWorkloadConfigSummary& WithAIWorkloadConfigName(AIWorkloadConfigNameT&& value) {
    SetAIWorkloadConfigName(std::forward<AIWorkloadConfigNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AI workload configuration.</p>
   */
  inline const Aws::String& GetAIWorkloadConfigArn() const { return m_aIWorkloadConfigArn; }
  inline bool AIWorkloadConfigArnHasBeenSet() const { return m_aIWorkloadConfigArnHasBeenSet; }
  template <typename AIWorkloadConfigArnT = Aws::String>
  void SetAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    m_aIWorkloadConfigArnHasBeenSet = true;
    m_aIWorkloadConfigArn = std::forward<AIWorkloadConfigArnT>(value);
  }
  template <typename AIWorkloadConfigArnT = Aws::String>
  AIWorkloadConfigSummary& WithAIWorkloadConfigArn(AIWorkloadConfigArnT&& value) {
    SetAIWorkloadConfigArn(std::forward<AIWorkloadConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the configuration was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  AIWorkloadConfigSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aIWorkloadConfigName;

  Aws::String m_aIWorkloadConfigArn;

  Aws::Utils::DateTime m_creationTime{};
  bool m_aIWorkloadConfigNameHasBeenSet = false;
  bool m_aIWorkloadConfigArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
