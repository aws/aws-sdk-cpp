/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/ResourceSet.h>

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
 * <p>Defines which resources of a given type are in scope. Exactly one of
 * <code>includeAll</code>, <code>include</code>, or <code>exclude</code> is
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ResourceScope">AWS
 * API Reference</a></p>
 */
class ResourceScope {
 public:
  AWS_NETWORKSECURITYMANAGER_API ResourceScope() = default;
  AWS_NETWORKSECURITYMANAGER_API ResourceScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ResourceScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Includes all resources of the resource type.</p>
   */
  inline bool GetIncludeAll() const { return m_includeAll; }
  inline bool IncludeAllHasBeenSet() const { return m_includeAllHasBeenSet; }
  inline void SetIncludeAll(bool value) {
    m_includeAllHasBeenSet = true;
    m_includeAll = value;
  }
  inline ResourceScope& WithIncludeAll(bool value) {
    SetIncludeAll(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Includes the resources that match the specified criteria or explicit
   * ARNs.</p>
   */
  inline const ResourceSet& GetInclude() const { return m_include; }
  inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
  template <typename IncludeT = ResourceSet>
  void SetInclude(IncludeT&& value) {
    m_includeHasBeenSet = true;
    m_include = std::forward<IncludeT>(value);
  }
  template <typename IncludeT = ResourceSet>
  ResourceScope& WithInclude(IncludeT&& value) {
    SetInclude(std::forward<IncludeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Excludes the resources that match the specified criteria or explicit
   * ARNs.</p>
   */
  inline const ResourceSet& GetExclude() const { return m_exclude; }
  inline bool ExcludeHasBeenSet() const { return m_excludeHasBeenSet; }
  template <typename ExcludeT = ResourceSet>
  void SetExclude(ExcludeT&& value) {
    m_excludeHasBeenSet = true;
    m_exclude = std::forward<ExcludeT>(value);
  }
  template <typename ExcludeT = ResourceSet>
  ResourceScope& WithExclude(ExcludeT&& value) {
    SetExclude(std::forward<ExcludeT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_includeAll{false};

  ResourceSet m_include;

  ResourceSet m_exclude;
  bool m_includeAllHasBeenSet = false;
  bool m_includeHasBeenSet = false;
  bool m_excludeHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
