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
   * <p>Metadata of the user stored in a collection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/User">AWS
   * API Reference</a></p>
   */
  class User
  {
  public:
    AWS_REKOGNITION_API User();
    AWS_REKOGNITION_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A provided ID for the User. Unique within the collection.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Communicates if the UserID has been updated with latest set of faces to be
     * associated with the UserID. </p>
     */
    inline const UserStatus& GetUserStatus() const{ return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    inline void SetUserStatus(const UserStatus& value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline void SetUserStatus(UserStatus&& value) { m_userStatusHasBeenSet = true; m_userStatus = std::move(value); }
    inline User& WithUserStatus(const UserStatus& value) { SetUserStatus(value); return *this;}
    inline User& WithUserStatus(UserStatus&& value) { SetUserStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserStatus m_userStatus;
    bool m_userStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
