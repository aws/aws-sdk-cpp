/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/MetaFlowCategory.h>

#include <utility>

namespace Aws {
namespace SocialMessaging {
namespace Model {

/**
 */
class CreateWhatsAppFlowRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API CreateWhatsAppFlowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateWhatsAppFlow"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the WhatsApp Business Account to associate with this Flow.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateWhatsAppFlowRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Flow. Must be unique within the WhatsApp Business
   * Account.</p>
   */
  inline const Aws::String& GetFlowName() const { return m_flowName; }
  inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
  template <typename FlowNameT = Aws::String>
  void SetFlowName(FlowNameT&& value) {
    m_flowNameHasBeenSet = true;
    m_flowName = std::forward<FlowNameT>(value);
  }
  template <typename FlowNameT = Aws::String>
  CreateWhatsAppFlowRequest& WithFlowName(FlowNameT&& value) {
    SetFlowName(std::forward<FlowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The categories that classify the business purpose of the Flow. At least one
   * category is required.</p>
   */
  inline const Aws::Vector<MetaFlowCategory>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  CreateWhatsAppFlowRequest& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  inline CreateWhatsAppFlowRequest& AddCategories(MetaFlowCategory value) {
    m_categoriesHasBeenSet = true;
    m_categories.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Flow JSON definition that describes the screens, components, and logic of
   * the Flow. Maximum size is 10 MB.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetFlowJson() const { return m_flowJson; }
  inline bool FlowJsonHasBeenSet() const { return m_flowJsonHasBeenSet; }
  template <typename FlowJsonT = Aws::Utils::ByteBuffer>
  void SetFlowJson(FlowJsonT&& value) {
    m_flowJsonHasBeenSet = true;
    m_flowJson = std::forward<FlowJsonT>(value);
  }
  template <typename FlowJsonT = Aws::Utils::ByteBuffer>
  CreateWhatsAppFlowRequest& WithFlowJson(FlowJsonT&& value) {
    SetFlowJson(std::forward<FlowJsonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to <code>true</code> to publish the Flow immediately after creation.
   * Requires a valid <code>flowJson</code> that passes Meta's validation.</p>
   */
  inline bool GetPublish() const { return m_publish; }
  inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }
  inline void SetPublish(bool value) {
    m_publishHasBeenSet = true;
    m_publish = value;
  }
  inline CreateWhatsAppFlowRequest& WithPublish(bool value) {
    SetPublish(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of an existing Flow within the same WhatsApp Business Account to
   * clone.</p>
   */
  inline const Aws::String& GetCloneFlowId() const { return m_cloneFlowId; }
  inline bool CloneFlowIdHasBeenSet() const { return m_cloneFlowIdHasBeenSet; }
  template <typename CloneFlowIdT = Aws::String>
  void SetCloneFlowId(CloneFlowIdT&& value) {
    m_cloneFlowIdHasBeenSet = true;
    m_cloneFlowId = std::forward<CloneFlowIdT>(value);
  }
  template <typename CloneFlowIdT = Aws::String>
  CreateWhatsAppFlowRequest& WithCloneFlowId(CloneFlowIdT&& value) {
    SetCloneFlowId(std::forward<CloneFlowIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_flowName;

  Aws::Vector<MetaFlowCategory> m_categories;

  Aws::Utils::ByteBuffer m_flowJson{};

  bool m_publish{false};

  Aws::String m_cloneFlowId;
  bool m_idHasBeenSet = false;
  bool m_flowNameHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_flowJsonHasBeenSet = false;
  bool m_publishHasBeenSet = false;
  bool m_cloneFlowIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
