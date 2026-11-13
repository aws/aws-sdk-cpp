/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The number of targets in a rate control execution, and the status of the
 * child executions that it started for those targets.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/TargetsSummary">AWS
 * API Reference</a></p>
 */
class TargetsSummary {
 public:
  AWS_SSM_API TargetsSummary() = default;
  AWS_SSM_API TargetsSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API TargetsSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of targets in the rate control execution.</p>
   */
  inline int GetTotalCount() const { return m_totalCount; }
  inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
  inline void SetTotalCount(int value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline TargetsSummary& WithTotalCount(int value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of child executions that started.</p>
   */
  inline int GetStartedCount() const { return m_startedCount; }
  inline bool StartedCountHasBeenSet() const { return m_startedCountHasBeenSet; }
  inline void SetStartedCount(int value) {
    m_startedCountHasBeenSet = true;
    m_startedCount = value;
  }
  inline TargetsSummary& WithStartedCount(int value) {
    SetStartedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of child executions that finished, whether they succeeded or
   * failed.</p>
   */
  inline int GetCompletedCount() const { return m_completedCount; }
  inline bool CompletedCountHasBeenSet() const { return m_completedCountHasBeenSet; }
  inline void SetCompletedCount(int value) {
    m_completedCountHasBeenSet = true;
    m_completedCount = value;
  }
  inline TargetsSummary& WithCompletedCount(int value) {
    SetCompletedCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of child executions that succeeded.</p>
   */
  inline int GetSuccessfulCount() const { return m_successfulCount; }
  inline bool SuccessfulCountHasBeenSet() const { return m_successfulCountHasBeenSet; }
  inline void SetSuccessfulCount(int value) {
    m_successfulCountHasBeenSet = true;
    m_successfulCount = value;
  }
  inline TargetsSummary& WithSuccessfulCount(int value) {
    SetSuccessfulCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of child executions that failed, timed out, or were canceled.</p>
   */
  inline int GetFailedCount() const { return m_failedCount; }
  inline bool FailedCountHasBeenSet() const { return m_failedCountHasBeenSet; }
  inline void SetFailedCount(int value) {
    m_failedCountHasBeenSet = true;
    m_failedCount = value;
  }
  inline TargetsSummary& WithFailedCount(int value) {
    SetFailedCount(value);
    return *this;
  }
  ///@}
 private:
  int m_totalCount{0};

  int m_startedCount{0};

  int m_completedCount{0};

  int m_successfulCount{0};

  int m_failedCount{0};
  bool m_totalCountHasBeenSet = false;
  bool m_startedCountHasBeenSet = false;
  bool m_completedCountHasBeenSet = false;
  bool m_successfulCountHasBeenSet = false;
  bool m_failedCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
