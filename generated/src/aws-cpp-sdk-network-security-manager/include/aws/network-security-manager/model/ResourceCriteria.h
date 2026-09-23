/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AlbConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {

/**
 * <p>A leaf condition that matches resources by tag or by resource-type-specific
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceCriteria">AWS
 * API Reference</a></p>
 */
class ResourceCriteria {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceCriteria() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Tag key-value pairs used to match resources.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  ResourceCriteria& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  ResourceCriteria& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria specific to Application Load Balancers.</p>
   */
  inline const AlbConfiguration& GetAlbConfig() const { return m_albConfig; }
  inline bool AlbConfigHasBeenSet() const { return m_albConfigHasBeenSet; }
  template <typename AlbConfigT = AlbConfiguration>
  void SetAlbConfig(AlbConfigT&& value) {
    m_albConfigHasBeenSet = true;
    m_albConfig = std::forward<AlbConfigT>(value);
  }
  template <typename AlbConfigT = AlbConfiguration>
  ResourceCriteria& WithAlbConfig(AlbConfigT&& value) {
    SetAlbConfig(std::forward<AlbConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_tags;

  AlbConfiguration m_albConfig;
  bool m_tagsHasBeenSet = false;
  bool m_albConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
