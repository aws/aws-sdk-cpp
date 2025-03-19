/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Specifies the authorization configuration for using an OpenID Connect
   * compliant service with your AppSync GraphQL API endpoint. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAppSyncGraphQlApiOpenIdConnectConfigDetails">AWS
   * API Reference</a></p>
   */
  class AwsAppSyncGraphQlApiOpenIdConnectConfigDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiOpenIdConnectConfigDetails() = default;
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiOpenIdConnectConfigDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number of milliseconds that a token is valid after being authenticated.
     * </p>
     */
    inline long long GetAuthTtL() const { return m_authTtL; }
    inline bool AuthTtLHasBeenSet() const { return m_authTtLHasBeenSet; }
    inline void SetAuthTtL(long long value) { m_authTtLHasBeenSet = true; m_authTtL = value; }
    inline AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& WithAuthTtL(long long value) { SetAuthTtL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The client identifier of the relying party at the OpenID identity provider.
     * This identifier is typically obtained when the relying party is registered with
     * the OpenID identity provider. You can specify a regular expression so that
     * AppSync can validate against multiple client identifiers at a time. </p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of milliseconds that a token is valid after it's issued to a
     * user. </p>
     */
    inline long long GetIatTtL() const { return m_iatTtL; }
    inline bool IatTtLHasBeenSet() const { return m_iatTtLHasBeenSet; }
    inline void SetIatTtL(long long value) { m_iatTtLHasBeenSet = true; m_iatTtL = value; }
    inline AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& WithIatTtL(long long value) { SetIatTtL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The issuer for the OIDC configuration. The issuer returned by discovery must
     * exactly match the value of <code>iss</code> in the ID token. </p>
     */
    inline const Aws::String& GetIssuer() const { return m_issuer; }
    inline bool IssuerHasBeenSet() const { return m_issuerHasBeenSet; }
    template<typename IssuerT = Aws::String>
    void SetIssuer(IssuerT&& value) { m_issuerHasBeenSet = true; m_issuer = std::forward<IssuerT>(value); }
    template<typename IssuerT = Aws::String>
    AwsAppSyncGraphQlApiOpenIdConnectConfigDetails& WithIssuer(IssuerT&& value) { SetIssuer(std::forward<IssuerT>(value)); return *this;}
    ///@}
  private:

    long long m_authTtL{0};
    bool m_authTtLHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    long long m_iatTtL{0};
    bool m_iatTtLHasBeenSet = false;

    Aws::String m_issuer;
    bool m_issuerHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
