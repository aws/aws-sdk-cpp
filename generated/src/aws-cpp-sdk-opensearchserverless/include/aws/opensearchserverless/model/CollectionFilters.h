/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CollectionStatus.h>

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
 * <p>A list of filter keys that you can use for LIST, UPDATE, and DELETE requests
 * to OpenSearch Serverless collections.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/CollectionFilters">AWS
 * API Reference</a></p>
 */
class CollectionFilters {
 public:
  AWS_OPENSEARCHSERVERLESS_API CollectionFilters() = default;
  AWS_OPENSEARCHSERVERLESS_API CollectionFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API CollectionFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the collection.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CollectionFilters& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the collection.</p>
   */
  inline CollectionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(CollectionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CollectionFilters& WithStatus(CollectionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the collection group to filter by.</p>
   */
  inline const Aws::String& GetCollectionGroupName() const { return m_collectionGroupName; }
  inline bool CollectionGroupNameHasBeenSet() const { return m_collectionGroupNameHasBeenSet; }
  template <typename CollectionGroupNameT = Aws::String>
  void SetCollectionGroupName(CollectionGroupNameT&& value) {
    m_collectionGroupNameHasBeenSet = true;
    m_collectionGroupName = std::forward<CollectionGroupNameT>(value);
  }
  template <typename CollectionGroupNameT = Aws::String>
  CollectionFilters& WithCollectionGroupName(CollectionGroupNameT&& value) {
    SetCollectionGroupName(std::forward<CollectionGroupNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  CollectionStatus m_status{CollectionStatus::NOT_SET};

  Aws::String m_collectionGroupName;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_collectionGroupNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
