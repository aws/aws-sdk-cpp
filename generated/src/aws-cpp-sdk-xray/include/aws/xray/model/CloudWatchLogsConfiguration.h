/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/XRay_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace XRay {
namespace Model {

/**
 * <p> Contains the settings for the CloudWatch Logs log groups that X-Ray creates
 * for Transaction Search. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CloudWatchLogsConfiguration">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsConfiguration {
 public:
  AWS_XRAY_API CloudWatchLogsConfiguration() = default;
  AWS_XRAY_API CloudWatchLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_XRAY_API CloudWatchLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The ARN of an AWS Key Management Service (AWS KMS) key that you create and
   * manage, in the same account and Region, used to encrypt the
   * <code>aws/spans</code> log group. Key IDs and alias ARNs are not supported. </p>
   * <p> X-Ray applies the key only when it creates <code>aws/spans</code>. If the
   * account already has an <code>aws/spans</code> log group, X-Ray fails the request
   * with an <code>InvalidRequestException</code> and does not change the log group.
   * To enable Transaction Search with the existing log group as it is, call
   * <code>UpdateTraceSegmentDestination</code> again without
   * <code>SpansLogGroupKmsKeyId</code>. To set or change the key of the existing log
   * group, use the CloudWatch Logs <code>AssociateKmsKey</code> operation. </p> <p>
   * You need <code>kms:DescribeKey</code> permission on the key, and the key policy
   * must allow CloudWatch Logs to use the key. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/encrypt-log-data-kms.html">Encrypt
   * log data in CloudWatch Logs using AWS Key Management Service</a>. </p>
   */
  inline const Aws::String& GetSpansLogGroupKmsKeyId() const { return m_spansLogGroupKmsKeyId; }
  inline bool SpansLogGroupKmsKeyIdHasBeenSet() const { return m_spansLogGroupKmsKeyIdHasBeenSet; }
  template <typename SpansLogGroupKmsKeyIdT = Aws::String>
  void SetSpansLogGroupKmsKeyId(SpansLogGroupKmsKeyIdT&& value) {
    m_spansLogGroupKmsKeyIdHasBeenSet = true;
    m_spansLogGroupKmsKeyId = std::forward<SpansLogGroupKmsKeyIdT>(value);
  }
  template <typename SpansLogGroupKmsKeyIdT = Aws::String>
  CloudWatchLogsConfiguration& WithSpansLogGroupKmsKeyId(SpansLogGroupKmsKeyIdT&& value) {
    SetSpansLogGroupKmsKeyId(std::forward<SpansLogGroupKmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spansLogGroupKmsKeyId;
  bool m_spansLogGroupKmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace XRay
}  // namespace Aws
