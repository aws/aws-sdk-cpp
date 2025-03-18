/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/Filters.h>
#include <aws/workdocs/model/SearchQueryScopeType.h>
#include <aws/workdocs/model/AdditionalResponseFieldType.h>
#include <aws/workdocs/model/SearchSortResult.h>
#include <utility>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class SearchResourcesRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API SearchResourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchResources"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const { return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    template<typename AuthenticationTokenT = Aws::String>
    void SetAuthenticationToken(AuthenticationTokenT&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::forward<AuthenticationTokenT>(value); }
    template<typename AuthenticationTokenT = Aws::String>
    SearchResourcesRequest& WithAuthenticationToken(AuthenticationTokenT&& value) { SetAuthenticationToken(std::forward<AuthenticationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline const Aws::String& GetQueryText() const { return m_queryText; }
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }
    template<typename QueryTextT = Aws::String>
    void SetQueryText(QueryTextT&& value) { m_queryTextHasBeenSet = true; m_queryText = std::forward<QueryTextT>(value); }
    template<typename QueryTextT = Aws::String>
    SearchResourcesRequest& WithQueryText(QueryTextT&& value) { SetQueryText(std::forward<QueryTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline const Aws::Vector<SearchQueryScopeType>& GetQueryScopes() const { return m_queryScopes; }
    inline bool QueryScopesHasBeenSet() const { return m_queryScopesHasBeenSet; }
    template<typename QueryScopesT = Aws::Vector<SearchQueryScopeType>>
    void SetQueryScopes(QueryScopesT&& value) { m_queryScopesHasBeenSet = true; m_queryScopes = std::forward<QueryScopesT>(value); }
    template<typename QueryScopesT = Aws::Vector<SearchQueryScopeType>>
    SearchResourcesRequest& WithQueryScopes(QueryScopesT&& value) { SetQueryScopes(std::forward<QueryScopesT>(value)); return *this;}
    inline SearchResourcesRequest& AddQueryScopes(SearchQueryScopeType value) { m_queryScopesHasBeenSet = true; m_queryScopes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    SearchResourcesRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline const Aws::Vector<AdditionalResponseFieldType>& GetAdditionalResponseFields() const { return m_additionalResponseFields; }
    inline bool AdditionalResponseFieldsHasBeenSet() const { return m_additionalResponseFieldsHasBeenSet; }
    template<typename AdditionalResponseFieldsT = Aws::Vector<AdditionalResponseFieldType>>
    void SetAdditionalResponseFields(AdditionalResponseFieldsT&& value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields = std::forward<AdditionalResponseFieldsT>(value); }
    template<typename AdditionalResponseFieldsT = Aws::Vector<AdditionalResponseFieldType>>
    SearchResourcesRequest& WithAdditionalResponseFields(AdditionalResponseFieldsT&& value) { SetAdditionalResponseFields(std::forward<AdditionalResponseFieldsT>(value)); return *this;}
    inline SearchResourcesRequest& AddAdditionalResponseFields(AdditionalResponseFieldType value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline const Filters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Filters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Filters>
    SearchResourcesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline const Aws::Vector<SearchSortResult>& GetOrderBy() const { return m_orderBy; }
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }
    template<typename OrderByT = Aws::Vector<SearchSortResult>>
    void SetOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy = std::forward<OrderByT>(value); }
    template<typename OrderByT = Aws::Vector<SearchSortResult>>
    SearchResourcesRequest& WithOrderBy(OrderByT&& value) { SetOrderBy(std::forward<OrderByT>(value)); return *this;}
    template<typename OrderByT = SearchSortResult>
    SearchResourcesRequest& AddOrderBy(OrderByT&& value) { m_orderByHasBeenSet = true; m_orderBy.emplace_back(std::forward<OrderByT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Max results count per page.</p>
     */
    inline int GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline SearchResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    SearchResourcesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_queryText;
    bool m_queryTextHasBeenSet = false;

    Aws::Vector<SearchQueryScopeType> m_queryScopes;
    bool m_queryScopesHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::Vector<AdditionalResponseFieldType> m_additionalResponseFields;
    bool m_additionalResponseFieldsHasBeenSet = false;

    Filters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<SearchSortResult> m_orderBy;
    bool m_orderByHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
