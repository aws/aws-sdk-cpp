/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class ListUsersRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API ListUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of an existing collection.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline ListUsersRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline ListUsersRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing collection.</p>
     */
    inline ListUsersRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>Maximum number of UsersID to return. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of UsersID to return. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of UsersID to return. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of UsersID to return. </p>
     */
    inline ListUsersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline ListUsersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline ListUsersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagingation token to receive the next set of UsersID.</p>
     */
    inline ListUsersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
