/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

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
 * <p>A reference to a scope in a create or update request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ScopeReference">AWS
 * API Reference</a></p>
 */
class ScopeReference {
 public:
  AWS_NETWORKSECURITYMANAGER_API ScopeReference() = default;
  AWS_NETWORKSECURITYMANAGER_API ScopeReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ScopeReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the scope. This is the scope's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetScopeIdentifier() const { return m_scopeIdentifier; }
  inline bool ScopeIdentifierHasBeenSet() const { return m_scopeIdentifierHasBeenSet; }
  template <typename ScopeIdentifierT = Aws::String>
  void SetScopeIdentifier(ScopeIdentifierT&& value) {
    m_scopeIdentifierHasBeenSet = true;
    m_scopeIdentifier = std::forward<ScopeIdentifierT>(value);
  }
  template <typename ScopeIdentifierT = Aws::String>
  ScopeReference& WithScopeIdentifier(ScopeIdentifierT&& value) {
    SetScopeIdentifier(std::forward<ScopeIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeIdentifier;
  bool m_scopeIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
