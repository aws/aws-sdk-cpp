/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/ScopeConfiguration.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkSecurityManager {
namespace Model {
class UpdateScopeResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API UpdateScopeResult() = default;
  AWS_NETWORKSECURITYMANAGER_API UpdateScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API UpdateScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated id of the scope.</p>
   */
  inline const Aws::String& GetScopeId() const { return m_scopeId; }
  template <typename ScopeIdT = Aws::String>
  void SetScopeId(ScopeIdT&& value) {
    m_scopeIdHasBeenSet = true;
    m_scopeId = std::forward<ScopeIdT>(value);
  }
  template <typename ScopeIdT = Aws::String>
  UpdateScopeResult& WithScopeId(ScopeIdT&& value) {
    SetScopeId(std::forward<ScopeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the scope.</p>
   */
  inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
  template <typename ScopeArnT = Aws::String>
  void SetScopeArn(ScopeArnT&& value) {
    m_scopeArnHasBeenSet = true;
    m_scopeArn = std::forward<ScopeArnT>(value);
  }
  template <typename ScopeArnT = Aws::String>
  UpdateScopeResult& WithScopeArn(ScopeArnT&& value) {
    SetScopeArn(std::forward<ScopeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scope.</p>
   */
  inline const Aws::String& GetScopeName() const { return m_scopeName; }
  template <typename ScopeNameT = Aws::String>
  void SetScopeName(ScopeNameT&& value) {
    m_scopeNameHasBeenSet = true;
    m_scopeName = std::forward<ScopeNameT>(value);
  }
  template <typename ScopeNameT = Aws::String>
  UpdateScopeResult& WithScopeName(ScopeNameT&& value) {
    SetScopeName(std::forward<ScopeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the scope.</p>
   */
  inline const Aws::String& GetScopeDescription() const { return m_scopeDescription; }
  template <typename ScopeDescriptionT = Aws::String>
  void SetScopeDescription(ScopeDescriptionT&& value) {
    m_scopeDescriptionHasBeenSet = true;
    m_scopeDescription = std::forward<ScopeDescriptionT>(value);
  }
  template <typename ScopeDescriptionT = Aws::String>
  UpdateScopeResult& WithScopeDescription(ScopeDescriptionT&& value) {
    SetScopeDescription(std::forward<ScopeDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration that defines which accounts and resources are in scope.</p>
   */
  inline const ScopeConfiguration& GetScopeConfiguration() const { return m_scopeConfiguration; }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  void SetScopeConfiguration(ScopeConfigurationT&& value) {
    m_scopeConfigurationHasBeenSet = true;
    m_scopeConfiguration = std::forward<ScopeConfigurationT>(value);
  }
  template <typename ScopeConfigurationT = ScopeConfiguration>
  UpdateScopeResult& WithScopeConfiguration(ScopeConfigurationT&& value) {
    SetScopeConfiguration(std::forward<ScopeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the resource: <code>DRAFT</code> (unpublished,
   * editable) or <code>ACTIVE</code> (published, in use).</p>
   */
  inline EntityStatus GetStatus() const { return m_status; }
  inline void SetStatus(EntityStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateScopeResult& WithStatus(EntityStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the resource.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  UpdateScopeResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token used for optimistic concurrency control. Each read and write returns
   * an <code>updateToken</code>. Provide the most recent value on your next update
   * to detect and prevent conflicting concurrent modifications.</p>
   */
  inline const Aws::String& GetUpdateToken() const { return m_updateToken; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateScopeResult& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the resource is a snapshot of a published version.</p>
   */
  inline bool GetIsSnapshot() const { return m_isSnapshot; }
  inline void SetIsSnapshot(bool value) {
    m_isSnapshotHasBeenSet = true;
    m_isSnapshot = value;
  }
  inline UpdateScopeResult& WithIsSnapshot(bool value) {
    SetIsSnapshot(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether a published version of the resource exists.</p>
   */
  inline bool GetHasPublishedVersion() const { return m_hasPublishedVersion; }
  inline void SetHasPublishedVersion(bool value) {
    m_hasPublishedVersionHasBeenSet = true;
    m_hasPublishedVersion = value;
  }
  inline UpdateScopeResult& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the resource was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateScopeResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateScopeResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_scopeId;

  Aws::String m_scopeArn;

  Aws::String m_scopeName;

  Aws::String m_scopeDescription;

  ScopeConfiguration m_scopeConfiguration;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  Aws::String m_updateToken;

  bool m_isSnapshot{false};

  bool m_hasPublishedVersion{false};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scopeIdHasBeenSet = false;
  bool m_scopeArnHasBeenSet = false;
  bool m_scopeNameHasBeenSet = false;
  bool m_scopeDescriptionHasBeenSet = false;
  bool m_scopeConfigurationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_isSnapshotHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
