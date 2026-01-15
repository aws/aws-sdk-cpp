/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionGroupCapacityLimits.h>

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
 * <p>Summary information about a collection group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionGroupSummary">AWS
 * API Reference</a></p>
 */
class CollectionGroupSummary {
 public:
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupSummary() = default;
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CollectionGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CollectionGroupSummary& WithId(IdT&& value) {
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
  CollectionGroupSummary& WithArn(ArnT&& value) {
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
  CollectionGroupSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of collections within the collection group.</p>
   */
  inline int GetNumberOfCollections() const { return m_numberOfCollections; }
  inline bool NumberOfCollectionsHasBeenSet() const { return m_numberOfCollectionsHasBeenSet; }
  inline void SetNumberOfCollections(int value) {
    m_numberOfCollectionsHasBeenSet = true;
    m_numberOfCollections = value;
  }
  inline CollectionGroupSummary& WithNumberOfCollections(int value) {
    SetNumberOfCollections(value);
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
  inline CollectionGroupSummary& WithCreatedDate(long long value) {
    SetCreatedDate(value);
    return *this;
  }
  ///@}

  ///@{

  inline const CollectionGroupCapacityLimits& GetCapacityLimits() const { return m_capacityLimits; }
  inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  void SetCapacityLimits(CapacityLimitsT&& value) {
    m_capacityLimitsHasBeenSet = true;
    m_capacityLimits = std::forward<CapacityLimitsT>(value);
  }
  template <typename CapacityLimitsT = CollectionGroupCapacityLimits>
  CollectionGroupSummary& WithCapacityLimits(CapacityLimitsT&& value) {
    SetCapacityLimits(std::forward<CapacityLimitsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_name;

  int m_numberOfCollections{0};

  long long m_createdDate{0};

  CollectionGroupCapacityLimits m_capacityLimits;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_numberOfCollectionsHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_capacityLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
