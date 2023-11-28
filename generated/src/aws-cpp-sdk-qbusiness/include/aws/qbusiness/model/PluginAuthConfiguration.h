/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/BasicAuthConfiguration.h>
#include <aws/qbusiness/model/OAuth2ClientCredentialConfiguration.h>
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
   * <p>Authentication configuration information for an Amazon Q
   * plugin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/PluginAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class PluginAuthConfiguration
  {
  public:
    AWS_QBUSINESS_API PluginAuthConfiguration();
    AWS_QBUSINESS_API PluginAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API PluginAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline const BasicAuthConfiguration& GetBasicAuthConfiguration() const{ return m_basicAuthConfiguration; }

    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline bool BasicAuthConfigurationHasBeenSet() const { return m_basicAuthConfigurationHasBeenSet; }

    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline void SetBasicAuthConfiguration(const BasicAuthConfiguration& value) { m_basicAuthConfigurationHasBeenSet = true; m_basicAuthConfiguration = value; }

    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline void SetBasicAuthConfiguration(BasicAuthConfiguration&& value) { m_basicAuthConfigurationHasBeenSet = true; m_basicAuthConfiguration = std::move(value); }

    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline PluginAuthConfiguration& WithBasicAuthConfiguration(const BasicAuthConfiguration& value) { SetBasicAuthConfiguration(value); return *this;}

    /**
     * <p>Information about the basic authentication credentials used to configure a
     * plugin.</p>
     */
    inline PluginAuthConfiguration& WithBasicAuthConfiguration(BasicAuthConfiguration&& value) { SetBasicAuthConfiguration(std::move(value)); return *this;}


    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline const OAuth2ClientCredentialConfiguration& GetOAuth2ClientCredentialConfiguration() const{ return m_oAuth2ClientCredentialConfiguration; }

    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline bool OAuth2ClientCredentialConfigurationHasBeenSet() const { return m_oAuth2ClientCredentialConfigurationHasBeenSet; }

    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline void SetOAuth2ClientCredentialConfiguration(const OAuth2ClientCredentialConfiguration& value) { m_oAuth2ClientCredentialConfigurationHasBeenSet = true; m_oAuth2ClientCredentialConfiguration = value; }

    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline void SetOAuth2ClientCredentialConfiguration(OAuth2ClientCredentialConfiguration&& value) { m_oAuth2ClientCredentialConfigurationHasBeenSet = true; m_oAuth2ClientCredentialConfiguration = std::move(value); }

    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline PluginAuthConfiguration& WithOAuth2ClientCredentialConfiguration(const OAuth2ClientCredentialConfiguration& value) { SetOAuth2ClientCredentialConfiguration(value); return *this;}

    /**
     * <p>Information about the OAuth 2.0 authentication credential/token used to
     * configure a plugin.</p>
     */
    inline PluginAuthConfiguration& WithOAuth2ClientCredentialConfiguration(OAuth2ClientCredentialConfiguration&& value) { SetOAuth2ClientCredentialConfiguration(std::move(value)); return *this;}

  private:

    BasicAuthConfiguration m_basicAuthConfiguration;
    bool m_basicAuthConfigurationHasBeenSet = false;

    OAuth2ClientCredentialConfiguration m_oAuth2ClientCredentialConfiguration;
    bool m_oAuth2ClientCredentialConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
