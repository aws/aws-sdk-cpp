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
    AWS_MEMORYDB_API UpdateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the user</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    UpdateUserRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Denotes the user's authentication properties, such as whether it requires a
     * password to authenticate.</p>
     */
    inline const AuthenticationMode& GetAuthenticationMode() const { return m_authenticationMode; }
    inline bool AuthenticationModeHasBeenSet() const { return m_authenticationModeHasBeenSet; }
    template<typename AuthenticationModeT = AuthenticationMode>
    void SetAuthenticationMode(AuthenticationModeT&& value) { m_authenticationModeHasBeenSet = true; m_authenticationMode = std::forward<AuthenticationModeT>(value); }
    template<typename AuthenticationModeT = AuthenticationMode>
    UpdateUserRequest& WithAuthenticationMode(AuthenticationModeT&& value) { SetAuthenticationMode(std::forward<AuthenticationModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const { return m_accessString; }
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }
    template<typename AccessStringT = Aws::String>
    void SetAccessString(AccessStringT&& value) { m_accessStringHasBeenSet = true; m_accessString = std::forward<AccessStringT>(value); }
    template<typename AccessStringT = Aws::String>
    UpdateUserRequest& WithAccessString(AccessStringT&& value) { SetAccessString(std::forward<AccessStringT>(value)); return *this;}
    ///@}
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
