/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/VerifiedPermissionsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/model/IdentitySourceFilter.h>
#include <utility>

namespace Aws
{
namespace VerifiedPermissions
{
namespace Model
{

  /**
   */
  class ListIdentitySourcesRequest : public VerifiedPermissionsRequest
  {
  public:
    AWS_VERIFIEDPERMISSIONS_API ListIdentitySourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIdentitySources"; }

    AWS_VERIFIEDPERMISSIONS_API Aws::String SerializePayload() const override;

    AWS_VERIFIEDPERMISSIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline const Aws::String& GetPolicyStoreId() const{ return m_policyStoreId; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline bool PolicyStoreIdHasBeenSet() const { return m_policyStoreIdHasBeenSet; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline void SetPolicyStoreId(const Aws::String& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = value; }

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline void SetPolicyStoreId(Aws::String&& value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId = std::move(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline void SetPolicyStoreId(const char* value) { m_policyStoreIdHasBeenSet = true; m_policyStoreId.assign(value); }

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline ListIdentitySourcesRequest& WithPolicyStoreId(const Aws::String& value) { SetPolicyStoreId(value); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline ListIdentitySourcesRequest& WithPolicyStoreId(Aws::String&& value) { SetPolicyStoreId(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the policy store that contains the identity sources that
     * you want to list.</p>
     */
    inline ListIdentitySourcesRequest& WithPolicyStoreId(const char* value) { SetPolicyStoreId(value); return *this;}


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListIdentitySourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListIdentitySourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListIdentitySourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p> <p>If you do not specify this
     * parameter, the operation defaults to 10 identity sources per response. You can
     * specify a maximum of 200 identity sources per response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p> <p>If you do not specify this
     * parameter, the operation defaults to 10 identity sources per response. You can
     * specify a maximum of 200 identity sources per response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p> <p>If you do not specify this
     * parameter, the operation defaults to 10 identity sources per response. You can
     * specify a maximum of 200 identity sources per response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included in each
     * response. If additional items exist beyond the number you specify, the
     * <code>NextToken</code> response element is returned with a value (not null).
     * Include the specified value as the <code>NextToken</code> request parameter in
     * the next call to the operation to get the next set of results. Note that the
     * service might return fewer results than the maximum even when there are more
     * results available. You should check <code>NextToken</code> after every operation
     * to ensure that you receive all of the results.</p> <p>If you do not specify this
     * parameter, the operation defaults to 10 identity sources per response. You can
     * specify a maximum of 200 identity sources per response.</p>
     */
    inline ListIdentitySourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline const Aws::Vector<IdentitySourceFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline void SetFilters(const Aws::Vector<IdentitySourceFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline void SetFilters(Aws::Vector<IdentitySourceFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline ListIdentitySourcesRequest& WithFilters(const Aws::Vector<IdentitySourceFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline ListIdentitySourcesRequest& WithFilters(Aws::Vector<IdentitySourceFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline ListIdentitySourcesRequest& AddFilters(const IdentitySourceFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Specifies characteristics of an identity source that you can use to limit the
     * output to matching identity sources.</p>
     */
    inline ListIdentitySourcesRequest& AddFilters(IdentitySourceFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_policyStoreId;
    bool m_policyStoreIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<IdentitySourceFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace VerifiedPermissions
} // namespace Aws
