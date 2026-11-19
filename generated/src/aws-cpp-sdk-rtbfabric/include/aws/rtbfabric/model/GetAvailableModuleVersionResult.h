/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ConfigurableAction.h>
#include <aws/rtbfabric/model/ModulePermission.h>
#include <aws/rtbfabric/model/ModuleVersionStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RTBFabric {
namespace Model {
class GetAvailableModuleVersionResult {
 public:
  AWS_RTBFABRIC_API GetAvailableModuleVersionResult() = default;
  AWS_RTBFABRIC_API GetAvailableModuleVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RTBFABRIC_API GetAvailableModuleVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The module's ID.</p>
   */
  inline const Aws::String& GetModuleId() const { return m_moduleId; }
  template <typename ModuleIdT = Aws::String>
  void SetModuleId(ModuleIdT&& value) {
    m_moduleIdHasBeenSet = true;
    m_moduleId = std::forward<ModuleIdT>(value);
  }
  template <typename ModuleIdT = Aws::String>
  GetAvailableModuleVersionResult& WithModuleId(ModuleIdT&& value) {
    SetModuleId(std::forward<ModuleIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GetAvailableModuleVersionResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version's ARN.</p>
   */
  inline const Aws::String& GetModuleVersionArn() const { return m_moduleVersionArn; }
  template <typename ModuleVersionArnT = Aws::String>
  void SetModuleVersionArn(ModuleVersionArnT&& value) {
    m_moduleVersionArnHasBeenSet = true;
    m_moduleVersionArn = std::forward<ModuleVersionArnT>(value);
  }
  template <typename ModuleVersionArnT = Aws::String>
  GetAvailableModuleVersionResult& WithModuleVersionArn(ModuleVersionArnT&& value) {
    SetModuleVersionArn(std::forward<ModuleVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ACTIVE or DEPRECATED.</p>
   */
  inline ModuleVersionStatus GetStatus() const { return m_status; }
  inline void SetStatus(ModuleVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetAvailableModuleVersionResult& WithStatus(ModuleVersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data-access grants the version holds.</p>
   */
  inline const Aws::Vector<ModulePermission>& GetPermissions() const { return m_permissions; }
  template <typename PermissionsT = Aws::Vector<ModulePermission>>
  void SetPermissions(PermissionsT&& value) {
    m_permissionsHasBeenSet = true;
    m_permissions = std::forward<PermissionsT>(value);
  }
  template <typename PermissionsT = Aws::Vector<ModulePermission>>
  GetAvailableModuleVersionResult& WithPermissions(PermissionsT&& value) {
    SetPermissions(std::forward<PermissionsT>(value));
    return *this;
  }
  inline GetAvailableModuleVersionResult& AddPermissions(ModulePermission value) {
    m_permissionsHasBeenSet = true;
    m_permissions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The capabilities that you can turn on when you attach the version.</p>
   */
  inline const Aws::Vector<ConfigurableAction>& GetConfigurableActions() const { return m_configurableActions; }
  template <typename ConfigurableActionsT = Aws::Vector<ConfigurableAction>>
  void SetConfigurableActions(ConfigurableActionsT&& value) {
    m_configurableActionsHasBeenSet = true;
    m_configurableActions = std::forward<ConfigurableActionsT>(value);
  }
  template <typename ConfigurableActionsT = Aws::Vector<ConfigurableAction>>
  GetAvailableModuleVersionResult& WithConfigurableActions(ConfigurableActionsT&& value) {
    SetConfigurableActions(std::forward<ConfigurableActionsT>(value));
    return *this;
  }
  inline GetAvailableModuleVersionResult& AddConfigurableActions(ConfigurableAction value) {
    m_configurableActionsHasBeenSet = true;
    m_configurableActions.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON Schema for the parameters that you can set in
   * <code>configurationValues</code> when you attach the version.</p>
   */
  inline const Aws::String& GetConfigurationSchema() const { return m_configurationSchema; }
  template <typename ConfigurationSchemaT = Aws::String>
  void SetConfigurationSchema(ConfigurationSchemaT&& value) {
    m_configurationSchemaHasBeenSet = true;
    m_configurationSchema = std::forward<ConfigurationSchemaT>(value);
  }
  template <typename ConfigurationSchemaT = Aws::String>
  GetAvailableModuleVersionResult& WithConfigurationSchema(ConfigurationSchemaT&& value) {
    SetConfigurationSchema(std::forward<ConfigurationSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The vendor's release notes.</p>
   */
  inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
  template <typename ReleaseNotesT = Aws::String>
  void SetReleaseNotes(ReleaseNotesT&& value) {
    m_releaseNotesHasBeenSet = true;
    m_releaseNotes = std::forward<ReleaseNotesT>(value);
  }
  template <typename ReleaseNotesT = Aws::String>
  GetAvailableModuleVersionResult& WithReleaseNotes(ReleaseNotesT&& value) {
    SetReleaseNotes(std::forward<ReleaseNotesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAvailableModuleVersionResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the version last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetAvailableModuleVersionResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  GetAvailableModuleVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_moduleId;

  Aws::String m_version;

  Aws::String m_moduleVersionArn;

  ModuleVersionStatus m_status{ModuleVersionStatus::NOT_SET};

  Aws::Vector<ModulePermission> m_permissions;

  Aws::Vector<ConfigurableAction> m_configurableActions;

  Aws::String m_configurationSchema;

  Aws::String m_releaseNotes;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_moduleIdHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_moduleVersionArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_permissionsHasBeenSet = false;
  bool m_configurableActionsHasBeenSet = false;
  bool m_configurationSchemaHasBeenSet = false;
  bool m_releaseNotesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
