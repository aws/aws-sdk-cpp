/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AvailabilitySlo.h>
#include <aws/resiliencehubv2/model/DataRecoveryTargets.h>
#include <aws/resiliencehubv2/model/MultiAzTargets.h>
#include <aws/resiliencehubv2/model/MultiRegionTargets.h>

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
 * <p>Contains summary information about a resilience policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PolicySummary">AWS
 * API Reference</a></p>
 */
class PolicySummary {
 public:
  AWS_RESILIENCEHUBV2_API PolicySummary() = default;
  AWS_RESILIENCEHUBV2_API PolicySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  PolicySummary& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  PolicySummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability SLO defined in the policy.</p>
   */
  inline const AvailabilitySlo& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = AvailabilitySlo>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = AvailabilitySlo>
  PolicySummary& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-AZ disaster recovery targets defined in the policy.</p>
   */
  inline const MultiAzTargets& GetMultiAz() const { return m_multiAz; }
  inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
  template <typename MultiAzT = MultiAzTargets>
  void SetMultiAz(MultiAzT&& value) {
    m_multiAzHasBeenSet = true;
    m_multiAz = std::forward<MultiAzT>(value);
  }
  template <typename MultiAzT = MultiAzTargets>
  PolicySummary& WithMultiAz(MultiAzT&& value) {
    SetMultiAz(std::forward<MultiAzT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-Region disaster recovery targets defined in the policy.</p>
   */
  inline const MultiRegionTargets& GetMultiRegion() const { return m_multiRegion; }
  inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
  template <typename MultiRegionT = MultiRegionTargets>
  void SetMultiRegion(MultiRegionT&& value) {
    m_multiRegionHasBeenSet = true;
    m_multiRegion = std::forward<MultiRegionT>(value);
  }
  template <typename MultiRegionT = MultiRegionTargets>
  PolicySummary& WithMultiRegion(MultiRegionT&& value) {
    SetMultiRegion(std::forward<MultiRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data recovery targets defined in the policy.</p>
   */
  inline const DataRecoveryTargets& GetDataRecovery() const { return m_dataRecovery; }
  inline bool DataRecoveryHasBeenSet() const { return m_dataRecoveryHasBeenSet; }
  template <typename DataRecoveryT = DataRecoveryTargets>
  void SetDataRecovery(DataRecoveryT&& value) {
    m_dataRecoveryHasBeenSet = true;
    m_dataRecovery = std::forward<DataRecoveryT>(value);
  }
  template <typename DataRecoveryT = DataRecoveryTargets>
  PolicySummary& WithDataRecovery(DataRecoveryT&& value) {
    SetDataRecovery(std::forward<DataRecoveryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of services associated with this policy.</p>
   */
  inline int GetAssociatedServiceCount() const { return m_associatedServiceCount; }
  inline bool AssociatedServiceCountHasBeenSet() const { return m_associatedServiceCountHasBeenSet; }
  inline void SetAssociatedServiceCount(int value) {
    m_associatedServiceCountHasBeenSet = true;
    m_associatedServiceCount = value;
  }
  inline PolicySummary& WithAssociatedServiceCount(int value) {
    SetAssociatedServiceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  PolicySummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the policy was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PolicySummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyArn;

  Aws::String m_name;

  AvailabilitySlo m_availabilitySlo;

  MultiAzTargets m_multiAz;

  MultiRegionTargets m_multiRegion;

  DataRecoveryTargets m_dataRecovery;

  int m_associatedServiceCount{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_policyArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzHasBeenSet = false;
  bool m_multiRegionHasBeenSet = false;
  bool m_dataRecoveryHasBeenSet = false;
  bool m_associatedServiceCountHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
