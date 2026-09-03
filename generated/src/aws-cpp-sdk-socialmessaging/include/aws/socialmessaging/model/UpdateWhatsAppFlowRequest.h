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

  ///@{
  /**
   * <p>Optional HTTPS endpoint for a dynamic Flow, registered with Meta as the
   * Flow's endpoint_uri and called by Meta directly. When omitted, the Flow's
   * endpoint is unchanged.</p>
   */
  inline const Aws::String& GetEndpointUri() const { return m_endpointUri; }
  inline bool EndpointUriHasBeenSet() const { return m_endpointUriHasBeenSet; }
  template <typename EndpointUriT = Aws::String>
  void SetEndpointUri(EndpointUriT&& value) {
    m_endpointUriHasBeenSet = true;
    m_endpointUri = std::forward<EndpointUriT>(value);
  }
  template <typename EndpointUriT = Aws::String>
  UpdateWhatsAppFlowRequest& WithEndpointUri(EndpointUriT&& value) {
    SetEndpointUri(std::forward<EndpointUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional Meta app ID to attach to the Flow. Meta signs data-exchange requests
   * with the attached app's secret, so attaching your own app is what enables
   * X-Hub-Signature-256 and flow_token_signature verification at your endpoint. Meta
   * requires the app to be owned by the same business that owns the WABA. Attaching
   * your own app is one-way: the service's app cannot be re-attached afterwards.
   * When omitted, the attached app is unchanged. (Set via update because Meta
   * ignores application_id at creation time.)</p>
   */
  inline const Aws::String& GetMetaAppId() const { return m_metaAppId; }
  inline bool MetaAppIdHasBeenSet() const { return m_metaAppIdHasBeenSet; }
  template <typename MetaAppIdT = Aws::String>
  void SetMetaAppId(MetaAppIdT&& value) {
    m_metaAppIdHasBeenSet = true;
    m_metaAppId = std::forward<MetaAppIdT>(value);
  }
  template <typename MetaAppIdT = Aws::String>
  UpdateWhatsAppFlowRequest& WithMetaAppId(MetaAppIdT&& value) {
    SetMetaAppId(std::forward<MetaAppIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_flowId;

  Aws::String m_flowName;

  Aws::Vector<MetaFlowCategory> m_categories;

  Aws::String m_endpointUri;

  Aws::String m_metaAppId;
  bool m_idHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_flowNameHasBeenSet = false;
  bool m_categoriesHasBeenSet = false;
  bool m_endpointUriHasBeenSet = false;
  bool m_metaAppIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
