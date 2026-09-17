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
namespace SocialMessaging {
namespace Model {

/**
 */
class GetWhatsAppCallPermissionRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API GetWhatsAppCallPermissionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetWhatsAppCallPermission"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the business phone number for which to retrieve the
   * calling permission. The phone number identifiers are formatted as
   * <code>phone-number-id-01234567890123456789012345678901</code>.</p>
   */
  inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
  inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    m_originationPhoneNumberIdHasBeenSet = true;
    m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value);
  }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  GetWhatsAppCallPermissionRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end user's phone number, in E.164 format, for which to retrieve the
   * calling permission.</p>
   */
  inline const Aws::String& GetDestinationPhoneNumber() const { return m_destinationPhoneNumber; }
  inline bool DestinationPhoneNumberHasBeenSet() const { return m_destinationPhoneNumberHasBeenSet; }
  template <typename DestinationPhoneNumberT = Aws::String>
  void SetDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    m_destinationPhoneNumberHasBeenSet = true;
    m_destinationPhoneNumber = std::forward<DestinationPhoneNumberT>(value);
  }
  template <typename DestinationPhoneNumberT = Aws::String>
  GetWhatsAppCallPermissionRequest& WithDestinationPhoneNumber(DestinationPhoneNumberT&& value) {
    SetDestinationPhoneNumber(std::forward<DestinationPhoneNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The business-scoped user identifier (BSUID) of the end user for which to
   * retrieve the calling permission.</p>
   */
  inline const Aws::String& GetEndUserBsuid() const { return m_endUserBsuid; }
  inline bool EndUserBsuidHasBeenSet() const { return m_endUserBsuidHasBeenSet; }
  template <typename EndUserBsuidT = Aws::String>
  void SetEndUserBsuid(EndUserBsuidT&& value) {
    m_endUserBsuidHasBeenSet = true;
    m_endUserBsuid = std::forward<EndUserBsuidT>(value);
  }
  template <typename EndUserBsuidT = Aws::String>
  GetWhatsAppCallPermissionRequest& WithEndUserBsuid(EndUserBsuidT&& value) {
    SetEndUserBsuid(std::forward<EndUserBsuidT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_originationPhoneNumberId;

  Aws::String m_destinationPhoneNumber;

  Aws::String m_endUserBsuid;
  bool m_originationPhoneNumberIdHasBeenSet = false;
  bool m_destinationPhoneNumberHasBeenSet = false;
  bool m_endUserBsuidHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
