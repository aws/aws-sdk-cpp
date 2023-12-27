/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class ListWorkgroupsRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkgroups"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to display the next page of results.</p>
     */
    inline ListWorkgroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline ListWorkgroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline ListWorkgroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial ListWorkgroups operation returns a <code>nextToken</code>,
     * you can include the returned <code>nextToken</code> in following ListNamespaces
     * operations, which returns results in the next page.</p>
     */
    inline ListWorkgroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline ListWorkgroupsRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline ListWorkgroupsRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The owner Amazon Web Services account for the Amazon Redshift Serverless
     * workgroup.</p>
     */
    inline ListWorkgroupsRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
