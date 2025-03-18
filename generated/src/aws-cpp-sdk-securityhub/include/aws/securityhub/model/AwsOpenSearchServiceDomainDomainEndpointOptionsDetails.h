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
   * <p>Information about additional options for the domain endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsOpenSearchServiceDomainDomainEndpointOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsOpenSearchServiceDomainDomainEndpointOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDomainEndpointOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDomainEndpointOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the security certificate. The certificate is managed in ACM.</p>
     */
    inline const Aws::String& GetCustomEndpointCertificateArn() const { return m_customEndpointCertificateArn; }
    inline bool CustomEndpointCertificateArnHasBeenSet() const { return m_customEndpointCertificateArnHasBeenSet; }
    template<typename CustomEndpointCertificateArnT = Aws::String>
    void SetCustomEndpointCertificateArn(CustomEndpointCertificateArnT&& value) { m_customEndpointCertificateArnHasBeenSet = true; m_customEndpointCertificateArn = std::forward<CustomEndpointCertificateArnT>(value); }
    template<typename CustomEndpointCertificateArnT = Aws::String>
    AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& WithCustomEndpointCertificateArn(CustomEndpointCertificateArnT&& value) { SetCustomEndpointCertificateArn(std::forward<CustomEndpointCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to enable a custom endpoint for the domain.</p>
     */
    inline bool GetCustomEndpointEnabled() const { return m_customEndpointEnabled; }
    inline bool CustomEndpointEnabledHasBeenSet() const { return m_customEndpointEnabledHasBeenSet; }
    inline void SetCustomEndpointEnabled(bool value) { m_customEndpointEnabledHasBeenSet = true; m_customEndpointEnabled = value; }
    inline AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& WithCustomEndpointEnabled(bool value) { SetCustomEndpointEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline bool GetEnforceHTTPS() const { return m_enforceHTTPS; }
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }
    inline AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}
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
    AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& WithCustomEndpoint(CustomEndpointT&& value) { SetCustomEndpoint(std::forward<CustomEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS security policy to apply to the HTTPS endpoint of the OpenSearch
     * domain.</p>
     */
    inline const Aws::String& GetTLSSecurityPolicy() const { return m_tLSSecurityPolicy; }
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }
    template<typename TLSSecurityPolicyT = Aws::String>
    void SetTLSSecurityPolicy(TLSSecurityPolicyT&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::forward<TLSSecurityPolicyT>(value); }
    template<typename TLSSecurityPolicyT = Aws::String>
    AwsOpenSearchServiceDomainDomainEndpointOptionsDetails& WithTLSSecurityPolicy(TLSSecurityPolicyT&& value) { SetTLSSecurityPolicy(std::forward<TLSSecurityPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customEndpointCertificateArn;
    bool m_customEndpointCertificateArnHasBeenSet = false;

    bool m_customEndpointEnabled{false};
    bool m_customEndpointEnabledHasBeenSet = false;

    bool m_enforceHTTPS{false};
    bool m_enforceHTTPSHasBeenSet = false;

    Aws::String m_customEndpoint;
    bool m_customEndpointHasBeenSet = false;

    Aws::String m_tLSSecurityPolicy;
    bool m_tLSSecurityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
