/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/SignInOrigin.h>
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
   * <p>A structure that describes the sign-in options for an application
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/SignInOptions">AWS
   * API Reference</a></p>
   */
  class SignInOptions
  {
  public:
    AWS_SSOADMIN_API SignInOptions();
    AWS_SSOADMIN_API SignInOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API SignInOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline const Aws::String& GetApplicationUrl() const{ return m_applicationUrl; }

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline bool ApplicationUrlHasBeenSet() const { return m_applicationUrlHasBeenSet; }

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline void SetApplicationUrl(const Aws::String& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = value; }

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline void SetApplicationUrl(Aws::String&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::move(value); }

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline void SetApplicationUrl(const char* value) { m_applicationUrlHasBeenSet = true; m_applicationUrl.assign(value); }

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline SignInOptions& WithApplicationUrl(const Aws::String& value) { SetApplicationUrl(value); return *this;}

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline SignInOptions& WithApplicationUrl(Aws::String&& value) { SetApplicationUrl(std::move(value)); return *this;}

    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline SignInOptions& WithApplicationUrl(const char* value) { SetApplicationUrl(value); return *this;}


    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline const SignInOrigin& GetOrigin() const{ return m_origin; }

    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }

    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline void SetOrigin(const SignInOrigin& value) { m_originHasBeenSet = true; m_origin = value; }

    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline void SetOrigin(SignInOrigin&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }

    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline SignInOptions& WithOrigin(const SignInOrigin& value) { SetOrigin(value); return *this;}

    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline SignInOptions& WithOrigin(SignInOrigin&& value) { SetOrigin(std::move(value)); return *this;}

  private:

    Aws::String m_applicationUrl;
    bool m_applicationUrlHasBeenSet = false;

    SignInOrigin m_origin;
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
