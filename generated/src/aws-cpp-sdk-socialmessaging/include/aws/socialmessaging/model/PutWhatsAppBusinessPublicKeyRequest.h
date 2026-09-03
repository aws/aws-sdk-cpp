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
class PutWhatsAppBusinessPublicKeyRequest : public SocialMessagingRequest {
 public:
  AWS_SOCIALMESSAGING_API PutWhatsAppBusinessPublicKeyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutWhatsAppBusinessPublicKey"; }

  AWS_SOCIALMESSAGING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the phone number to associate with the business
   * public key.</p>
   */
  inline const Aws::String& GetOriginationPhoneNumberId() const { return m_originationPhoneNumberId; }
  inline bool OriginationPhoneNumberIdHasBeenSet() const { return m_originationPhoneNumberIdHasBeenSet; }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  void SetOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    m_originationPhoneNumberIdHasBeenSet = true;
    m_originationPhoneNumberId = std::forward<OriginationPhoneNumberIdT>(value);
  }
  template <typename OriginationPhoneNumberIdT = Aws::String>
  PutWhatsAppBusinessPublicKeyRequest& WithOriginationPhoneNumberId(OriginationPhoneNumberIdT&& value) {
    SetOriginationPhoneNumberId(std::forward<OriginationPhoneNumberIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>PEM-encoded RSA public key. Mutually exclusive with kmsKeyArn.</p>
   */
  inline const Aws::String& GetBusinessPublicKey() const { return m_businessPublicKey; }
  inline bool BusinessPublicKeyHasBeenSet() const { return m_businessPublicKeyHasBeenSet; }
  template <typename BusinessPublicKeyT = Aws::String>
  void SetBusinessPublicKey(BusinessPublicKeyT&& value) {
    m_businessPublicKeyHasBeenSet = true;
    m_businessPublicKey = std::forward<BusinessPublicKeyT>(value);
  }
  template <typename BusinessPublicKeyT = Aws::String>
  PutWhatsAppBusinessPublicKeyRequest& WithBusinessPublicKey(BusinessPublicKeyT&& value) {
    SetBusinessPublicKey(std::forward<BusinessPublicKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer-managed KMS asymmetric RSA key ARN. Mutually exclusive with
   * businessPublicKey.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  PutWhatsAppBusinessPublicKeyRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_originationPhoneNumberId;

  Aws::String m_businessPublicKey;

  Aws::String m_kmsKeyArn;
  bool m_originationPhoneNumberIdHasBeenSet = false;
  bool m_businessPublicKeyHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
