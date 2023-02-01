/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/GroupSearchFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class SearchGroupsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API SearchGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchGroups"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline SearchGroupsRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline SearchGroupsRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that the group is in. Currently,
     * you use the ID for the Amazon Web Services account that contains your Amazon
     * QuickSight account.</p>
     */
    inline SearchGroupsRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline SearchGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return from this request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return from this request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return from this request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return from this request.</p>
     */
    inline SearchGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The namespace that you want to search.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline SearchGroupsRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline SearchGroupsRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace that you want to search.</p>
     */
    inline SearchGroupsRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}


    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline const Aws::Vector<GroupSearchFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline void SetFilters(const Aws::Vector<GroupSearchFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline void SetFilters(Aws::Vector<GroupSearchFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline SearchGroupsRequest& WithFilters(const Aws::Vector<GroupSearchFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline SearchGroupsRequest& WithFilters(Aws::Vector<GroupSearchFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline SearchGroupsRequest& AddFilters(const GroupSearchFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The structure for the search filters that you want to apply to your
     * search.</p>
     */
    inline SearchGroupsRequest& AddFilters(GroupSearchFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<GroupSearchFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
