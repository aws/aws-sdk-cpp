/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Omics {
namespace Model {

/**
 * <p>A summary of the submissions in a batch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/SubmissionSummary">AWS
 * API Reference</a></p>
 */
class SubmissionSummary {
 public:
  AWS_OMICS_API SubmissionSummary() = default;
  AWS_OMICS_API SubmissionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API SubmissionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of successful start submissions.</p>
   */
  inline int GetSuccessfulStartSubmissionCount() const { return m_successfulStartSubmissionCount; }
  inline bool SuccessfulStartSubmissionCountHasBeenSet() const { return m_successfulStartSubmissionCountHasBeenSet; }
  inline void SetSuccessfulStartSubmissionCount(int value) {
    m_successfulStartSubmissionCountHasBeenSet = true;
    m_successfulStartSubmissionCount = value;
  }
  inline SubmissionSummary& WithSuccessfulStartSubmissionCount(int value) {
    SetSuccessfulStartSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed start submissions.</p>
   */
  inline int GetFailedStartSubmissionCount() const { return m_failedStartSubmissionCount; }
  inline bool FailedStartSubmissionCountHasBeenSet() const { return m_failedStartSubmissionCountHasBeenSet; }
  inline void SetFailedStartSubmissionCount(int value) {
    m_failedStartSubmissionCountHasBeenSet = true;
    m_failedStartSubmissionCount = value;
  }
  inline SubmissionSummary& WithFailedStartSubmissionCount(int value) {
    SetFailedStartSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of pending start submissions.</p>
   */
  inline int GetPendingStartSubmissionCount() const { return m_pendingStartSubmissionCount; }
  inline bool PendingStartSubmissionCountHasBeenSet() const { return m_pendingStartSubmissionCountHasBeenSet; }
  inline void SetPendingStartSubmissionCount(int value) {
    m_pendingStartSubmissionCountHasBeenSet = true;
    m_pendingStartSubmissionCount = value;
  }
  inline SubmissionSummary& WithPendingStartSubmissionCount(int value) {
    SetPendingStartSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of successful cancel submissions.</p>
   */
  inline int GetSuccessfulCancelSubmissionCount() const { return m_successfulCancelSubmissionCount; }
  inline bool SuccessfulCancelSubmissionCountHasBeenSet() const { return m_successfulCancelSubmissionCountHasBeenSet; }
  inline void SetSuccessfulCancelSubmissionCount(int value) {
    m_successfulCancelSubmissionCountHasBeenSet = true;
    m_successfulCancelSubmissionCount = value;
  }
  inline SubmissionSummary& WithSuccessfulCancelSubmissionCount(int value) {
    SetSuccessfulCancelSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed cancel submissions.</p>
   */
  inline int GetFailedCancelSubmissionCount() const { return m_failedCancelSubmissionCount; }
  inline bool FailedCancelSubmissionCountHasBeenSet() const { return m_failedCancelSubmissionCountHasBeenSet; }
  inline void SetFailedCancelSubmissionCount(int value) {
    m_failedCancelSubmissionCountHasBeenSet = true;
    m_failedCancelSubmissionCount = value;
  }
  inline SubmissionSummary& WithFailedCancelSubmissionCount(int value) {
    SetFailedCancelSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of successful delete submissions.</p>
   */
  inline int GetSuccessfulDeleteSubmissionCount() const { return m_successfulDeleteSubmissionCount; }
  inline bool SuccessfulDeleteSubmissionCountHasBeenSet() const { return m_successfulDeleteSubmissionCountHasBeenSet; }
  inline void SetSuccessfulDeleteSubmissionCount(int value) {
    m_successfulDeleteSubmissionCountHasBeenSet = true;
    m_successfulDeleteSubmissionCount = value;
  }
  inline SubmissionSummary& WithSuccessfulDeleteSubmissionCount(int value) {
    SetSuccessfulDeleteSubmissionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed delete submissions.</p>
   */
  inline int GetFailedDeleteSubmissionCount() const { return m_failedDeleteSubmissionCount; }
  inline bool FailedDeleteSubmissionCountHasBeenSet() const { return m_failedDeleteSubmissionCountHasBeenSet; }
  inline void SetFailedDeleteSubmissionCount(int value) {
    m_failedDeleteSubmissionCountHasBeenSet = true;
    m_failedDeleteSubmissionCount = value;
  }
  inline SubmissionSummary& WithFailedDeleteSubmissionCount(int value) {
    SetFailedDeleteSubmissionCount(value);
    return *this;
  }
  ///@}
 private:
  int m_successfulStartSubmissionCount{0};

  int m_failedStartSubmissionCount{0};

  int m_pendingStartSubmissionCount{0};

  int m_successfulCancelSubmissionCount{0};

  int m_failedCancelSubmissionCount{0};

  int m_successfulDeleteSubmissionCount{0};

  int m_failedDeleteSubmissionCount{0};
  bool m_successfulStartSubmissionCountHasBeenSet = false;
  bool m_failedStartSubmissionCountHasBeenSet = false;
  bool m_pendingStartSubmissionCountHasBeenSet = false;
  bool m_successfulCancelSubmissionCountHasBeenSet = false;
  bool m_failedCancelSubmissionCountHasBeenSet = false;
  bool m_successfulDeleteSubmissionCountHasBeenSet = false;
  bool m_failedDeleteSubmissionCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
