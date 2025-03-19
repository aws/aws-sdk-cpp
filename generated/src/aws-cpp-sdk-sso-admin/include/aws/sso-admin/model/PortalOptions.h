/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/SignInOptions.h>
#include <aws/sso-admin/model/ApplicationVisibility.h>
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
   * <p>A structure that describes the options for the access portal associated with
   * an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/PortalOptions">AWS
   * API Reference</a></p>
   */
  class PortalOptions
  {
  public:
    AWS_SSOADMIN_API PortalOptions() = default;
    AWS_SSOADMIN_API PortalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API PortalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that describes the sign-in options for the access portal.</p>
     */
    inline const SignInOptions& GetSignInOptions() const { return m_signInOptions; }
    inline bool SignInOptionsHasBeenSet() const { return m_signInOptionsHasBeenSet; }
    template<typename SignInOptionsT = SignInOptions>
    void SetSignInOptions(SignInOptionsT&& value) { m_signInOptionsHasBeenSet = true; m_signInOptions = std::forward<SignInOptionsT>(value); }
    template<typename SignInOptionsT = SignInOptions>
    PortalOptions& WithSignInOptions(SignInOptionsT&& value) { SetSignInOptions(std::forward<SignInOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this application is visible in the access portal.</p>
     */
    inline ApplicationVisibility GetVisibility() const { return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(ApplicationVisibility value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline PortalOptions& WithVisibility(ApplicationVisibility value) { SetVisibility(value); return *this;}
    ///@}
  private:

    SignInOptions m_signInOptions;
    bool m_signInOptionsHasBeenSet = false;

    ApplicationVisibility m_visibility{ApplicationVisibility::NOT_SET};
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
