/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DisasterRecoverySource.h>
#include <aws/resiliencehubv2/model/SloSource.h>
#include <aws/resiliencehubv2/model/TargetSource.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Contains the effective resilience policy values for a service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/EffectivePolicyValues">AWS
 * API Reference</a></p>
 */
class EffectivePolicyValues {
 public:
  AWS_RESILIENCEHUBV2_API EffectivePolicyValues() = default;
  AWS_RESILIENCEHUBV2_API EffectivePolicyValues(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API EffectivePolicyValues& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The effective availability SLO value for the service.</p>
   */
  inline const SloSource& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = SloSource>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = SloSource>
  EffectivePolicyValues& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-AZ RTO value for the service, in minutes.</p>
   */
  inline const TargetSource& GetMultiAzRto() const { return m_multiAzRto; }
  inline bool MultiAzRtoHasBeenSet() const { return m_multiAzRtoHasBeenSet; }
  template <typename MultiAzRtoT = TargetSource>
  void SetMultiAzRto(MultiAzRtoT&& value) {
    m_multiAzRtoHasBeenSet = true;
    m_multiAzRto = std::forward<MultiAzRtoT>(value);
  }
  template <typename MultiAzRtoT = TargetSource>
  EffectivePolicyValues& WithMultiAzRto(MultiAzRtoT&& value) {
    SetMultiAzRto(std::forward<MultiAzRtoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-AZ RPO value for the service, in minutes.</p>
   */
  inline const TargetSource& GetMultiAzRpo() const { return m_multiAzRpo; }
  inline bool MultiAzRpoHasBeenSet() const { return m_multiAzRpoHasBeenSet; }
  template <typename MultiAzRpoT = TargetSource>
  void SetMultiAzRpo(MultiAzRpoT&& value) {
    m_multiAzRpoHasBeenSet = true;
    m_multiAzRpo = std::forward<MultiAzRpoT>(value);
  }
  template <typename MultiAzRpoT = TargetSource>
  EffectivePolicyValues& WithMultiAzRpo(MultiAzRpoT&& value) {
    SetMultiAzRpo(std::forward<MultiAzRpoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-AZ disaster recovery approach for the service.</p>
   */
  inline const DisasterRecoverySource& GetMultiAzDrApproach() const { return m_multiAzDrApproach; }
  inline bool MultiAzDrApproachHasBeenSet() const { return m_multiAzDrApproachHasBeenSet; }
  template <typename MultiAzDrApproachT = DisasterRecoverySource>
  void SetMultiAzDrApproach(MultiAzDrApproachT&& value) {
    m_multiAzDrApproachHasBeenSet = true;
    m_multiAzDrApproach = std::forward<MultiAzDrApproachT>(value);
  }
  template <typename MultiAzDrApproachT = DisasterRecoverySource>
  EffectivePolicyValues& WithMultiAzDrApproach(MultiAzDrApproachT&& value) {
    SetMultiAzDrApproach(std::forward<MultiAzDrApproachT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-Region RTO value for the service, in minutes.</p>
   */
  inline const TargetSource& GetMultiRegionRto() const { return m_multiRegionRto; }
  inline bool MultiRegionRtoHasBeenSet() const { return m_multiRegionRtoHasBeenSet; }
  template <typename MultiRegionRtoT = TargetSource>
  void SetMultiRegionRto(MultiRegionRtoT&& value) {
    m_multiRegionRtoHasBeenSet = true;
    m_multiRegionRto = std::forward<MultiRegionRtoT>(value);
  }
  template <typename MultiRegionRtoT = TargetSource>
  EffectivePolicyValues& WithMultiRegionRto(MultiRegionRtoT&& value) {
    SetMultiRegionRto(std::forward<MultiRegionRtoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-Region RPO value for the service, in minutes.</p>
   */
  inline const TargetSource& GetMultiRegionRpo() const { return m_multiRegionRpo; }
  inline bool MultiRegionRpoHasBeenSet() const { return m_multiRegionRpoHasBeenSet; }
  template <typename MultiRegionRpoT = TargetSource>
  void SetMultiRegionRpo(MultiRegionRpoT&& value) {
    m_multiRegionRpoHasBeenSet = true;
    m_multiRegionRpo = std::forward<MultiRegionRpoT>(value);
  }
  template <typename MultiRegionRpoT = TargetSource>
  EffectivePolicyValues& WithMultiRegionRpo(MultiRegionRpoT&& value) {
    SetMultiRegionRpo(std::forward<MultiRegionRpoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective multi-Region disaster recovery approach for the service.</p>
   */
  inline const DisasterRecoverySource& GetMultiRegionDrApproach() const { return m_multiRegionDrApproach; }
  inline bool MultiRegionDrApproachHasBeenSet() const { return m_multiRegionDrApproachHasBeenSet; }
  template <typename MultiRegionDrApproachT = DisasterRecoverySource>
  void SetMultiRegionDrApproach(MultiRegionDrApproachT&& value) {
    m_multiRegionDrApproachHasBeenSet = true;
    m_multiRegionDrApproach = std::forward<MultiRegionDrApproachT>(value);
  }
  template <typename MultiRegionDrApproachT = DisasterRecoverySource>
  EffectivePolicyValues& WithMultiRegionDrApproach(MultiRegionDrApproachT&& value) {
    SetMultiRegionDrApproach(std::forward<MultiRegionDrApproachT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective data recovery time between backups value for the service.</p>
   */
  inline const TargetSource& GetDataRecoveryTimeBetweenBackups() const { return m_dataRecoveryTimeBetweenBackups; }
  inline bool DataRecoveryTimeBetweenBackupsHasBeenSet() const { return m_dataRecoveryTimeBetweenBackupsHasBeenSet; }
  template <typename DataRecoveryTimeBetweenBackupsT = TargetSource>
  void SetDataRecoveryTimeBetweenBackups(DataRecoveryTimeBetweenBackupsT&& value) {
    m_dataRecoveryTimeBetweenBackupsHasBeenSet = true;
    m_dataRecoveryTimeBetweenBackups = std::forward<DataRecoveryTimeBetweenBackupsT>(value);
  }
  template <typename DataRecoveryTimeBetweenBackupsT = TargetSource>
  EffectivePolicyValues& WithDataRecoveryTimeBetweenBackups(DataRecoveryTimeBetweenBackupsT&& value) {
    SetDataRecoveryTimeBetweenBackups(std::forward<DataRecoveryTimeBetweenBackupsT>(value));
    return *this;
  }
  ///@}
 private:
  SloSource m_availabilitySlo;

  TargetSource m_multiAzRto;

  TargetSource m_multiAzRpo;

  DisasterRecoverySource m_multiAzDrApproach;

  TargetSource m_multiRegionRto;

  TargetSource m_multiRegionRpo;

  DisasterRecoverySource m_multiRegionDrApproach;

  TargetSource m_dataRecoveryTimeBetweenBackups;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzRtoHasBeenSet = false;
  bool m_multiAzRpoHasBeenSet = false;
  bool m_multiAzDrApproachHasBeenSet = false;
  bool m_multiRegionRtoHasBeenSet = false;
  bool m_multiRegionRpoHasBeenSet = false;
  bool m_multiRegionDrApproachHasBeenSet = false;
  bool m_dataRecoveryTimeBetweenBackupsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
