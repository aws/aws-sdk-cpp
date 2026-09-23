/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-security-manager/NetworkSecurityManagerRequest.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>
#include <aws/network-security-manager/model/RuleReference.h>

#include <utility>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

/**
 */
class UpdateTemplateRequest : public NetworkSecurityManagerRequest {
 public:
  AWS_NETWORKSECURITYMANAGER_API UpdateTemplateRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplate"; }

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
  UpdateTemplateRequest& WithTemplateIdentifier(TemplateIdentifierT&& value) {
    SetTemplateIdentifier(std::forward<TemplateIdentifierT>(value));
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
  inline bool UpdateTokenHasBeenSet() const { return m_updateTokenHasBeenSet; }
  template <typename UpdateTokenT = Aws::String>
  void SetUpdateToken(UpdateTokenT&& value) {
    m_updateTokenHasBeenSet = true;
    m_updateToken = std::forward<UpdateTokenT>(value);
  }
  template <typename UpdateTokenT = Aws::String>
  UpdateTemplateRequest& WithUpdateToken(UpdateTokenT&& value) {
    SetUpdateToken(std::forward<UpdateTokenT>(value));
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
  UpdateTemplateRequest& WithTemplateDescription(TemplateDescriptionT&& value) {
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
  UpdateTemplateRequest& WithAssociatedRuleList(AssociatedRuleListT&& value) {
    SetAssociatedRuleList(std::forward<AssociatedRuleListT>(value));
    return *this;
  }
  template <typename AssociatedRuleListT = RuleReference>
  UpdateTemplateRequest& AddAssociatedRuleList(AssociatedRuleListT&& value) {
    m_associatedRuleListHasBeenSet = true;
    m_associatedRuleList.emplace_back(std::forward<AssociatedRuleListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to publish the resource. When <code>true</code>, the
   * resource is saved in published (<code>ACTIVE</code>) state. When
   * <code>false</code>, it is saved as a draft (<code>DRAFT</code>).</p>
   */
  inline bool GetIsPublished() const { return m_isPublished; }
  inline bool IsPublishedHasBeenSet() const { return m_isPublishedHasBeenSet; }
  inline void SetIsPublished(bool value) {
    m_isPublishedHasBeenSet = true;
    m_isPublished = value;
  }
  inline UpdateTemplateRequest& WithIsPublished(bool value) {
    SetIsPublished(value);
    return *this;
  }
  ///@}

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
  UpdateTemplateRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_templateIdentifier;

  Aws::String m_updateToken;

  Aws::String m_templateDescription;

  Aws::Vector<RuleReference> m_associatedRuleList;

  bool m_isPublished{false};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_templateIdentifierHasBeenSet = false;
  bool m_updateTokenHasBeenSet = false;
  bool m_templateDescriptionHasBeenSet = false;
  bool m_associatedRuleListHasBeenSet = false;
  bool m_isPublishedHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
