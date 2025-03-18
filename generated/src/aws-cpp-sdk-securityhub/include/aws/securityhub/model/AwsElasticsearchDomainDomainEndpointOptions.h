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
   * <p>Additional options for the domain endpoint, such as whether to require HTTPS
   * for all traffic.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainDomainEndpointOptions">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainDomainEndpointOptions
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainDomainEndpointOptions() = default;
    AWS_SECURITYHUB_API AwsElasticsearchDomainDomainEndpointOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainDomainEndpointOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether to require that all traffic to the domain arrive over HTTPS.</p>
     */
    inline bool GetEnforceHTTPS() const { return m_enforceHTTPS; }
    inline bool EnforceHTTPSHasBeenSet() const { return m_enforceHTTPSHasBeenSet; }
    inline void SetEnforceHTTPS(bool value) { m_enforceHTTPSHasBeenSet = true; m_enforceHTTPS = value; }
    inline AwsElasticsearchDomainDomainEndpointOptions& WithEnforceHTTPS(bool value) { SetEnforceHTTPS(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS security policy to apply to the HTTPS endpoint of the OpenSearch
     * domain.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>Policy-Min-TLS-1-0-2019-07</code>, which supports TLSv1.0 and higher</p>
     * </li> <li> <p> <code>Policy-Min-TLS-1-2-2019-07</code>, which only supports
     * TLSv1.2</p> </li> </ul>
     */
    inline const Aws::String& GetTLSSecurityPolicy() const { return m_tLSSecurityPolicy; }
    inline bool TLSSecurityPolicyHasBeenSet() const { return m_tLSSecurityPolicyHasBeenSet; }
    template<typename TLSSecurityPolicyT = Aws::String>
    void SetTLSSecurityPolicy(TLSSecurityPolicyT&& value) { m_tLSSecurityPolicyHasBeenSet = true; m_tLSSecurityPolicy = std::forward<TLSSecurityPolicyT>(value); }
    template<typename TLSSecurityPolicyT = Aws::String>
    AwsElasticsearchDomainDomainEndpointOptions& WithTLSSecurityPolicy(TLSSecurityPolicyT&& value) { SetTLSSecurityPolicy(std::forward<TLSSecurityPolicyT>(value)); return *this;}
    ///@}
  private:

    bool m_enforceHTTPS{false};
    bool m_enforceHTTPSHasBeenSet = false;

    Aws::String m_tLSSecurityPolicy;
    bool m_tLSSecurityPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
