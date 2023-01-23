/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SESV2
{
namespace Model
{

  /**
   * <p>A request to obtain more information about dedicated IP pools.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/GetDedicatedIpsRequest">AWS
   * API Reference</a></p>
   */
  class GetDedicatedIpsRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API GetDedicatedIpsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDedicatedIps"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;

    AWS_SESV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline const Aws::String& GetPoolName() const{ return m_poolName; }

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline bool PoolNameHasBeenSet() const { return m_poolNameHasBeenSet; }

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline void SetPoolName(const Aws::String& value) { m_poolNameHasBeenSet = true; m_poolName = value; }

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline void SetPoolName(Aws::String&& value) { m_poolNameHasBeenSet = true; m_poolName = std::move(value); }

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline void SetPoolName(const char* value) { m_poolNameHasBeenSet = true; m_poolName.assign(value); }

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline GetDedicatedIpsRequest& WithPoolName(const Aws::String& value) { SetPoolName(value); return *this;}

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline GetDedicatedIpsRequest& WithPoolName(Aws::String&& value) { SetPoolName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP pool that the dedicated IP address is associated with.</p>
     */
    inline GetDedicatedIpsRequest& WithPoolName(const char* value) { SetPoolName(value); return *this;}


    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline GetDedicatedIpsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline GetDedicatedIpsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a previous call to <code>GetDedicatedIps</code> to
     * indicate the position of the dedicated IP pool in the list of IP pools.</p>
     */
    inline GetDedicatedIpsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The number of results to show in a single call to
     * <code>GetDedicatedIpsRequest</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The number of results to show in a single call to
     * <code>GetDedicatedIpsRequest</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The number of results to show in a single call to
     * <code>GetDedicatedIpsRequest</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The number of results to show in a single call to
     * <code>GetDedicatedIpsRequest</code>. If the number of results is larger than the
     * number you specified in this parameter, then the response includes a
     * <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline GetDedicatedIpsRequest& WithPageSize(int value) { SetPageSize(value); return *this;}

  private:

    Aws::String m_poolName;
    bool m_poolNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_pageSize;
    bool m_pageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
