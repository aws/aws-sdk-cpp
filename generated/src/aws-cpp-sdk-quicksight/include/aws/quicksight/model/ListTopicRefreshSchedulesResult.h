/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TopicRefreshScheduleSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class ListTopicRefreshSchedulesResult
  {
  public:
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult() = default;
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const { return m_topicId; }
    template<typename TopicIdT = Aws::String>
    void SetTopicId(TopicIdT&& value) { m_topicIdHasBeenSet = true; m_topicId = std::forward<TopicIdT>(value); }
    template<typename TopicIdT = Aws::String>
    ListTopicRefreshSchedulesResult& WithTopicId(TopicIdT&& value) { SetTopicId(std::forward<TopicIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    ListTopicRefreshSchedulesResult& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline const Aws::Vector<TopicRefreshScheduleSummary>& GetRefreshSchedules() const { return m_refreshSchedules; }
    template<typename RefreshSchedulesT = Aws::Vector<TopicRefreshScheduleSummary>>
    void SetRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules = std::forward<RefreshSchedulesT>(value); }
    template<typename RefreshSchedulesT = Aws::Vector<TopicRefreshScheduleSummary>>
    ListTopicRefreshSchedulesResult& WithRefreshSchedules(RefreshSchedulesT&& value) { SetRefreshSchedules(std::forward<RefreshSchedulesT>(value)); return *this;}
    template<typename RefreshSchedulesT = TopicRefreshScheduleSummary>
    ListTopicRefreshSchedulesResult& AddRefreshSchedules(RefreshSchedulesT&& value) { m_refreshSchedulesHasBeenSet = true; m_refreshSchedules.emplace_back(std::forward<RefreshSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListTopicRefreshSchedulesResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTopicRefreshSchedulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicId;
    bool m_topicIdHasBeenSet = false;

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::Vector<TopicRefreshScheduleSummary> m_refreshSchedules;
    bool m_refreshSchedulesHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
