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
   * <p>Contains metadata about an Certificate Manager certificate.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TlsCertificateData">AWS
   * API Reference</a></p>
   */
  class TlsCertificateData
  {
  public:
    AWS_NETWORKFIREWALL_API TlsCertificateData();
    AWS_NETWORKFIREWALL_API TlsCertificateData(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API TlsCertificateData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The serial number of the certificate.</p>
     */
    inline const Aws::String& GetCertificateSerial() const{ return m_certificateSerial; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline bool CertificateSerialHasBeenSet() const { return m_certificateSerialHasBeenSet; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetCertificateSerial(const Aws::String& value) { m_certificateSerialHasBeenSet = true; m_certificateSerial = value; }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetCertificateSerial(Aws::String&& value) { m_certificateSerialHasBeenSet = true; m_certificateSerial = std::move(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline void SetCertificateSerial(const char* value) { m_certificateSerialHasBeenSet = true; m_certificateSerial.assign(value); }

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateSerial(const Aws::String& value) { SetCertificateSerial(value); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateSerial(Aws::String&& value) { SetCertificateSerial(std::move(value)); return *this;}

    /**
     * <p>The serial number of the certificate.</p>
     */
    inline TlsCertificateData& WithCertificateSerial(const char* value) { SetCertificateSerial(value); return *this;}


    /**
     * <p>The status of the certificate.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the certificate.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the certificate.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the certificate.</p>
     */
    inline TlsCertificateData& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the certificate.</p>
     */
    inline TlsCertificateData& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the certificate.</p>
     */
    inline TlsCertificateData& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline TlsCertificateData& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline TlsCertificateData& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Contains details about the certificate status, including information about
     * certificate errors.</p>
     */
    inline TlsCertificateData& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_certificateSerial;
    bool m_certificateSerialHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
