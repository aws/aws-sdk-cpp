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
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of accepted routes.</p>
     */
    inline int GetAcceptedRouteCount() const { return m_acceptedRouteCount; }
    inline bool AcceptedRouteCountHasBeenSet() const { return m_acceptedRouteCountHasBeenSet; }
    inline void SetAcceptedRouteCount(int value) { m_acceptedRouteCountHasBeenSet = true; m_acceptedRouteCount = value; }
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithAcceptedRouteCount(int value) { SetAcceptedRouteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const { return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    template<typename CertificateArnT = Aws::String>
    void SetCertificateArn(CertificateArnT&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::forward<CertificateArnT>(value); }
    template<typename CertificateArnT = Aws::String>
    AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(CertificateArnT&& value) { SetCertificateArn(std::forward<CertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change in status.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastStatusChange() const { return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    template<typename LastStatusChangeT = Aws::String>
    void SetLastStatusChange(LastStatusChangeT&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::forward<LastStatusChangeT>(value); }
    template<typename LastStatusChangeT = Aws::String>
    AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(LastStatusChangeT&& value) { SetLastStatusChange(std::forward<LastStatusChangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const { return m_outsideIpAddress; }
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }
    template<typename OutsideIpAddressT = Aws::String>
    void SetOutsideIpAddress(OutsideIpAddressT&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::forward<OutsideIpAddressT>(value); }
    template<typename OutsideIpAddressT = Aws::String>
    AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(OutsideIpAddressT&& value) { SetOutsideIpAddress(std::forward<OutsideIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    int m_acceptedRouteCount{0};
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
