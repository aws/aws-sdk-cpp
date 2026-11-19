/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/CustomerManagedEncryption.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/Gender.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/polly/model/VoiceCreationData.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/VoiceOrigin.h>
#include <aws/polly/model/VoiceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>Describes a voice. Amazon Polly provides voices, and you can create custom
 * voices with <code>CreateVoice</code>. <code>Origin</code> indicates whether
 * Amazon Polly provides the voice or you created it. <code>DescribeVoices</code>
 * returns a subset of the fields for each voice. <code>GetVoice</code> returns all
 * fields of a custom voice.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/Voice">AWS API
 * Reference</a></p>
 */
class Voice {
 public:
  AWS_POLLY_API Voice() = default;
  AWS_POLLY_API Voice(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Voice& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of a custom voice, in the form
   * <code>arn:partition:polly:region:account-id:voice/voice-id</code>.
   * <code>CreateVoice</code> and <code>GetVoice</code> return this field. Voices
   * that Amazon Polly provides don't have an ARN.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  Voice& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The gender of the voice. Custom voices don't include this field.</p>
   */
  inline Gender GetGender() const { return m_gender; }
  inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
  inline void SetGender(Gender value) {
    m_genderHasBeenSet = true;
    m_gender = value;
  }
  inline Voice& WithGender(Gender value) {
    SetGender(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The voice ID that Amazon Polly assigns. You specify this ID when you call the
   * <code>SynthesizeSpeech</code> operation. For a custom voice, Amazon Polly
   * assigns an ID that consists of <code>vc-</code> followed by hexadecimal
   * characters, for example, <code>vc-9a8fa85dd3</code>.</p>
   */
  inline VoiceId GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  inline void SetId(VoiceId value) {
    m_idHasBeenSet = true;
    m_id = value;
  }
  inline Voice& WithId(VoiceId value) {
    SetId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Language code of the voice.</p>
   */
  inline LanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(LanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline Voice& WithLanguageCode(LanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Human readable name of the language in English.</p>
   */
  inline const Aws::String& GetLanguageName() const { return m_languageName; }
  inline bool LanguageNameHasBeenSet() const { return m_languageNameHasBeenSet; }
  template <typename LanguageNameT = Aws::String>
  void SetLanguageName(LanguageNameT&& value) {
    m_languageNameHasBeenSet = true;
    m_languageName = std::forward<LanguageNameT>(value);
  }
  template <typename LanguageNameT = Aws::String>
  Voice& WithLanguageName(LanguageNameT&& value) {
    SetLanguageName(std::forward<LanguageNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the voice, for example, Salli or Kendra. The name is
   * human-readable, and you might display it in your application. For a custom
   * voice, this is the <code>Name</code> that you specified in
   * <code>CreateVoice</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Voice& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates who provides the voice. The origin is one of the following:</p>
   * <dl> <dt>aws</dt> <dd> <p>A voice that Amazon Polly provides.</p> </dd>
   * <dt>customer</dt> <dd> <p>A custom voice that you created with
   * <code>CreateVoice</code>.</p> </dd> </dl>
   */
  inline VoiceOrigin GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  inline void SetOrigin(VoiceOrigin value) {
    m_originHasBeenSet = true;
    m_origin = value;
  }
  inline Voice& WithOrigin(VoiceOrigin value) {
    SetOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of a custom voice. Voices that Amazon Polly provides don't include
   * this field. The status is one of the following:</p> <dl> <dt>pending</dt> <dd>
   * <p>Amazon Polly is creating the voice.</p> </dd> <dt>active</dt> <dd> <p>The
   * voice is ready for speech synthesis.</p> </dd> <dt>failed</dt> <dd> <p>Amazon
   * Polly couldn't create the voice. <code>StatusReason</code> describes why.</p>
   * </dd> </dl>
   */
  inline VoiceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VoiceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline Voice& WithStatus(VoiceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about the status of a custom voice. When the status is
   * <code>failed</code>, this field describes why Amazon Polly couldn't create the
   * voice.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  Voice& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional codes for languages available for the specified voice in addition
   * to its default language. </p> <p>For example, the default language for Aditi is
   * Indian English (en-IN) because it was first used for that language. Since Aditi
   * is bilingual and fluent in both Indian English and Hindi, this parameter would
   * show the code <code>hi-IN</code>.</p>
   */
  inline const Aws::Vector<LanguageCode>& GetAdditionalLanguageCodes() const { return m_additionalLanguageCodes; }
  inline bool AdditionalLanguageCodesHasBeenSet() const { return m_additionalLanguageCodesHasBeenSet; }
  template <typename AdditionalLanguageCodesT = Aws::Vector<LanguageCode>>
  void SetAdditionalLanguageCodes(AdditionalLanguageCodesT&& value) {
    m_additionalLanguageCodesHasBeenSet = true;
    m_additionalLanguageCodes = std::forward<AdditionalLanguageCodesT>(value);
  }
  template <typename AdditionalLanguageCodesT = Aws::Vector<LanguageCode>>
  Voice& WithAdditionalLanguageCodes(AdditionalLanguageCodesT&& value) {
    SetAdditionalLanguageCodes(std::forward<AdditionalLanguageCodesT>(value));
    return *this;
  }
  inline Voice& AddAdditionalLanguageCodes(LanguageCode value) {
    m_additionalLanguageCodesHasBeenSet = true;
    m_additionalLanguageCodes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which engines (<code>standard</code>, <code>neural</code>,
   * <code>long-form</code> or <code>generative</code>) are supported by a given
   * voice.</p>
   */
  inline const Aws::Vector<Engine>& GetSupportedEngines() const { return m_supportedEngines; }
  inline bool SupportedEnginesHasBeenSet() const { return m_supportedEnginesHasBeenSet; }
  template <typename SupportedEnginesT = Aws::Vector<Engine>>
  void SetSupportedEngines(SupportedEnginesT&& value) {
    m_supportedEnginesHasBeenSet = true;
    m_supportedEngines = std::forward<SupportedEnginesT>(value);
  }
  template <typename SupportedEnginesT = Aws::Vector<Engine>>
  Voice& WithSupportedEngines(SupportedEnginesT&& value) {
    SetSupportedEngines(std::forward<SupportedEnginesT>(value));
    return *this;
  }
  inline Voice& AddSupportedEngines(Engine value) {
    m_supportedEnginesHasBeenSet = true;
    m_supportedEngines.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data from which you created the custom voice. <code>CreateVoice</code>
   * and <code>GetVoice</code> return this field. The response doesn't include the
   * audio: a recording that Amazon Polly read from Amazon S3 includes its
   * <code>S3Url</code>, and a recording that you passed as <code>Bytes</code> has no
   * fields in <code>Data</code>.</p>
   */
  inline const VoiceCreationData& GetVoiceCreationData() const { return m_voiceCreationData; }
  inline bool VoiceCreationDataHasBeenSet() const { return m_voiceCreationDataHasBeenSet; }
  template <typename VoiceCreationDataT = VoiceCreationData>
  void SetVoiceCreationData(VoiceCreationDataT&& value) {
    m_voiceCreationDataHasBeenSet = true;
    m_voiceCreationData = std::forward<VoiceCreationDataT>(value);
  }
  template <typename VoiceCreationDataT = VoiceCreationData>
  Voice& WithVoiceCreationData(VoiceCreationDataT&& value) {
    SetVoiceCreationData(std::forward<VoiceCreationDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer managed key that encrypts your custom voice.
   * <code>CreateVoice</code> and <code>GetVoice</code> return this field if you
   * specified a key in <code>CreateVoice</code>.</p>
   */
  inline const CustomerManagedEncryption& GetCustomerManagedEncryption() const { return m_customerManagedEncryption; }
  inline bool CustomerManagedEncryptionHasBeenSet() const { return m_customerManagedEncryptionHasBeenSet; }
  template <typename CustomerManagedEncryptionT = CustomerManagedEncryption>
  void SetCustomerManagedEncryption(CustomerManagedEncryptionT&& value) {
    m_customerManagedEncryptionHasBeenSet = true;
    m_customerManagedEncryption = std::forward<CustomerManagedEncryptionT>(value);
  }
  template <typename CustomerManagedEncryptionT = CustomerManagedEncryption>
  Voice& WithCustomerManagedEncryption(CustomerManagedEncryptionT&& value) {
    SetCustomerManagedEncryption(std::forward<CustomerManagedEncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when you created the custom voice. Voices that Amazon Polly
   * provides don't include this field.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  Voice& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Gender m_gender{Gender::NOT_SET};

  VoiceId m_id{VoiceId::NOT_SET};

  LanguageCode m_languageCode{LanguageCode::NOT_SET};

  Aws::String m_languageName;

  Aws::String m_name;

  VoiceOrigin m_origin{VoiceOrigin::NOT_SET};

  VoiceStatus m_status{VoiceStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::Vector<LanguageCode> m_additionalLanguageCodes;

  Aws::Vector<Engine> m_supportedEngines;

  VoiceCreationData m_voiceCreationData;

  CustomerManagedEncryption m_customerManagedEncryption;

  Aws::Utils::DateTime m_creationTime{};
  bool m_arnHasBeenSet = false;
  bool m_genderHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_languageNameHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_originHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_additionalLanguageCodesHasBeenSet = false;
  bool m_supportedEnginesHasBeenSet = false;
  bool m_voiceCreationDataHasBeenSet = false;
  bool m_customerManagedEncryptionHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
