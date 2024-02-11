/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ListGroupsForEntityFilters.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class ListGroupsForEntityRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API ListGroupsForEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupsForEntity"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline ListGroupsForEntityRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline ListGroupsForEntityRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization under which the entity exists.</p>
     */
    inline ListGroupsForEntityRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline ListGroupsForEntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline ListGroupsForEntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the entity.</p> <p>The entity ID can accept <i>UserId or
     * GroupID</i>, <i>Username or Groupname</i>, or <i>email</i>.</p> <ul> <li>
     * <p>Entity ID: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * entity@domain.tld</p> </li> <li> <p>Entity name: entity</p> </li> </ul>
     */
    inline ListGroupsForEntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline const ListGroupsForEntityFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline void SetFilters(const ListGroupsForEntityFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline void SetFilters(ListGroupsForEntityFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline ListGroupsForEntityRequest& WithFilters(const ListGroupsForEntityFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>Limit the search results based on the filter criteria.</p>
     */
    inline ListGroupsForEntityRequest& WithFilters(ListGroupsForEntityFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline ListGroupsForEntityRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline ListGroupsForEntityRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The first call does
     * not contain any tokens.</p>
     */
    inline ListGroupsForEntityRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline ListGroupsForEntityRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    ListGroupsForEntityFilters m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
