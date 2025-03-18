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
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult() = default;
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<EventBridgeRuleTemplateSummary>& GetEventBridgeRuleTemplates() const { return m_eventBridgeRuleTemplates; }
    template<typename EventBridgeRuleTemplatesT = Aws::Vector<EventBridgeRuleTemplateSummary>>
    void SetEventBridgeRuleTemplates(EventBridgeRuleTemplatesT&& value) { m_eventBridgeRuleTemplatesHasBeenSet = true; m_eventBridgeRuleTemplates = std::forward<EventBridgeRuleTemplatesT>(value); }
    template<typename EventBridgeRuleTemplatesT = Aws::Vector<EventBridgeRuleTemplateSummary>>
    ListEventBridgeRuleTemplatesResult& WithEventBridgeRuleTemplates(EventBridgeRuleTemplatesT&& value) { SetEventBridgeRuleTemplates(std::forward<EventBridgeRuleTemplatesT>(value)); return *this;}
    template<typename EventBridgeRuleTemplatesT = EventBridgeRuleTemplateSummary>
    ListEventBridgeRuleTemplatesResult& AddEventBridgeRuleTemplates(EventBridgeRuleTemplatesT&& value) { m_eventBridgeRuleTemplatesHasBeenSet = true; m_eventBridgeRuleTemplates.emplace_back(std::forward<EventBridgeRuleTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventBridgeRuleTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventBridgeRuleTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventBridgeRuleTemplateSummary> m_eventBridgeRuleTemplates;
    bool m_eventBridgeRuleTemplatesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
