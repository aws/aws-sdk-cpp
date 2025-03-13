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
    AWS_QBUSINESS_API UpdateUserRequest() = default;

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
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateUserRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email id attached to the user.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    UpdateUserRequest& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user aliases attached to the user id that are to be updated.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesToUpdate() const { return m_userAliasesToUpdate; }
    inline bool UserAliasesToUpdateHasBeenSet() const { return m_userAliasesToUpdateHasBeenSet; }
    template<typename UserAliasesToUpdateT = Aws::Vector<UserAlias>>
    void SetUserAliasesToUpdate(UserAliasesToUpdateT&& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate = std::forward<UserAliasesToUpdateT>(value); }
    template<typename UserAliasesToUpdateT = Aws::Vector<UserAlias>>
    UpdateUserRequest& WithUserAliasesToUpdate(UserAliasesToUpdateT&& value) { SetUserAliasesToUpdate(std::forward<UserAliasesToUpdateT>(value)); return *this;}
    template<typename UserAliasesToUpdateT = UserAlias>
    UpdateUserRequest& AddUserAliasesToUpdate(UserAliasesToUpdateT&& value) { m_userAliasesToUpdateHasBeenSet = true; m_userAliasesToUpdate.emplace_back(std::forward<UserAliasesToUpdateT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user aliases attached to the user id that are to be deleted.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliasesToDelete() const { return m_userAliasesToDelete; }
    inline bool UserAliasesToDeleteHasBeenSet() const { return m_userAliasesToDeleteHasBeenSet; }
    template<typename UserAliasesToDeleteT = Aws::Vector<UserAlias>>
    void SetUserAliasesToDelete(UserAliasesToDeleteT&& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete = std::forward<UserAliasesToDeleteT>(value); }
    template<typename UserAliasesToDeleteT = Aws::Vector<UserAlias>>
    UpdateUserRequest& WithUserAliasesToDelete(UserAliasesToDeleteT&& value) { SetUserAliasesToDelete(std::forward<UserAliasesToDeleteT>(value)); return *this;}
    template<typename UserAliasesToDeleteT = UserAlias>
    UpdateUserRequest& AddUserAliasesToDelete(UserAliasesToDeleteT&& value) { m_userAliasesToDeleteHasBeenSet = true; m_userAliasesToDelete.emplace_back(std::forward<UserAliasesToDeleteT>(value)); return *this; }
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
