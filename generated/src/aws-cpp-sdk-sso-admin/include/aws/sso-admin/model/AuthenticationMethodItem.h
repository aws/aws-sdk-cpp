/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AuthenticationMethod.h>
#include <aws/sso-admin/model/AuthenticationMethodType.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>A structure that describes an authentication method and its
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AuthenticationMethodItem">AWS
   * API Reference</a></p>
   */
  class AuthenticationMethodItem
  {
  public:
    AWS_SSOADMIN_API AuthenticationMethodItem();
    AWS_SSOADMIN_API AuthenticationMethodItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AuthenticationMethodItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const{ return m_authenticationMethod; }

    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }

    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline void SetAuthenticationMethod(const AuthenticationMethod& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }

    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline void SetAuthenticationMethod(AuthenticationMethod&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::move(value); }

    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline AuthenticationMethodItem& WithAuthenticationMethod(const AuthenticationMethod& value) { SetAuthenticationMethod(value); return *this;}

    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline AuthenticationMethodItem& WithAuthenticationMethod(AuthenticationMethod&& value) { SetAuthenticationMethod(std::move(value)); return *this;}


    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline const AuthenticationMethodType& GetAuthenticationMethodType() const{ return m_authenticationMethodType; }

    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline bool AuthenticationMethodTypeHasBeenSet() const { return m_authenticationMethodTypeHasBeenSet; }

    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline void SetAuthenticationMethodType(const AuthenticationMethodType& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = value; }

    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline void SetAuthenticationMethodType(AuthenticationMethodType&& value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = std::move(value); }

    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline AuthenticationMethodItem& WithAuthenticationMethodType(const AuthenticationMethodType& value) { SetAuthenticationMethodType(value); return *this;}

    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline AuthenticationMethodItem& WithAuthenticationMethodType(AuthenticationMethodType&& value) { SetAuthenticationMethodType(std::move(value)); return *this;}

  private:

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;

    AuthenticationMethodType m_authenticationMethodType;
    bool m_authenticationMethodTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
