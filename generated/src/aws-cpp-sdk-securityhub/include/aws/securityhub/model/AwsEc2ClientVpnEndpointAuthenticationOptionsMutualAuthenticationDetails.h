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
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline const Aws::String& GetClientRootCertificateChain() const{ return m_clientRootCertificateChain; }

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline bool ClientRootCertificateChainHasBeenSet() const { return m_clientRootCertificateChainHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(const Aws::String& value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(Aws::String&& value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline void SetClientRootCertificateChain(const char* value) { m_clientRootCertificateChainHasBeenSet = true; m_clientRootCertificateChain.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& WithClientRootCertificateChain(const Aws::String& value) { SetClientRootCertificateChain(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& WithClientRootCertificateChain(Aws::String&& value) { SetClientRootCertificateChain(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the client certificate. </p>
     */
    inline AwsEc2ClientVpnEndpointAuthenticationOptionsMutualAuthenticationDetails& WithClientRootCertificateChain(const char* value) { SetClientRootCertificateChain(value); return *this;}

  private:

    Aws::String m_clientRootCertificateChain;
    bool m_clientRootCertificateChainHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
