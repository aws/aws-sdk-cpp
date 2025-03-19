/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/SamlProviderConfiguration.h>
#include <aws/qbusiness/model/OpenIDConnectProviderConfiguration.h>
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
   * <p>Provides information about the identity provider (IdP) used to authenticate
   * end users of an Amazon Q Business web experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/IdentityProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class IdentityProviderConfiguration
  {
  public:
    AWS_QBUSINESS_API IdentityProviderConfiguration() = default;
    AWS_QBUSINESS_API IdentityProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API IdentityProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const SamlProviderConfiguration& GetSamlConfiguration() const { return m_samlConfiguration; }
    inline bool SamlConfigurationHasBeenSet() const { return m_samlConfigurationHasBeenSet; }
    template<typename SamlConfigurationT = SamlProviderConfiguration>
    void SetSamlConfiguration(SamlConfigurationT&& value) { m_samlConfigurationHasBeenSet = true; m_samlConfiguration = std::forward<SamlConfigurationT>(value); }
    template<typename SamlConfigurationT = SamlProviderConfiguration>
    IdentityProviderConfiguration& WithSamlConfiguration(SamlConfigurationT&& value) { SetSamlConfiguration(std::forward<SamlConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OpenIDConnectProviderConfiguration& GetOpenIDConnectConfiguration() const { return m_openIDConnectConfiguration; }
    inline bool OpenIDConnectConfigurationHasBeenSet() const { return m_openIDConnectConfigurationHasBeenSet; }
    template<typename OpenIDConnectConfigurationT = OpenIDConnectProviderConfiguration>
    void SetOpenIDConnectConfiguration(OpenIDConnectConfigurationT&& value) { m_openIDConnectConfigurationHasBeenSet = true; m_openIDConnectConfiguration = std::forward<OpenIDConnectConfigurationT>(value); }
    template<typename OpenIDConnectConfigurationT = OpenIDConnectProviderConfiguration>
    IdentityProviderConfiguration& WithOpenIDConnectConfiguration(OpenIDConnectConfigurationT&& value) { SetOpenIDConnectConfiguration(std::forward<OpenIDConnectConfigurationT>(value)); return *this;}
    ///@}
  private:

    SamlProviderConfiguration m_samlConfiguration;
    bool m_samlConfigurationHasBeenSet = false;

    OpenIDConnectProviderConfiguration m_openIDConnectConfiguration;
    bool m_openIDConnectConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
