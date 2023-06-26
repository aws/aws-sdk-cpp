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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{

  /**
   */
  class DisassociateFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API DisassociateFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline DisassociateFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline DisassociateFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline DisassociateFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>ID for the existing UserID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline DisassociateFacesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline DisassociateFacesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>ID for the existing UserID.</p>
     */
    inline DisassociateFacesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline DisassociateFacesRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline DisassociateFacesRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Idempotent token used to identify the request to
     * <code>DisassociateFaces</code>. If you use the same token with multiple
     * <code>DisassociateFaces</code> requests, the same response is returned. Use
     * ClientRequestToken to prevent the same request from being processed more than
     * once.</p>
     */
    inline DisassociateFacesRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const{ return m_faceIds; }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline void SetFaceIds(const Aws::Vector<Aws::String>& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline void SetFaceIds(Aws::Vector<Aws::String>&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::move(value); }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline DisassociateFacesRequest& WithFaceIds(const Aws::Vector<Aws::String>& value) { SetFaceIds(value); return *this;}

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline DisassociateFacesRequest& WithFaceIds(Aws::Vector<Aws::String>&& value) { SetFaceIds(std::move(value)); return *this;}

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline DisassociateFacesRequest& AddFaceIds(const Aws::String& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline DisassociateFacesRequest& AddFaceIds(Aws::String&& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of face IDs to disassociate from the UserID. </p>
     */
    inline DisassociateFacesRequest& AddFaceIds(const char* value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
