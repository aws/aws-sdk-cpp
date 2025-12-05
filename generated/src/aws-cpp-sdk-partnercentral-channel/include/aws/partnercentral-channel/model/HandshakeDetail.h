/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountHandshakeDetail.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodHandshakeDetail.h>
#include <aws/partnercentral-channel/model/StartServicePeriodHandshakeDetail.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Contains detailed information about different types of
 * handshakes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/HandshakeDetail">AWS
 * API Reference</a></p>
 */
class HandshakeDetail {
 public:
  AWS_PARTNERCENTRALCHANNEL_API HandshakeDetail() = default;
  AWS_PARTNERCENTRALCHANNEL_API HandshakeDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API HandshakeDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details for a start service period handshake.</p>
   */
  inline const StartServicePeriodHandshakeDetail& GetStartServicePeriodHandshakeDetail() const {
    return m_startServicePeriodHandshakeDetail;
  }
  inline bool StartServicePeriodHandshakeDetailHasBeenSet() const { return m_startServicePeriodHandshakeDetailHasBeenSet; }
  template <typename StartServicePeriodHandshakeDetailT = StartServicePeriodHandshakeDetail>
  void SetStartServicePeriodHandshakeDetail(StartServicePeriodHandshakeDetailT&& value) {
    m_startServicePeriodHandshakeDetailHasBeenSet = true;
    m_startServicePeriodHandshakeDetail = std::forward<StartServicePeriodHandshakeDetailT>(value);
  }
  template <typename StartServicePeriodHandshakeDetailT = StartServicePeriodHandshakeDetail>
  HandshakeDetail& WithStartServicePeriodHandshakeDetail(StartServicePeriodHandshakeDetailT&& value) {
    SetStartServicePeriodHandshakeDetail(std::forward<StartServicePeriodHandshakeDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for a revoke service period handshake.</p>
   */
  inline const RevokeServicePeriodHandshakeDetail& GetRevokeServicePeriodHandshakeDetail() const {
    return m_revokeServicePeriodHandshakeDetail;
  }
  inline bool RevokeServicePeriodHandshakeDetailHasBeenSet() const { return m_revokeServicePeriodHandshakeDetailHasBeenSet; }
  template <typename RevokeServicePeriodHandshakeDetailT = RevokeServicePeriodHandshakeDetail>
  void SetRevokeServicePeriodHandshakeDetail(RevokeServicePeriodHandshakeDetailT&& value) {
    m_revokeServicePeriodHandshakeDetailHasBeenSet = true;
    m_revokeServicePeriodHandshakeDetail = std::forward<RevokeServicePeriodHandshakeDetailT>(value);
  }
  template <typename RevokeServicePeriodHandshakeDetailT = RevokeServicePeriodHandshakeDetail>
  HandshakeDetail& WithRevokeServicePeriodHandshakeDetail(RevokeServicePeriodHandshakeDetailT&& value) {
    SetRevokeServicePeriodHandshakeDetail(std::forward<RevokeServicePeriodHandshakeDetailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details for a program management account handshake.</p>
   */
  inline const ProgramManagementAccountHandshakeDetail& GetProgramManagementAccountHandshakeDetail() const {
    return m_programManagementAccountHandshakeDetail;
  }
  inline bool ProgramManagementAccountHandshakeDetailHasBeenSet() const { return m_programManagementAccountHandshakeDetailHasBeenSet; }
  template <typename ProgramManagementAccountHandshakeDetailT = ProgramManagementAccountHandshakeDetail>
  void SetProgramManagementAccountHandshakeDetail(ProgramManagementAccountHandshakeDetailT&& value) {
    m_programManagementAccountHandshakeDetailHasBeenSet = true;
    m_programManagementAccountHandshakeDetail = std::forward<ProgramManagementAccountHandshakeDetailT>(value);
  }
  template <typename ProgramManagementAccountHandshakeDetailT = ProgramManagementAccountHandshakeDetail>
  HandshakeDetail& WithProgramManagementAccountHandshakeDetail(ProgramManagementAccountHandshakeDetailT&& value) {
    SetProgramManagementAccountHandshakeDetail(std::forward<ProgramManagementAccountHandshakeDetailT>(value));
    return *this;
  }
  ///@}
 private:
  StartServicePeriodHandshakeDetail m_startServicePeriodHandshakeDetail;

  RevokeServicePeriodHandshakeDetail m_revokeServicePeriodHandshakeDetail;

  ProgramManagementAccountHandshakeDetail m_programManagementAccountHandshakeDetail;
  bool m_startServicePeriodHandshakeDetailHasBeenSet = false;
  bool m_revokeServicePeriodHandshakeDetailHasBeenSet = false;
  bool m_programManagementAccountHandshakeDetailHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
