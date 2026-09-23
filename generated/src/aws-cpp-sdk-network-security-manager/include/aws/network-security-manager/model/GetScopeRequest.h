/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class GetScopeRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API GetScopeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetScope"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

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
  GetScopeRequest& WithScopeIdentifier(ScopeIdentifierT&& value) {
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
