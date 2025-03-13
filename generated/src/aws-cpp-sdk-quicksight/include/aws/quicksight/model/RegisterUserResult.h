/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/User.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class RegisterUserResult
  {
  public:
    AWS_QUICKSIGHT_API RegisterUserResult() = default;
    AWS_QUICKSIGHT_API RegisterUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API RegisterUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The user's user name.</p>
     */
    inline const User& GetUser() const { return m_user; }
    template<typename UserT = User>
    void SetUser(UserT&& value) { m_userHasBeenSet = true; m_user = std::forward<UserT>(value); }
    template<typename UserT = User>
    RegisterUserResult& WithUser(UserT&& value) { SetUser(std::forward<UserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL the user visits to complete registration and provide a password. This
     * is returned only for users with an identity type of <code>QUICKSIGHT</code>.</p>
     */
    inline const Aws::String& GetUserInvitationUrl() const { return m_userInvitationUrl; }
    template<typename UserInvitationUrlT = Aws::String>
    void SetUserInvitationUrl(UserInvitationUrlT&& value) { m_userInvitationUrlHasBeenSet = true; m_userInvitationUrl = std::forward<UserInvitationUrlT>(value); }
    template<typename UserInvitationUrlT = Aws::String>
    RegisterUserResult& WithUserInvitationUrl(UserInvitationUrlT&& value) { SetUserInvitationUrl(std::forward<UserInvitationUrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline RegisterUserResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    User m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_userInvitationUrl;
    bool m_userInvitationUrlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
