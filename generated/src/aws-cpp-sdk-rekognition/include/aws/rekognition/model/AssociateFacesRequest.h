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
  class AssociateFacesRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API AssociateFacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateFaces"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of an existing collection containing the UserID.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }
    inline AssociateFacesRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}
    inline AssociateFacesRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}
    inline AssociateFacesRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the existing UserID.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline AssociateFacesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline AssociateFacesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline AssociateFacesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of FaceIDs to associate with the UserID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const{ return m_faceIds; }
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }
    inline void SetFaceIds(const Aws::Vector<Aws::String>& value) { m_faceIdsHasBeenSet = true; m_faceIds = value; }
    inline void SetFaceIds(Aws::Vector<Aws::String>&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::move(value); }
    inline AssociateFacesRequest& WithFaceIds(const Aws::Vector<Aws::String>& value) { SetFaceIds(value); return *this;}
    inline AssociateFacesRequest& WithFaceIds(Aws::Vector<Aws::String>&& value) { SetFaceIds(std::move(value)); return *this;}
    inline AssociateFacesRequest& AddFaceIds(const Aws::String& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }
    inline AssociateFacesRequest& AddFaceIds(Aws::String&& value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(std::move(value)); return *this; }
    inline AssociateFacesRequest& AddFaceIds(const char* value) { m_faceIdsHasBeenSet = true; m_faceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional value specifying the minimum confidence in the UserID match to
     * return. The default value is 75.</p>
     */
    inline double GetUserMatchThreshold() const{ return m_userMatchThreshold; }
    inline bool UserMatchThresholdHasBeenSet() const { return m_userMatchThresholdHasBeenSet; }
    inline void SetUserMatchThreshold(double value) { m_userMatchThresholdHasBeenSet = true; m_userMatchThreshold = value; }
    inline AssociateFacesRequest& WithUserMatchThreshold(double value) { SetUserMatchThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Idempotent token used to identify the request to <code>AssociateFaces</code>.
     * If you use the same token with multiple <code>AssociateFaces</code> requests,
     * the same response is returned. Use ClientRequestToken to prevent the same
     * request from being processed more than once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline AssociateFacesRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline AssociateFacesRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline AssociateFacesRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;

    double m_userMatchThreshold;
    bool m_userMatchThresholdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
