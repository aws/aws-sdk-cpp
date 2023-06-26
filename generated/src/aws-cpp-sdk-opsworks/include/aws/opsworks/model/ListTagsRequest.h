/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class ListTagsRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API ListTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline ListTagsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline ListTagsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The stack or layer's Amazon Resource Number (ARN).</p>
     */
    inline ListTagsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Do not use. A validation exception occurs if you add a
     * <code>MaxResults</code> parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Do not use. A validation exception occurs if you add a
     * <code>MaxResults</code> parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Do not use. A validation exception occurs if you add a
     * <code>MaxResults</code> parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Do not use. A validation exception occurs if you add a
     * <code>MaxResults</code> parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline ListTagsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline ListTagsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline ListTagsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Do not use. A validation exception occurs if you add a <code>NextToken</code>
     * parameter to a <code>ListTagsRequest</code> call. </p>
     */
    inline ListTagsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
