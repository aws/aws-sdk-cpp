/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Configuration for test execution logging destinations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/LoggingConfiguration">AWS
 * API Reference</a></p>
 */
class LoggingConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API LoggingConfiguration() = default;
  AWS_RESILIENCEHUBV2_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the S3 bucket for log delivery.</p>
   */
  inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
  inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
  template <typename S3BucketNameT = Aws::String>
  void SetS3BucketName(S3BucketNameT&& value) {
    m_s3BucketNameHasBeenSet = true;
    m_s3BucketName = std::forward<S3BucketNameT>(value);
  }
  template <typename S3BucketNameT = Aws::String>
  LoggingConfiguration& WithS3BucketName(S3BucketNameT&& value) {
    SetS3BucketName(std::forward<S3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the CloudWatch Logs log group for log delivery.</p>
   */
  inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
  inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
  template <typename CloudWatchLogGroupArnT = Aws::String>
  void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) {
    m_cloudWatchLogGroupArnHasBeenSet = true;
    m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value);
  }
  template <typename CloudWatchLogGroupArnT = Aws::String>
  LoggingConfiguration& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) {
    SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the log schema.</p>
   */
  inline const Aws::String& GetLogSchemaVersion() const { return m_logSchemaVersion; }
  inline bool LogSchemaVersionHasBeenSet() const { return m_logSchemaVersionHasBeenSet; }
  template <typename LogSchemaVersionT = Aws::String>
  void SetLogSchemaVersion(LogSchemaVersionT&& value) {
    m_logSchemaVersionHasBeenSet = true;
    m_logSchemaVersion = std::forward<LogSchemaVersionT>(value);
  }
  template <typename LogSchemaVersionT = Aws::String>
  LoggingConfiguration& WithLogSchemaVersion(LogSchemaVersionT&& value) {
    SetLogSchemaVersion(std::forward<LogSchemaVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketName;

  Aws::String m_cloudWatchLogGroupArn;

  Aws::String m_logSchemaVersion;
  bool m_s3BucketNameHasBeenSet = false;
  bool m_cloudWatchLogGroupArnHasBeenSet = false;
  bool m_logSchemaVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
