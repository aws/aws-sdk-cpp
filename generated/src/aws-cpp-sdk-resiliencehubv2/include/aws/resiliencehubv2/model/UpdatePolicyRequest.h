/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AvailabilitySlo.h>
#include <aws/resiliencehubv2/model/DataRecoveryTargets.h>
#include <aws/resiliencehubv2/model/MultiAzTargets.h>
#include <aws/resiliencehubv2/model/MultiRegionTargets.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class UpdatePolicyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API UpdatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePolicy"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  UpdatePolicyRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdatePolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated availability SLO for the policy.</p>
   */
  inline const AvailabilitySlo& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = AvailabilitySlo>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = AvailabilitySlo>
  UpdatePolicyRequest& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated multi-AZ disaster recovery targets for the policy.</p>
   */
  inline const MultiAzTargets& GetMultiAz() const { return m_multiAz; }
  inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
  template <typename MultiAzT = MultiAzTargets>
  void SetMultiAz(MultiAzT&& value) {
    m_multiAzHasBeenSet = true;
    m_multiAz = std::forward<MultiAzT>(value);
  }
  template <typename MultiAzT = MultiAzTargets>
  UpdatePolicyRequest& WithMultiAz(MultiAzT&& value) {
    SetMultiAz(std::forward<MultiAzT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated multi-Region disaster recovery targets for the policy.</p>
   */
  inline const MultiRegionTargets& GetMultiRegion() const { return m_multiRegion; }
  inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
  template <typename MultiRegionT = MultiRegionTargets>
  void SetMultiRegion(MultiRegionT&& value) {
    m_multiRegionHasBeenSet = true;
    m_multiRegion = std::forward<MultiRegionT>(value);
  }
  template <typename MultiRegionT = MultiRegionTargets>
  UpdatePolicyRequest& WithMultiRegion(MultiRegionT&& value) {
    SetMultiRegion(std::forward<MultiRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated data recovery targets for the policy.</p>
   */
  inline const DataRecoveryTargets& GetDataRecovery() const { return m_dataRecovery; }
  inline bool DataRecoveryHasBeenSet() const { return m_dataRecoveryHasBeenSet; }
  template <typename DataRecoveryT = DataRecoveryTargets>
  void SetDataRecovery(DataRecoveryT&& value) {
    m_dataRecoveryHasBeenSet = true;
    m_dataRecovery = std::forward<DataRecoveryT>(value);
  }
  template <typename DataRecoveryT = DataRecoveryTargets>
  UpdatePolicyRequest& WithDataRecovery(DataRecoveryT&& value) {
    SetDataRecovery(std::forward<DataRecoveryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyArn;

  Aws::String m_description;

  AvailabilitySlo m_availabilitySlo;

  MultiAzTargets m_multiAz;

  MultiRegionTargets m_multiRegion;

  DataRecoveryTargets m_dataRecovery;
  bool m_policyArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzHasBeenSet = false;
  bool m_multiRegionHasBeenSet = false;
  bool m_dataRecoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
