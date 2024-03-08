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
    AWS_SSOADMIN_API AuthorizationCodeGrant();
    AWS_SSOADMIN_API AuthorizationCodeGrant(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AuthorizationCodeGrant& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRedirectUris() const{ return m_redirectUris; }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline bool RedirectUrisHasBeenSet() const { return m_redirectUrisHasBeenSet; }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline void SetRedirectUris(const Aws::Vector<Aws::String>& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = value; }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline void SetRedirectUris(Aws::Vector<Aws::String>&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris = std::move(value); }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline AuthorizationCodeGrant& WithRedirectUris(const Aws::Vector<Aws::String>& value) { SetRedirectUris(value); return *this;}

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline AuthorizationCodeGrant& WithRedirectUris(Aws::Vector<Aws::String>&& value) { SetRedirectUris(std::move(value)); return *this;}

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline AuthorizationCodeGrant& AddRedirectUris(const Aws::String& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(value); return *this; }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline AuthorizationCodeGrant& AddRedirectUris(Aws::String&& value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of URIs that are valid locations to redirect a user's browser after
     * the user is authorized.</p>
     */
    inline AuthorizationCodeGrant& AddRedirectUris(const char* value) { m_redirectUrisHasBeenSet = true; m_redirectUris.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_redirectUris;
    bool m_redirectUrisHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
