/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/LifecyclePolicyType.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class ListLifecyclePoliciesRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLifecyclePolicies"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use use <code>nextToken</code> to get the next page of results. The
     * default is 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use use <code>nextToken</code> to get the next page of results. The
     * default is 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use use <code>nextToken</code> to get the next page of results. The
     * default is 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use use <code>nextToken</code> to get the next page of results. The
     * default is 10.</p>
     */
    inline ListLifecyclePoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListLifecyclePoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListLifecyclePoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If your initial <code>ListLifecyclePolicies</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListLifecyclePolicies</code> operations, which returns results
     * in the next page.</p>
     */
    inline ListLifecyclePoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResources() const{ return m_resources; }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline void SetResources(const Aws::Vector<Aws::String>& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline void SetResources(Aws::Vector<Aws::String>&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline ListLifecyclePoliciesRequest& WithResources(const Aws::Vector<Aws::String>& value) { SetResources(value); return *this;}

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline ListLifecyclePoliciesRequest& WithResources(Aws::Vector<Aws::String>&& value) { SetResources(std::move(value)); return *this;}

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline ListLifecyclePoliciesRequest& AddResources(const Aws::String& value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline ListLifecyclePoliciesRequest& AddResources(Aws::String&& value) { m_resourcesHasBeenSet = true; m_resources.push_back(std::move(value)); return *this; }

    /**
     * <p>Resource filters that policies can apply to. Currently, the only supported
     * resource type is <code>index</code>.</p>
     */
    inline ListLifecyclePoliciesRequest& AddResources(const char* value) { m_resourcesHasBeenSet = true; m_resources.push_back(value); return *this; }


    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline const LifecyclePolicyType& GetType() const{ return m_type; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(const LifecyclePolicyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline void SetType(LifecyclePolicyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline ListLifecyclePoliciesRequest& WithType(const LifecyclePolicyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of lifecycle policy.</p>
     */
    inline ListLifecyclePoliciesRequest& WithType(LifecyclePolicyType&& value) { SetType(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_resources;
    bool m_resourcesHasBeenSet = false;

    LifecyclePolicyType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
