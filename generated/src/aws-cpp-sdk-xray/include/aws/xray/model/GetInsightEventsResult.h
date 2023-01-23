/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/InsightEvent.h>
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
namespace XRay
{
namespace Model
{
  class GetInsightEventsResult
  {
  public:
    AWS_XRAY_API GetInsightEventsResult();
    AWS_XRAY_API GetInsightEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline const Aws::Vector<InsightEvent>& GetInsightEvents() const{ return m_insightEvents; }

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline void SetInsightEvents(const Aws::Vector<InsightEvent>& value) { m_insightEvents = value; }

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline void SetInsightEvents(Aws::Vector<InsightEvent>&& value) { m_insightEvents = std::move(value); }

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline GetInsightEventsResult& WithInsightEvents(const Aws::Vector<InsightEvent>& value) { SetInsightEvents(value); return *this;}

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline GetInsightEventsResult& WithInsightEvents(Aws::Vector<InsightEvent>&& value) { SetInsightEvents(std::move(value)); return *this;}

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline GetInsightEventsResult& AddInsightEvents(const InsightEvent& value) { m_insightEvents.push_back(value); return *this; }

    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline GetInsightEventsResult& AddInsightEvents(InsightEvent&& value) { m_insightEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline GetInsightEventsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline GetInsightEventsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline GetInsightEventsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<InsightEvent> m_insightEvents;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
