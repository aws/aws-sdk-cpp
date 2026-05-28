/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AssociatedSystem.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class ImportAppRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API ImportAppRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ImportApp"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetV1AppArn() const { return m_v1AppArn; }
  inline bool V1AppArnHasBeenSet() const { return m_v1AppArnHasBeenSet; }
  template <typename V1AppArnT = Aws::String>
  void SetV1AppArn(V1AppArnT&& value) {
    m_v1AppArnHasBeenSet = true;
    m_v1AppArn = std::forward<V1AppArnT>(value);
  }
  template <typename V1AppArnT = Aws::String>
  ImportAppRequest& WithV1AppArn(V1AppArnT&& value) {
    SetV1AppArn(std::forward<V1AppArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  ImportAppRequest& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
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
  ImportAppRequest& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to skip manually added resources during import.</p>
   */
  inline bool GetSkipManuallyAddedResources() const { return m_skipManuallyAddedResources; }
  inline bool SkipManuallyAddedResourcesHasBeenSet() const { return m_skipManuallyAddedResourcesHasBeenSet; }
  inline void SetSkipManuallyAddedResources(bool value) {
    m_skipManuallyAddedResourcesHasBeenSet = true;
    m_skipManuallyAddedResources = value;
  }
  inline ImportAppRequest& WithSkipManuallyAddedResources(bool value) {
    SetSkipManuallyAddedResources(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The systems to associate with the imported service.</p>
   */
  inline const Aws::Vector<AssociatedSystem>& GetAssociatedSystems() const { return m_associatedSystems; }
  inline bool AssociatedSystemsHasBeenSet() const { return m_associatedSystemsHasBeenSet; }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  void SetAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems = std::forward<AssociatedSystemsT>(value);
  }
  template <typename AssociatedSystemsT = Aws::Vector<AssociatedSystem>>
  ImportAppRequest& WithAssociatedSystems(AssociatedSystemsT&& value) {
    SetAssociatedSystems(std::forward<AssociatedSystemsT>(value));
    return *this;
  }
  template <typename AssociatedSystemsT = AssociatedSystem>
  ImportAppRequest& AddAssociatedSystems(AssociatedSystemsT&& value) {
    m_associatedSystemsHasBeenSet = true;
    m_associatedSystems.emplace_back(std::forward<AssociatedSystemsT>(value));
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
  ImportAppRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ImportAppRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
  ImportAppRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_v1AppArn;

  Aws::String m_policyArn;

  Aws::String m_kmsKeyId;

  bool m_skipManuallyAddedResources{false};

  Aws::Vector<AssociatedSystem> m_associatedSystems;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_v1AppArnHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_skipManuallyAddedResourcesHasBeenSet = false;
  bool m_associatedSystemsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
