/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/RekognitionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class ListFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API ListFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline ListFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline ListFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>ID of the collection from which to list the faces.</p>
     */
    inline ListFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline ListFacesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline ListFacesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of faces.</p>
     */
    inline ListFacesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Maximum number of faces to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of faces to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of faces to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of faces to return.</p>
     */
    inline ListFacesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>An array of user IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const{ return m_faceIds; }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline void SetFaceIds(const Aws::Vector<Aws::String>& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline void SetFaceIds(Aws::Vector<Aws::String>&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::move(value); }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& WithFaceIds(const Aws::Vector<Aws::String>& value) { SetFaceIds(value); return *this;}

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& WithFaceIds(Aws::Vector<Aws::String>&& value) { SetFaceIds(std::move(value)); return *this;}

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& AddFaceIds(const Aws::String& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& AddFaceIds(Aws::String&& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of face IDs to filter results with when listing faces in a
     * collection.</p>
     */
    inline ListFacesRequest& AddFaceIds(const char* value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
