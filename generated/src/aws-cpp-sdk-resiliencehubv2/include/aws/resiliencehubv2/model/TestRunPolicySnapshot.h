/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>A snapshot of the resilience policy captured onto a test run from the service
 * when the run was started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunPolicySnapshot">AWS
 * API Reference</a></p>
 */
class TestRunPolicySnapshot {
 public:
  AWS_RESILIENCEHUBV2_API TestRunPolicySnapshot() = default;
  AWS_RESILIENCEHUBV2_API TestRunPolicySnapshot(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunPolicySnapshot& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the policy.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  TestRunPolicySnapshot& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TestRunPolicySnapshot& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability SLO targets.</p>
   */
  inline const AvailabilitySlo& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = AvailabilitySlo>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = AvailabilitySlo>
  TestRunPolicySnapshot& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-AZ resilience targets.</p>
   */
  inline const MultiAzTargets& GetMultiAz() const { return m_multiAz; }
  inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
  template <typename MultiAzT = MultiAzTargets>
  void SetMultiAz(MultiAzT&& value) {
    m_multiAzHasBeenSet = true;
    m_multiAz = std::forward<MultiAzT>(value);
  }
  template <typename MultiAzT = MultiAzTargets>
  TestRunPolicySnapshot& WithMultiAz(MultiAzT&& value) {
    SetMultiAz(std::forward<MultiAzT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-Region resilience targets.</p>
   */
  inline const MultiRegionTargets& GetMultiRegion() const { return m_multiRegion; }
  inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
  template <typename MultiRegionT = MultiRegionTargets>
  void SetMultiRegion(MultiRegionT&& value) {
    m_multiRegionHasBeenSet = true;
    m_multiRegion = std::forward<MultiRegionT>(value);
  }
  template <typename MultiRegionT = MultiRegionTargets>
  TestRunPolicySnapshot& WithMultiRegion(MultiRegionT&& value) {
    SetMultiRegion(std::forward<MultiRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data recovery targets.</p>
   */
  inline const DataRecoveryTargets& GetDataRecovery() const { return m_dataRecovery; }
  inline bool DataRecoveryHasBeenSet() const { return m_dataRecoveryHasBeenSet; }
  template <typename DataRecoveryT = DataRecoveryTargets>
  void SetDataRecovery(DataRecoveryT&& value) {
    m_dataRecoveryHasBeenSet = true;
    m_dataRecovery = std::forward<DataRecoveryT>(value);
  }
  template <typename DataRecoveryT = DataRecoveryTargets>
  TestRunPolicySnapshot& WithDataRecovery(DataRecoveryT&& value) {
    SetDataRecovery(std::forward<DataRecoveryT>(value));
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
  bool m_policyArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzHasBeenSet = false;
  bool m_multiRegionHasBeenSet = false;
  bool m_dataRecoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
