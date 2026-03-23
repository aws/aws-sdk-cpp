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
 * <p>A summary of the runs in a batch.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/RunSummary">AWS
 * API Reference</a></p>
 */
class RunSummary {
 public:
  AWS_OMICS_API RunSummary() = default;
  AWS_OMICS_API RunSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API RunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of pending runs.</p>
   */
  inline int GetPendingRunCount() const { return m_pendingRunCount; }
  inline bool PendingRunCountHasBeenSet() const { return m_pendingRunCountHasBeenSet; }
  inline void SetPendingRunCount(int value) {
    m_pendingRunCountHasBeenSet = true;
    m_pendingRunCount = value;
  }
  inline RunSummary& WithPendingRunCount(int value) {
    SetPendingRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of starting runs.</p>
   */
  inline int GetStartingRunCount() const { return m_startingRunCount; }
  inline bool StartingRunCountHasBeenSet() const { return m_startingRunCountHasBeenSet; }
  inline void SetStartingRunCount(int value) {
    m_startingRunCountHasBeenSet = true;
    m_startingRunCount = value;
  }
  inline RunSummary& WithStartingRunCount(int value) {
    SetStartingRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of running runs.</p>
   */
  inline int GetRunningRunCount() const { return m_runningRunCount; }
  inline bool RunningRunCountHasBeenSet() const { return m_runningRunCountHasBeenSet; }
  inline void SetRunningRunCount(int value) {
    m_runningRunCountHasBeenSet = true;
    m_runningRunCount = value;
  }
  inline RunSummary& WithRunningRunCount(int value) {
    SetRunningRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of stopping runs.</p>
   */
  inline int GetStoppingRunCount() const { return m_stoppingRunCount; }
  inline bool StoppingRunCountHasBeenSet() const { return m_stoppingRunCountHasBeenSet; }
  inline void SetStoppingRunCount(int value) {
    m_stoppingRunCountHasBeenSet = true;
    m_stoppingRunCount = value;
  }
  inline RunSummary& WithStoppingRunCount(int value) {
    SetStoppingRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of completed runs.</p>
   */
  inline int GetCompletedRunCount() const { return m_completedRunCount; }
  inline bool CompletedRunCountHasBeenSet() const { return m_completedRunCountHasBeenSet; }
  inline void SetCompletedRunCount(int value) {
    m_completedRunCountHasBeenSet = true;
    m_completedRunCount = value;
  }
  inline RunSummary& WithCompletedRunCount(int value) {
    SetCompletedRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of deleted runs.</p>
   */
  inline int GetDeletedRunCount() const { return m_deletedRunCount; }
  inline bool DeletedRunCountHasBeenSet() const { return m_deletedRunCountHasBeenSet; }
  inline void SetDeletedRunCount(int value) {
    m_deletedRunCountHasBeenSet = true;
    m_deletedRunCount = value;
  }
  inline RunSummary& WithDeletedRunCount(int value) {
    SetDeletedRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of failed runs.</p>
   */
  inline int GetFailedRunCount() const { return m_failedRunCount; }
  inline bool FailedRunCountHasBeenSet() const { return m_failedRunCountHasBeenSet; }
  inline void SetFailedRunCount(int value) {
    m_failedRunCountHasBeenSet = true;
    m_failedRunCount = value;
  }
  inline RunSummary& WithFailedRunCount(int value) {
    SetFailedRunCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of cancelled runs.</p>
   */
  inline int GetCancelledRunCount() const { return m_cancelledRunCount; }
  inline bool CancelledRunCountHasBeenSet() const { return m_cancelledRunCountHasBeenSet; }
  inline void SetCancelledRunCount(int value) {
    m_cancelledRunCountHasBeenSet = true;
    m_cancelledRunCount = value;
  }
  inline RunSummary& WithCancelledRunCount(int value) {
    SetCancelledRunCount(value);
    return *this;
  }
  ///@}
 private:
  int m_pendingRunCount{0};

  int m_startingRunCount{0};

  int m_runningRunCount{0};

  int m_stoppingRunCount{0};

  int m_completedRunCount{0};

  int m_deletedRunCount{0};

  int m_failedRunCount{0};

  int m_cancelledRunCount{0};
  bool m_pendingRunCountHasBeenSet = false;
  bool m_startingRunCountHasBeenSet = false;
  bool m_runningRunCountHasBeenSet = false;
  bool m_stoppingRunCountHasBeenSet = false;
  bool m_completedRunCountHasBeenSet = false;
  bool m_deletedRunCountHasBeenSet = false;
  bool m_failedRunCountHasBeenSet = false;
  bool m_cancelledRunCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
