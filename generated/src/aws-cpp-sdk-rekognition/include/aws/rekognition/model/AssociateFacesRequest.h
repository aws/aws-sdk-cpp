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
    AWS_REKOGNITION_API AssociateFacesRequest() = default;

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
    inline const Aws::String& GetCollectionId() const { return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    template<typename CollectionIdT = Aws::String>
    void SetCollectionId(CollectionIdT&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::forward<CollectionIdT>(value); }
    template<typename CollectionIdT = Aws::String>
    AssociateFacesRequest& WithCollectionId(CollectionIdT&& value) { SetCollectionId(std::forward<CollectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the existing UserID.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    AssociateFacesRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of FaceIDs to associate with the UserID.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFaceIds() const { return m_faceIds; }
    inline bool FaceIdsHasBeenSet() const { return m_faceIdsHasBeenSet; }
    template<typename FaceIdsT = Aws::Vector<Aws::String>>
    void SetFaceIds(FaceIdsT&& value) { m_faceIdsHasBeenSet = true; m_faceIds = std::forward<FaceIdsT>(value); }
    template<typename FaceIdsT = Aws::Vector<Aws::String>>
    AssociateFacesRequest& WithFaceIds(FaceIdsT&& value) { SetFaceIds(std::forward<FaceIdsT>(value)); return *this;}
    template<typename FaceIdsT = Aws::String>
    AssociateFacesRequest& AddFaceIds(FaceIdsT&& value) { m_faceIdsHasBeenSet = true; m_faceIds.emplace_back(std::forward<FaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional value specifying the minimum confidence in the UserID match to
     * return. The default value is 75.</p>
     */
    inline double GetUserMatchThreshold() const { return m_userMatchThreshold; }
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
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    AssociateFacesRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_faceIds;
    bool m_faceIdsHasBeenSet = false;

    double m_userMatchThreshold{0.0};
    bool m_userMatchThresholdHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
