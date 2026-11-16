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
 * <p>A summary of an inference router.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceRouterSummary">AWS
 * API Reference</a></p>
 */
class InferenceRouterSummary {
 public:
  AWS_SAGEMAKER_API InferenceRouterSummary() = default;
  AWS_SAGEMAKER_API InferenceRouterSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceRouterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the inference router.</p>
   */
  inline const Aws::String& GetInferenceRouterName() const { return m_inferenceRouterName; }
  inline bool InferenceRouterNameHasBeenSet() const { return m_inferenceRouterNameHasBeenSet; }
  template <typename InferenceRouterNameT = Aws::String>
  void SetInferenceRouterName(InferenceRouterNameT&& value) {
    m_inferenceRouterNameHasBeenSet = true;
    m_inferenceRouterName = std::forward<InferenceRouterNameT>(value);
  }
  template <typename InferenceRouterNameT = Aws::String>
  InferenceRouterSummary& WithInferenceRouterName(InferenceRouterNameT&& value) {
    SetInferenceRouterName(std::forward<InferenceRouterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the inference router.</p>
   */
  inline const Aws::String& GetInferenceRouterArn() const { return m_inferenceRouterArn; }
  inline bool InferenceRouterArnHasBeenSet() const { return m_inferenceRouterArnHasBeenSet; }
  template <typename InferenceRouterArnT = Aws::String>
  void SetInferenceRouterArn(InferenceRouterArnT&& value) {
    m_inferenceRouterArnHasBeenSet = true;
    m_inferenceRouterArn = std::forward<InferenceRouterArnT>(value);
  }
  template <typename InferenceRouterArnT = Aws::String>
  InferenceRouterSummary& WithInferenceRouterArn(InferenceRouterArnT&& value) {
    SetInferenceRouterArn(std::forward<InferenceRouterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the inference router was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  InferenceRouterSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the inference router was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  InferenceRouterSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inferenceRouterName;

  Aws::String m_inferenceRouterArn;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};
  bool m_inferenceRouterNameHasBeenSet = false;
  bool m_inferenceRouterArnHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
