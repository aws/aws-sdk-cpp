/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/EngagementProspectingResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Represents the response structure containing the full details of a
 * prospecting task, including per-engagement processing results. Includes the
 * <code>Status</code> field of each <code>EngagementProspectingResult</code> entry
 * to determine individual outcomes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetProspectingFromEngagementTaskResponse">AWS
 * API Reference</a></p>
 */
class GetProspectingFromEngagementTaskResult {
 public:
  AWS_PARTNERCENTRALSELLING_API GetProspectingFromEngagementTaskResult() = default;
  AWS_PARTNERCENTRALSELLING_API GetProspectingFromEngagementTaskResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API GetProspectingFromEngagementTaskResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier of the task.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  GetProspectingFromEngagementTaskResult& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task.</p>
   */
  inline const Aws::String& GetTaskArn() const { return m_taskArn; }
  template <typename TaskArnT = Aws::String>
  void SetTaskArn(TaskArnT&& value) {
    m_taskArnHasBeenSet = true;
    m_taskArn = std::forward<TaskArnT>(value);
  }
  template <typename TaskArnT = Aws::String>
  GetProspectingFromEngagementTaskResult& WithTaskArn(TaskArnT&& value) {
    SetTaskArn(std::forward<TaskArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive name of the task that you provided when you created it.</p>
   */
  inline const Aws::String& GetTaskName() const { return m_taskName; }
  template <typename TaskNameT = Aws::String>
  void SetTaskName(TaskNameT&& value) {
    m_taskNameHasBeenSet = true;
    m_taskName = std::forward<TaskNameT>(value);
  }
  template <typename TaskNameT = Aws::String>
  GetProspectingFromEngagementTaskResult& WithTaskName(TaskNameT&& value) {
    SetTaskName(std::forward<TaskNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task was initiated. The format follows ISO
   * 8601 date-time notation.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  GetProspectingFromEngagementTaskResult& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating when the task finished processing. This field is
   * absent if the task is still in progress. The format follows ISO 8601 date-time
   * notation.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  GetProspectingFromEngagementTaskResult& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>EngagementProspectingResult</code> entries for each
   * engagement in the task. Each entry contains the processing status. For
   * successfully completed engagements, includes the prospecting context identifier.
   * For failed engagements, includes an error code and message.</p>
   */
  inline const Aws::Vector<EngagementProspectingResult>& GetEngagements() const { return m_engagements; }
  template <typename EngagementsT = Aws::Vector<EngagementProspectingResult>>
  void SetEngagements(EngagementsT&& value) {
    m_engagementsHasBeenSet = true;
    m_engagements = std::forward<EngagementsT>(value);
  }
  template <typename EngagementsT = Aws::Vector<EngagementProspectingResult>>
  GetProspectingFromEngagementTaskResult& WithEngagements(EngagementsT&& value) {
    SetEngagements(std::forward<EngagementsT>(value));
    return *this;
  }
  template <typename EngagementsT = EngagementProspectingResult>
  GetProspectingFromEngagementTaskResult& AddEngagements(EngagementsT&& value) {
    m_engagementsHasBeenSet = true;
    m_engagements.emplace_back(std::forward<EngagementsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetProspectingFromEngagementTaskResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_taskId;

  Aws::String m_taskArn;

  Aws::String m_taskName;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  Aws::Vector<EngagementProspectingResult> m_engagements;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_taskIdHasBeenSet = false;
  bool m_taskArnHasBeenSet = false;
  bool m_taskNameHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_engagementsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
