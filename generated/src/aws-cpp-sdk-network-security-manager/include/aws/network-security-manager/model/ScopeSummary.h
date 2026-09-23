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
 * <p>Summary information about a scope.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ScopeSummary">AWS
 * API Reference</a></p>
 */
class ScopeSummary {
 public:
  AWS_NETWORKSECURITYMANAGER_API ScopeSummary() = default;
  AWS_NETWORKSECURITYMANAGER_API ScopeSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API ScopeSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKSECURITYMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service-generated id of the scope.</p>
   */
  inline const Aws::String& GetScopeId() const { return m_scopeId; }
  inline bool ScopeIdHasBeenSet() const { return m_scopeIdHasBeenSet; }
  template <typename ScopeIdT = Aws::String>
  void SetScopeId(ScopeIdT&& value) {
    m_scopeIdHasBeenSet = true;
    m_scopeId = std::forward<ScopeIdT>(value);
  }
  template <typename ScopeIdT = Aws::String>
  ScopeSummary& WithScopeId(ScopeIdT&& value) {
    SetScopeId(std::forward<ScopeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the scope.</p>
   */
  inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
  inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
  template <typename ScopeArnT = Aws::String>
  void SetScopeArn(ScopeArnT&& value) {
    m_scopeArnHasBeenSet = true;
    m_scopeArn = std::forward<ScopeArnT>(value);
  }
  template <typename ScopeArnT = Aws::String>
  ScopeSummary& WithScopeArn(ScopeArnT&& value) {
    SetScopeArn(std::forward<ScopeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scope.</p>
   */
  inline const Aws::String& GetScopeName() const { return m_scopeName; }
  inline bool ScopeNameHasBeenSet() const { return m_scopeNameHasBeenSet; }
  template <typename ScopeNameT = Aws::String>
  void SetScopeName(ScopeNameT&& value) {
    m_scopeNameHasBeenSet = true;
    m_scopeName = std::forward<ScopeNameT>(value);
  }
  template <typename ScopeNameT = Aws::String>
  ScopeSummary& WithScopeName(ScopeNameT&& value) {
    SetScopeName(std::forward<ScopeNameT>(value));
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
  inline ScopeSummary& WithStatus(EntityStatus value) {
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
  ScopeSummary& WithVersion(VersionT&& value) {
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
  inline ScopeSummary& WithHasPublishedVersion(bool value) {
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
  ScopeSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_scopeId;

  Aws::String m_scopeArn;

  Aws::String m_scopeName;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_scopeIdHasBeenSet = false;
  bool m_scopeArnHasBeenSet = false;
  bool m_scopeNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
