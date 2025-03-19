/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/BasicAuthConfiguration.h>
#include <aws/qbusiness/model/OAuth2ClientCredentialConfiguration.h>
#include <aws/qbusiness/model/NoAuthConfiguration.h>
#include <aws/qbusiness/model/IdcAuthConfiguration.h>
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
   * <p>Authentication configuration information for an Amazon Q Business
   * plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PluginAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginAuthConfiguration
  {
  public:
    AWS_QBUSINESS_API PluginAuthConfiguration() = default;
    AWS_QBUSINESS_API PluginAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PluginAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline const BasicAuthConfiguration& GetBasicAuthConfiguration() const { return m_basicAuthConfiguration; }
    inline bool BasicAuthConfigurationHasBeenSet() const { return m_basicAuthConfigurationHasBeenSet; }
    template<typename BasicAuthConfigurationT = BasicAuthConfiguration>
    void SetBasicAuthConfiguration(BasicAuthConfigurationT&& value) { m_basicAuthConfigurationHasBeenSet = true; m_basicAuthConfiguration = std::forward<BasicAuthConfigurationT>(value); }
    template<typename BasicAuthConfigurationT = BasicAuthConfiguration>
    PluginAuthConfiguration& WithBasicAuthConfiguration(BasicAuthConfigurationT&& value) { SetBasicAuthConfiguration(std::forward<BasicAuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline const OAuth2ClientCredentialConfiguration& GetOAuth2ClientCredentialConfiguration() const { return m_oAuth2ClientCredentialConfiguration; }
    inline bool OAuth2ClientCredentialConfigurationHasBeenSet() const { return m_oAuth2ClientCredentialConfigurationHasBeenSet; }
    template<typename OAuth2ClientCredentialConfigurationT = OAuth2ClientCredentialConfiguration>
    void SetOAuth2ClientCredentialConfiguration(OAuth2ClientCredentialConfigurationT&& value) { m_oAuth2ClientCredentialConfigurationHasBeenSet = true; m_oAuth2ClientCredentialConfiguration = std::forward<OAuth2ClientCredentialConfigurationT>(value); }
    template<typename OAuth2ClientCredentialConfigurationT = OAuth2ClientCredentialConfiguration>
    PluginAuthConfiguration& WithOAuth2ClientCredentialConfiguration(OAuth2ClientCredentialConfigurationT&& value) { SetOAuth2ClientCredentialConfiguration(std::forward<OAuth2ClientCredentialConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about invoking a custom plugin without any authentication.</p>
     */
    inline const NoAuthConfiguration& GetNoAuthConfiguration() const { return m_noAuthConfiguration; }
    inline bool NoAuthConfigurationHasBeenSet() const { return m_noAuthConfigurationHasBeenSet; }
    template<typename NoAuthConfigurationT = NoAuthConfiguration>
    void SetNoAuthConfiguration(NoAuthConfigurationT&& value) { m_noAuthConfigurationHasBeenSet = true; m_noAuthConfiguration = std::forward<NoAuthConfigurationT>(value); }
    template<typename NoAuthConfigurationT = NoAuthConfiguration>
    PluginAuthConfiguration& WithNoAuthConfiguration(NoAuthConfigurationT&& value) { SetNoAuthConfiguration(std::forward<NoAuthConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IAM Identity Center Application used to configure
     * authentication for a plugin.</p>
     */
    inline const IdcAuthConfiguration& GetIdcAuthConfiguration() const { return m_idcAuthConfiguration; }
    inline bool IdcAuthConfigurationHasBeenSet() const { return m_idcAuthConfigurationHasBeenSet; }
    template<typename IdcAuthConfigurationT = IdcAuthConfiguration>
    void SetIdcAuthConfiguration(IdcAuthConfigurationT&& value) { m_idcAuthConfigurationHasBeenSet = true; m_idcAuthConfiguration = std::forward<IdcAuthConfigurationT>(value); }
    template<typename IdcAuthConfigurationT = IdcAuthConfiguration>
    PluginAuthConfiguration& WithIdcAuthConfiguration(IdcAuthConfigurationT&& value) { SetIdcAuthConfiguration(std::forward<IdcAuthConfigurationT>(value)); return *this;}
    ///@}
  private:

    BasicAuthConfiguration m_basicAuthConfiguration;
    bool m_basicAuthConfigurationHasBeenSet = false;

    OAuth2ClientCredentialConfiguration m_oAuth2ClientCredentialConfiguration;
    bool m_oAuth2ClientCredentialConfigurationHasBeenSet = false;

    NoAuthConfiguration m_noAuthConfiguration;
    bool m_noAuthConfigurationHasBeenSet = false;

    IdcAuthConfiguration m_idcAuthConfiguration;
    bool m_idcAuthConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
