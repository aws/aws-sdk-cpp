/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/SSOAdminRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AuthenticationMethod.h>
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
  class PutApplicationAuthenticationMethodRequest : public SSOAdminRequest
  {
  public:
    AWS_SSOADMIN_API PutApplicationAuthenticationMethodRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutApplicationAuthenticationMethod"; }

    AWS_SSOADMIN_API Aws::String SerializePayload() const override;

    AWS_SSOADMIN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArnHasBeenSet = true; m_applicationArn = value; }

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArnHasBeenSet = true; m_applicationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the application with the authentication method to add or
     * update.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const{ return m_authenticationMethod; }

    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }

    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline void SetAuthenticationMethod(const AuthenticationMethod& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }

    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline void SetAuthenticationMethod(AuthenticationMethod&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::move(value); }

    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithAuthenticationMethod(const AuthenticationMethod& value) { SetAuthenticationMethod(value); return *this;}

    /**
     * <p>Specifies a structure that describes the authentication method to add or
     * update. The structure type you provide is determined by the
     * <code>AuthenticationMethodType</code> parameter.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithAuthenticationMethod(AuthenticationMethod&& value) { SetAuthenticationMethod(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline const AuthenticationMethodType& GetAuthenticationMethodType() const{ return m_authenticationMethodType; }

    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline bool AuthenticationMethodTypeHasBeenSet() const { return m_authenticationMethodTypeHasBeenSet; }

    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline void SetAuthenticationMethodType(const AuthenticationMethodType& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = value; }

    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline void SetAuthenticationMethodType(AuthenticationMethodType&& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = std::move(value); }

    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithAuthenticationMethodType(const AuthenticationMethodType& value) { SetAuthenticationMethodType(value); return *this;}

    /**
     * <p>Specifies the type of the authentication method that you want to add or
     * update.</p>
     */
    inline PutApplicationAuthenticationMethodRequest& WithAuthenticationMethodType(AuthenticationMethodType&& value) { SetAuthenticationMethodType(std::move(value)); return *this;}

  private:

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;

    AuthenticationMethodType m_authenticationMethodType;
    bool m_authenticationMethodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
