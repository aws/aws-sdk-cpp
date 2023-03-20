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
    AWS_WORKDOCS_API SearchResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchResources"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline SearchResourcesRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline SearchResourcesRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}

    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline SearchResourcesRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}


    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline const Aws::String& GetQueryText() const{ return m_queryText; }

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline bool QueryTextHasBeenSet() const { return m_queryTextHasBeenSet; }

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline void SetQueryText(const Aws::String& value) { m_queryTextHasBeenSet = true; m_queryText = value; }

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline void SetQueryText(Aws::String&& value) { m_queryTextHasBeenSet = true; m_queryText = std::move(value); }

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline void SetQueryText(const char* value) { m_queryTextHasBeenSet = true; m_queryText.assign(value); }

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline SearchResourcesRequest& WithQueryText(const Aws::String& value) { SetQueryText(value); return *this;}

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline SearchResourcesRequest& WithQueryText(Aws::String&& value) { SetQueryText(std::move(value)); return *this;}

    /**
     * <p>The String to search for. Searches across different text fields based on
     * request parameters. Use double quotes around the query string for exact phrase
     * matches.</p>
     */
    inline SearchResourcesRequest& WithQueryText(const char* value) { SetQueryText(value); return *this;}


    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline const Aws::Vector<SearchQueryScopeType>& GetQueryScopes() const{ return m_queryScopes; }

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline bool QueryScopesHasBeenSet() const { return m_queryScopesHasBeenSet; }

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline void SetQueryScopes(const Aws::Vector<SearchQueryScopeType>& value) { m_queryScopesHasBeenSet = true; m_queryScopes = value; }

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline void SetQueryScopes(Aws::Vector<SearchQueryScopeType>&& value) { m_queryScopesHasBeenSet = true; m_queryScopes = std::move(value); }

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline SearchResourcesRequest& WithQueryScopes(const Aws::Vector<SearchQueryScopeType>& value) { SetQueryScopes(value); return *this;}

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline SearchResourcesRequest& WithQueryScopes(Aws::Vector<SearchQueryScopeType>&& value) { SetQueryScopes(std::move(value)); return *this;}

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline SearchResourcesRequest& AddQueryScopes(const SearchQueryScopeType& value) { m_queryScopesHasBeenSet = true; m_queryScopes.push_back(value); return *this; }

    /**
     * <p>Filter based on the text field type. A Folder has only a name and no content.
     * A Comment has only content and no name. A Document or Document Version has a
     * name and content</p>
     */
    inline SearchResourcesRequest& AddQueryScopes(SearchQueryScopeType&& value) { m_queryScopesHasBeenSet = true; m_queryScopes.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline SearchResourcesRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline SearchResourcesRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>Filters based on the resource owner OrgId. This is a mandatory parameter when
     * using Admin SigV4 credentials.</p>
     */
    inline SearchResourcesRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline const Aws::Vector<AdditionalResponseFieldType>& GetAdditionalResponseFields() const{ return m_additionalResponseFields; }

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline bool AdditionalResponseFieldsHasBeenSet() const { return m_additionalResponseFieldsHasBeenSet; }

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline void SetAdditionalResponseFields(const Aws::Vector<AdditionalResponseFieldType>& value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields = value; }

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline void SetAdditionalResponseFields(Aws::Vector<AdditionalResponseFieldType>&& value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields = std::move(value); }

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline SearchResourcesRequest& WithAdditionalResponseFields(const Aws::Vector<AdditionalResponseFieldType>& value) { SetAdditionalResponseFields(value); return *this;}

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline SearchResourcesRequest& WithAdditionalResponseFields(Aws::Vector<AdditionalResponseFieldType>&& value) { SetAdditionalResponseFields(std::move(value)); return *this;}

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline SearchResourcesRequest& AddAdditionalResponseFields(const AdditionalResponseFieldType& value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields.push_back(value); return *this; }

    /**
     * <p>A list of attributes to include in the response. Used to request fields that
     * are not normally returned in a standard response.</p>
     */
    inline SearchResourcesRequest& AddAdditionalResponseFields(AdditionalResponseFieldType&& value) { m_additionalResponseFieldsHasBeenSet = true; m_additionalResponseFields.push_back(std::move(value)); return *this; }


    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline const Filters& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline void SetFilters(const Filters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline void SetFilters(Filters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline SearchResourcesRequest& WithFilters(const Filters& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters results based on entity metadata.</p>
     */
    inline SearchResourcesRequest& WithFilters(Filters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline const Aws::Vector<SearchSortResult>& GetOrderBy() const{ return m_orderBy; }

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline bool OrderByHasBeenSet() const { return m_orderByHasBeenSet; }

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline void SetOrderBy(const Aws::Vector<SearchSortResult>& value) { m_orderByHasBeenSet = true; m_orderBy = value; }

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline void SetOrderBy(Aws::Vector<SearchSortResult>&& value) { m_orderByHasBeenSet = true; m_orderBy = std::move(value); }

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline SearchResourcesRequest& WithOrderBy(const Aws::Vector<SearchSortResult>& value) { SetOrderBy(value); return *this;}

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline SearchResourcesRequest& WithOrderBy(Aws::Vector<SearchSortResult>&& value) { SetOrderBy(std::move(value)); return *this;}

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline SearchResourcesRequest& AddOrderBy(const SearchSortResult& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(value); return *this; }

    /**
     * <p>Order by results in one or more categories.</p>
     */
    inline SearchResourcesRequest& AddOrderBy(SearchSortResult&& value) { m_orderByHasBeenSet = true; m_orderBy.push_back(std::move(value)); return *this; }


    /**
     * <p>Max results count per page.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Max results count per page.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Max results count per page.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Max results count per page.</p>
     */
    inline SearchResourcesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>The marker for the next set of results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline SearchResourcesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline SearchResourcesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The marker for the next set of results.</p>
     */
    inline SearchResourcesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

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

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
