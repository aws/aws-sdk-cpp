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
class DeleteDeploymentRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeleteDeploymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteDeployment"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the deployment. This is the deployment's Amazon Resource
   * Name (ARN).</p>
   */
  inline const Aws::String& GetDeploymentIdentifier() const { return m_deploymentIdentifier; }
  inline bool DeploymentIdentifierHasBeenSet() const { return m_deploymentIdentifierHasBeenSet; }
  template <typename DeploymentIdentifierT = Aws::String>
  void SetDeploymentIdentifier(DeploymentIdentifierT&& value) {
    m_deploymentIdentifierHasBeenSet = true;
    m_deploymentIdentifier = std::forward<DeploymentIdentifierT>(value);
  }
  template <typename DeploymentIdentifierT = Aws::String>
  DeleteDeploymentRequest& WithDeploymentIdentifier(DeploymentIdentifierT&& value) {
    SetDeploymentIdentifier(std::forward<DeploymentIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deploymentIdentifier;
  bool m_deploymentIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
