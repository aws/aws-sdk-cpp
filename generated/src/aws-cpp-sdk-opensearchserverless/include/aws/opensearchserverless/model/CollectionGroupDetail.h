/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupCapacityLimits.h>
#include <aws/opensearchserverless/model/StandbyReplicas.h>
#include <aws/opensearchserverless/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchServerless {
namespace Model {

/**
 * <p>Details about a collection group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionGroupDetail">AWS
 * API Reference</a></p>
 */
class CollectionGroupDetail {
 public:
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupDetail() = default;
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the collection group.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CollectionGroupDetail& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the collection group.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CollectionGroupDetail& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

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
  CollectionGroupDetail& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether standby replicas are used for the collection group.</p>
   */
  inline StandbyReplicas GetStandbyReplicas() const { return m_standbyReplicas; }
  inline bool StandbyReplicasHasBeenSet() const { return m_standbyReplicasHasBeenSet; }
  inline void SetStandbyReplicas(StandbyReplicas value) {
    m_standbyReplicasHasBeenSet = true;
    m_standbyReplicas = value;
  }
  inline CollectionGroupDetail& WithStandbyReplicas(StandbyReplicas value) {
    SetStandbyReplicas(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the collection group.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CollectionGroupDetail& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of key-value pairs associated with the collection group.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CollectionGroupDetail& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CollectionGroupDetail& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Epoch time when the collection group was created.</p>
   */
  inline long long GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  inline void SetCreatedDate(long long value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = value;
  }
  inline CollectionGroupDetail& WithCreatedDate(long long value) {
    SetCreatedDate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capacity limits for the collection group, in OpenSearch Compute Units
   * (OCUs).</p>
   */
  inline const CollectionGroupCapacityLimits& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  CollectionGroupDetail& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of collections associated with the collection group.</p>
   */
  inline int GetNumberOfCollections() const { return m_numberOfCollections; }
  inline bool NumberOfCollectionsHasBeenSet() const { return m_numberOfCollectionsHasBeenSet; }
  inline void SetNumberOfCollections(int value) {
    m_numberOfCollectionsHasBeenSet = true;
    m_numberOfCollections = value;
  }
  inline CollectionGroupDetail& WithNumberOfCollections(int value) {
    SetNumberOfCollections(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  StandbyReplicas m_standbyReplicas{StandbyReplicas::NOT_SET};

  Aws::String m_description;

  Aws::Vector<Tag> m_tags;

  long long m_createdDate{0};

  CollectionGroupCapacityLimits m_capacityLimits;

  int m_numberOfCollections{0};
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_standbyReplicasHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
  bool m_numberOfCollectionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
