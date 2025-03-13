/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/TLSSecurityPolicy.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Options to configure a custom endpoint for an OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainEndpointOptions">AWS
   * API Reference</a></p>
   */
  class DomainEndpointOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions() = default;
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline bool GetEnforceHTTPS() const { return m_enforceHTTPS; }
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }
    inline DomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the TLS security policy to apply to the HTTPS endpoint of the domain.
     * The policy can be one of the following values:</p> <ul> <li> <p>
     * <b>Policy-Min-TLS-1-0-2019-07:</b> TLS security policy that supports TLS version
     * 1.0 to TLS version 1.2</p> </li> <li> <p> <b>Policy-Min-TLS-1-2-2019-07:</b> TLS
     * security policy that supports only TLS version 1.2</p> </li> <li> <p>
     * <b>Policy-Min-TLS-1-2-PFS-2023-10:</b> TLS security policy that supports TLS
     * version 1.2 to TLS version 1.3 with perfect forward secrecy cipher suites</p>
     * </li> </ul>
     */
    inline TLSSecurityPolicy GetTLSSecurityPolicy() const { return m_tLSSecurityPolicy; }
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }
    inline void SetTLSSecurityPolicy(TLSSecurityPolicy value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = value; }
    inline DomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicy value) { SetTLSSecurityPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline bool GetCustomEndpointEnabled() const { return m_customEndpointEnabled; }
    inline bool CustomEndpointEnabledHasBeenSet() const { return m_customEndpointEnabledHasBeenSet; }
    inline void SetCustomEndpointEnabled(bool value) { m_customEndpointEnabledHasBeenSet = true; m_customEndpointEnabled = value; }
    inline DomainEndpointOptions& WithCustomEndpointEnabled(bool value) { SetCustomEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified URL for the custom endpoint.</p>
     */
    inline const Aws::String& GetCustomEndpoint() const { return m_customEndpoint; }
    inline bool CustomEndpointHasBeenSet() const { return m_customEndpointHasBeenSet; }
    template<typename CustomEndpointT = Aws::String>
    void SetCustomEndpoint(CustomEndpointT&& value) { m_customEndpointHasBeenSet = true; m_customEndpoint = std::forward<CustomEndpointT>(value); }
    template<typename CustomEndpointT = Aws::String>
    DomainEndpointOptions& WithCustomEndpoint(CustomEndpointT&& value) { SetCustomEndpoint(std::forward<CustomEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for your security certificate, managed in Amazon Web Services
     * Certificate Manager (ACM).</p>
     */
    inline const Aws::String& GetCustomEndpointCertificateArn() const { return m_customEndpointCertificateArn; }
    inline bool CustomEndpointCertificateArnHasBeenSet() const { return m_customEndpointCertificateArnHasBeenSet; }
    template<typename CustomEndpointCertificateArnT = Aws::String>
    void SetCustomEndpointCertificateArn(CustomEndpointCertificateArnT&& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = std::forward<CustomEndpointCertificateArnT>(value); }
    template<typename CustomEndpointCertificateArnT = Aws::String>
    DomainEndpointOptions& WithCustomEndpointCertificateArn(CustomEndpointCertificateArnT&& value) { SetCustomEndpointCertificateArn(std::forward<CustomEndpointCertificateArnT>(value)); return *this;}
    ///@}
  private:

    bool m_enforceHTTPS{false};
    bool m_enforceHTTPSHasBeenSet = false;

    TLSSecurityPolicy m_tLSSecurityPolicy{TLSSecurityPolicy::NOT_SET};
    bool m_tLSSecurityPolicyHasBeenSet = false;

    bool m_customEndpointEnabled{false};
    bool m_customEndpointEnabledHasBeenSet = false;

    Aws::String m_customEndpoint;
    bool m_customEndpointHasBeenSet = false;

    Aws::String m_customEndpointCertificateArn;
    bool m_customEndpointCertificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
