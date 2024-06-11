/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/WorkDocsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/model/UserFilterType.h>
#include <aws/workdocs/model/OrderType.h>
#include <aws/workdocs/model/UserSortType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkDocs
{
namespace Model
{

  /**
   */
  class DescribeUsersRequest : public WorkDocsRequest
  {
  public:
    AWS_WORKDOCS_API DescribeUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeUsers"; }

    AWS_WORKDOCS_API Aws::String SerializePayload() const override;

    AWS_WORKDOCS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_WORKDOCS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon WorkDocs authentication token. Not required when using Amazon Web
     * Services administrator credentials to access the API.</p>
     */
    inline const Aws::String& GetAuthenticationToken() const{ return m_authenticationToken; }
    inline bool AuthenticationTokenHasBeenSet() const { return m_authenticationTokenHasBeenSet; }
    inline void SetAuthenticationToken(const Aws::String& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = value; }
    inline void SetAuthenticationToken(Aws::String&& value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken = std::move(value); }
    inline void SetAuthenticationToken(const char* value) { m_authenticationTokenHasBeenSet = true; m_authenticationToken.assign(value); }
    inline DescribeUsersRequest& WithAuthenticationToken(const Aws::String& value) { SetAuthenticationToken(value); return *this;}
    inline DescribeUsersRequest& WithAuthenticationToken(Aws::String&& value) { SetAuthenticationToken(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithAuthenticationToken(const char* value) { SetAuthenticationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline DescribeUsersRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline DescribeUsersRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the users.</p>
     */
    inline const Aws::String& GetUserIds() const{ return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    inline void SetUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds = value; }
    inline void SetUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds = std::move(value); }
    inline void SetUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.assign(value); }
    inline DescribeUsersRequest& WithUserIds(const Aws::String& value) { SetUserIds(value); return *this;}
    inline DescribeUsersRequest& WithUserIds(Aws::String&& value) { SetUserIds(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithUserIds(const char* value) { SetUserIds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A query to filter users by user name. Remember the following about the
     * <code>Userids</code> and <code>Query</code> parameters:</p> <ul> <li> <p>If you
     * don't use either parameter, the API returns a paginated list of all users on the
     * site.</p> </li> <li> <p>If you use both parameters, the API ignores the
     * <code>Query</code> parameter.</p> </li> <li> <p>The <code>Userid</code>
     * parameter only returns user names that match a corresponding user ID.</p> </li>
     * <li> <p>The <code>Query</code> parameter runs a "prefix" search for users by the
     * <code>GivenName</code>, <code>SurName</code>, or <code>UserName</code> fields
     * included in a <a
     * href="https://docs.aws.amazon.com/workdocs/latest/APIReference/API_CreateUser.html">CreateUser</a>
     * API call. For example, querying on <code>Ma</code> returns Márcia Oliveira,
     * María García, and Mateo Jackson. If you use multiple characters, the API only
     * returns data that matches all characters. For example, querying on <code>Ma
     * J</code> only returns Mateo Jackson.</p> </li> </ul>
     */
    inline const Aws::String& GetQuery() const{ return m_query; }
    inline bool QueryHasBeenSet() const { return m_queryHasBeenSet; }
    inline void SetQuery(const Aws::String& value) { m_queryHasBeenSet = true; m_query = value; }
    inline void SetQuery(Aws::String&& value) { m_queryHasBeenSet = true; m_query = std::move(value); }
    inline void SetQuery(const char* value) { m_queryHasBeenSet = true; m_query.assign(value); }
    inline DescribeUsersRequest& WithQuery(const Aws::String& value) { SetQuery(value); return *this;}
    inline DescribeUsersRequest& WithQuery(Aws::String&& value) { SetQuery(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithQuery(const char* value) { SetQuery(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the users. Specify "ALL" to include inactive users.</p>
     */
    inline const UserFilterType& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const UserFilterType& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(UserFilterType&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline DescribeUsersRequest& WithInclude(const UserFilterType& value) { SetInclude(value); return *this;}
    inline DescribeUsersRequest& WithInclude(UserFilterType&& value) { SetInclude(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The order for the results.</p>
     */
    inline const OrderType& GetOrder() const{ return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(const OrderType& value) { m_orderHasBeenSet = true; m_order = value; }
    inline void SetOrder(OrderType&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }
    inline DescribeUsersRequest& WithOrder(const OrderType& value) { SetOrder(value); return *this;}
    inline DescribeUsersRequest& WithOrder(OrderType&& value) { SetOrder(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sorting criteria.</p>
     */
    inline const UserSortType& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const UserSortType& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(UserSortType&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline DescribeUsersRequest& WithSort(const UserSortType& value) { SetSort(value); return *this;}
    inline DescribeUsersRequest& WithSort(UserSortType&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The marker for the next set of results. (You received this marker from a
     * previous call.)</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeUsersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeUsersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeUsersRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comma-separated list of values. Specify "STORAGE_METADATA" to include the
     * user storage quota and utilization information.</p>
     */
    inline const Aws::String& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::String& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::String&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline void SetFields(const char* value) { m_fieldsHasBeenSet = true; m_fields.assign(value); }
    inline DescribeUsersRequest& WithFields(const Aws::String& value) { SetFields(value); return *this;}
    inline DescribeUsersRequest& WithFields(Aws::String&& value) { SetFields(std::move(value)); return *this;}
    inline DescribeUsersRequest& WithFields(const char* value) { SetFields(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationToken;
    bool m_authenticationTokenHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::String m_query;
    bool m_queryHasBeenSet = false;

    UserFilterType m_include;
    bool m_includeHasBeenSet = false;

    OrderType m_order;
    bool m_orderHasBeenSet = false;

    UserSortType m_sort;
    bool m_sortHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
