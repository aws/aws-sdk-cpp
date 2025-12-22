/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {

/**
 * <p>Contains detailed error information explaining why an operation failed,
 * including which field caused the error and the reason for the
 * failure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ErrorDetail">AWS
 * API Reference</a></p>
 */
class ErrorDetail {
 public:
  AWS_WICKR_API ErrorDetail() = default;
  AWS_WICKR_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field that contains an error or warning.</p>
   */
  inline const Aws::String& GetField() const { return m_field; }
  inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
  template <typename FieldT = Aws::String>
  void SetField(FieldT&& value) {
    m_fieldHasBeenSet = true;
    m_field = std::forward<FieldT>(value);
  }
  template <typename FieldT = Aws::String>
  ErrorDetail& WithField(FieldT&& value) {
    SetField(std::forward<FieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed description of the error or warning.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  ErrorDetail& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_field;

  Aws::String m_reason;
  bool m_fieldHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
