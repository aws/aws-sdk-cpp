/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/AssociatedRule.h>
#include <aws/network-security-manager/model/EntityStatus.h>
#include <aws/network-security-manager/model/TemplateFirewallType.h>

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
class CreateTemplateResult {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateTemplateResult() = default;
  AWS_NETWORKSECURITYMANAGER_API CreateTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKSECURITYMANAGER_API CreateTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The service-generated id of the template.</p>
   */
  inline const Aws::String& GetTemplateId() const { return m_templateId; }
  template <typename TemplateIdT = Aws::String>
  void SetTemplateId(TemplateIdT&& value) {
    m_templateIdHasBeenSet = true;
    m_templateId = std::forward<TemplateIdT>(value);
  }
  template <typename TemplateIdT = Aws::String>
  CreateTemplateResult& WithTemplateId(TemplateIdT&& value) {
    SetTemplateId(std::forward<TemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the template.</p>
   */
  inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
  template <typename TemplateArnT = Aws::String>
  void SetTemplateArn(TemplateArnT&& value) {
    m_templateArnHasBeenSet = true;
    m_templateArn = std::forward<TemplateArnT>(value);
  }
  template <typename TemplateArnT = Aws::String>
  CreateTemplateResult& WithTemplateArn(TemplateArnT&& value) {
    SetTemplateArn(std::forward<TemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the template.</p>
   */
  inline const Aws::String& GetTemplateName() const { return m_templateName; }
  template <typename TemplateNameT = Aws::String>
  void SetTemplateName(TemplateNameT&& value) {
    m_templateNameHasBeenSet = true;
    m_templateName = std::forward<TemplateNameT>(value);
  }
  template <typename TemplateNameT = Aws::String>
  CreateTemplateResult& WithTemplateName(TemplateNameT&& value) {
    SetTemplateName(std::forward<TemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the template.</p>
   */
  inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
  template <typename TemplateDescriptionT = Aws::String>
  void SetTemplateDescription(TemplateDescriptionT&& value) {
    m_templateDescriptionHasBeenSet = true;
    m_templateDescription = std::forward<TemplateDescriptionT>(value);
  }
  template <typename TemplateDescriptionT = Aws::String>
  CreateTemplateResult& WithTemplateDescription(TemplateDescriptionT&& value) {
    SetTemplateDescription(std::forward<TemplateDescriptionT>(value));
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
  inline CreateTemplateResult& WithStatus(EntityStatus value) {
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
  CreateTemplateResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rules associated with the template.</p>
   */
  inline const Aws::Vector<AssociatedRule>& GetAssociatedRuleList() const { return m_associatedRuleList; }
  template <typename AssociatedRuleListT = Aws::Vector<AssociatedRule>>
  void SetAssociatedRuleList(AssociatedRuleListT&& value) {
    m_associatedRuleListHasBeenSet = true;
    m_associatedRuleList = std::forward<AssociatedRuleListT>(value);
  }
  template <typename AssociatedRuleListT = Aws::Vector<AssociatedRule>>
  CreateTemplateResult& WithAssociatedRuleList(AssociatedRuleListT&& value) {
    SetAssociatedRuleList(std::forward<AssociatedRuleListT>(value));
    return *this;
  }
  template <typename AssociatedRuleListT = AssociatedRule>
  CreateTemplateResult& AddAssociatedRuleList(AssociatedRuleListT&& value) {
    m_associatedRuleListHasBeenSet = true;
    m_associatedRuleList.emplace_back(std::forward<AssociatedRuleListT>(value));
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
  CreateTemplateResult& WithUpdateToken(UpdateTokenT&& value) {
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
  inline CreateTemplateResult& WithIsSnapshot(bool value) {
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
  inline CreateTemplateResult& WithHasPublishedVersion(bool value) {
    SetHasPublishedVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The firewall type associated with the resource.</p>
   */
  inline TemplateFirewallType GetFirewallType() const { return m_firewallType; }
  inline void SetFirewallType(TemplateFirewallType value) {
    m_firewallTypeHasBeenSet = true;
    m_firewallType = value;
  }
  inline CreateTemplateResult& WithFirewallType(TemplateFirewallType value) {
    SetFirewallType(value);
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
  CreateTemplateResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  CreateTemplateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_templateId;

  Aws::String m_templateArn;

  Aws::String m_templateName;

  Aws::String m_templateDescription;

  EntityStatus m_status{EntityStatus::NOT_SET};

  Aws::String m_version;

  Aws::Vector<AssociatedRule> m_associatedRuleList;

  Aws::String m_updateToken;

  bool m_isSnapshot{false};

  bool m_hasPublishedVersion{false};

  TemplateFirewallType m_firewallType{TemplateFirewallType::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_templateIdHasBeenSet = false;
  bool m_templateArnHasBeenSet = false;
  bool m_templateNameHasBeenSet = false;
  bool m_templateDescriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_versionHasBeenSet = false;
  bool m_associatedRuleListHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_isSnapshotHasBeenSet = false;
  bool m_hasPublishedVersionHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
