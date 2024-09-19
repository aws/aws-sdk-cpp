/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/model/SessionSortBy.h>
#include <aws/workspaces-web/model/SessionStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class ListSessionsRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API ListSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSessions"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;

    AWS_WORKSPACESWEB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to be included in the next page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the web portal for the sessions.</p>
     */
    inline const Aws::String& GetPortalId() const{ return m_portalId; }
    inline bool PortalIdHasBeenSet() const { return m_portalIdHasBeenSet; }
    inline void SetPortalId(const Aws::String& value) { m_portalIdHasBeenSet = true; m_portalId = value; }
    inline void SetPortalId(Aws::String&& value) { m_portalIdHasBeenSet = true; m_portalId = std::move(value); }
    inline void SetPortalId(const char* value) { m_portalIdHasBeenSet = true; m_portalId.assign(value); }
    inline ListSessionsRequest& WithPortalId(const Aws::String& value) { SetPortalId(value); return *this;}
    inline ListSessionsRequest& WithPortalId(Aws::String&& value) { SetPortalId(std::move(value)); return *this;}
    inline ListSessionsRequest& WithPortalId(const char* value) { SetPortalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline ListSessionsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline ListSessionsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline ListSessionsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method in which the returned sessions should be sorted.</p>
     */
    inline const SessionSortBy& GetSortBy() const{ return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(const SessionSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline void SetSortBy(SessionSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }
    inline ListSessionsRequest& WithSortBy(const SessionSortBy& value) { SetSortBy(value); return *this;}
    inline ListSessionsRequest& WithSortBy(SessionSortBy&& value) { SetSortBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the session.</p>
     */
    inline const SessionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const SessionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(SessionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListSessionsRequest& WithStatus(const SessionStatus& value) { SetStatus(value); return *this;}
    inline ListSessionsRequest& WithStatus(SessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username of the session.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline ListSessionsRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline ListSessionsRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline ListSessionsRequest& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_portalId;
    bool m_portalIdHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    SessionSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    SessionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
