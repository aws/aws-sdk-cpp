/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SocialMessaging {
namespace Model {

/**
 */
class UpdateWhatsAppFlowAssetsRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API UpdateWhatsAppFlowAssetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWhatsAppFlowAssets"; }

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
  UpdateWhatsAppFlowAssetsRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Flow whose assets to update.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  UpdateWhatsAppFlowAssetsRequest& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated Flow JSON definition. Maximum size is 10 MB.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetFlowJson() const { return m_flowJson; }
  inline bool FlowJsonHasBeenSet() const { return m_flowJsonHasBeenSet; }
  template <typename FlowJsonT = Aws::Utils::ByteBuffer>
  void SetFlowJson(FlowJsonT&& value) {
    m_flowJsonHasBeenSet = true;
    m_flowJson = std::forward<FlowJsonT>(value);
  }
  template <typename FlowJsonT = Aws::Utils::ByteBuffer>
  UpdateWhatsAppFlowAssetsRequest& WithFlowJson(FlowJsonT&& value) {
    SetFlowJson(std::forward<FlowJsonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_flowId;

  Aws::Utils::ByteBuffer m_flowJson{};
  bool m_idHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_flowJsonHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
