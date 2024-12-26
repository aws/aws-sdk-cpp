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
   * <p>Information about the VPN tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionVgwTelemetryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionVgwTelemetryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of accepted routes.</p>
     */
    inline int GetAcceptedRouteCount() const{ return m_acceptedRouteCount; }
    inline bool AcceptedRouteCountHasBeenSet() const { return m_acceptedRouteCountHasBeenSet; }
    inline void SetAcceptedRouteCount(int value) { m_acceptedRouteCountHasBeenSet = true; m_acceptedRouteCount = value; }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithAcceptedRouteCount(int value) { SetAcceptedRouteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change in status.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastStatusChange() const{ return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    inline void SetLastStatusChange(const Aws::String& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }
    inline void SetLastStatusChange(Aws::String&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }
    inline void SetLastStatusChange(const char* value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange.assign(value); }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(const Aws::String& value) { SetLastStatusChange(value); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(Aws::String&& value) { SetLastStatusChange(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(const char* value) { SetLastStatusChange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const{ return m_outsideIpAddress; }
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }
    inline void SetOutsideIpAddress(const Aws::String& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = value; }
    inline void SetOutsideIpAddress(Aws::String&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::move(value); }
    inline void SetOutsideIpAddress(const char* value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress.assign(value); }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    int m_acceptedRouteCount;
    bool m_acceptedRouteCountHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet = false;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
