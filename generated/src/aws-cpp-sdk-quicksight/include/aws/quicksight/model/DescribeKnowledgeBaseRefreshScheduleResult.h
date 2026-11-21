/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseRefreshScheduleSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class DescribeKnowledgeBaseRefreshScheduleResult {
 public:
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseRefreshScheduleResult() = default;
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseRefreshScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeKnowledgeBaseRefreshScheduleResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The refresh schedule for the knowledge base.</p>
   */
  inline const KnowledgeBaseRefreshScheduleSummary& GetSchedule() const { return m_schedule; }
  template <typename ScheduleT = KnowledgeBaseRefreshScheduleSummary>
  void SetSchedule(ScheduleT&& value) {
    m_scheduleHasBeenSet = true;
    m_schedule = std::forward<ScheduleT>(value);
  }
  template <typename ScheduleT = KnowledgeBaseRefreshScheduleSummary>
  DescribeKnowledgeBaseRefreshScheduleResult& WithSchedule(ScheduleT&& value) {
    SetSchedule(std::forward<ScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base that the schedule
   * applies to.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  DescribeKnowledgeBaseRefreshScheduleResult& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
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
  DescribeKnowledgeBaseRefreshScheduleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeKnowledgeBaseRefreshScheduleResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  KnowledgeBaseRefreshScheduleSummary m_schedule;

  Aws::String m_knowledgeBaseArn;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scheduleHasBeenSet = false;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
