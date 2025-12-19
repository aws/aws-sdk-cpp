/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/ErrorDetail.h>

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
 * <p>One or more fields in the request failed validation. This error provides
 * detailed information about which fields were invalid and why, allowing you to
 * correct the request and retry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ValidationError">AWS
 * API Reference</a></p>
 */
class ValidationError {
 public:
  AWS_WICKR_API ValidationError() = default;
  AWS_WICKR_API ValidationError(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API ValidationError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WICKR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of validation error details, where each item identifies a specific
   * field that failed validation and explains the reason for the failure.</p>
   */
  inline const Aws::Vector<ErrorDetail>& GetReasons() const { return m_reasons; }
  inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
  template <typename ReasonsT = Aws::Vector<ErrorDetail>>
  void SetReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons = std::forward<ReasonsT>(value);
  }
  template <typename ReasonsT = Aws::Vector<ErrorDetail>>
  ValidationError& WithReasons(ReasonsT&& value) {
    SetReasons(std::forward<ReasonsT>(value));
    return *this;
  }
  template <typename ReasonsT = ErrorDetail>
  ValidationError& AddReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons.emplace_back(std::forward<ReasonsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ErrorDetail> m_reasons;
  bool m_reasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
