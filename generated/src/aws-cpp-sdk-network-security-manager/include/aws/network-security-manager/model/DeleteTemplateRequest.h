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
class DeleteTemplateRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeleteTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteTemplate"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the template. This is the template's Amazon Resource Name
   * (ARN).</p>
   */
  inline const Aws::String& GetTemplateIdentifier() const { return m_templateIdentifier; }
  inline bool TemplateIdentifierHasBeenSet() const { return m_templateIdentifierHasBeenSet; }
  template <typename TemplateIdentifierT = Aws::String>
  void SetTemplateIdentifier(TemplateIdentifierT&& value) {
    m_templateIdentifierHasBeenSet = true;
    m_templateIdentifier = std::forward<TemplateIdentifierT>(value);
  }
  template <typename TemplateIdentifierT = Aws::String>
  DeleteTemplateRequest& WithTemplateIdentifier(TemplateIdentifierT&& value) {
    SetTemplateIdentifier(std::forward<TemplateIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateIdentifier;
  bool m_templateIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
