/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Represents a resilience policy that defines availability and disaster
 * recovery requirements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Policy">AWS
 * API Reference</a></p>
 */
class Policy {
 public:
  AWS_RESILIENCEHUBV2_API Policy() = default;
  AWS_RESILIENCEHUBV2_API Policy(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Policy& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  Policy& WithPolicyArn(PolicyArnT&& value) {
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
  Policy& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
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
  Policy& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  Policy& WithAvailabilitySlo(AvailabilitySloT&& value) {
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
  Policy& WithMultiAz(MultiAzT&& value) {
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
  Policy& WithMultiRegion(MultiRegionT&& value) {
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
  Policy& WithDataRecovery(DataRecoveryT&& value) {
    SetDataRecovery(std::forward<DataRecoveryT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  Policy& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  Policy& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  Policy& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
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
  inline Policy& WithAssociatedServiceCount(int value) {
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
  Policy& WithCreatedAt(CreatedAtT&& value) {
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
  Policy& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_policyArn;

  Aws::String m_name;

  Aws::String m_description;

  AvailabilitySlo m_availabilitySlo;

  MultiAzTargets m_multiAz;

  MultiRegionTargets m_multiRegion;

  DataRecoveryTargets m_dataRecovery;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  int m_associatedServiceCount{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_policyArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzHasBeenSet = false;
  bool m_multiRegionHasBeenSet = false;
  bool m_dataRecoveryHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_associatedServiceCountHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
