/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/UserAlias.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the application the user is attached to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline UpdateUserRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline UpdateUserRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email id attached to the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }
    inline UpdateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline UpdateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user aliases attached to the user id that are to be updated.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesToUpdate() const{ return m_userAliasesToUpdate; }
    inline bool UserAliasesToUpdateHasBeenSet() const { return m_userAliasesToUpdateHasBeenSet; }
    inline void SetUserAliasesToUpdate(const Aws::Vector<UserAlias>& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate = value; }
    inline void SetUserAliasesToUpdate(Aws::Vector<UserAlias>&& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate = std::move(value); }
    inline UpdateUserRequest& WithUserAliasesToUpdate(const Aws::Vector<UserAlias>& value) { SetUserAliasesToUpdate(value); return *this;}
    inline UpdateUserRequest& WithUserAliasesToUpdate(Aws::Vector<UserAlias>&& value) { SetUserAliasesToUpdate(std::move(value)); return *this;}
    inline UpdateUserRequest& AddUserAliasesToUpdate(const UserAlias& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate.push_back(value); return *this; }
    inline UpdateUserRequest& AddUserAliasesToUpdate(UserAlias&& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user aliases attached to the user id that are to be deleted.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesToDelete() const{ return m_userAliasesToDelete; }
    inline bool UserAliasesToDeleteHasBeenSet() const { return m_userAliasesToDeleteHasBeenSet; }
    inline void SetUserAliasesToDelete(const Aws::Vector<UserAlias>& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete = value; }
    inline void SetUserAliasesToDelete(Aws::Vector<UserAlias>&& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete = std::move(value); }
    inline UpdateUserRequest& WithUserAliasesToDelete(const Aws::Vector<UserAlias>& value) { SetUserAliasesToDelete(value); return *this;}
    inline UpdateUserRequest& WithUserAliasesToDelete(Aws::Vector<UserAlias>&& value) { SetUserAliasesToDelete(std::move(value)); return *this;}
    inline UpdateUserRequest& AddUserAliasesToDelete(const UserAlias& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete.push_back(value); return *this; }
    inline UpdateUserRequest& AddUserAliasesToDelete(UserAlias&& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Vector<UserAlias> m_userAliasesToUpdate;
    bool m_userAliasesToUpdateHasBeenSet = false;

    Aws::Vector<UserAlias> m_userAliasesToDelete;
    bool m_userAliasesToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
