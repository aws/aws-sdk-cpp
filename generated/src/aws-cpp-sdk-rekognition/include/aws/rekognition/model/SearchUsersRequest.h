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
  class SearchUsersRequest : public RekognitionRequest
  {
  public:
    AWS_REKOGNITION_API SearchUsersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchUsers"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline const Aws::String& GetCollectionId() const { return m_collectionId; }
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }
    template<typename CollectionIdT = Aws::String>
    void SetCollectionId(CollectionIdT&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::forward<CollectionIdT>(value); }
    template<typename CollectionIdT = Aws::String>
    SearchUsersRequest& WithCollectionId(CollectionIdT&& value) { SetCollectionId(std::forward<CollectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the existing User.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    SearchUsersRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the existing face.</p>
     */
    inline const Aws::String& GetFaceId() const { return m_faceId; }
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }
    template<typename FaceIdT = Aws::String>
    void SetFaceId(FaceIdT&& value) { m_faceIdHasBeenSet = true; m_faceId = std::forward<FaceIdT>(value); }
    template<typename FaceIdT = Aws::String>
    SearchUsersRequest& WithFaceId(FaceIdT&& value) { SetFaceId(std::forward<FaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional value that specifies the minimum confidence in the matched UserID to
     * return. Default value of 80.</p>
     */
    inline double GetUserMatchThreshold() const { return m_userMatchThreshold; }
    inline bool UserMatchThresholdHasBeenSet() const { return m_userMatchThresholdHasBeenSet; }
    inline void SetUserMatchThreshold(double value) { m_userMatchThresholdHasBeenSet = true; m_userMatchThreshold = value; }
    inline SearchUsersRequest& WithUserMatchThreshold(double value) { SetUserMatchThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of identities to return.</p>
     */
    inline int GetMaxUsers() const { return m_maxUsers; }
    inline bool MaxUsersHasBeenSet() const { return m_maxUsersHasBeenSet; }
    inline void SetMaxUsers(int value) { m_maxUsersHasBeenSet = true; m_maxUsers = value; }
    inline SearchUsersRequest& WithMaxUsers(int value) { SetMaxUsers(value); return *this;}
    ///@}
  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    double m_userMatchThreshold{0.0};
    bool m_userMatchThresholdHasBeenSet = false;

    int m_maxUsers{0};
    bool m_maxUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
