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
    AWS_REKOGNITION_API User() = default;
    AWS_REKOGNITION_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A provided ID for the User. Unique within the collection.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    User& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Communicates if the UserID has been updated with latest set of faces to be
     * associated with the UserID. </p>
     */
    inline UserStatus GetUserStatus() const { return m_userStatus; }
    inline bool UserStatusHasBeenSet() const { return m_userStatusHasBeenSet; }
    inline void SetUserStatus(UserStatus value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline User& WithUserStatus(UserStatus value) { SetUserStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    UserStatus m_userStatus{UserStatus::NOT_SET};
    bool m_userStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
