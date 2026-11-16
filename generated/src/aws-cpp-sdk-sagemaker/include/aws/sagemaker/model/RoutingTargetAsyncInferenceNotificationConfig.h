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
 * <p>The Amazon SNS topics that the inference router publishes to. The router
 * publishes one notification for each request. The notification contains the
 * location of the result, not the result itself. The destination endpoints also
 * send their own notifications, if they're configured to.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoutingTargetAsyncInferenceNotificationConfig">AWS
 * API Reference</a></p>
 */
class RoutingTargetAsyncInferenceNotificationConfig {
 public:
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceNotificationConfig() = default;
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceNotificationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceNotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon SNS topic to publish to when a request completes. The
   * topic must be a standard topic, and can be in any Amazon Web Services
   * Region.</p>
   */
  inline const Aws::String& GetSuccessTopic() const { return m_successTopic; }
  inline bool SuccessTopicHasBeenSet() const { return m_successTopicHasBeenSet; }
  template <typename SuccessTopicT = Aws::String>
  void SetSuccessTopic(SuccessTopicT&& value) {
    m_successTopicHasBeenSet = true;
    m_successTopic = std::forward<SuccessTopicT>(value);
  }
  template <typename SuccessTopicT = Aws::String>
  RoutingTargetAsyncInferenceNotificationConfig& WithSuccessTopic(SuccessTopicT&& value) {
    SetSuccessTopic(std::forward<SuccessTopicT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon SNS topic to publish to when a request fails, or when
   * the router can't place it on any destination. The topic must be a standard
   * topic, and can be in any Amazon Web Services Region.</p>
   */
  inline const Aws::String& GetErrorTopic() const { return m_errorTopic; }
  inline bool ErrorTopicHasBeenSet() const { return m_errorTopicHasBeenSet; }
  template <typename ErrorTopicT = Aws::String>
  void SetErrorTopic(ErrorTopicT&& value) {
    m_errorTopicHasBeenSet = true;
    m_errorTopic = std::forward<ErrorTopicT>(value);
  }
  template <typename ErrorTopicT = Aws::String>
  RoutingTargetAsyncInferenceNotificationConfig& WithErrorTopic(ErrorTopicT&& value) {
    SetErrorTopic(std::forward<ErrorTopicT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_successTopic;

  Aws::String m_errorTopic;
  bool m_successTopicHasBeenSet = false;
  bool m_errorTopicHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
