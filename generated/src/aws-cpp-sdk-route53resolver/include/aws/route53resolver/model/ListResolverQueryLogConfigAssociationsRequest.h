/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/SortOrder.h>
#include <aws/route53resolver/model/Filter.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ListResolverQueryLogConfigAssociationsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ListResolverQueryLogConfigAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResolverQueryLogConfigAssociations"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The maximum number of query logging associations that you want to return in
     * the response to a <code>ListResolverQueryLogConfigAssociations</code> request.
     * If you don't specify a value for <code>MaxResults</code>, Resolver returns up to
     * 100 query logging associations. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListResolverQueryLogConfigAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For the first <code>ListResolverQueryLogConfigAssociations</code> request,
     * omit this value.</p> <p>If there are more than <code>MaxResults</code> query
     * logging associations that match the values that you specify for
     * <code>Filters</code>, you can submit another
     * <code>ListResolverQueryLogConfigAssociations</code> request to get the next
     * group of associations. In the next request, specify the value of
     * <code>NextToken</code> from the previous response. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResolverQueryLogConfigAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional specification to return a subset of query logging
     * associations.</p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigAssociations</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same values for
     * <code>Filters</code>, if any, as in the previous request.</p> 
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    ListResolverQueryLogConfigAssociationsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    ListResolverQueryLogConfigAssociationsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The element that you want Resolver to sort query logging associations by.
     * </p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigAssociations</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same value for
     * <code>SortBy</code>, if any, as in the previous request.</p>  <p>Valid
     * values include the following elements:</p> <ul> <li> <p>
     * <code>CreationTime</code>: The ID of the query logging association.</p> </li>
     * <li> <p> <code>Error</code>: If the value of <code>Status</code> is
     * <code>FAILED</code>, the value of <code>Error</code> indicates the cause: </p>
     * <ul> <li> <p> <code>DESTINATION_NOT_FOUND</code>: The specified destination (for
     * example, an Amazon S3 bucket) was deleted.</p> </li> <li> <p>
     * <code>ACCESS_DENIED</code>: Permissions don't allow sending logs to the
     * destination.</p> </li> </ul> <p>If <code>Status</code> is a value other than
     * <code>FAILED</code>, <code>ERROR</code> is null.</p> </li> <li> <p>
     * <code>Id</code>: The ID of the query logging association</p> </li> <li> <p>
     * <code>ResolverQueryLogConfigId</code>: The ID of the query logging
     * configuration</p> </li> <li> <p> <code>ResourceId</code>: The ID of the VPC that
     * is associated with the query logging configuration</p> </li> <li> <p>
     * <code>Status</code>: The current status of the configuration. Valid values
     * include the following:</p> <ul> <li> <p> <code>CREATING</code>: Resolver is
     * creating an association between an Amazon VPC and a query logging
     * configuration.</p> </li> <li> <p> <code>CREATED</code>: The association between
     * an Amazon VPC and a query logging configuration was successfully created.
     * Resolver is logging queries that originate in the specified VPC.</p> </li> <li>
     * <p> <code>DELETING</code>: Resolver is deleting this query logging
     * association.</p> </li> <li> <p> <code>FAILED</code>: Resolver either couldn't
     * create or couldn't delete the query logging association. Here are two common
     * causes:</p> <ul> <li> <p>The specified destination (for example, an Amazon S3
     * bucket) was deleted.</p> </li> <li> <p>Permissions don't allow sending logs to
     * the destination.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    template<typename SortByT = Aws::String>
    void SetSortBy(SortByT&& value) { m_sortByHasBeenSet = true; m_sortBy = std::forward<SortByT>(value); }
    template<typename SortByT = Aws::String>
    ListResolverQueryLogConfigAssociationsRequest& WithSortBy(SortByT&& value) { SetSortBy(std::forward<SortByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you specified a value for <code>SortBy</code>, the order that you want
     * query logging associations to be listed in, <code>ASCENDING</code> or
     * <code>DESCENDING</code>.</p>  <p>If you submit a second or subsequent
     * <code>ListResolverQueryLogConfigAssociations</code> request and specify the
     * <code>NextToken</code> parameter, you must use the same value for
     * <code>SortOrder</code>, if any, as in the previous request.</p> 
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListResolverQueryLogConfigAssociationsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_sortBy;
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
