/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationFilters.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class ListConfigurationPolicyAssociationsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConfigurationPolicyAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The <code>NextToken</code> value that's returned from a previous paginated
     * <code>ListConfigurationPolicyAssociations</code> request where
     * <code>MaxResults</code> was used but the results exceeded the value of that
     * parameter. Pagination continues from the end of the previous response that
     * returned the <code>NextToken</code> value. This value is <code>null</code> when
     * there are no more results to return. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicyAssociations</code> returns the
     * specified number of results in a single page and a <code>NextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another <code>ListConfigurationPolicyAssociations</code> request with
     * the returned <code>NextToken</code> value. A valid range for
     * <code>MaxResults</code> is between 1 and 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicyAssociations</code> returns the
     * specified number of results in a single page and a <code>NextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another <code>ListConfigurationPolicyAssociations</code> request with
     * the returned <code>NextToken</code> value. A valid range for
     * <code>MaxResults</code> is between 1 and 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicyAssociations</code> returns the
     * specified number of results in a single page and a <code>NextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another <code>ListConfigurationPolicyAssociations</code> request with
     * the returned <code>NextToken</code> value. A valid range for
     * <code>MaxResults</code> is between 1 and 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of results that's returned by
     * <code>ListConfigurationPolicies</code> in each page of the response. When this
     * parameter is used, <code>ListConfigurationPolicyAssociations</code> returns the
     * specified number of results in a single page and a <code>NextToken</code>
     * response element. You can see the remaining results of the initial request by
     * sending another <code>ListConfigurationPolicyAssociations</code> request with
     * the returned <code>NextToken</code> value. A valid range for
     * <code>MaxResults</code> is between 1 and 100. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline const AssociationFilters& GetFilters() const{ return m_filters; }

    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline void SetFilters(const AssociationFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline void SetFilters(AssociationFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithFilters(const AssociationFilters& value) { SetFilters(value); return *this;}

    /**
     * <p> Options for filtering the <code>ListConfigurationPolicyAssociations</code>
     * response. You can filter by the Amazon Resource Name (ARN) or universally unique
     * identifier (UUID) of a configuration, <code>AssociationType</code>, or
     * <code>AssociationStatus</code>. </p>
     */
    inline ListConfigurationPolicyAssociationsRequest& WithFilters(AssociationFilters&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    AssociationFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
