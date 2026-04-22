/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AICloudWatchLogs.h>

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
 * <p>The output result of an AI benchmark job, including the Amazon S3 location
 * and CloudWatch log information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIBenchmarkOutputResult">AWS
 * API Reference</a></p>
 */
class AIBenchmarkOutputResult {
 public:
  AWS_SAGEMAKER_API AIBenchmarkOutputResult() = default;
  AWS_SAGEMAKER_API AIBenchmarkOutputResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIBenchmarkOutputResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI where benchmark results are stored.</p>
   */
  inline const Aws::String& GetS3OutputLocation() const { return m_s3OutputLocation; }
  inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
  template <typename S3OutputLocationT = Aws::String>
  void SetS3OutputLocation(S3OutputLocationT&& value) {
    m_s3OutputLocationHasBeenSet = true;
    m_s3OutputLocation = std::forward<S3OutputLocationT>(value);
  }
  template <typename S3OutputLocationT = Aws::String>
  AIBenchmarkOutputResult& WithS3OutputLocation(S3OutputLocationT&& value) {
    SetS3OutputLocation(std::forward<S3OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch log information for the benchmark job.</p>
   */
  inline const Aws::Vector<AICloudWatchLogs>& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
  inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
  template <typename CloudWatchLogsT = Aws::Vector<AICloudWatchLogs>>
  void SetCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value);
  }
  template <typename CloudWatchLogsT = Aws::Vector<AICloudWatchLogs>>
  AIBenchmarkOutputResult& WithCloudWatchLogs(CloudWatchLogsT&& value) {
    SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  template <typename CloudWatchLogsT = AICloudWatchLogs>
  AIBenchmarkOutputResult& AddCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs.emplace_back(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3OutputLocation;

  Aws::Vector<AICloudWatchLogs> m_cloudWatchLogs;
  bool m_s3OutputLocationHasBeenSet = false;
  bool m_cloudWatchLogsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
