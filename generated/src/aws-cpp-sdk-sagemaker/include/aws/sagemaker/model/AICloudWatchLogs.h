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
 * <p>CloudWatch log information for an AI benchmark or recommendation
 * job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AICloudWatchLogs">AWS
 * API Reference</a></p>
 */
class AICloudWatchLogs {
 public:
  AWS_SAGEMAKER_API AICloudWatchLogs() = default;
  AWS_SAGEMAKER_API AICloudWatchLogs(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AICloudWatchLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the CloudWatch log group.</p>
   */
  inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
  inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
  template <typename LogGroupArnT = Aws::String>
  void SetLogGroupArn(LogGroupArnT&& value) {
    m_logGroupArnHasBeenSet = true;
    m_logGroupArn = std::forward<LogGroupArnT>(value);
  }
  template <typename LogGroupArnT = Aws::String>
  AICloudWatchLogs& WithLogGroupArn(LogGroupArnT&& value) {
    SetLogGroupArn(std::forward<LogGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch log stream.</p>
   */
  inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
  inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
  template <typename LogStreamNameT = Aws::String>
  void SetLogStreamName(LogStreamNameT&& value) {
    m_logStreamNameHasBeenSet = true;
    m_logStreamName = std::forward<LogStreamNameT>(value);
  }
  template <typename LogStreamNameT = Aws::String>
  AICloudWatchLogs& WithLogStreamName(LogStreamNameT&& value) {
    SetLogStreamName(std::forward<LogStreamNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupArn;

  Aws::String m_logStreamName;
  bool m_logGroupArnHasBeenSet = false;
  bool m_logStreamNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
