/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingInsights.h>
#include <aws/partnercentral-selling/model/ProspectingResultCustomer.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Contains the prospecting data that AWS sources. This includes task execution
 * details, customer account information, and insights that AI generates from the
 * prospecting analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingResultAws">AWS
 * API Reference</a></p>
 */
class ProspectingResultAws {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingResultAws() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingResultAws(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingResultAws& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp when the prospecting result context was created. The format is
   * ISO 8601 (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  ProspectingResultAws& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the prospecting task completed processing. The format is
   * ISO 8601 (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  ProspectingResultAws& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the prospecting task that generates this result.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  ProspectingResultAws& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the prospecting task. Use this ARN to track
   * and manage the task within AWS.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  ProspectingResultAws& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name that the user provides for the prospecting task that generates this
   * result.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  inline bool TaskNameHasBeenSet() const { return m_taskNameHasBeenSet; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  ProspectingResultAws& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains details about the prospected customer account, including geographic,
   * industry, and segment classifications.</p>
   */
  inline const ProspectingResultCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = ProspectingResultCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = ProspectingResultCustomer>
  ProspectingResultAws& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Insights that AI generates from the prospecting analysis. These insights
   * include engagement scores and solution fit assessments for the prospected
   * customer.</p>
   */
  inline const ProspectingInsights& GetInsights() const { return m_insights; }
  inline bool InsightsHasBeenSet() const { return m_insightsHasBeenSet; }
  template <typename InsightsT = ProspectingInsights>
  void SetInsights(InsightsT&& value) {
    m_insightsHasBeenSet = true;
    m_insights = std::forward<InsightsT>(value);
  }
  template <typename InsightsT = ProspectingInsights>
  ProspectingResultAws& WithInsights(InsightsT&& value) {
    SetInsights(std::forward<InsightsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::String m_taskId;

  Aws::String m_taskArn;

  Aws::String m_taskName;

  ProspectingResultCustomer m_customer;

  ProspectingInsights m_insights;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_taskIdHasBeenSet = false;
  bool m_taskArnHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_customerHasBeenSet = false;
  bool m_insightsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
