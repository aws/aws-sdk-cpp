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
   * Placeholder documentation for ListEventBridgeRuleTemplatesRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplatesRequest">AWS
   * API Reference</a></p>
   */
  class ListEventBridgeRuleTemplatesRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventBridgeRuleTemplates"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline const Aws::String& GetGroupIdentifier() const{ return m_groupIdentifier; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline bool GroupIdentifierHasBeenSet() const { return m_groupIdentifierHasBeenSet; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const Aws::String& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = value; }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(Aws::String&& value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier = std::move(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline void SetGroupIdentifier(const char* value) { m_groupIdentifierHasBeenSet = true; m_groupIdentifier.assign(value); }

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithGroupIdentifier(const Aws::String& value) { SetGroupIdentifier(value); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithGroupIdentifier(Aws::String&& value) { SetGroupIdentifier(std::move(value)); return *this;}

    /**
     * An eventbridge rule template group's identifier. Can be either be its id or
     * current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithGroupIdentifier(const char* value) { SetGroupIdentifier(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListEventBridgeRuleTemplatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListEventBridgeRuleTemplatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline const Aws::String& GetSignalMapIdentifier() const{ return m_signalMapIdentifier; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline bool SignalMapIdentifierHasBeenSet() const { return m_signalMapIdentifierHasBeenSet; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetSignalMapIdentifier(const Aws::String& value) { m_signalMapIdentifierHasBeenSet = true; m_signalMapIdentifier = value; }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetSignalMapIdentifier(Aws::String&& value) { m_signalMapIdentifierHasBeenSet = true; m_signalMapIdentifier = std::move(value); }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline void SetSignalMapIdentifier(const char* value) { m_signalMapIdentifierHasBeenSet = true; m_signalMapIdentifier.assign(value); }

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithSignalMapIdentifier(const Aws::String& value) { SetSignalMapIdentifier(value); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithSignalMapIdentifier(Aws::String&& value) { SetSignalMapIdentifier(std::move(value)); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline ListEventBridgeRuleTemplatesRequest& WithSignalMapIdentifier(const char* value) { SetSignalMapIdentifier(value); return *this;}

  private:

    Aws::String m_groupIdentifier;
    bool m_groupIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_signalMapIdentifier;
    bool m_signalMapIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
