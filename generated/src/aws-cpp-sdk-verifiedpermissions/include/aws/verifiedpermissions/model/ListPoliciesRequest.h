﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/verifiedpermissions/model/PolicyFilter.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class ListPoliciesRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ListPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPolicies"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ID of the policy store you want to list policies from.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }
    inline ListPoliciesRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}
    inline ListPoliciesRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}
    inline ListPoliciesRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p> <p>If you do not specify this
     * parameter, the operation defaults to 10 policies per response. You can specify a
     * maximum of 50 policies per response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a filter that limits the response to only policies that match the
     * specified criteria. For example, you list only the policies that reference a
     * specified principal.</p>
     */
    inline const PolicyFilter& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const PolicyFilter& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(PolicyFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline ListPoliciesRequest& WithFilter(const PolicyFilter& value) { SetFilter(value); return *this;}
    inline ListPoliciesRequest& WithFilter(PolicyFilter&& value) { SetFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    PolicyFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
