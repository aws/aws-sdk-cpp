/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/SignInOrigin.h>
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
   * <p>A structure that describes the sign-in options for an application
   * portal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/SignInOptions">AWS
   * API Reference</a></p>
   */
  class SignInOptions
  {
  public:
    AWS_SSOADMIN_API SignInOptions() = default;
    AWS_SSOADMIN_API SignInOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API SignInOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This determines how IAM Identity Center navigates the user to the target
     * application. It can be one of the following values:</p> <ul> <li> <p>
     * <code>APPLICATION</code>: IAM Identity Center redirects the customer to the
     * configured <code>ApplicationUrl</code>.</p> </li> <li> <p>
     * <code>IDENTITY_CENTER</code>: IAM Identity Center uses SAML identity-provider
     * initiated authentication to sign the customer directly into a SAML-based
     * application.</p> </li> </ul>
     */
    inline SignInOrigin GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(SignInOrigin value) { m_originHasBeenSet = true; m_origin = value; }
    inline SignInOptions& WithOrigin(SignInOrigin value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL that accepts authentication requests for an application. This is a
     * required parameter if the <code>Origin</code> parameter is
     * <code>APPLICATION</code>.</p>
     */
    inline const Aws::String& GetApplicationUrl() const { return m_applicationUrl; }
    inline bool ApplicationUrlHasBeenSet() const { return m_applicationUrlHasBeenSet; }
    template<typename ApplicationUrlT = Aws::String>
    void SetApplicationUrl(ApplicationUrlT&& value) { m_applicationUrlHasBeenSet = true; m_applicationUrl = std::forward<ApplicationUrlT>(value); }
    template<typename ApplicationUrlT = Aws::String>
    SignInOptions& WithApplicationUrl(ApplicationUrlT&& value) { SetApplicationUrl(std::forward<ApplicationUrlT>(value)); return *this;}
    ///@}
  private:

    SignInOrigin m_origin{SignInOrigin::NOT_SET};
    bool m_originHasBeenSet = false;

    Aws::String m_applicationUrl;
    bool m_applicationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
