/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessagingRequest.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>
#include <aws/socialmessaging/model/WhatsAppCallSettings.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SocialMessaging {
namespace Model {

/**
 */
class UpdateLinkedWhatsAppBusinessAccountPhoneNumberRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API UpdateLinkedWhatsAppBusinessAccountPhoneNumberRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLinkedWhatsAppBusinessAccountPhoneNumber"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  AWS_SOCIALMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the phone number to update. The phone number
   * identifiers are formatted as
   * <code>phone-number-id-01234567890123456789012345678901</code>.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  UpdateLinkedWhatsAppBusinessAccountPhoneNumberRequest& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The calling settings to apply to the phone number.</p>
   */
  inline const WhatsAppCallSettings& GetCallSettings() const { return m_callSettings; }
  inline bool CallSettingsHasBeenSet() const { return m_callSettingsHasBeenSet; }
  template <typename CallSettingsT = WhatsAppCallSettings>
  void SetCallSettings(CallSettingsT&& value) {
    m_callSettingsHasBeenSet = true;
    m_callSettings = std::forward<CallSettingsT>(value);
  }
  template <typename CallSettingsT = WhatsAppCallSettings>
  UpdateLinkedWhatsAppBusinessAccountPhoneNumberRequest& WithCallSettings(CallSettingsT&& value) {
    SetCallSettings(std::forward<CallSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  WhatsAppCallSettings m_callSettings;
  bool m_idHasBeenSet = false;
  bool m_callSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
