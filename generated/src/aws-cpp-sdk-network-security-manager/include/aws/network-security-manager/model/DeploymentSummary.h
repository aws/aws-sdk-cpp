/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/EntityStatus.h>

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
 * <p>Summary information about a deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeploymentSummary">AWS
 * API Reference</a></p>
 */
class DeploymentSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API DeploymentSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API DeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API DeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service-generated id of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
  inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
  template <typename DeploymentIdT = Aws::String>
  void SetDeploymentId(DeploymentIdT&& value) {
    m_deploymentIdHasBeenSet = true;
    m_deploymentId = std::forward<DeploymentIdT>(value);
  }
  template <typename DeploymentIdT = Aws::String>
  DeploymentSummary& WithDeploymentId(DeploymentIdT&& value) {
    SetDeploymentId(std::forward<DeploymentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentArn() const { return m_deploymentArn; }
  inline bool DeploymentArnHasBeenSet() const { return m_deploymentArnHasBeenSet; }
  template <typename DeploymentArnT = Aws::String>
  void SetDeploymentArn(DeploymentArnT&& value) {
    m_deploymentArnHasBeenSet = true;
    m_deploymentArn = std::forward<DeploymentArnT>(value);
  }
  template <typename DeploymentArnT = Aws::String>
  DeploymentSummary& WithDeploymentArn(DeploymentArnT&& value) {
    SetDeploymentArn(std::forward<DeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the deployment.</p>
   */
  inline const Aws::String& GetDeploymentName() const { return m_deploymentName; }
  inline bool DeploymentNameHasBeenSet() const { return m_deploymentNameHasBeenSet; }
  template <typename DeploymentNameT = Aws::String>
  void SetDeploymentName(DeploymentNameT&& value) {
    m_deploymentNameHasBeenSet = true;
    m_deploymentName = std::forward<DeploymentNameT>(value);
  }
  template <typename DeploymentNameT = Aws::String>
  DeploymentSummary& WithDeploymentName(DeploymentNameT&& value) {
    SetDeploymentName(std::forward<DeploymentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable), <code>ACTIVE</code> (published, in use), or <code>DISABLED</code>
   * (deactivated; changes cannot be published until the resource is re-enabled).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeploymentSummary& WithStatus(EntityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the resource.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  DeploymentSummary& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a published version of the resource exists.</p>
   */
  inline bool GetHasPublishedVersion() const { return m_hasPublishedVersion; }
  inline bool HasPublishedVersionHasBeenSet() const { return m_hasPublishedVersionHasBeenSet; }
  inline void SetHasPublishedVersion(bool value) {
    m_hasPublishedVersionHasBeenSet = true;
    m_hasPublishedVersion = value;
  }
  inline DeploymentSummary& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated. For a snapshot, this is the time
   * when the snapshot was created.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DeploymentSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_deploymentId;

  Aws::String m_deploymentArn;

  Aws::String m_deploymentName;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_deploymentIdHasBeenSet = false;
  bool m_deploymentArnHasBeenSet = false;
  bool m_deploymentNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
