/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupCapacityLimits.h>
#include <aws/opensearchserverless/model/StandbyReplicas.h>
#include <aws/opensearchserverless/model/Tag.h>

#include <utility>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {

/**
 */
class CreateCollectionGroupRequest : public OpenSearchServerlessRequest {
 public:
  AWS_OPENSEARCHSERVERLESS_API CreateCollectionGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCollectionGroup"; }

  AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

  AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the collection group.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateCollectionGroupRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether standby replicas should be used for a collection group.</p>
   */
  inline StandbyReplicas GetStandbyReplicas() const { return m_standbyReplicas; }
  inline bool StandbyReplicasHasBeenSet() const { return m_standbyReplicasHasBeenSet; }
  inline void SetStandbyReplicas(StandbyReplicas value) {
    m_standbyReplicasHasBeenSet = true;
    m_standbyReplicas = value;
  }
  inline CreateCollectionGroupRequest& WithStandbyReplicas(StandbyReplicas value) {
    SetStandbyReplicas(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the collection group.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateCollectionGroupRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An arbitrary set of tags (key–value pairs) to associate with the OpenSearch
   * Serverless collection group.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateCollectionGroupRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateCollectionGroupRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity limits for the collection group, in OpenSearch Compute Units
   * (OCUs). These limits control the maximum and minimum capacity for collections
   * within the group.</p>
   */
  inline const CollectionGroupCapacityLimits& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  CreateCollectionGroupRequest& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier to ensure idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCollectionGroupRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  StandbyReplicas m_standbyReplicas{StandbyReplicas::NOT_SET};

  Aws::String m_description;

  Aws::Vector<Tag> m_tags;

  CollectionGroupCapacityLimits m_capacityLimits;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_standbyReplicasHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
