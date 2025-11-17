/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/WorkflowRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Summary information about a workflow run's execution details, including
 * status and timing information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/RunDetailSummary">AWS
 * API Reference</a></p>
 */
class RunDetailSummary {
 public:
  AWS_MWAASERVERLESS_API RunDetailSummary() = default;
  AWS_MWAASERVERLESS_API RunDetailSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API RunDetailSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of the workflow run.</p>
   */
  inline WorkflowRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WorkflowRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline RunDetailSummary& WithStatus(WorkflowRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run was created, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedOn() const { return m_createdOn; }
  inline bool CreatedOnHasBeenSet() const { return m_createdOnHasBeenSet; }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  void SetCreatedOn(CreatedOnT&& value) {
    m_createdOnHasBeenSet = true;
    m_createdOn = std::forward<CreatedOnT>(value);
  }
  template <typename CreatedOnT = Aws::Utils::DateTime>
  RunDetailSummary& WithCreatedOn(CreatedOnT&& value) {
    SetCreatedOn(std::forward<CreatedOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run started execution, in ISO 8601 date-time
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  RunDetailSummary& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the workflow run completed execution, in ISO 8601
   * date-time format. This value is null if the run is not complete.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  RunDetailSummary& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}
 private:
  WorkflowRunStatus m_status{WorkflowRunStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_createdOn{};
  bool m_createdOnHasBeenSet = false;

  Aws::Utils::DateTime m_startedAt{};
  bool m_startedAtHasBeenSet = false;

  Aws::Utils::DateTime m_endedAt{};
  bool m_endedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
