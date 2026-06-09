/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/FailedReportOutput.h>
#include <aws/resiliencehubv2/model/S3ReportOutput.h>

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
 * <p>Union of possible report outputs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ReportOutput">AWS
 * API Reference</a></p>
 */
class ReportOutput {
 public:
  AWS_RESILIENCEHUBV2_API ReportOutput() = default;
  AWS_RESILIENCEHUBV2_API ReportOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ReportOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 location where the report was written.</p>
   */
  inline const S3ReportOutput& GetS3ReportOutput() const { return m_s3ReportOutput; }
  inline bool S3ReportOutputHasBeenSet() const { return m_s3ReportOutputHasBeenSet; }
  template <typename S3ReportOutputT = S3ReportOutput>
  void SetS3ReportOutput(S3ReportOutputT&& value) {
    m_s3ReportOutputHasBeenSet = true;
    m_s3ReportOutput = std::forward<S3ReportOutputT>(value);
  }
  template <typename S3ReportOutputT = S3ReportOutput>
  ReportOutput& WithS3ReportOutput(S3ReportOutputT&& value) {
    SetS3ReportOutput(std::forward<S3ReportOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details when report generation failed.</p>
   */
  inline const FailedReportOutput& GetFailedReportOutput() const { return m_failedReportOutput; }
  inline bool FailedReportOutputHasBeenSet() const { return m_failedReportOutputHasBeenSet; }
  template <typename FailedReportOutputT = FailedReportOutput>
  void SetFailedReportOutput(FailedReportOutputT&& value) {
    m_failedReportOutputHasBeenSet = true;
    m_failedReportOutput = std::forward<FailedReportOutputT>(value);
  }
  template <typename FailedReportOutputT = FailedReportOutput>
  ReportOutput& WithFailedReportOutput(FailedReportOutputT&& value) {
    SetFailedReportOutput(std::forward<FailedReportOutputT>(value));
    return *this;
  }
  ///@}
 private:
  S3ReportOutput m_s3ReportOutput;

  FailedReportOutput m_failedReportOutput;
  bool m_s3ReportOutputHasBeenSet = false;
  bool m_failedReportOutputHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
