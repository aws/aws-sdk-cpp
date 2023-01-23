/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
#include <aws/pinpoint-email/PinpointEmailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace PinpointEmail
{
namespace Model
{

  /**
   * <p>A request to obtain a list of dedicated IP pools.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-email-2018-07-26/ListDedicatedIpPoolsRequest">AWS
   * API Reference</a></p>
   */
  class ListDedicatedIpPoolsRequest : public PinpointEmailRequest
  {
  public:
    AWS_PINPOINTEMAIL_API ListDedicatedIpPoolsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDedicatedIpPools"; }

    AWS_PINPOINTEMAIL_API Aws::String SerializePayload() const override;

    AWS_PINPOINTEMAIL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline ListDedicatedIpPoolsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline ListDedicatedIpPoolsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>ListDedicatedIpPools</code> to
     * indicate the position in the list of dedicated IP pools.</p>
     */
    inline ListDedicatedIpPoolsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>ListDedicatedIpPools</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDedicatedIpPools</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDedicatedIpPools</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>ListDedicatedIpPools</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline ListDedicatedIpPoolsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
