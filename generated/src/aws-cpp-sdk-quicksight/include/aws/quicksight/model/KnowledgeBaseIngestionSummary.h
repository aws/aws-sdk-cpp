/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KbIngestionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of an ingestion job for a knowledge base.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseIngestionSummary">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseIngestionSummary {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseIngestionSummary() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseIngestionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseIngestionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the ingestion job.</p>
   */
  inline const Aws::String& GetIngestionId() const { return m_ingestionId; }
  inline bool IngestionIdHasBeenSet() const { return m_ingestionIdHasBeenSet; }
  template <typename IngestionIdT = Aws::String>
  void SetIngestionId(IngestionIdT&& value) {
    m_ingestionIdHasBeenSet = true;
    m_ingestionId = std::forward<IngestionIdT>(value);
  }
  template <typename IngestionIdT = Aws::String>
  KnowledgeBaseIngestionSummary& WithIngestionId(IngestionIdT&& value) {
    SetIngestionId(std::forward<IngestionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ingestion job.</p>
   */
  inline KbIngestionStatus GetIngestionStatus() const { return m_ingestionStatus; }
  inline bool IngestionStatusHasBeenSet() const { return m_ingestionStatusHasBeenSet; }
  inline void SetIngestionStatus(KbIngestionStatus value) {
    m_ingestionStatusHasBeenSet = true;
    m_ingestionStatus = value;
  }
  inline KnowledgeBaseIngestionSummary& WithIngestionStatus(KbIngestionStatus value) {
    SetIngestionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the ingestion job.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  KnowledgeBaseIngestionSummary& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the ingestion job.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  KnowledgeBaseIngestionSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ingestionId;

  KbIngestionStatus m_ingestionStatus{KbIngestionStatus::NOT_SET};

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_ingestionIdHasBeenSet = false;
  bool m_ingestionStatusHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
