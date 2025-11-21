/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ProgramManagementAccountTypeSort.h>
#include <aws/partnercentral-channel/model/RevokeServicePeriodTypeSort.h>
#include <aws/partnercentral-channel/model/StartServicePeriodTypeSort.h>

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
 * <p>Type-specific sorting options for listing channel handshakes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListChannelHandshakesTypeSort">AWS
 * API Reference</a></p>
 */
class ListChannelHandshakesTypeSort {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeSort() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListChannelHandshakesTypeSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sorting options specific to start service period handshakes.</p>
   */
  inline const StartServicePeriodTypeSort& GetStartServicePeriodTypeSort() const { return m_startServicePeriodTypeSort; }
  inline bool StartServicePeriodTypeSortHasBeenSet() const { return m_startServicePeriodTypeSortHasBeenSet; }
  template <typename StartServicePeriodTypeSortT = StartServicePeriodTypeSort>
  void SetStartServicePeriodTypeSort(StartServicePeriodTypeSortT&& value) {
    m_startServicePeriodTypeSortHasBeenSet = true;
    m_startServicePeriodTypeSort = std::forward<StartServicePeriodTypeSortT>(value);
  }
  template <typename StartServicePeriodTypeSortT = StartServicePeriodTypeSort>
  ListChannelHandshakesTypeSort& WithStartServicePeriodTypeSort(StartServicePeriodTypeSortT&& value) {
    SetStartServicePeriodTypeSort(std::forward<StartServicePeriodTypeSortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sorting options specific to revoke service period handshakes.</p>
   */
  inline const RevokeServicePeriodTypeSort& GetRevokeServicePeriodTypeSort() const { return m_revokeServicePeriodTypeSort; }
  inline bool RevokeServicePeriodTypeSortHasBeenSet() const { return m_revokeServicePeriodTypeSortHasBeenSet; }
  template <typename RevokeServicePeriodTypeSortT = RevokeServicePeriodTypeSort>
  void SetRevokeServicePeriodTypeSort(RevokeServicePeriodTypeSortT&& value) {
    m_revokeServicePeriodTypeSortHasBeenSet = true;
    m_revokeServicePeriodTypeSort = std::forward<RevokeServicePeriodTypeSortT>(value);
  }
  template <typename RevokeServicePeriodTypeSortT = RevokeServicePeriodTypeSort>
  ListChannelHandshakesTypeSort& WithRevokeServicePeriodTypeSort(RevokeServicePeriodTypeSortT&& value) {
    SetRevokeServicePeriodTypeSort(std::forward<RevokeServicePeriodTypeSortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sorting options specific to program management account handshakes.</p>
   */
  inline const ProgramManagementAccountTypeSort& GetProgramManagementAccountTypeSort() const { return m_programManagementAccountTypeSort; }
  inline bool ProgramManagementAccountTypeSortHasBeenSet() const { return m_programManagementAccountTypeSortHasBeenSet; }
  template <typename ProgramManagementAccountTypeSortT = ProgramManagementAccountTypeSort>
  void SetProgramManagementAccountTypeSort(ProgramManagementAccountTypeSortT&& value) {
    m_programManagementAccountTypeSortHasBeenSet = true;
    m_programManagementAccountTypeSort = std::forward<ProgramManagementAccountTypeSortT>(value);
  }
  template <typename ProgramManagementAccountTypeSortT = ProgramManagementAccountTypeSort>
  ListChannelHandshakesTypeSort& WithProgramManagementAccountTypeSort(ProgramManagementAccountTypeSortT&& value) {
    SetProgramManagementAccountTypeSort(std::forward<ProgramManagementAccountTypeSortT>(value));
    return *this;
  }
  ///@}
 private:
  StartServicePeriodTypeSort m_startServicePeriodTypeSort;
  bool m_startServicePeriodTypeSortHasBeenSet = false;

  RevokeServicePeriodTypeSort m_revokeServicePeriodTypeSort;
  bool m_revokeServicePeriodTypeSortHasBeenSet = false;

  ProgramManagementAccountTypeSort m_programManagementAccountTypeSort;
  bool m_programManagementAccountTypeSortHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
