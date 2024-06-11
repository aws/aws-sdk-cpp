﻿/**
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
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails();
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterClusterInfoClientAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides details for client authentication using SASL.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationSaslDetails& GetSasl() const{ return m_sasl; }
    inline bool SaslHasBeenSet() const { return m_saslHasBeenSet; }
    inline void SetSasl(const AwsMskClusterClusterInfoClientAuthenticationSaslDetails& value) { m_saslHasBeenSet = true; m_sasl = value; }
    inline void SetSasl(AwsMskClusterClusterInfoClientAuthenticationSaslDetails&& value) { m_saslHasBeenSet = true; m_sasl = std::move(value); }
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithSasl(const AwsMskClusterClusterInfoClientAuthenticationSaslDetails& value) { SetSasl(value); return *this;}
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithSasl(AwsMskClusterClusterInfoClientAuthenticationSaslDetails&& value) { SetSasl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details for allowing no client authentication.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& GetUnauthenticated() const{ return m_unauthenticated; }
    inline bool UnauthenticatedHasBeenSet() const { return m_unauthenticatedHasBeenSet; }
    inline void SetUnauthenticated(const AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = value; }
    inline void SetUnauthenticated(AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails&& value) { m_unauthenticatedHasBeenSet = true; m_unauthenticated = std::move(value); }
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithUnauthenticated(const AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails& value) { SetUnauthenticated(value); return *this;}
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithUnauthenticated(AwsMskClusterClusterInfoClientAuthenticationUnauthenticatedDetails&& value) { SetUnauthenticated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides details for client authentication using TLS.</p>
     */
    inline const AwsMskClusterClusterInfoClientAuthenticationTlsDetails& GetTls() const{ return m_tls; }
    inline bool TlsHasBeenSet() const { return m_tlsHasBeenSet; }
    inline void SetTls(const AwsMskClusterClusterInfoClientAuthenticationTlsDetails& value) { m_tlsHasBeenSet = true; m_tls = value; }
    inline void SetTls(AwsMskClusterClusterInfoClientAuthenticationTlsDetails&& value) { m_tlsHasBeenSet = true; m_tls = std::move(value); }
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithTls(const AwsMskClusterClusterInfoClientAuthenticationTlsDetails& value) { SetTls(value); return *this;}
    inline AwsMskClusterClusterInfoClientAuthenticationDetails& WithTls(AwsMskClusterClusterInfoClientAuthenticationTlsDetails&& value) { SetTls(std::move(value)); return *this;}
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
