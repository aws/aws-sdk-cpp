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
 * <p>S3 configuration for report output.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/S3ReportOutputConfiguration">AWS
 * API Reference</a></p>
 */
class S3ReportOutputConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API S3ReportOutputConfiguration() = default;
  AWS_RESILIENCEHUBV2_API S3ReportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API S3ReportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 bucket path where reports will be written (e.g.,
   * my-bucket/ngrh-reports/).</p>
   */
  inline const Aws::String& GetBucketPath() const { return m_bucketPath; }
  inline bool BucketPathHasBeenSet() const { return m_bucketPathHasBeenSet; }
  template <typename BucketPathT = Aws::String>
  void SetBucketPath(BucketPathT&& value) {
    m_bucketPathHasBeenSet = true;
    m_bucketPath = std::forward<BucketPathT>(value);
  }
  template <typename BucketPathT = Aws::String>
  S3ReportOutputConfiguration& WithBucketPath(BucketPathT&& value) {
    SetBucketPath(std::forward<BucketPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account ID of the bucket owner for cross-account access verification.</p>
   */
  inline const Aws::String& GetBucketOwner() const { return m_bucketOwner; }
  inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }
  template <typename BucketOwnerT = Aws::String>
  void SetBucketOwner(BucketOwnerT&& value) {
    m_bucketOwnerHasBeenSet = true;
    m_bucketOwner = std::forward<BucketOwnerT>(value);
  }
  template <typename BucketOwnerT = Aws::String>
  S3ReportOutputConfiguration& WithBucketOwner(BucketOwnerT&& value) {
    SetBucketOwner(std::forward<BucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketPath;

  Aws::String m_bucketOwner;
  bool m_bucketPathHasBeenSet = false;
  bool m_bucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
