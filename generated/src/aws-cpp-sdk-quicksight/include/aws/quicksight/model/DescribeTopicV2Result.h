/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomInstructions.h>
#include <aws/quicksight/model/TopicV2Details.h>

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
class DescribeTopicV2Result {
 public:
  AWS_QUICKSIGHT_API DescribeTopicV2Result() = default;
  AWS_QUICKSIGHT_API DescribeTopicV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeTopicV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DescribeTopicV2Result& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the topic that you want to describe. This ID is unique per Amazon
   * Web Services Region for each Amazon Web Services account.</p>
   */
  inline const Aws::String& GetTopicId() const { return m_topicId; }
  template <typename TopicIdT = Aws::String>
  void SetTopicId(TopicIdT&& value) {
    m_topicIdHasBeenSet = true;
    m_topicId = std::forward<TopicIdT>(value);
  }
  template <typename TopicIdT = Aws::String>
  DescribeTopicV2Result& WithTopicId(TopicIdT&& value) {
    SetTopicId(std::forward<TopicIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The definition of a topic.</p>
   */
  inline const TopicV2Details& GetTopic() const { return m_topic; }
  template <typename TopicT = TopicV2Details>
  void SetTopic(TopicT&& value) {
    m_topicHasBeenSet = true;
    m_topic = std::forward<TopicT>(value);
  }
  template <typename TopicT = TopicV2Details>
  DescribeTopicV2Result& WithTopic(TopicT&& value) {
    SetTopic(std::forward<TopicT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CustomInstructions& GetCustomInstructions() const { return m_customInstructions; }
  template <typename CustomInstructionsT = CustomInstructions>
  void SetCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions = std::forward<CustomInstructionsT>(value);
  }
  template <typename CustomInstructionsT = CustomInstructions>
  DescribeTopicV2Result& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
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
  inline DescribeTopicV2Result& WithStatus(int value) {
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
  DescribeTopicV2Result& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_topicId;

  TopicV2Details m_topic;

  CustomInstructions m_customInstructions;

  int m_status{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_topicIdHasBeenSet = false;
  bool m_topicHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
