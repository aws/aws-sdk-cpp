/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/mediapackage/MediaPackageRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaPackage
{
namespace Model
{

  /**
   */
  class ListOriginEndpointsRequest : public MediaPackageRequest
  {
  public:
    AWS_MEDIAPACKAGE_API ListOriginEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOriginEndpoints"; }

    AWS_MEDIAPACKAGE_API Aws::String SerializePayload() const override;

    AWS_MEDIAPACKAGE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * When specified, the request will return only OriginEndpoints associated with the
     * given Channel ID.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline ListOriginEndpointsRequest& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline ListOriginEndpointsRequest& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline ListOriginEndpointsRequest& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}

    ///@{
    /**
     * The upper bound on the number of records to return.
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOriginEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * A token used to resume pagination from the end of a previous request.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListOriginEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOriginEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOriginEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
