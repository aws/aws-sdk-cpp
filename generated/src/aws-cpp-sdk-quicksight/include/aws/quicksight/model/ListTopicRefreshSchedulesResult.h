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
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult();
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API ListTopicRefreshSchedulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTopicId() const{ return m_topicId; }

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const Aws::String& value) { m_topicId = value; }

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(Aws::String&& value) { m_topicId = std::move(value); }

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline void SetTopicId(const char* value) { m_topicId.assign(value); }

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicId(const Aws::String& value) { SetTopicId(value); return *this;}

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicId(Aws::String&& value) { SetTopicId(std::move(value)); return *this;}

    /**
     * <p>The ID for the topic that you want to describe. This ID is unique per Amazon
     * Web Services Region for each Amazon Web Services account.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicId(const char* value) { SetTopicId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the topic.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline const Aws::Vector<TopicRefreshScheduleSummary>& GetRefreshSchedules() const{ return m_refreshSchedules; }

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline void SetRefreshSchedules(const Aws::Vector<TopicRefreshScheduleSummary>& value) { m_refreshSchedules = value; }

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline void SetRefreshSchedules(Aws::Vector<TopicRefreshScheduleSummary>&& value) { m_refreshSchedules = std::move(value); }

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithRefreshSchedules(const Aws::Vector<TopicRefreshScheduleSummary>& value) { SetRefreshSchedules(value); return *this;}

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithRefreshSchedules(Aws::Vector<TopicRefreshScheduleSummary>&& value) { SetRefreshSchedules(std::move(value)); return *this;}

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline ListTopicRefreshSchedulesResult& AddRefreshSchedules(const TopicRefreshScheduleSummary& value) { m_refreshSchedules.push_back(value); return *this; }

    /**
     * <p>The list of topic refresh schedules.</p>
     */
    inline ListTopicRefreshSchedulesResult& AddRefreshSchedules(TopicRefreshScheduleSummary&& value) { m_refreshSchedules.push_back(std::move(value)); return *this; }


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline ListTopicRefreshSchedulesResult& WithStatus(int value) { SetStatus(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListTopicRefreshSchedulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListTopicRefreshSchedulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListTopicRefreshSchedulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_topicId;

    Aws::String m_topicArn;

    Aws::Vector<TopicRefreshScheduleSummary> m_refreshSchedules;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
