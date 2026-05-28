/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ReportGenerationErrorCode.h>

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
 * <p>Details when report generation failed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/FailedReportOutput">AWS
 * API Reference</a></p>
 */
class FailedReportOutput {
 public:
  AWS_RESILIENCEHUBV2_API FailedReportOutput() = default;
  AWS_RESILIENCEHUBV2_API FailedReportOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API FailedReportOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error code describing why the report generation failed.</p>
   */
  inline ReportGenerationErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(ReportGenerationErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline FailedReportOutput& WithErrorCode(ReportGenerationErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The error message describing why the report generation failed.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  FailedReportOutput& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  ReportGenerationErrorCode m_errorCode{ReportGenerationErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
