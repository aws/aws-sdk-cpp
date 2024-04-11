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
   * Placeholder documentation for ListEventBridgeRuleTemplateGroupsRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListEventBridgeRuleTemplateGroupsRequest">AWS
   * API Reference</a></p>
   */
  class ListEventBridgeRuleTemplateGroupsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListEventBridgeRuleTemplateGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventBridgeRuleTemplateGroups"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListEventBridgeRuleTemplateGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListEventBridgeRuleTemplateGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplateGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token used to retrieve the next set of results in paginated list responses.
     */
    inline ListEventBridgeRuleTemplateGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline ListEventBridgeRuleTemplateGroupsRequest& WithSignalMapIdentifier(const Aws::String& value) { SetSignalMapIdentifier(value); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline ListEventBridgeRuleTemplateGroupsRequest& WithSignalMapIdentifier(Aws::String&& value) { SetSignalMapIdentifier(std::move(value)); return *this;}

    /**
     * A signal map's identifier. Can be either be its id or current name.
     */
    inline ListEventBridgeRuleTemplateGroupsRequest& WithSignalMapIdentifier(const char* value) { SetSignalMapIdentifier(value); return *this;}

  private:

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
