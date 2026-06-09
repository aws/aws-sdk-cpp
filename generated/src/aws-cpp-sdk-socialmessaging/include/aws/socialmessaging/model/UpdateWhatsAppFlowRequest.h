/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
class UpdateWhatsAppFlowRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API UpdateWhatsAppFlowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWhatsAppFlow"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the WhatsApp Business Account associated with this Flow.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateWhatsAppFlowRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Flow to update.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  UpdateWhatsAppFlowRequest& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated name for the Flow.</p>
   */
  inline const Aws::String& GetFlowName() const { return m_flowName; }
  inline bool FlowNameHasBeenSet() const { return m_flowNameHasBeenSet; }
  template <typename FlowNameT = Aws::String>
  void SetFlowName(FlowNameT&& value) {
    m_flowNameHasBeenSet = true;
    m_flowName = std::forward<FlowNameT>(value);
  }
  template <typename FlowNameT = Aws::String>
  UpdateWhatsAppFlowRequest& WithFlowName(FlowNameT&& value) {
    SetFlowName(std::forward<FlowNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated categories for the Flow.</p>
   */
  inline const Aws::Vector<MetaFlowCategory>& GetCategories() const { return m_categories; }
  inline bool CategoriesHasBeenSet() const { return m_categoriesHasBeenSet; }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  void SetCategories(CategoriesT&& value) {
    m_categoriesHasBeenSet = true;
    m_categories = std::forward<CategoriesT>(value);
  }
  template <typename CategoriesT = Aws::Vector<MetaFlowCategory>>
  UpdateWhatsAppFlowRequest& WithCategories(CategoriesT&& value) {
    SetCategories(std::forward<CategoriesT>(value));
    return *this;
  }
  inline UpdateWhatsAppFlowRequest& AddCategories(MetaFlowCategory value) {
    m_categoriesHasBeenSet = true;
    m_categories.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_flowId;

  Aws::String m_flowName;

  Aws::Vector<MetaFlowCategory> m_categories;
  bool m_idHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_flowNameHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
