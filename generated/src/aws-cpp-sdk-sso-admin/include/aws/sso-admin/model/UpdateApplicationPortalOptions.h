/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/sso-admin/model/SignInOptions.h>
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
   * an application that can be updated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/UpdateApplicationPortalOptions">AWS
   * API Reference</a></p>
   */
  class UpdateApplicationPortalOptions
  {
  public:
    AWS_SSOADMIN_API UpdateApplicationPortalOptions();
    AWS_SSOADMIN_API UpdateApplicationPortalOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API UpdateApplicationPortalOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const SignInOptions& GetSignInOptions() const{ return m_signInOptions; }

    
    inline bool SignInOptionsHasBeenSet() const { return m_signInOptionsHasBeenSet; }

    
    inline void SetSignInOptions(const SignInOptions& value) { m_signInOptionsHasBeenSet = true; m_signInOptions = value; }

    
    inline void SetSignInOptions(SignInOptions&& value) { m_signInOptionsHasBeenSet = true; m_signInOptions = std::move(value); }

    
    inline UpdateApplicationPortalOptions& WithSignInOptions(const SignInOptions& value) { SetSignInOptions(value); return *this;}

    
    inline UpdateApplicationPortalOptions& WithSignInOptions(SignInOptions&& value) { SetSignInOptions(std::move(value)); return *this;}

  private:

    SignInOptions m_signInOptions;
    bool m_signInOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
