/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RoutingTargetAsyncInferenceNotificationConfig.h>

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
 * <p>The output settings for the asynchronous requests of a routing target. Every
 * destination writes to the same locations. <code>CreateInferenceRouter</code> and
 * <code>UpdateInferenceRouter</code> don't check who owns the buckets. If another
 * account owns the output bucket, requests fail.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RoutingTargetAsyncInferenceOutputConfig">AWS
 * API Reference</a></p>
 */
class RoutingTargetAsyncInferenceOutputConfig {
 public:
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceOutputConfig() = default;
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API RoutingTargetAsyncInferenceOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location for the results of successful requests. The bucket
   * must be in the inference router's Amazon Web Services Region and owned by the
   * router's account.</p>
   */
  inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
  inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
  template <typename S3OutputPathT = Aws::String>
  void SetS3OutputPath(S3OutputPathT&& value) {
    m_s3OutputPathHasBeenSet = true;
    m_s3OutputPath = std::forward<S3OutputPathT>(value);
  }
  template <typename S3OutputPathT = Aws::String>
  RoutingTargetAsyncInferenceOutputConfig& WithS3OutputPath(S3OutputPathT&& value) {
    SetS3OutputPath(std::forward<S3OutputPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location for the failure details of failed requests. The bucket
   * must be in the inference router's Amazon Web Services Region and owned by the
   * router's account.</p>
   */
  inline const Aws::String& GetS3FailurePath() const { return m_s3FailurePath; }
  inline bool S3FailurePathHasBeenSet() const { return m_s3FailurePathHasBeenSet; }
  template <typename S3FailurePathT = Aws::String>
  void SetS3FailurePath(S3FailurePathT&& value) {
    m_s3FailurePathHasBeenSet = true;
    m_s3FailurePath = std::forward<S3FailurePathT>(value);
  }
  template <typename S3FailurePathT = Aws::String>
  RoutingTargetAsyncInferenceOutputConfig& WithS3FailurePath(S3FailurePathT&& value) {
    SetS3FailurePath(std::forward<S3FailurePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key that encrypts the results in Amazon S3. You can specify a key ID,
   * key ARN, alias name, or alias ARN. If any destination is in a different account
   * or Amazon Web Services Region from the inference router, specify a key ARN or an
   * alias ARN.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  RoutingTargetAsyncInferenceOutputConfig& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon SNS topics that the inference router publishes to when a request
   * completes or fails.</p>
   */
  inline const RoutingTargetAsyncInferenceNotificationConfig& GetNotificationConfig() const { return m_notificationConfig; }
  inline bool NotificationConfigHasBeenSet() const { return m_notificationConfigHasBeenSet; }
  template <typename NotificationConfigT = RoutingTargetAsyncInferenceNotificationConfig>
  void SetNotificationConfig(NotificationConfigT&& value) {
    m_notificationConfigHasBeenSet = true;
    m_notificationConfig = std::forward<NotificationConfigT>(value);
  }
  template <typename NotificationConfigT = RoutingTargetAsyncInferenceNotificationConfig>
  RoutingTargetAsyncInferenceOutputConfig& WithNotificationConfig(NotificationConfigT&& value) {
    SetNotificationConfig(std::forward<NotificationConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3OutputPath;

  Aws::String m_s3FailurePath;

  Aws::String m_kmsKeyId;

  RoutingTargetAsyncInferenceNotificationConfig m_notificationConfig;
  bool m_s3OutputPathHasBeenSet = false;
  bool m_s3FailurePathHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_notificationConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
