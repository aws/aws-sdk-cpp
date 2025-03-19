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
   * <p> Information about the client certificate used for authentication.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline const Aws::String& GetClientRootCertificateChain() const { return m_clientRootCertificateChain; }
    inline bool ClientRootCertificateChainHasBeenSet() const { return m_clientRootCertificateChainHasBeenSet; }
    template<typename ClientRootCertificateChainT = Aws::String>
    void SetClientRootCertificateChain(ClientRootCertificateChainT&& value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain = std::forward<ClientRootCertificateChainT>(value); }
    template<typename ClientRootCertificateChainT = Aws::String>
    AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& WithClientRootCertificateChain(ClientRootCertificateChainT&& value) { SetClientRootCertificateChain(std::forward<ClientRootCertificateChainT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRootCertificateChain;
    bool m_clientRootCertificateChainHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
