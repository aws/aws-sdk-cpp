/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/AuthenticationMethodType.h>
#include <aws/sso-admin/model/AuthenticationMethod.h>
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
    AWS_SSOADMIN_API AuthenticationMethodItem() = default;
    AWS_SSOADMIN_API AuthenticationMethodItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AuthenticationMethodItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of authentication that is used by this method.</p>
     */
    inline AuthenticationMethodType GetAuthenticationMethodType() const { return m_authenticationMethodType; }
    inline bool AuthenticationMethodTypeHasBeenSet() const { return m_authenticationMethodTypeHasBeenSet; }
    inline void SetAuthenticationMethodType(AuthenticationMethodType value) { m_authenticationMethodTypeHasBeenSet = true; m_authenticationMethodType = value; }
    inline AuthenticationMethodItem& WithAuthenticationMethodType(AuthenticationMethodType value) { SetAuthenticationMethodType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes an authentication method. The contents of this
     * structure is determined by the <code>AuthenticationMethodType</code>.</p>
     */
    inline const AuthenticationMethod& GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    void SetAuthenticationMethod(AuthenticationMethodT&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::forward<AuthenticationMethodT>(value); }
    template<typename AuthenticationMethodT = AuthenticationMethod>
    AuthenticationMethodItem& WithAuthenticationMethod(AuthenticationMethodT&& value) { SetAuthenticationMethod(std::forward<AuthenticationMethodT>(value)); return *this;}
    ///@}
  private:

    AuthenticationMethodType m_authenticationMethodType{AuthenticationMethodType::NOT_SET};
    bool m_authenticationMethodTypeHasBeenSet = false;

    AuthenticationMethod m_authenticationMethod;
    bool m_authenticationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
