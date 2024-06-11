/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AuthenticationMethodType.h>
#include <utility>

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

  /**
   */
  class DeleteApplicationAuthenticationMethodRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API DeleteApplicationAuthenticationMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteApplicationAuthenticationMethod"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the application with the authentication method to
     * delete.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }
    inline DeleteApplicationAuthenticationMethodRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline DeleteApplicationAuthenticationMethodRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline DeleteApplicationAuthenticationMethodRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication method type to delete from the application.</p>
     */
    inline const AuthenticationMethodType& GetAuthenticationMethodType() const{ return m_authenticationMethodType; }
    inline bool AuthenticationMethodTypeHasBeenSet() const { return m_authenticationMethodTypeHasBeenSet; }
    inline void SetAuthenticationMethodType(const AuthenticationMethodType& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = value; }
    inline void SetAuthenticationMethodType(AuthenticationMethodType&& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = std::move(value); }
    inline DeleteApplicationAuthenticationMethodRequest& WithAuthenticationMethodType(const AuthenticationMethodType& value) { SetAuthenticationMethodType(value); return *this;}
    inline DeleteApplicationAuthenticationMethodRequest& WithAuthenticationMethodType(AuthenticationMethodType&& value) { SetAuthenticationMethodType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    AuthenticationMethodType m_authenticationMethodType;
    bool m_authenticationMethodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
