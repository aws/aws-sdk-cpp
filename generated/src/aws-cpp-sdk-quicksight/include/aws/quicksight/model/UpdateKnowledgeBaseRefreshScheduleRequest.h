/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshFrequency.h>
#include <aws/quicksight/model/ScheduleState.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateKnowledgeBaseRefreshScheduleRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateKnowledgeBaseRefreshScheduleRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateKnowledgeBaseRefreshSchedule"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the knowledge
   * base.</p>
   */
  inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
  inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
  template <typename AwsAccountIdT = Aws::String>
  void SetAwsAccountId(AwsAccountIdT&& value) {
    m_awsAccountIdHasBeenSet = true;
    m_awsAccountId = std::forward<AwsAccountIdT>(value);
  }
  template <typename AwsAccountIdT = Aws::String>
  UpdateKnowledgeBaseRefreshScheduleRequest& WithAwsAccountId(AwsAccountIdT&& value) {
    SetAwsAccountId(std::forward<AwsAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  UpdateKnowledgeBaseRefreshScheduleRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the refresh schedule to update.</p>
   */
  inline const Aws::String& GetScheduleId() const { return m_scheduleId; }
  inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
  template <typename ScheduleIdT = Aws::String>
  void SetScheduleId(ScheduleIdT&& value) {
    m_scheduleIdHasBeenSet = true;
    m_scheduleId = std::forward<ScheduleIdT>(value);
  }
  template <typename ScheduleIdT = Aws::String>
  UpdateKnowledgeBaseRefreshScheduleRequest& WithScheduleId(ScheduleIdT&& value) {
    SetScheduleId(std::forward<ScheduleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The frequency configuration for the refresh schedule. The frequency
   * configuration specifies how often the schedule runs and, for weekly or monthly
   * schedules, the day on which it runs. If you don't specify this parameter, the
   * schedule keeps its existing frequency.</p>
   */
  inline const KnowledgeBaseRefreshFrequency& GetScheduleFrequency() const { return m_scheduleFrequency; }
  inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }
  template <typename ScheduleFrequencyT = KnowledgeBaseRefreshFrequency>
  void SetScheduleFrequency(ScheduleFrequencyT&& value) {
    m_scheduleFrequencyHasBeenSet = true;
    m_scheduleFrequency = std::forward<ScheduleFrequencyT>(value);
  }
  template <typename ScheduleFrequencyT = KnowledgeBaseRefreshFrequency>
  UpdateKnowledgeBaseRefreshScheduleRequest& WithScheduleFrequency(ScheduleFrequencyT&& value) {
    SetScheduleFrequency(std::forward<ScheduleFrequencyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time, in ISO 8601 format, after which the schedule can start
   * refreshing the knowledge base. The first refresh runs at the next scheduled time
   * after this date and time. If you don't specify this parameter, the schedule
   * keeps its existing start time.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  UpdateKnowledgeBaseRefreshScheduleRequest& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the refresh schedule. A schedule that isn't <code>ENABLED</code>
   * doesn't run refreshes. If you don't specify this parameter, the schedule keeps
   * its existing state.</p>
   */
  inline ScheduleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateKnowledgeBaseRefreshScheduleRequest& WithState(ScheduleState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_awsAccountId;

  Aws::String m_knowledgeBaseId;

  Aws::String m_scheduleId;

  KnowledgeBaseRefreshFrequency m_scheduleFrequency;

  Aws::Utils::DateTime m_startTime{};

  ScheduleState m_state{ScheduleState::NOT_SET};
  bool m_awsAccountIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_scheduleIdHasBeenSet = false;
  bool m_scheduleFrequencyHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
