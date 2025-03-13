/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationSaslDetails.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoClientAuthenticationTlsDetails.h>
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
   * <p> Provides details about different modes of client
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterClusterInfoClientAuthenticationDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterClusterInfoClientAuthenticationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides details for client authentication using SASL.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationSaslDetails& GetSasl() const { return m_sasl; }
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }
    template<typename SaslT = AwsMskClusterClusterInfoClientAuthenticationSaslDetails>
    void SetSasl(SaslT&& value) { m_saslHasBeenSet = true; m_sasl = std::forward<SaslT>(value); }
    template<typename SaslT = AwsMskClusterClusterInfoClientAuthenticationSaslDetails>
    AwsMskClusterClusterInfoClientAuthenticationDetails& WithSasl(SaslT&& value) { SetSasl(std::forward<SaslT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details for allowing no client authentication.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& GetUnauthenticated() const { return m_unauthenticated; }
    inline bool UnauthenticatedHasBeenSet() const { return m_unauthenticatedHasBeenSet; }
    template<typename UnauthenticatedT = AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails>
    void SetUnauthenticated(UnauthenticatedT&& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = std::forward<UnauthenticatedT>(value); }
    template<typename UnauthenticatedT = AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails>
    AwsMskClusterClusterInfoClientAuthenticationDetails& WithUnauthenticated(UnauthenticatedT&& value) { SetUnauthenticated(std::forward<UnauthenticatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details for client authentication using TLS.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationTlsDetails& GetTls() const { return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    template<typename TlsT = AwsMskClusterClusterInfoClientAuthenticationTlsDetails>
    void SetTls(TlsT&& value) { m_tlsHasBeenSet = true; m_tls = std::forward<TlsT>(value); }
    template<typename TlsT = AwsMskClusterClusterInfoClientAuthenticationTlsDetails>
    AwsMskClusterClusterInfoClientAuthenticationDetails& WithTls(TlsT&& value) { SetTls(std::forward<TlsT>(value)); return *this;}
    ///@}
  private:

    AwsMskClusterClusterInfoClientAuthenticationSaslDetails m_sasl;
    bool m_saslHasBeenSet = false;

    AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails m_unauthenticated;
    bool m_unauthenticatedHasBeenSet = false;

    AwsMskClusterClusterInfoClientAuthenticationTlsDetails m_tls;
    bool m_tlsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
