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
#include <aws/resiliencehubv2/model/MultiAzDisasterRecoveryApproach.h>
#include <aws/resiliencehubv2/model/MultiRegionDisasterRecoveryApproach.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class ImportPolicyRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API ImportPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportPolicy"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetV1PolicyArn() const { return m_v1PolicyArn; }
  inline bool V1PolicyArnHasBeenSet() const { return m_v1PolicyArnHasBeenSet; }
  template <typename V1PolicyArnT = Aws::String>
  void SetV1PolicyArn(V1PolicyArnT&& value) {
    m_v1PolicyArnHasBeenSet = true;
    m_v1PolicyArn = std::forward<V1PolicyArnT>(value);
  }
  template <typename V1PolicyArnT = Aws::String>
  ImportPolicyRequest& WithV1PolicyArn(V1PolicyArnT&& value) {
    SetV1PolicyArn(std::forward<V1PolicyArnT>(value));
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
  ImportPolicyRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The availability SLO to set on the imported policy.</p>
   */
  inline const AvailabilitySlo& GetAvailabilitySlo() const { return m_availabilitySlo; }
  inline bool AvailabilitySloHasBeenSet() const { return m_availabilitySloHasBeenSet; }
  template <typename AvailabilitySloT = AvailabilitySlo>
  void SetAvailabilitySlo(AvailabilitySloT&& value) {
    m_availabilitySloHasBeenSet = true;
    m_availabilitySlo = std::forward<AvailabilitySloT>(value);
  }
  template <typename AvailabilitySloT = AvailabilitySlo>
  ImportPolicyRequest& WithAvailabilitySlo(AvailabilitySloT&& value) {
    SetAvailabilitySlo(std::forward<AvailabilitySloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-AZ disaster recovery approach for the imported policy.</p>
   */
  inline MultiAzDisasterRecoveryApproach GetMultiAzDisasterRecoveryApproach() const { return m_multiAzDisasterRecoveryApproach; }
  inline bool MultiAzDisasterRecoveryApproachHasBeenSet() const { return m_multiAzDisasterRecoveryApproachHasBeenSet; }
  inline void SetMultiAzDisasterRecoveryApproach(MultiAzDisasterRecoveryApproach value) {
    m_multiAzDisasterRecoveryApproachHasBeenSet = true;
    m_multiAzDisasterRecoveryApproach = value;
  }
  inline ImportPolicyRequest& WithMultiAzDisasterRecoveryApproach(MultiAzDisasterRecoveryApproach value) {
    SetMultiAzDisasterRecoveryApproach(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The multi-Region disaster recovery approach for the imported policy.</p>
   */
  inline MultiRegionDisasterRecoveryApproach GetMultiRegionDisasterRecoveryApproach() const {
    return m_multiRegionDisasterRecoveryApproach;
  }
  inline bool MultiRegionDisasterRecoveryApproachHasBeenSet() const { return m_multiRegionDisasterRecoveryApproachHasBeenSet; }
  inline void SetMultiRegionDisasterRecoveryApproach(MultiRegionDisasterRecoveryApproach value) {
    m_multiRegionDisasterRecoveryApproachHasBeenSet = true;
    m_multiRegionDisasterRecoveryApproach = value;
  }
  inline ImportPolicyRequest& WithMultiRegionDisasterRecoveryApproach(MultiRegionDisasterRecoveryApproach value) {
    SetMultiRegionDisasterRecoveryApproach(value);
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
  ImportPolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ImportPolicyRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  ImportPolicyRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_v1PolicyArn;

  Aws::String m_kmsKeyId;

  AvailabilitySlo m_availabilitySlo;

  MultiAzDisasterRecoveryApproach m_multiAzDisasterRecoveryApproach{MultiAzDisasterRecoveryApproach::NOT_SET};

  MultiRegionDisasterRecoveryApproach m_multiRegionDisasterRecoveryApproach{MultiRegionDisasterRecoveryApproach::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_v1PolicyArnHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_availabilitySloHasBeenSet = false;
  bool m_multiAzDisasterRecoveryApproachHasBeenSet = false;
  bool m_multiRegionDisasterRecoveryApproachHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
