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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateUserRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline CreateUserRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline CreateUserRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the application for which the user mapping will be
     * created.</p>
     */
    inline CreateUserRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline CreateUserRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline CreateUserRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that you provide to identify the request to create your Amazon Q user
     * mapping.</p>
     */
    inline CreateUserRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline const Aws::Vector<UserAlias>& GetUserAliases() const{ return m_userAliases; }

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline bool UserAliasesHasBeenSet() const { return m_userAliasesHasBeenSet; }

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline void SetUserAliases(const Aws::Vector<UserAlias>& value) { m_userAliasesHasBeenSet = true; m_userAliases = value; }

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline void SetUserAliases(Aws::Vector<UserAlias>&& value) { m_userAliasesHasBeenSet = true; m_userAliases = std::move(value); }

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline CreateUserRequest& WithUserAliases(const Aws::Vector<UserAlias>& value) { SetUserAliases(value); return *this;}

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline CreateUserRequest& WithUserAliases(Aws::Vector<UserAlias>&& value) { SetUserAliases(std::move(value)); return *this;}

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline CreateUserRequest& AddUserAliases(const UserAlias& value) { m_userAliasesHasBeenSet = true; m_userAliases.push_back(value); return *this; }

    /**
     * <p>The list of user aliases in the mapping.</p>
     */
    inline CreateUserRequest& AddUserAliases(UserAlias&& value) { m_userAliasesHasBeenSet = true; m_userAliases.push_back(std::move(value)); return *this; }


    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline CreateUserRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline CreateUserRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The user emails attached to a user mapping.</p>
     */
    inline CreateUserRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<UserAlias> m_userAliases;
    bool m_userAliasesHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
