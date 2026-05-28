/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreatePolicyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API CreatePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePolicy"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreatePolicyRequest& WithName(NameT&& value) {
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
  CreatePolicyRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability SLO for the resilience policy.</p>
   */
  inline const AvailabilitySlo& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = AvailabilitySlo>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = AvailabilitySlo>
  CreatePolicyRequest& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-AZ disaster recovery targets for the resilience policy.</p>
   */
  inline const MultiAzTargets& GetMultiAz() const { return m_multiAz; }
  inline bool MultiAzHasBeenSet() const { return m_multiAzHasBeenSet; }
  template <typename MultiAzT = MultiAzTargets>
  void SetMultiAz(MultiAzT&& value) {
    m_multiAzHasBeenSet = true;
    m_multiAz = std::forward<MultiAzT>(value);
  }
  template <typename MultiAzT = MultiAzTargets>
  CreatePolicyRequest& WithMultiAz(MultiAzT&& value) {
    SetMultiAz(std::forward<MultiAzT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-Region disaster recovery targets for the resilience policy.</p>
   */
  inline const MultiRegionTargets& GetMultiRegion() const { return m_multiRegion; }
  inline bool MultiRegionHasBeenSet() const { return m_multiRegionHasBeenSet; }
  template <typename MultiRegionT = MultiRegionTargets>
  void SetMultiRegion(MultiRegionT&& value) {
    m_multiRegionHasBeenSet = true;
    m_multiRegion = std::forward<MultiRegionT>(value);
  }
  template <typename MultiRegionT = MultiRegionTargets>
  CreatePolicyRequest& WithMultiRegion(MultiRegionT&& value) {
    SetMultiRegion(std::forward<MultiRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data recovery targets for the resilience policy.</p>
   */
  inline const DataRecoveryTargets& GetDataRecovery() const { return m_dataRecovery; }
  inline bool DataRecoveryHasBeenSet() const { return m_dataRecoveryHasBeenSet; }
  template <typename DataRecoveryT = DataRecoveryTargets>
  void SetDataRecovery(DataRecoveryT&& value) {
    m_dataRecoveryHasBeenSet = true;
    m_dataRecovery = std::forward<DataRecoveryT>(value);
  }
  template <typename DataRecoveryT = DataRecoveryTargets>
  CreatePolicyRequest& WithDataRecovery(DataRecoveryT&& value) {
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
  CreatePolicyRequest& WithKmsKeyId(KmsKeyIdT&& value) {
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
  CreatePolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreatePolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_description;

  AvailabilitySlo m_availabilitySlo;

  MultiAzTargets m_multiAz;

  MultiRegionTargets m_multiRegion;

  DataRecoveryTargets m_dataRecovery;

  Aws::String m_kmsKeyId;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzHasBeenSet = false;
  bool m_multiRegionHasBeenSet = false;
  bool m_dataRecoveryHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
