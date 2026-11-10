/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>The hub and the hub content that a HubContent step imported.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubContentStepMetadata">AWS
 * API Reference</a></p>
 */
class HubContentStepMetadata {
 public:
  AWS_SAGEMAKER_API HubContentStepMetadata() = default;
  AWS_SAGEMAKER_API HubContentStepMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API HubContentStepMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the hub that the step imported the content
   * into.</p>
   */
  inline const Aws::String& GetHubArn() const { return m_hubArn; }
  inline bool HubArnHasBeenSet() const { return m_hubArnHasBeenSet; }
  template <typename HubArnT = Aws::String>
  void SetHubArn(HubArnT&& value) {
    m_hubArnHasBeenSet = true;
    m_hubArn = std::forward<HubArnT>(value);
  }
  template <typename HubArnT = Aws::String>
  HubContentStepMetadata& WithHubArn(HubArnT&& value) {
    SetHubArn(std::forward<HubArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the hub content that was imported by this
   * step execution.</p>
   */
  inline const Aws::String& GetHubContentArn() const { return m_hubContentArn; }
  inline bool HubContentArnHasBeenSet() const { return m_hubContentArnHasBeenSet; }
  template <typename HubContentArnT = Aws::String>
  void SetHubContentArn(HubContentArnT&& value) {
    m_hubContentArnHasBeenSet = true;
    m_hubContentArn = std::forward<HubContentArnT>(value);
  }
  template <typename HubContentArnT = Aws::String>
  HubContentStepMetadata& WithHubContentArn(HubContentArnT&& value) {
    SetHubContentArn(std::forward<HubContentArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hubArn;

  Aws::String m_hubContentArn;
  bool m_hubArnHasBeenSet = false;
  bool m_hubContentArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
