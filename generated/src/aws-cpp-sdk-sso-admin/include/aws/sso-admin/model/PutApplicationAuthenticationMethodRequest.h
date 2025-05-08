/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AuthenticationMethodType.h>
#include <aws/sso-admin/model/AuthenticationMethod.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class PutApplicationAuthenticationMethodRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationAuthenticationMethodRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationAuthenticationMethod"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    PutApplicationAuthenticationMethodRequest& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline AuthenticationMethodType GetAuthenticationMethodType() const { return m_authenticationMethodType; }
    inline bool AuthenticationMethodTypeHasBeenSet() const { return m_authenticationMethodTypeHasBeenSet; }
    inline void SetAuthenticationMethodType(AuthenticationMethodType value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = value; }
    inline PutApplicationAuthenticationMethodRequest& WithAuthenticationMethodType(AuthenticationMethodType value) { SetAuthenticationMethodType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    void SetAuthenticationMethod(AuthenticationMethodT&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::forward<AuthenticationMethodT>(value); }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    PutApplicationAuthenticationMethodRequest& WithAuthenticationMethod(AuthenticationMethodT&& value) { SetAuthenticationMethod(std::forward<AuthenticationMethodT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    AuthenticationMethodType m_authenticationMethodType{AuthenticationMethodType::NOT_SET};
    bool m_authenticationMethodTypeHasBeenSet = false;

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
