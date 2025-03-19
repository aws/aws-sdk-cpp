/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The VPN tunnel options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionOptionsTunnelOptionsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionOptionsTunnelOptionsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails() = default;
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionOptionsTunnelOptionsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds after which a Dead Peer Detection (DPD) timeout
     * occurs.</p>
     */
    inline int GetDpdTimeoutSeconds() const { return m_dpdTimeoutSeconds; }
    inline bool DpdTimeoutSecondsHasBeenSet() const { return m_dpdTimeoutSecondsHasBeenSet; }
    inline void SetDpdTimeoutSeconds(int value) { m_dpdTimeoutSecondsHasBeenSet = true; m_dpdTimeoutSeconds = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithDpdTimeoutSeconds(int value) { SetDpdTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet Key Exchange (IKE) versions that are permitted for the VPN
     * tunnel.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIkeVersions() const { return m_ikeVersions; }
    inline bool IkeVersionsHasBeenSet() const { return m_ikeVersionsHasBeenSet; }
    template<typename IkeVersionsT = Aws::Vector<Aws::String>>
    void SetIkeVersions(IkeVersionsT&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions = std::forward<IkeVersionsT>(value); }
    template<typename IkeVersionsT = Aws::Vector<Aws::String>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithIkeVersions(IkeVersionsT&& value) { SetIkeVersions(std::forward<IkeVersionsT>(value)); return *this;}
    template<typename IkeVersionsT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddIkeVersions(IkeVersionsT&& value) { m_ikeVersionsHasBeenSet = true; m_ikeVersions.emplace_back(std::forward<IkeVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const { return m_outsideIpAddress; }
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }
    template<typename OutsideIpAddressT = Aws::String>
    void SetOutsideIpAddress(OutsideIpAddressT&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::forward<OutsideIpAddressT>(value); }
    template<typename OutsideIpAddressT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithOutsideIpAddress(OutsideIpAddressT&& value) { SetOutsideIpAddress(std::forward<OutsideIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<int>& GetPhase1DhGroupNumbers() const { return m_phase1DhGroupNumbers; }
    inline bool Phase1DhGroupNumbersHasBeenSet() const { return m_phase1DhGroupNumbersHasBeenSet; }
    template<typename Phase1DhGroupNumbersT = Aws::Vector<int>>
    void SetPhase1DhGroupNumbers(Phase1DhGroupNumbersT&& value) { m_phase1DhGroupNumbersHasBeenSet = true; m_phase1DhGroupNumbers = std::forward<Phase1DhGroupNumbersT>(value); }
    template<typename Phase1DhGroupNumbersT = Aws::Vector<int>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1DhGroupNumbers(Phase1DhGroupNumbersT&& value) { SetPhase1DhGroupNumbers(std::forward<Phase1DhGroupNumbersT>(value)); return *this;}
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1DhGroupNumbers(int value) { m_phase1DhGroupNumbersHasBeenSet = true; m_phase1DhGroupNumbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase1EncryptionAlgorithms() const { return m_phase1EncryptionAlgorithms; }
    inline bool Phase1EncryptionAlgorithmsHasBeenSet() const { return m_phase1EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Aws::String>>
    void SetPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms = std::forward<Phase1EncryptionAlgorithmsT>(value); }
    template<typename Phase1EncryptionAlgorithmsT = Aws::Vector<Aws::String>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { SetPhase1EncryptionAlgorithms(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase1EncryptionAlgorithmsT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1EncryptionAlgorithms(Phase1EncryptionAlgorithmsT&& value) { m_phase1EncryptionAlgorithmsHasBeenSet = true; m_phase1EncryptionAlgorithms.emplace_back(std::forward<Phase1EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 1 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase1IntegrityAlgorithms() const { return m_phase1IntegrityAlgorithms; }
    inline bool Phase1IntegrityAlgorithmsHasBeenSet() const { return m_phase1IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Aws::String>>
    void SetPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms = std::forward<Phase1IntegrityAlgorithmsT>(value); }
    template<typename Phase1IntegrityAlgorithmsT = Aws::Vector<Aws::String>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { SetPhase1IntegrityAlgorithms(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase1IntegrityAlgorithmsT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase1IntegrityAlgorithms(Phase1IntegrityAlgorithmsT&& value) { m_phase1IntegrityAlgorithmsHasBeenSet = true; m_phase1IntegrityAlgorithms.emplace_back(std::forward<Phase1IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 1 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase1LifetimeSeconds() const { return m_phase1LifetimeSeconds; }
    inline bool Phase1LifetimeSecondsHasBeenSet() const { return m_phase1LifetimeSecondsHasBeenSet; }
    inline void SetPhase1LifetimeSeconds(int value) { m_phase1LifetimeSecondsHasBeenSet = true; m_phase1LifetimeSeconds = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase1LifetimeSeconds(int value) { SetPhase1LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted Diffie-Hellman group numbers for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<int>& GetPhase2DhGroupNumbers() const { return m_phase2DhGroupNumbers; }
    inline bool Phase2DhGroupNumbersHasBeenSet() const { return m_phase2DhGroupNumbersHasBeenSet; }
    template<typename Phase2DhGroupNumbersT = Aws::Vector<int>>
    void SetPhase2DhGroupNumbers(Phase2DhGroupNumbersT&& value) { m_phase2DhGroupNumbersHasBeenSet = true; m_phase2DhGroupNumbers = std::forward<Phase2DhGroupNumbersT>(value); }
    template<typename Phase2DhGroupNumbersT = Aws::Vector<int>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2DhGroupNumbers(Phase2DhGroupNumbersT&& value) { SetPhase2DhGroupNumbers(std::forward<Phase2DhGroupNumbersT>(value)); return *this;}
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2DhGroupNumbers(int value) { m_phase2DhGroupNumbersHasBeenSet = true; m_phase2DhGroupNumbers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted encryption algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase2EncryptionAlgorithms() const { return m_phase2EncryptionAlgorithms; }
    inline bool Phase2EncryptionAlgorithmsHasBeenSet() const { return m_phase2EncryptionAlgorithmsHasBeenSet; }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Aws::String>>
    void SetPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms = std::forward<Phase2EncryptionAlgorithmsT>(value); }
    template<typename Phase2EncryptionAlgorithmsT = Aws::Vector<Aws::String>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { SetPhase2EncryptionAlgorithms(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this;}
    template<typename Phase2EncryptionAlgorithmsT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2EncryptionAlgorithms(Phase2EncryptionAlgorithmsT&& value) { m_phase2EncryptionAlgorithmsHasBeenSet = true; m_phase2EncryptionAlgorithms.emplace_back(std::forward<Phase2EncryptionAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The permitted integrity algorithms for the VPN tunnel for phase 2 IKE
     * negotiations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPhase2IntegrityAlgorithms() const { return m_phase2IntegrityAlgorithms; }
    inline bool Phase2IntegrityAlgorithmsHasBeenSet() const { return m_phase2IntegrityAlgorithmsHasBeenSet; }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Aws::String>>
    void SetPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms = std::forward<Phase2IntegrityAlgorithmsT>(value); }
    template<typename Phase2IntegrityAlgorithmsT = Aws::Vector<Aws::String>>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { SetPhase2IntegrityAlgorithms(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this;}
    template<typename Phase2IntegrityAlgorithmsT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& AddPhase2IntegrityAlgorithms(Phase2IntegrityAlgorithmsT&& value) { m_phase2IntegrityAlgorithmsHasBeenSet = true; m_phase2IntegrityAlgorithms.emplace_back(std::forward<Phase2IntegrityAlgorithmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The lifetime for phase 2 of the IKE negotiation, in seconds.</p>
     */
    inline int GetPhase2LifetimeSeconds() const { return m_phase2LifetimeSeconds; }
    inline bool Phase2LifetimeSecondsHasBeenSet() const { return m_phase2LifetimeSecondsHasBeenSet; }
    inline void SetPhase2LifetimeSeconds(int value) { m_phase2LifetimeSecondsHasBeenSet = true; m_phase2LifetimeSeconds = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPhase2LifetimeSeconds(int value) { SetPhase2LifetimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preshared key to establish initial authentication between the virtual
     * private gateway and the customer gateway.</p>
     */
    inline const Aws::String& GetPreSharedKey() const { return m_preSharedKey; }
    inline bool PreSharedKeyHasBeenSet() const { return m_preSharedKeyHasBeenSet; }
    template<typename PreSharedKeyT = Aws::String>
    void SetPreSharedKey(PreSharedKeyT&& value) { m_preSharedKeyHasBeenSet = true; m_preSharedKey = std::forward<PreSharedKeyT>(value); }
    template<typename PreSharedKeyT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithPreSharedKey(PreSharedKeyT&& value) { SetPreSharedKey(std::forward<PreSharedKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of the rekey window, which is determined by
     * <code>RekeyMarginTimeSeconds</code> during which the rekey time is randomly
     * selected.</p>
     */
    inline int GetRekeyFuzzPercentage() const { return m_rekeyFuzzPercentage; }
    inline bool RekeyFuzzPercentageHasBeenSet() const { return m_rekeyFuzzPercentageHasBeenSet; }
    inline void SetRekeyFuzzPercentage(int value) { m_rekeyFuzzPercentageHasBeenSet = true; m_rekeyFuzzPercentage = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithRekeyFuzzPercentage(int value) { SetRekeyFuzzPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The margin time, in seconds, before the phase 2 lifetime expires, during
     * which the Amazon Web Services side of the VPN connection performs an IKE
     * rekey.</p>
     */
    inline int GetRekeyMarginTimeSeconds() const { return m_rekeyMarginTimeSeconds; }
    inline bool RekeyMarginTimeSecondsHasBeenSet() const { return m_rekeyMarginTimeSecondsHasBeenSet; }
    inline void SetRekeyMarginTimeSeconds(int value) { m_rekeyMarginTimeSecondsHasBeenSet = true; m_rekeyMarginTimeSeconds = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithRekeyMarginTimeSeconds(int value) { SetRekeyMarginTimeSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of packets in an IKE replay window.</p>
     */
    inline int GetReplayWindowSize() const { return m_replayWindowSize; }
    inline bool ReplayWindowSizeHasBeenSet() const { return m_replayWindowSizeHasBeenSet; }
    inline void SetReplayWindowSize(int value) { m_replayWindowSizeHasBeenSet = true; m_replayWindowSize = value; }
    inline AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithReplayWindowSize(int value) { SetReplayWindowSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The range of inside IPv4 addresses for the tunnel.</p>
     */
    inline const Aws::String& GetTunnelInsideCidr() const { return m_tunnelInsideCidr; }
    inline bool TunnelInsideCidrHasBeenSet() const { return m_tunnelInsideCidrHasBeenSet; }
    template<typename TunnelInsideCidrT = Aws::String>
    void SetTunnelInsideCidr(TunnelInsideCidrT&& value) { m_tunnelInsideCidrHasBeenSet = true; m_tunnelInsideCidr = std::forward<TunnelInsideCidrT>(value); }
    template<typename TunnelInsideCidrT = Aws::String>
    AwsEc2VpnConnectionOptionsTunnelOptionsDetails& WithTunnelInsideCidr(TunnelInsideCidrT&& value) { SetTunnelInsideCidr(std::forward<TunnelInsideCidrT>(value)); return *this;}
    ///@}
  private:

    int m_dpdTimeoutSeconds{0};
    bool m_dpdTimeoutSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_ikeVersions;
    bool m_ikeVersionsHasBeenSet = false;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

    Aws::Vector<int> m_phase1DhGroupNumbers;
    bool m_phase1DhGroupNumbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase1EncryptionAlgorithms;
    bool m_phase1EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase1IntegrityAlgorithms;
    bool m_phase1IntegrityAlgorithmsHasBeenSet = false;

    int m_phase1LifetimeSeconds{0};
    bool m_phase1LifetimeSecondsHasBeenSet = false;

    Aws::Vector<int> m_phase2DhGroupNumbers;
    bool m_phase2DhGroupNumbersHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase2EncryptionAlgorithms;
    bool m_phase2EncryptionAlgorithmsHasBeenSet = false;

    Aws::Vector<Aws::String> m_phase2IntegrityAlgorithms;
    bool m_phase2IntegrityAlgorithmsHasBeenSet = false;

    int m_phase2LifetimeSeconds{0};
    bool m_phase2LifetimeSecondsHasBeenSet = false;

    Aws::String m_preSharedKey;
    bool m_preSharedKeyHasBeenSet = false;

    int m_rekeyFuzzPercentage{0};
    bool m_rekeyFuzzPercentageHasBeenSet = false;

    int m_rekeyMarginTimeSeconds{0};
    bool m_rekeyMarginTimeSecondsHasBeenSet = false;

    int m_replayWindowSize{0};
    bool m_replayWindowSizeHasBeenSet = false;

    Aws::String m_tunnelInsideCidr;
    bool m_tunnelInsideCidrHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
