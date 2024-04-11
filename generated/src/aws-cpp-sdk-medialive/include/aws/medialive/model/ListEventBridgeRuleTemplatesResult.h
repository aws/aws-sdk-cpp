/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/EventBridgeRuleTemplateSummary.h>
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
   * Placeholder documentation for ListEventBridgeRuleTemplatesResponse<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListEventBridgeRuleTemplatesResult
  {
  public:
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult();
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<EventBridgeRuleTemplateSummary>& GetEventBridgeRuleTemplates() const{ return m_eventBridgeRuleTemplates; }

    
    inline void SetEventBridgeRuleTemplates(const Aws::Vector<EventBridgeRuleTemplateSummary>& value) { m_eventBridgeRuleTemplates = value; }

    
    inline void SetEventBridgeRuleTemplates(Aws::Vector<EventBridgeRuleTemplateSummary>&& value) { m_eventBridgeRuleTemplates = std::move(value); }

    
    inline ListEventBridgeRuleTemplatesResult& WithEventBridgeRuleTemplates(const Aws::Vector<EventBridgeRuleTemplateSummary>& value) { SetEventBridgeRuleTemplates(value); return *this;}

    
    inline ListEventBridgeRuleTemplatesResult& WithEventBridgeRuleTemplates(Aws::Vector<EventBridgeRuleTemplateSummary>&& value) { SetEventBridgeRuleTemplates(std::move(value)); return *this;}

    
    inline ListEventBridgeRuleTemplatesResult& AddEventBridgeRuleTemplates(const EventBridgeRuleTemplateSummary& value) { m_eventBridgeRuleTemplates.push_back(value); return *this; }

    
    inline ListEventBridgeRuleTemplatesResult& AddEventBridgeRuleTemplates(EventBridgeRuleTemplateSummary&& value) { m_eventBridgeRuleTemplates.push_back(std::move(value)); return *this; }


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
    inline ListEventBridgeRuleTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEventBridgeRuleTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEventBridgeRuleTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEventBridgeRuleTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EventBridgeRuleTemplateSummary> m_eventBridgeRuleTemplates;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
