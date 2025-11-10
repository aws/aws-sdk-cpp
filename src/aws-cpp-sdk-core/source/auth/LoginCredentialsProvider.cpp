/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Globals.h>
#include <aws/core/auth/LoginCredentialsProvider.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/UserAgent.h>
#include <aws/crt/auth/Credentials.h>

using namespace Aws::Auth;
using namespace Aws::Utils;

namespace {
std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> GetLoginCrtProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig,
    Aws::Crt::Io::ClientBootstrap* defaultClientBootstrap) {
  Aws::Crt::Auth::CredentialsProviderLoginConfig loginConfig{};
  loginConfig.Bootstrap = defaultClientBootstrap;
  Aws::Crt::Io::TlsContextOptions tlsCtxOptions = Aws::Crt::Io::TlsContextOptions::InitDefaultClient();
  const Aws::Crt::Io::TlsContext tlsContext(tlsCtxOptions, Aws::Crt::Io::TlsMode::CLIENT);
  const auto tlsOptions = Aws::GetDefaultTlsConnectionOptions();
  if (tlsOptions) {
    loginConfig.TlsConnectionOptions = *tlsOptions;
  }
  loginConfig.LoginSession = credentialsConfig.loginCredentialProviderConfig.loginSession.c_str();
  loginConfig.LoginCacheOverride = credentialsConfig.loginCredentialProviderConfig.loginCacheOverride.c_str();
  loginConfig.LoginRegion = credentialsConfig.region.c_str();
  return Aws::Crt::Auth::CredentialsProvider::CreateCredentialsProviderLogin(loginConfig);
}
}  // namespace

LoginCredentialsProvider::LoginCredentialsProvider(
    const Aws::Client::ClientConfiguration::CredentialProviderConfiguration& credentialsConfig)
    : CrtCredentialsProvider{[&credentialsConfig]() -> std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> {
                               return GetLoginCrtProvider(credentialsConfig, GetDefaultClientBootstrap());
                             },
                             credentialsConfig.loginCredentialProviderConfig.retrieveCredentialsFutureTimeout,
                             Aws::Client::UserAgentFeature::CREDENTIALS_LOGIN, "LoginCredentialsProvider"} {}

LoginCredentialsProvider::~LoginCredentialsProvider() = default;