/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/RuleReference.h>
#include <aws/network-security-manager/model/TemplateFirewallType.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class CreateTemplateRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API CreateTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTemplate"; }

  AWS_NETWORKSECURITYMANAGER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive token that you provide to ensure that the operation
   * completes no more than one time. If you retry a request with the same client
   * token and the same parameters, the service returns the result of the original
   * successful request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateTemplateRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
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
  CreateTemplateRequest& WithTemplateName(TemplateNameT&& value) {
    SetTemplateName(std::forward<TemplateNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the template.</p>
   */
  inline const Aws::String& GetTemplateDescription() const { return m_templateDescription; }
  inline bool TemplateDescriptionHasBeenSet() const { return m_templateDescriptionHasBeenSet; }
  template <typename TemplateDescriptionT = Aws::String>
  void SetTemplateDescription(TemplateDescriptionT&& value) {
    m_templateDescriptionHasBeenSet = true;
    m_templateDescription = std::forward<TemplateDescriptionT>(value);
  }
  template <typename TemplateDescriptionT = Aws::String>
  CreateTemplateRequest& WithTemplateDescription(TemplateDescriptionT&& value) {
    SetTemplateDescription(std::forward<TemplateDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rules associated with the template.</p>
   */
  inline const Aws::Vector<RuleReference>& GetAssociatedRuleList() const { return m_associatedRuleList; }
  inline bool AssociatedRuleListHasBeenSet() const { return m_associatedRuleListHasBeenSet; }
  template <typename AssociatedRuleListT = Aws::Vector<RuleReference>>
  void SetAssociatedRuleList(AssociatedRuleListT&& value) {
    m_associatedRuleListHasBeenSet = true;
    m_associatedRuleList = std::forward<AssociatedRuleListT>(value);
  }
  template <typename AssociatedRuleListT = Aws::Vector<RuleReference>>
  CreateTemplateRequest& WithAssociatedRuleList(AssociatedRuleListT&& value) {
    SetAssociatedRuleList(std::forward<AssociatedRuleListT>(value));
    return *this;
  }
  template <typename AssociatedRuleListT = RuleReference>
  CreateTemplateRequest& AddAssociatedRuleList(AssociatedRuleListT&& value) {
    m_associatedRuleListHasBeenSet = true;
    m_associatedRuleList.emplace_back(std::forward<AssociatedRuleListT>(value));
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
  inline CreateTemplateRequest& WithFirewallType(TemplateFirewallType value) {
    SetFirewallType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>). Default:
   * <code>true</code>.</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline CreateTemplateRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags to add to the resource when it is created.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateTemplateRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateTemplateRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_templateName;

  Aws::String m_templateDescription;

  Aws::Vector<RuleReference> m_associatedRuleList;

  TemplateFirewallType m_firewallType{TemplateFirewallType::NOT_SET};

  bool m_isPublished{false};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_templateNameHasBeenSet = false;
  bool m_templateDescriptionHasBeenSet = false;
  bool m_associatedRuleListHasBeenSet = false;
  bool m_firewallTypeHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
