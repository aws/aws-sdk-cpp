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
class SendWhatsAppCallEventRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API SendWhatsAppCallEventRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendWhatsAppCallEvent"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the origination phone number for the call. The phone
   * number identifiers are formatted as
   * <code>phone-number-id-01234567890123456789012345678901</code>. Use
   * <code>GetLinkedWhatsAppBusinessAccount</code> to find a phone number's ID.</p>
   */
  inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
  inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    m_originationPhoneNumberIdHasBeenSet = true;
    m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value);
  }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  SendWhatsAppCallEventRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Meta Graph API to use for the request.</p>
   */
  inline const Aws::String& GetMetaApiVersion() const { return m_metaApiVersion; }
  inline bool MetaApiVersionHasBeenSet() const { return m_metaApiVersionHasBeenSet; }
  template <typename MetaApiVersionT = Aws::String>
  void SetMetaApiVersion(MetaApiVersionT&& value) {
    m_metaApiVersionHasBeenSet = true;
    m_metaApiVersion = std::forward<MetaApiVersionT>(value);
  }
  template <typename MetaApiVersionT = Aws::String>
  SendWhatsAppCallEventRequest& WithMetaApiVersion(MetaApiVersionT&& value) {
    SetMetaApiVersion(std::forward<MetaApiVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The call event payload to send, as a JSON blob in the format defined by the
   * Meta calling API.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetCallEvent() const { return m_callEvent; }
  inline bool CallEventHasBeenSet() const { return m_callEventHasBeenSet; }
  template <typename CallEventT = Aws::Utils::CryptoBuffer>
  void SetCallEvent(CallEventT&& value) {
    m_callEventHasBeenSet = true;
    m_callEvent = std::forward<CallEventT>(value);
  }
  template <typename CallEventT = Aws::Utils::CryptoBuffer>
  SendWhatsAppCallEventRequest& WithCallEvent(CallEventT&& value) {
    SetCallEvent(std::forward<CallEventT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_originationPhoneNumberId;

  Aws::String m_metaApiVersion;

  Aws::Utils::CryptoBuffer m_callEvent{};
  bool m_originationPhoneNumberIdHasBeenSet = false;
  bool m_metaApiVersionHasBeenSet = false;
  bool m_callEventHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
