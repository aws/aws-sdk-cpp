/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/S3ReportOutputConfiguration.h>

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
 * <p>Configuration for a report output destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ReportOutputConfiguration">AWS
 * API Reference</a></p>
 */
class ReportOutputConfiguration {
 public:
  AWS_RESILIENCEHUBV2_API ReportOutputConfiguration() = default;
  AWS_RESILIENCEHUBV2_API ReportOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ReportOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const S3ReportOutputConfiguration& GetS3() const { return m_s3; }
  inline bool S3HasBeenSet() const { return m_s3HasBeenSet; }
  template <typename S3T = S3ReportOutputConfiguration>
  void SetS3(S3T&& value) {
    m_s3HasBeenSet = true;
    m_s3 = std::forward<S3T>(value);
  }
  template <typename S3T = S3ReportOutputConfiguration>
  ReportOutputConfiguration& WithS3(S3T&& value) {
    SetS3(std::forward<S3T>(value));
    return *this;
  }
  ///@}
 private:
  S3ReportOutputConfiguration m_s3;
  bool m_s3HasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
