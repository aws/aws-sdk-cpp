/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/TemplateFirewallType.h>

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
 * <p>Summary information about a template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/TemplateSummary">AWS
 * API Reference</a></p>
 */
class TemplateSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API TemplateSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API TemplateSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API TemplateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service-generated id of the template.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  TemplateSummary& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the template.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  TemplateSummary& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the template.</p>
   */
  inline const Aws::String& GetTemplateName() const { return m_templateName; }
  inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
  template <typename TemplateNameT = Aws::String>
  void SetTemplateName(TemplateNameT&& value) {
    m_templateNameHasBeenSet = true;
    m_templateName = std::forward<TemplateNameT>(value);
  }
  template <typename TemplateNameT = Aws::String>
  TemplateSummary& WithTemplateName(TemplateNameT&& value) {
    SetTemplateName(std::forward<TemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable) or <code>ACTIVE</code> (published, in use).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TemplateSummary& WithStatus(EntityStatus value) {
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
  TemplateSummary& WithVersion(VersionT&& value) {
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
  inline TemplateSummary& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline TemplateFirewallType GetFirewallType() const { return m_firewallType; }
  inline bool FirewallTypeHasBeenSet() const { return m_firewallTypeHasBeenSet; }
  inline void SetFirewallType(TemplateFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline TemplateSummary& WithFirewallType(TemplateFirewallType value) {
    SetFirewallType(value);
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
  TemplateSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateId;

  Aws::String m_templateArn;

  Aws::String m_templateName;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  bool m_hasPublishedVersion{false};

  TemplateFirewallType m_firewallType{TemplateFirewallType::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_templateIdHasBeenSet = false;
  bool m_templateArnHasBeenSet = false;
  bool m_templateNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
