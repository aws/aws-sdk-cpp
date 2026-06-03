/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SocialMessaging {
namespace Model {

/**
 */
class GetWhatsAppFlowPreviewRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppFlowPreviewRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWhatsAppFlowPreview"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  AWS_SOCIALMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  GetWhatsAppFlowPreviewRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Flow to preview.</p>
   */
  inline const Aws::String& GetFlowId() const { return m_flowId; }
  inline bool FlowIdHasBeenSet() const { return m_flowIdHasBeenSet; }
  template <typename FlowIdT = Aws::String>
  void SetFlowId(FlowIdT&& value) {
    m_flowIdHasBeenSet = true;
    m_flowId = std::forward<FlowIdT>(value);
  }
  template <typename FlowIdT = Aws::String>
  GetWhatsAppFlowPreviewRequest& WithFlowId(FlowIdT&& value) {
    SetFlowId(std::forward<FlowIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to <code>true</code> to force generation of a new preview URL. Use this
   * if the previous URL has been compromised or you want a fresh expiration
   * period.</p>
   */
  inline bool GetInvalidate() const { return m_invalidate; }
  inline bool InvalidateHasBeenSet() const { return m_invalidateHasBeenSet; }
  inline void SetInvalidate(bool value) {
    m_invalidateHasBeenSet = true;
    m_invalidate = value;
  }
  inline GetWhatsAppFlowPreviewRequest& WithInvalidate(bool value) {
    SetInvalidate(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_flowId;

  bool m_invalidate{false};
  bool m_idHasBeenSet = false;
  bool m_flowIdHasBeenSet = false;
  bool m_invalidateHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
