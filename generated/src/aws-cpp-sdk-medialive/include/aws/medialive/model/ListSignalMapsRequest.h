/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for ListSignalMapsRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListSignalMapsRequest">AWS
   * API Reference</a></p>
   */
  class ListSignalMapsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListSignalMapsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSignalMaps"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetCloudWatchAlarmTemplateGroupIdentifier() const { return m_cloudWatchAlarmTemplateGroupIdentifier; }
    inline bool CloudWatchAlarmTemplateGroupIdentifierHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet; }
    template<typename CloudWatchAlarmTemplateGroupIdentifierT = Aws::String>
    void SetCloudWatchAlarmTemplateGroupIdentifier(CloudWatchAlarmTemplateGroupIdentifierT&& value) { m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifier = std::forward<CloudWatchAlarmTemplateGroupIdentifierT>(value); }
    template<typename CloudWatchAlarmTemplateGroupIdentifierT = Aws::String>
    ListSignalMapsRequest& WithCloudWatchAlarmTemplateGroupIdentifier(CloudWatchAlarmTemplateGroupIdentifierT&& value) { SetCloudWatchAlarmTemplateGroupIdentifier(std::forward<CloudWatchAlarmTemplateGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetEventBridgeRuleTemplateGroupIdentifier() const { return m_eventBridgeRuleTemplateGroupIdentifier; }
    inline bool EventBridgeRuleTemplateGroupIdentifierHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet; }
    template<typename EventBridgeRuleTemplateGroupIdentifierT = Aws::String>
    void SetEventBridgeRuleTemplateGroupIdentifier(EventBridgeRuleTemplateGroupIdentifierT&& value) { m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifier = std::forward<EventBridgeRuleTemplateGroupIdentifierT>(value); }
    template<typename EventBridgeRuleTemplateGroupIdentifierT = Aws::String>
    ListSignalMapsRequest& WithEventBridgeRuleTemplateGroupIdentifier(EventBridgeRuleTemplateGroupIdentifierT&& value) { SetEventBridgeRuleTemplateGroupIdentifier(std::forward<EventBridgeRuleTemplateGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSignalMapsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSignalMapsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cloudWatchAlarmTemplateGroupIdentifier;
    bool m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = false;

    Aws::String m_eventBridgeRuleTemplateGroupIdentifier;
    bool m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
