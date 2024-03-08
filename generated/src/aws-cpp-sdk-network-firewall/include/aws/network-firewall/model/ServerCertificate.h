/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>Any Certificate Manager (ACM) Secure Sockets Layer/Transport Layer Security
   * (SSL/TLS) server certificate that's associated with a
   * <a>ServerCertificateConfiguration</a>. Used in a
   * <a>TLSInspectionConfiguration</a> for inspection of inbound traffic to your
   * firewall. You must request or import a SSL/TLS certificate into ACM for each
   * domain Network Firewall needs to decrypt and inspect. Network Firewall uses the
   * SSL/TLS certificates to decrypt specified inbound SSL/TLS traffic going to your
   * firewall. For information about working with certificates in Certificate
   * Manager, see <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/gs-acm-request-public.html">Request
   * a public certificate </a> or <a
   * href="https://docs.aws.amazon.com/acm/latest/userguide/import-certificate.html">Importing
   * certificates</a> in the <i>Certificate Manager User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ServerCertificate">AWS
   * API Reference</a></p>
   */
  class ServerCertificate
  {
  public:
    AWS_NETWORKFIREWALL_API ServerCertificate();
    AWS_NETWORKFIREWALL_API ServerCertificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API ServerCertificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificate& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificate& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Certificate Manager SSL/TLS server
     * certificate that's used for inbound SSL/TLS inspection.</p>
     */
    inline ServerCertificate& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
