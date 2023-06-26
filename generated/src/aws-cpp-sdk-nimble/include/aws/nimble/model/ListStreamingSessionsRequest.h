/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class ListStreamingSessionsRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API ListStreamingSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStreamingSessions"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline ListStreamingSessionsRequest& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline ListStreamingSessionsRequest& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>Filters the request to streaming sessions created by the given user.</p>
     */
    inline ListStreamingSessionsRequest& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStreamingSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline ListStreamingSessionsRequest& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline ListStreamingSessionsRequest& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>Filters the request to streaming session owned by the given user</p>
     */
    inline ListStreamingSessionsRequest& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline const Aws::String& GetSessionIds() const{ return m_sessionIds; }

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline bool SessionIdsHasBeenSet() const { return m_sessionIdsHasBeenSet; }

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline void SetSessionIds(const Aws::String& value) { m_sessionIdsHasBeenSet = true; m_sessionIds = value; }

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline void SetSessionIds(Aws::String&& value) { m_sessionIdsHasBeenSet = true; m_sessionIds = std::move(value); }

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline void SetSessionIds(const char* value) { m_sessionIdsHasBeenSet = true; m_sessionIds.assign(value); }

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline ListStreamingSessionsRequest& WithSessionIds(const Aws::String& value) { SetSessionIds(value); return *this;}

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline ListStreamingSessionsRequest& WithSessionIds(Aws::String&& value) { SetSessionIds(std::move(value)); return *this;}

    /**
     * <p>Filters the request to only the provided session IDs.</p>
     */
    inline ListStreamingSessionsRequest& WithSessionIds(const char* value) { SetSessionIds(value); return *this;}


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline ListStreamingSessionsRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline ListStreamingSessionsRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline ListStreamingSessionsRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}

  private:

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet = false;

    Aws::String m_sessionIds;
    bool m_sessionIdsHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
