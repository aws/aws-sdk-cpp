/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/AuthenticationMode.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the user</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the user</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the user</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user</p>
     */
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user</p>
     */
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user</p>
     */
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const{ return m_authenticationMode; }

    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }

    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline void SetAuthenticationMode(const AuthenticationMode& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = value; }

    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline void SetAuthenticationMode(AuthenticationMode&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::move(value); }

    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline UpdateUserRequest& WithAuthenticationMode(const AuthenticationMode& value) { SetAuthenticationMode(value); return *this;}

    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline UpdateUserRequest& WithAuthenticationMode(AuthenticationMode&& value) { SetAuthenticationMode(std::move(value)); return *this;}


    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline UpdateUserRequest& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline UpdateUserRequest& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline UpdateUserRequest& WithAccessString(const char* value) { SetAccessString(value); return *this;}

  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    AuthenticationMode m_authenticationMode;
    bool m_authenticationModeHasBeenSet = false;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
