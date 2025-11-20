/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SFN {
namespace Model {

/**
 * <p>An object containing data about a handled exception in the tested
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/InspectionErrorDetails">AWS
 * API Reference</a></p>
 */
class InspectionErrorDetails {
 public:
  AWS_SFN_API InspectionErrorDetails() = default;
  AWS_SFN_API InspectionErrorDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API InspectionErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The array index of the Catch which handled the exception.</p>
   */
  inline int GetCatchIndex() const { return m_catchIndex; }
  inline bool CatchIndexHasBeenSet() const { return m_catchIndexHasBeenSet; }
  inline void SetCatchIndex(int value) {
    m_catchIndexHasBeenSet = true;
    m_catchIndex = value;
  }
  inline InspectionErrorDetails& WithCatchIndex(int value) {
    SetCatchIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The array index of the Retry which handled the exception.</p>
   */
  inline int GetRetryIndex() const { return m_retryIndex; }
  inline bool RetryIndexHasBeenSet() const { return m_retryIndexHasBeenSet; }
  inline void SetRetryIndex(int value) {
    m_retryIndexHasBeenSet = true;
    m_retryIndex = value;
  }
  inline InspectionErrorDetails& WithRetryIndex(int value) {
    SetRetryIndex(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in seconds of the backoff for a retry on a failed state
   * invocation.</p>
   */
  inline int GetRetryBackoffIntervalSeconds() const { return m_retryBackoffIntervalSeconds; }
  inline bool RetryBackoffIntervalSecondsHasBeenSet() const { return m_retryBackoffIntervalSecondsHasBeenSet; }
  inline void SetRetryBackoffIntervalSeconds(int value) {
    m_retryBackoffIntervalSecondsHasBeenSet = true;
    m_retryBackoffIntervalSeconds = value;
  }
  inline InspectionErrorDetails& WithRetryBackoffIntervalSeconds(int value) {
    SetRetryBackoffIntervalSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_catchIndex{0};
  bool m_catchIndexHasBeenSet = false;

  int m_retryIndex{0};
  bool m_retryIndexHasBeenSet = false;

  int m_retryBackoffIntervalSeconds{0};
  bool m_retryBackoffIntervalSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SFN
}  // namespace Aws
