/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure that defines configuration settings for an application that
   * supports the OAuth 2.0 Authorization Code Grant.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AuthorizationCodeGrant">AWS
   * API Reference</a></p>
   */
  class AuthorizationCodeGrant
  {
  public:
    AWS_SSOADMIN_API AuthorizationCodeGrant() = default;
    AWS_SSOADMIN_API AuthorizationCodeGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AuthorizationCodeGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>  <p>RedirectUris is required when the grant
     * type is <code>authorization_code</code>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRedirectUris() const { return m_redirectUris; }
    inline bool RedirectUrisHasBeenSet() const { return m_redirectUrisHasBeenSet; }
    template<typename RedirectUrisT = Aws::Vector<Aws::String>>
    void SetRedirectUris(RedirectUrisT&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = std::forward<RedirectUrisT>(value); }
    template<typename RedirectUrisT = Aws::Vector<Aws::String>>
    AuthorizationCodeGrant& WithRedirectUris(RedirectUrisT&& value) { SetRedirectUris(std::forward<RedirectUrisT>(value)); return *this;}
    template<typename RedirectUrisT = Aws::String>
    AuthorizationCodeGrant& AddRedirectUris(RedirectUrisT&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.emplace_back(std::forward<RedirectUrisT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_redirectUris;
    bool m_redirectUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
