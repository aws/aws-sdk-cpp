/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/SubmissionStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace Omics {
namespace Model {

/**
 */
class ListRunsInBatchRequest : public OmicsRequest {
 public:
  AWS_OMICS_API ListRunsInBatchRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRunsInBatch"; }

  AWS_OMICS_API Aws::String SerializePayload() const override;

  AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The identifier portion of the run batch ARN.</p>
   */
  inline const Aws::String& GetBatchId() const { return m_batchId; }
  inline bool BatchIdHasBeenSet() const { return m_batchIdHasBeenSet; }
  template <typename BatchIdT = Aws::String>
  void SetBatchId(BatchIdT&& value) {
    m_batchIdHasBeenSet = true;
    m_batchId = std::forward<BatchIdT>(value);
  }
  template <typename BatchIdT = Aws::String>
  ListRunsInBatchRequest& WithBatchId(BatchIdT&& value) {
    SetBatchId(std::forward<BatchIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of runs to return.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline ListRunsInBatchRequest& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token returned from a prior <code>ListRunsInBatch</code>
   * call.</p>
   */
  inline const Aws::String& GetStartingToken() const { return m_startingToken; }
  inline bool StartingTokenHasBeenSet() const { return m_startingTokenHasBeenSet; }
  template <typename StartingTokenT = Aws::String>
  void SetStartingToken(StartingTokenT&& value) {
    m_startingTokenHasBeenSet = true;
    m_startingToken = std::forward<StartingTokenT>(value);
  }
  template <typename StartingTokenT = Aws::String>
  ListRunsInBatchRequest& WithStartingToken(StartingTokenT&& value) {
    SetStartingToken(std::forward<StartingTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter runs by submission status.</p>
   */
  inline SubmissionStatus GetSubmissionStatus() const { return m_submissionStatus; }
  inline bool SubmissionStatusHasBeenSet() const { return m_submissionStatusHasBeenSet; }
  inline void SetSubmissionStatus(SubmissionStatus value) {
    m_submissionStatusHasBeenSet = true;
    m_submissionStatus = value;
  }
  inline ListRunsInBatchRequest& WithSubmissionStatus(SubmissionStatus value) {
    SetSubmissionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter runs by the customer-provided run setting ID.</p>
   */
  inline const Aws::String& GetRunSettingId() const { return m_runSettingId; }
  inline bool RunSettingIdHasBeenSet() const { return m_runSettingIdHasBeenSet; }
  template <typename RunSettingIdT = Aws::String>
  void SetRunSettingId(RunSettingIdT&& value) {
    m_runSettingIdHasBeenSet = true;
    m_runSettingId = std::forward<RunSettingIdT>(value);
  }
  template <typename RunSettingIdT = Aws::String>
  ListRunsInBatchRequest& WithRunSettingId(RunSettingIdT&& value) {
    SetRunSettingId(std::forward<RunSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter runs by the HealthOmics-generated run ID.</p>
   */
  inline const Aws::String& GetRunId() const { return m_runId; }
  inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
  template <typename RunIdT = Aws::String>
  void SetRunId(RunIdT&& value) {
    m_runIdHasBeenSet = true;
    m_runId = std::forward<RunIdT>(value);
  }
  template <typename RunIdT = Aws::String>
  ListRunsInBatchRequest& WithRunId(RunIdT&& value) {
    SetRunId(std::forward<RunIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_batchId;

  int m_maxItems{0};

  Aws::String m_startingToken;

  SubmissionStatus m_submissionStatus{SubmissionStatus::NOT_SET};

  Aws::String m_runSettingId;

  Aws::String m_runId;
  bool m_batchIdHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
  bool m_startingTokenHasBeenSet = false;
  bool m_submissionStatusHasBeenSet = false;
  bool m_runSettingIdHasBeenSet = false;
  bool m_runIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
