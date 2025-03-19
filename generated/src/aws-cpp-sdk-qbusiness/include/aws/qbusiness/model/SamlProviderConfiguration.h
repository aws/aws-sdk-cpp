/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about the SAML 2.0-compliant identity provider (IdP) used to
   * authenticate end users of an Amazon Q Business web experience.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/SamlProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class SamlProviderConfiguration
  {
  public:
    AWS_QBUSINESS_API SamlProviderConfiguration() = default;
    AWS_QBUSINESS_API SamlProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API SamlProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URL where Amazon Q Business end users will be redirected for
     * authentication. </p>
     */
    inline const Aws::String& GetAuthenticationUrl() const { return m_authenticationUrl; }
    inline bool AuthenticationUrlHasBeenSet() const { return m_authenticationUrlHasBeenSet; }
    template<typename AuthenticationUrlT = Aws::String>
    void SetAuthenticationUrl(AuthenticationUrlT&& value) { m_authenticationUrlHasBeenSet = true; m_authenticationUrl = std::forward<AuthenticationUrlT>(value); }
    template<typename AuthenticationUrlT = Aws::String>
    SamlProviderConfiguration& WithAuthenticationUrl(AuthenticationUrlT&& value) { SetAuthenticationUrl(std::forward<AuthenticationUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authenticationUrl;
    bool m_authenticationUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
