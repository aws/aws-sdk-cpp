/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/EventRuleStructure.h>
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
namespace Notifications
{
namespace Model
{
  class ListEventRulesResult
  {
  public:
    AWS_NOTIFICATIONS_API ListEventRulesResult();
    AWS_NOTIFICATIONS_API ListEventRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListEventRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventRulesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventRulesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventRulesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>EventRules</code>.</p>
     */
    inline const Aws::Vector<EventRuleStructure>& GetEventRules() const{ return m_eventRules; }
    inline void SetEventRules(const Aws::Vector<EventRuleStructure>& value) { m_eventRules = value; }
    inline void SetEventRules(Aws::Vector<EventRuleStructure>&& value) { m_eventRules = std::move(value); }
    inline ListEventRulesResult& WithEventRules(const Aws::Vector<EventRuleStructure>& value) { SetEventRules(value); return *this;}
    inline ListEventRulesResult& WithEventRules(Aws::Vector<EventRuleStructure>&& value) { SetEventRules(std::move(value)); return *this;}
    inline ListEventRulesResult& AddEventRules(const EventRuleStructure& value) { m_eventRules.push_back(value); return *this; }
    inline ListEventRulesResult& AddEventRules(EventRuleStructure&& value) { m_eventRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<EventRuleStructure> m_eventRules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
