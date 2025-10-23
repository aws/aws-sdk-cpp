/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/RTBFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace RTBFabric
{
namespace Model
{

  /**
   */
  class ListLinksRequest : public RTBFabricRequest
  {
  public:
    AWS_RTBFABRIC_API ListLinksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLinks"; }

    AWS_RTBFABRIC_API Aws::String SerializePayload() const override;

    AWS_RTBFABRIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The unique identifier of the gateway.</p>
     */
    inline const Aws::String& GetGatewayId() const { return m_gatewayId; }
    inline bool GatewayIdHasBeenSet() const { return m_gatewayIdHasBeenSet; }
    template<typename GatewayIdT = Aws::String>
    void SetGatewayId(GatewayIdT&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = std::forward<GatewayIdT>(value); }
    template<typename GatewayIdT = Aws::String>
    ListLinksRequest& WithGatewayId(GatewayIdT&& value) { SetGatewayId(std::forward<GatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLinksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>nextToken</code> to obtain further pages of results.</p> <p>This is only
     * an upper limit. The actual number of results returned per call might be fewer
     * than the specified maximum.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLinksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RTBFabric
} // namespace Aws
