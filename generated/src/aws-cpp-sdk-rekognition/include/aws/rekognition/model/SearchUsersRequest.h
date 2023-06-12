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
    AWS_REKOGNITION_API SearchUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchUsers"; }

    AWS_REKOGNITION_API Aws::String SerializePayload() const override;

    AWS_REKOGNITION_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline const Aws::String& GetCollectionId() const{ return m_collectionId; }

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline bool CollectionIdHasBeenSet() const { return m_collectionIdHasBeenSet; }

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline void SetCollectionId(const Aws::String& value) { m_collectionIdHasBeenSet = true; m_collectionId = value; }

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline void SetCollectionId(Aws::String&& value) { m_collectionIdHasBeenSet = true; m_collectionId = std::move(value); }

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline void SetCollectionId(const char* value) { m_collectionIdHasBeenSet = true; m_collectionId.assign(value); }

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline SearchUsersRequest& WithCollectionId(const Aws::String& value) { SetCollectionId(value); return *this;}

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline SearchUsersRequest& WithCollectionId(Aws::String&& value) { SetCollectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of an existing collection containing the UserID, used with a UserId or
     * FaceId. If a FaceId is provided, UserId isn’t required to be present in the
     * Collection.</p>
     */
    inline SearchUsersRequest& WithCollectionId(const char* value) { SetCollectionId(value); return *this;}


    /**
     * <p>ID for the existing User.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>ID for the existing User.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>ID for the existing User.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>ID for the existing User.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>ID for the existing User.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>ID for the existing User.</p>
     */
    inline SearchUsersRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>ID for the existing User.</p>
     */
    inline SearchUsersRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>ID for the existing User.</p>
     */
    inline SearchUsersRequest& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>ID for the existing face.</p>
     */
    inline const Aws::String& GetFaceId() const{ return m_faceId; }

    /**
     * <p>ID for the existing face.</p>
     */
    inline bool FaceIdHasBeenSet() const { return m_faceIdHasBeenSet; }

    /**
     * <p>ID for the existing face.</p>
     */
    inline void SetFaceId(const Aws::String& value) { m_faceIdHasBeenSet = true; m_faceId = value; }

    /**
     * <p>ID for the existing face.</p>
     */
    inline void SetFaceId(Aws::String&& value) { m_faceIdHasBeenSet = true; m_faceId = std::move(value); }

    /**
     * <p>ID for the existing face.</p>
     */
    inline void SetFaceId(const char* value) { m_faceIdHasBeenSet = true; m_faceId.assign(value); }

    /**
     * <p>ID for the existing face.</p>
     */
    inline SearchUsersRequest& WithFaceId(const Aws::String& value) { SetFaceId(value); return *this;}

    /**
     * <p>ID for the existing face.</p>
     */
    inline SearchUsersRequest& WithFaceId(Aws::String&& value) { SetFaceId(std::move(value)); return *this;}

    /**
     * <p>ID for the existing face.</p>
     */
    inline SearchUsersRequest& WithFaceId(const char* value) { SetFaceId(value); return *this;}


    /**
     * <p>Optional value that specifies the minimum confidence in the matched UserID to
     * return. Default value of 80.</p>
     */
    inline double GetUserMatchThreshold() const{ return m_userMatchThreshold; }

    /**
     * <p>Optional value that specifies the minimum confidence in the matched UserID to
     * return. Default value of 80.</p>
     */
    inline bool UserMatchThresholdHasBeenSet() const { return m_userMatchThresholdHasBeenSet; }

    /**
     * <p>Optional value that specifies the minimum confidence in the matched UserID to
     * return. Default value of 80.</p>
     */
    inline void SetUserMatchThreshold(double value) { m_userMatchThresholdHasBeenSet = true; m_userMatchThreshold = value; }

    /**
     * <p>Optional value that specifies the minimum confidence in the matched UserID to
     * return. Default value of 80.</p>
     */
    inline SearchUsersRequest& WithUserMatchThreshold(double value) { SetUserMatchThreshold(value); return *this;}


    /**
     * <p>Maximum number of identities to return.</p>
     */
    inline int GetMaxUsers() const{ return m_maxUsers; }

    /**
     * <p>Maximum number of identities to return.</p>
     */
    inline bool MaxUsersHasBeenSet() const { return m_maxUsersHasBeenSet; }

    /**
     * <p>Maximum number of identities to return.</p>
     */
    inline void SetMaxUsers(int value) { m_maxUsersHasBeenSet = true; m_maxUsers = value; }

    /**
     * <p>Maximum number of identities to return.</p>
     */
    inline SearchUsersRequest& WithMaxUsers(int value) { SetMaxUsers(value); return *this;}

  private:

    Aws::String m_collectionId;
    bool m_collectionIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_faceId;
    bool m_faceIdHasBeenSet = false;

    double m_userMatchThreshold;
    bool m_userMatchThresholdHasBeenSet = false;

    int m_maxUsers;
    bool m_maxUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
