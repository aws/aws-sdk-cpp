/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>Configuration settings for exporting workflow execution data and logs to
 * Amazon Simple Storage Service (Amazon S3).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/WorkflowExportConfig">AWS
 * API Reference</a></p>
 */
class WorkflowExportConfig {
 public:
  AWS_NOVAACT_API WorkflowExportConfig() = default;
  AWS_NOVAACT_API WorkflowExportConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API WorkflowExportConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of your Amazon S3 bucket, that Nova Act uses to export your workflow
   * data. Note that the IAM role used to access Nova Act must also have write
   * permissions to this bucket.</p>
   */
  inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
  inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
  template <typename S3BucketNameT = Aws::String>
  void SetS3BucketName(S3BucketNameT&& value) {
    m_s3BucketNameHasBeenSet = true;
    m_s3BucketName = std::forward<S3BucketNameT>(value);
  }
  template <typename S3BucketNameT = Aws::String>
  WorkflowExportConfig& WithS3BucketName(S3BucketNameT&& value) {
    SetS3BucketName(std::forward<S3BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional prefix for Amazon S3 object keys to organize exported data.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  WorkflowExportConfig& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketName;

  Aws::String m_s3KeyPrefix;
  bool m_s3BucketNameHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
