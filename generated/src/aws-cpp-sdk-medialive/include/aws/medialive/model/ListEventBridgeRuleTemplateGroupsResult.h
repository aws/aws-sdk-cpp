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
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult() = default;
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<EventBridgeRuleTemplateGroupSummary>& GetEventBridgeRuleTemplateGroups() const { return m_eventBridgeRuleTemplateGroups; }
    template<typename EventBridgeRuleTemplateGroupsT = Aws::Vector<EventBridgeRuleTemplateGroupSummary>>
    void SetEventBridgeRuleTemplateGroups(EventBridgeRuleTemplateGroupsT&& value) { m_eventBridgeRuleTemplateGroupsHasBeenSet = true; m_eventBridgeRuleTemplateGroups = std::forward<EventBridgeRuleTemplateGroupsT>(value); }
    template<typename EventBridgeRuleTemplateGroupsT = Aws::Vector<EventBridgeRuleTemplateGroupSummary>>
    ListEventBridgeRuleTemplateGroupsResult& WithEventBridgeRuleTemplateGroups(EventBridgeRuleTemplateGroupsT&& value) { SetEventBridgeRuleTemplateGroups(std::forward<EventBridgeRuleTemplateGroupsT>(value)); return *this;}
    template<typename EventBridgeRuleTemplateGroupsT = EventBridgeRuleTemplateGroupSummary>
    ListEventBridgeRuleTemplateGroupsResult& AddEventBridgeRuleTemplateGroups(EventBridgeRuleTemplateGroupsT&& value) { m_eventBridgeRuleTemplateGroupsHasBeenSet = true; m_eventBridgeRuleTemplateGroups.emplace_back(std::forward<EventBridgeRuleTemplateGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEventBridgeRuleTemplateGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEventBridgeRuleTemplateGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventBridgeRuleTemplateGroupSummary> m_eventBridgeRuleTemplateGroups;
    bool m_eventBridgeRuleTemplateGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
