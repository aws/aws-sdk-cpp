/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeFilters.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeFilters.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeFilters.h>

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
 * <p>Type-specific filters for listing channel handshakes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListChannelHandshakesTypeFilters">AWS
 * API Reference</a></p>
 */
class ListChannelHandshakesTypeFilters {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeFilters() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters specific to start service period handshakes.</p>
   */
  inline const StartServicePeriodTypeFilters& GetStartServicePeriodTypeFilters() const { return m_startServicePeriodTypeFilters; }
  inline bool StartServicePeriodTypeFiltersHasBeenSet() const { return m_startServicePeriodTypeFiltersHasBeenSet; }
  template <typename StartServicePeriodTypeFiltersT = StartServicePeriodTypeFilters>
  void SetStartServicePeriodTypeFilters(StartServicePeriodTypeFiltersT&& value) {
    m_startServicePeriodTypeFiltersHasBeenSet = true;
    m_startServicePeriodTypeFilters = std::forward<StartServicePeriodTypeFiltersT>(value);
  }
  template <typename StartServicePeriodTypeFiltersT = StartServicePeriodTypeFilters>
  ListChannelHandshakesTypeFilters& WithStartServicePeriodTypeFilters(StartServicePeriodTypeFiltersT&& value) {
    SetStartServicePeriodTypeFilters(std::forward<StartServicePeriodTypeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters specific to revoke service period handshakes.</p>
   */
  inline const RevokeServicePeriodTypeFilters& GetRevokeServicePeriodTypeFilters() const { return m_revokeServicePeriodTypeFilters; }
  inline bool RevokeServicePeriodTypeFiltersHasBeenSet() const { return m_revokeServicePeriodTypeFiltersHasBeenSet; }
  template <typename RevokeServicePeriodTypeFiltersT = RevokeServicePeriodTypeFilters>
  void SetRevokeServicePeriodTypeFilters(RevokeServicePeriodTypeFiltersT&& value) {
    m_revokeServicePeriodTypeFiltersHasBeenSet = true;
    m_revokeServicePeriodTypeFilters = std::forward<RevokeServicePeriodTypeFiltersT>(value);
  }
  template <typename RevokeServicePeriodTypeFiltersT = RevokeServicePeriodTypeFilters>
  ListChannelHandshakesTypeFilters& WithRevokeServicePeriodTypeFilters(RevokeServicePeriodTypeFiltersT&& value) {
    SetRevokeServicePeriodTypeFilters(std::forward<RevokeServicePeriodTypeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters specific to program management account handshakes.</p>
   */
  inline const ProgramManagementAccountTypeFilters& GetProgramManagementAccountTypeFilters() const {
    return m_programManagementAccountTypeFilters;
  }
  inline bool ProgramManagementAccountTypeFiltersHasBeenSet() const { return m_programManagementAccountTypeFiltersHasBeenSet; }
  template <typename ProgramManagementAccountTypeFiltersT = ProgramManagementAccountTypeFilters>
  void SetProgramManagementAccountTypeFilters(ProgramManagementAccountTypeFiltersT&& value) {
    m_programManagementAccountTypeFiltersHasBeenSet = true;
    m_programManagementAccountTypeFilters = std::forward<ProgramManagementAccountTypeFiltersT>(value);
  }
  template <typename ProgramManagementAccountTypeFiltersT = ProgramManagementAccountTypeFilters>
  ListChannelHandshakesTypeFilters& WithProgramManagementAccountTypeFilters(ProgramManagementAccountTypeFiltersT&& value) {
    SetProgramManagementAccountTypeFilters(std::forward<ProgramManagementAccountTypeFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  StartServicePeriodTypeFilters m_startServicePeriodTypeFilters;
  bool m_startServicePeriodTypeFiltersHasBeenSet = false;

  RevokeServicePeriodTypeFilters m_revokeServicePeriodTypeFilters;
  bool m_revokeServicePeriodTypeFiltersHasBeenSet = false;

  ProgramManagementAccountTypeFilters m_programManagementAccountTypeFilters;
  bool m_programManagementAccountTypeFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
