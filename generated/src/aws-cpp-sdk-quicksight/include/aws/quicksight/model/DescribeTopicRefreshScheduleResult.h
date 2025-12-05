/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicRefreshSchedule.h>

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
class DescribeTopicRefreshScheduleResult {
 public:
  AWS_QUICKSIGHT_API DescribeTopicRefreshScheduleResult() = default;
  AWS_QUICKSIGHT_API DescribeTopicRefreshScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeTopicRefreshScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the topic that contains the refresh schedule that you want to
   * describe. This ID is unique per Amazon Web Services Region for each Amazon Web
   * Services account.</p>
   */
  inline const Aws::String& GetTopicId() const { return m_topicId; }
  template <typename TopicIdT = Aws::String>
  void SetTopicId(TopicIdT&& value) {
    m_topicIdHasBeenSet = true;
    m_topicId = std::forward<TopicIdT>(value);
  }
  template <typename TopicIdT = Aws::String>
  DescribeTopicRefreshScheduleResult& WithTopicId(TopicIdT&& value) {
    SetTopicId(std::forward<TopicIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic.</p>
   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  DescribeTopicRefreshScheduleResult& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dataset.</p>
   */
  inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
  template <typename DatasetArnT = Aws::String>
  void SetDatasetArn(DatasetArnT&& value) {
    m_datasetArnHasBeenSet = true;
    m_datasetArn = std::forward<DatasetArnT>(value);
  }
  template <typename DatasetArnT = Aws::String>
  DescribeTopicRefreshScheduleResult& WithDatasetArn(DatasetArnT&& value) {
    SetDatasetArn(std::forward<DatasetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definition of a refresh schedule.</p>
   */
  inline const TopicRefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
  template <typename RefreshScheduleT = TopicRefreshSchedule>
  void SetRefreshSchedule(RefreshScheduleT&& value) {
    m_refreshScheduleHasBeenSet = true;
    m_refreshSchedule = std::forward<RefreshScheduleT>(value);
  }
  template <typename RefreshScheduleT = TopicRefreshSchedule>
  DescribeTopicRefreshScheduleResult& WithRefreshSchedule(RefreshScheduleT&& value) {
    SetRefreshSchedule(std::forward<RefreshScheduleT>(value));
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
  inline DescribeTopicRefreshScheduleResult& WithStatus(int value) {
    SetStatus(value);
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
  DescribeTopicRefreshScheduleResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_topicId;

  Aws::String m_topicArn;

  Aws::String m_datasetArn;

  TopicRefreshSchedule m_refreshSchedule;

  int m_status{0};

  Aws::String m_requestId;
  bool m_topicIdHasBeenSet = false;
  bool m_topicArnHasBeenSet = false;
  bool m_datasetArnHasBeenSet = false;
  bool m_refreshScheduleHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
