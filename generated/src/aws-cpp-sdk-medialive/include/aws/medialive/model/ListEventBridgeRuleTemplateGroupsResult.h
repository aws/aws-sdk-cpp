/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/EventBridgeRuleTemplateGroupSummary.h>
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
namespace MediaLive
{
namespace Model
{
  /**
   * Placeholder documentation for
   * ListEventBridgeRuleTemplateGroupsResponse<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplateGroupsResponse">AWS
   * API Reference</a></p>
   */
  class ListEventBridgeRuleTemplateGroupsResult
  {
  public:
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult();
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<EventBridgeRuleTemplateGroupSummary>& GetEventBridgeRuleTemplateGroups() const{ return m_eventBridgeRuleTemplateGroups; }

    
    inline void SetEventBridgeRuleTemplateGroups(const Aws::Vector<EventBridgeRuleTemplateGroupSummary>& value) { m_eventBridgeRuleTemplateGroups = value; }

    
    inline void SetEventBridgeRuleTemplateGroups(Aws::Vector<EventBridgeRuleTemplateGroupSummary>&& value) { m_eventBridgeRuleTemplateGroups = std::move(value); }

    
    inline ListEventBridgeRuleTemplateGroupsResult& WithEventBridgeRuleTemplateGroups(const Aws::Vector<EventBridgeRuleTemplateGroupSummary>& value) { SetEventBridgeRuleTemplateGroups(value); return *this;}

    
    inline ListEventBridgeRuleTemplateGroupsResult& WithEventBridgeRuleTemplateGroups(Aws::Vector<EventBridgeRuleTemplateGroupSummary>&& value) { SetEventBridgeRuleTemplateGroups(std::move(value)); return *this;}

    
    inline ListEventBridgeRuleTemplateGroupsResult& AddEventBridgeRuleTemplateGroups(const EventBridgeRuleTemplateGroupSummary& value) { m_eventBridgeRuleTemplateGroups.push_back(value); return *this; }

    
    inline ListEventBridgeRuleTemplateGroupsResult& AddEventBridgeRuleTemplateGroups(EventBridgeRuleTemplateGroupSummary&& value) { m_eventBridgeRuleTemplateGroups.push_back(std::move(value)); return *this; }


    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplateGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplateGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplateGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEventBridgeRuleTemplateGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEventBridgeRuleTemplateGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEventBridgeRuleTemplateGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EventBridgeRuleTemplateGroupSummary> m_eventBridgeRuleTemplateGroups;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
