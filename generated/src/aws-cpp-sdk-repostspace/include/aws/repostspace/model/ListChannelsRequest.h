/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace repostspace
{
namespace Model
{

  /**
   */
  class ListChannelsRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API ListChannelsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannels"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;

    AWS_REPOSTSPACE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    ListChannelsRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of channel to return. You receive this token from
     * a previous ListChannels operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of channels to include in the results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
