/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/CustomVoiceLanguageCode.h>
#include <aws/polly/model/CustomerManagedEncryption.h>
#include <aws/polly/model/VoiceCreationData.h>

#include <utility>

namespace Aws {
namespace Polly {
namespace Model {

/**
 */
class CreateVoiceRequest : public PollyRequest {
 public:
  AWS_POLLY_API CreateVoiceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateVoice"; }

  AWS_POLLY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the voice. Use the name to identify the voice in your
   * application. The name can contain letters, digits, hyphens, and underscores, and
   * can be up to 64 characters long. The name doesn't have to be unique. The name
   * isn't the voice ID, which Amazon Polly assigns.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateVoiceRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the recordings, for example, <code>en-US</code>. Amazon Polly
   * doesn't detect the language from the recordings.</p>
   */
  inline CustomVoiceLanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(CustomVoiceLanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline CreateVoiceRequest& WithLanguageCode(CustomVoiceLanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Confirms the following two statements:</p> <ul> <li> <p>"I confirm that I
   * have obtained all necessary consents required under any applicable laws and
   * regulations, including biometric privacy laws, from the owner of this voice to
   * clone these voice samples."</p> </li> <li> <p>"I confirm that I will not use the
   * generated content for any illegal, fraudulent, or harmful purpose and reaffirm
   * my obligation to abide by the AWS Service Terms, Biometric Notice and Consent
   * Terms, AWS Responsible AI Policy, and AWS Acceptable Use Policy."</p> </li>
   * </ul> <p>You can read the <a href="https://aws.amazon.com/service-terms/">AWS
   * Service Terms</a>, the <a
   * href="https://aws.amazon.com/legal/biometric-notice-and-consent-terms/">Biometric
   * Notice and Consent Terms</a>, the <a
   * href="https://aws.amazon.com/ai/responsible-ai/policy/">AWS Responsible AI
   * Policy</a>, and the <a href="https://aws.amazon.com/aup/">AWS Acceptable Use
   * Policy</a> on the Amazon Web Services website.</p> <p>You must set this
   * parameter to <code>true</code> to create a voice. Otherwise, the request fails
   * with <code>ValidationException</code>.</p>
   */
  inline bool GetTermsAccepted() const { return m_termsAccepted; }
  inline bool TermsAcceptedHasBeenSet() const { return m_termsAcceptedHasBeenSet; }
  inline void SetTermsAccepted(bool value) {
    m_termsAcceptedHasBeenSet = true;
    m_termsAccepted = value;
  }
  inline CreateVoiceRequest& WithTermsAccepted(bool value) {
    SetTermsAccepted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The recordings that Amazon Polly uses to create the voice.</p>
   */
  inline const VoiceCreationData& GetVoiceCreationData() const { return m_voiceCreationData; }
  inline bool VoiceCreationDataHasBeenSet() const { return m_voiceCreationDataHasBeenSet; }
  template <typename VoiceCreationDataT = VoiceCreationData>
  void SetVoiceCreationData(VoiceCreationDataT&& value) {
    m_voiceCreationDataHasBeenSet = true;
    m_voiceCreationData = std::forward<VoiceCreationDataT>(value);
  }
  template <typename VoiceCreationDataT = VoiceCreationData>
  CreateVoiceRequest& WithVoiceCreationData(VoiceCreationDataT&& value) {
    SetVoiceCreationData(std::forward<VoiceCreationDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer managed key that you want Amazon Polly to encrypt the voice
   * with. If you omit this parameter, Amazon Polly encrypts the voice with an Amazon
   * Web Services owned key.</p>
   */
  inline const CustomerManagedEncryption& GetCustomerManagedEncryption() const { return m_customerManagedEncryption; }
  inline bool CustomerManagedEncryptionHasBeenSet() const { return m_customerManagedEncryptionHasBeenSet; }
  template <typename CustomerManagedEncryptionT = CustomerManagedEncryption>
  void SetCustomerManagedEncryption(CustomerManagedEncryptionT&& value) {
    m_customerManagedEncryptionHasBeenSet = true;
    m_customerManagedEncryption = std::forward<CustomerManagedEncryptionT>(value);
  }
  template <typename CustomerManagedEncryptionT = CustomerManagedEncryption>
  CreateVoiceRequest& WithCustomerManagedEncryption(CustomerManagedEncryptionT&& value) {
    SetCustomerManagedEncryption(std::forward<CustomerManagedEncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags that you apply to the voice to help you categorize and organize it.
   * Each tag consists of a key and an optional value, both of which you define.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateVoiceRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateVoiceRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you don't specify a client token, the Amazon Web
   * Services SDKs generate one for you. If you retry a request that succeeded with
   * the same client token and the same parameters, Amazon Polly returns the voice
   * that the first request created and doesn't create a second voice.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateVoiceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  CustomVoiceLanguageCode m_languageCode{CustomVoiceLanguageCode::NOT_SET};

  bool m_termsAccepted{false};

  VoiceCreationData m_voiceCreationData;

  CustomerManagedEncryption m_customerManagedEncryption;

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_nameHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_termsAcceptedHasBeenSet = false;
  bool m_voiceCreationDataHasBeenSet = false;
  bool m_customerManagedEncryptionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
