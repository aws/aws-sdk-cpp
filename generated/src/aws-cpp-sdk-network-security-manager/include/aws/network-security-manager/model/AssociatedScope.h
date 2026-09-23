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
 * <p>An association between a deployment and a scope, as returned in outputs. The
 * corresponding request structure is <code>ScopeReference</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/AssociatedScope">AWS
 * API Reference</a></p>
 */
class AssociatedScope {
 public:
  AWS_NETWORKSECURITYMANAGER_API AssociatedScope() = default;
  AWS_NETWORKSECURITYMANAGER_API AssociatedScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API AssociatedScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the associated scope.</p>
   */
  inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
  inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
  template <typename ScopeArnT = Aws::String>
  void SetScopeArn(ScopeArnT&& value) {
    m_scopeArnHasBeenSet = true;
    m_scopeArn = std::forward<ScopeArnT>(value);
  }
  template <typename ScopeArnT = Aws::String>
  AssociatedScope& WithScopeArn(ScopeArnT&& value) {
    SetScopeArn(std::forward<ScopeArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeArn;
  bool m_scopeArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
