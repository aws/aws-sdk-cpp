/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/TLSInspectionConfiguration.h>
#include <aws/network-firewall/model/TLSInspectionConfigurationResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class DescribeTLSInspectionConfigurationResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeTLSInspectionConfigurationResult() = default;
    AWS_NETWORKFIREWALL_API DescribeTLSInspectionConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeTLSInspectionConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token used for optimistic locking. Network Firewall returns a token to your
     * requests that access the TLS inspection configuration. The token marks the state
     * of the TLS inspection configuration resource at the time of the request. </p>
     * <p>To make changes to the TLS inspection configuration, you provide the token in
     * your request. Network Firewall uses the token to ensure that the TLS inspection
     * configuration hasn't changed since you last retrieved it. If it has changed, the
     * operation fails with an <code>InvalidTokenException</code>. If this happens,
     * retrieve the TLS inspection configuration again to get a current copy of it with
     * a current token. Reapply your changes as needed, then try the operation again
     * using the new token. </p>
     */
    inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
    template<typename UpdateTokenT = Aws::String>
    void SetUpdateToken(UpdateTokenT&& value) { m_updateTokenHasBeenSet = true; m_updateToken = std::forward<UpdateTokenT>(value); }
    template<typename UpdateTokenT = Aws::String>
    DescribeTLSInspectionConfigurationResult& WithUpdateToken(UpdateTokenT&& value) { SetUpdateToken(std::forward<UpdateTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object that defines a TLS inspection configuration. This, along with
     * <a>TLSInspectionConfigurationResponse</a>, define the TLS inspection
     * configuration. You can retrieve all objects for a TLS inspection configuration
     * by calling <a>DescribeTLSInspectionConfiguration</a>. </p> <p>Network Firewall
     * uses a TLS inspection configuration to decrypt traffic. Network Firewall
     * re-encrypts the traffic before sending it to its destination.</p> <p>To use a
     * TLS inspection configuration, you add it to a new Network Firewall firewall
     * policy, then you apply the firewall policy to a firewall. Network Firewall acts
     * as a proxy service to decrypt and inspect the traffic traveling through your
     * firewalls. You can reference a TLS inspection configuration from more than one
     * firewall policy, and you can use a firewall policy in more than one firewall.
     * For more information about using TLS inspection configurations, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
     * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
     * Firewall Developer Guide</i>.</p>
     */
    inline const TLSInspectionConfiguration& GetTLSInspectionConfiguration() const { return m_tLSInspectionConfiguration; }
    template<typename TLSInspectionConfigurationT = TLSInspectionConfiguration>
    void SetTLSInspectionConfiguration(TLSInspectionConfigurationT&& value) { m_tLSInspectionConfigurationHasBeenSet = true; m_tLSInspectionConfiguration = std::forward<TLSInspectionConfigurationT>(value); }
    template<typename TLSInspectionConfigurationT = TLSInspectionConfiguration>
    DescribeTLSInspectionConfigurationResult& WithTLSInspectionConfiguration(TLSInspectionConfigurationT&& value) { SetTLSInspectionConfiguration(std::forward<TLSInspectionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The high-level properties of a TLS inspection configuration. This, along with
     * the <a>TLSInspectionConfiguration</a>, define the TLS inspection configuration.
     * You can retrieve all objects for a TLS inspection configuration by calling
     * <a>DescribeTLSInspectionConfiguration</a>. </p>
     */
    inline const TLSInspectionConfigurationResponse& GetTLSInspectionConfigurationResponse() const { return m_tLSInspectionConfigurationResponse; }
    template<typename TLSInspectionConfigurationResponseT = TLSInspectionConfigurationResponse>
    void SetTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponseT&& value) { m_tLSInspectionConfigurationResponseHasBeenSet = true; m_tLSInspectionConfigurationResponse = std::forward<TLSInspectionConfigurationResponseT>(value); }
    template<typename TLSInspectionConfigurationResponseT = TLSInspectionConfigurationResponse>
    DescribeTLSInspectionConfigurationResult& WithTLSInspectionConfigurationResponse(TLSInspectionConfigurationResponseT&& value) { SetTLSInspectionConfigurationResponse(std::forward<TLSInspectionConfigurationResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTLSInspectionConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updateToken;
    bool m_updateTokenHasBeenSet = false;

    TLSInspectionConfiguration m_tLSInspectionConfiguration;
    bool m_tLSInspectionConfigurationHasBeenSet = false;

    TLSInspectionConfigurationResponse m_tLSInspectionConfigurationResponse;
    bool m_tLSInspectionConfigurationResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
