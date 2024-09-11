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
   * Placeholder documentation for ListChannelPlacementGroupsRequest<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/ListChannelPlacementGroupsRequest">AWS
   * API Reference</a></p>
   */
  class ListChannelPlacementGroupsRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API ListChannelPlacementGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannelPlacementGroups"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;

    AWS_MEDIALIVE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * The ID of the cluster
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ListChannelPlacementGroupsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ListChannelPlacementGroupsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ListChannelPlacementGroupsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * The maximum number of items to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChannelPlacementGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * The token to retrieve the next page of results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListChannelPlacementGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListChannelPlacementGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListChannelPlacementGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
