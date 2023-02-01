/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class DescribeConnectClientAddInsRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API DescribeConnectClientAddInsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectClientAddIns"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The directory identifier for which the client add-in is configured.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you received a <code>NextToken</code> from a previous call that was
     * paginated, provide this token to receive the next set of results.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return.</p>
     */
    inline DescribeConnectClientAddInsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
