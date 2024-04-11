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
    AWS_MEDIALIVE_API ListSignalMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSignalMaps"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetCloudWatchAlarmTemplateGroupIdentifier() const{ return m_cloudWatchAlarmTemplateGroupIdentifier; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool CloudWatchAlarmTemplateGroupIdentifierHasBeenSet() const { return m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetCloudWatchAlarmTemplateGroupIdentifier(const Aws::String& value) { m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifier = value; }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetCloudWatchAlarmTemplateGroupIdentifier(Aws::String&& value) { m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifier = std::move(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetCloudWatchAlarmTemplateGroupIdentifier(const char* value) { m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = true; m_cloudWatchAlarmTemplateGroupIdentifier.assign(value); }

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithCloudWatchAlarmTemplateGroupIdentifier(const Aws::String& value) { SetCloudWatchAlarmTemplateGroupIdentifier(value); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithCloudWatchAlarmTemplateGroupIdentifier(Aws::String&& value) { SetCloudWatchAlarmTemplateGroupIdentifier(std::move(value)); return *this;}

    /**
     * A cloudwatch alarm template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithCloudWatchAlarmTemplateGroupIdentifier(const char* value) { SetCloudWatchAlarmTemplateGroupIdentifier(value); return *this;}


    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetEventBridgeRuleTemplateGroupIdentifier() const{ return m_eventBridgeRuleTemplateGroupIdentifier; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool EventBridgeRuleTemplateGroupIdentifierHasBeenSet() const { return m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetEventBridgeRuleTemplateGroupIdentifier(const Aws::String& value) { m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifier = value; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetEventBridgeRuleTemplateGroupIdentifier(Aws::String&& value) { m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifier = std::move(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetEventBridgeRuleTemplateGroupIdentifier(const char* value) { m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = true; m_eventBridgeRuleTemplateGroupIdentifier.assign(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithEventBridgeRuleTemplateGroupIdentifier(const Aws::String& value) { SetEventBridgeRuleTemplateGroupIdentifier(value); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithEventBridgeRuleTemplateGroupIdentifier(Aws::String&& value) { SetEventBridgeRuleTemplateGroupIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListSignalMapsRequest& WithEventBridgeRuleTemplateGroupIdentifier(const char* value) { SetEventBridgeRuleTemplateGroupIdentifier(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListSignalMapsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListSignalMapsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_cloudWatchAlarmTemplateGroupIdentifier;
    bool m_cloudWatchAlarmTemplateGroupIdentifierHasBeenSet = false;

    Aws::String m_eventBridgeRuleTemplateGroupIdentifier;
    bool m_eventBridgeRuleTemplateGroupIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
