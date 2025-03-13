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
    AWS_XRAY_API GetInsightEventsResult() = default;
    AWS_XRAY_API GetInsightEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetInsightEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A detailed description of the event. This includes the time of the event,
     * client and root cause impact statistics, and the top anomalous service at the
     * time of the event.</p>
     */
    inline const Aws::Vector<InsightEvent>& GetInsightEvents() const { return m_insightEvents; }
    template<typename InsightEventsT = Aws::Vector<InsightEvent>>
    void SetInsightEvents(InsightEventsT&& value) { m_insightEventsHasBeenSet = true; m_insightEvents = std::forward<InsightEventsT>(value); }
    template<typename InsightEventsT = Aws::Vector<InsightEvent>>
    GetInsightEventsResult& WithInsightEvents(InsightEventsT&& value) { SetInsightEvents(std::forward<InsightEventsT>(value)); return *this;}
    template<typename InsightEventsT = InsightEvent>
    GetInsightEventsResult& AddInsightEvents(InsightEventsT&& value) { m_insightEventsHasBeenSet = true; m_insightEvents.emplace_back(std::forward<InsightEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this token to retrieve the next page of insight events.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInsightEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInsightEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InsightEvent> m_insightEvents;
    bool m_insightEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
