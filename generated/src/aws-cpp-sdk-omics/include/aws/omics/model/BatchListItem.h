/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/BatchStatus.h>

#include <utility>

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
 * <p>A summary of a batch returned by <code>ListBatch</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/BatchListItem">AWS
 * API Reference</a></p>
 */
class BatchListItem {
 public:
  AWS_OMICS_API BatchListItem() = default;
  AWS_OMICS_API BatchListItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API BatchListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The batch identifier.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  BatchListItem& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The batch name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  BatchListItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current batch status.</p>
   */
  inline BatchStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(BatchStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BatchListItem& WithStatus(BatchStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the batch was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  BatchListItem& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of runs in the batch.</p>
   */
  inline int GetTotalRuns() const { return m_totalRuns; }
  inline bool TotalRunsHasBeenSet() const { return m_totalRunsHasBeenSet; }
  inline void SetTotalRuns(int value) {
    m_totalRunsHasBeenSet = true;
    m_totalRuns = value;
  }
  inline BatchListItem& WithTotalRuns(int value) {
    SetTotalRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the workflow used for the batch.</p>
   */
  inline const Aws::String& GetWorkflowId() const { return m_workflowId; }
  inline bool WorkflowIdHasBeenSet() const { return m_workflowIdHasBeenSet; }
  template <typename WorkflowIdT = Aws::String>
  void SetWorkflowId(WorkflowIdT&& value) {
    m_workflowIdHasBeenSet = true;
    m_workflowId = std::forward<WorkflowIdT>(value);
  }
  template <typename WorkflowIdT = Aws::String>
  BatchListItem& WithWorkflowId(WorkflowIdT&& value) {
    SetWorkflowId(std::forward<WorkflowIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  BatchStatus m_status{BatchStatus::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  int m_totalRuns{0};

  Aws::String m_workflowId;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_totalRunsHasBeenSet = false;
  bool m_workflowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
