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
class GetWhatsAppBusinessPublicKeyRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppBusinessPublicKeyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWhatsAppBusinessPublicKey"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  AWS_SOCIALMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the phone number whose business public key to
   * retrieve.</p>
   */
  inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
  inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    m_originationPhoneNumberIdHasBeenSet = true;
    m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value);
  }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  GetWhatsAppBusinessPublicKeyRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_originationPhoneNumberId;
  bool m_originationPhoneNumberIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
