/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/UserStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains metadata for a UserID matched with a given face.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/MatchedUser">AWS
   * API Reference</a></p>
   */
  class MatchedUser
  {
  public:
    AWS_REKOGNITION_API MatchedUser();
    AWS_REKOGNITION_API MatchedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API MatchedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline MatchedUser& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline MatchedUser& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>A provided ID for the UserID. Unique within the collection.</p>
     */
    inline MatchedUser& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline const UserStatus& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }

    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline void SetUserStatus(const UserStatus& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }

    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline void SetUserStatus(UserStatus&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::move(value); }

    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline MatchedUser& WithUserStatus(const UserStatus& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The status of the user matched to a provided FaceID.</p>
     */
    inline MatchedUser& WithUserStatus(UserStatus&& value) { SetUserStatus(std::move(value)); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserStatus m_userStatus;
    bool m_userStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
