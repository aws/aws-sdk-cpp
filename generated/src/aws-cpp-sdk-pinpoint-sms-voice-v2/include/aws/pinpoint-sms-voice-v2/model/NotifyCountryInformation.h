/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationTier.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationUseCase.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 * <p>The information for a country that supports notify messaging.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/NotifyCountryInformation">AWS
 * API Reference</a></p>
 */
class NotifyCountryInformation {
 public:
  AWS_PINPOINTSMSVOICEV2_API NotifyCountryInformation() = default;
  AWS_PINPOINTSMSVOICEV2_API NotifyCountryInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API NotifyCountryInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The two-character code, in ISO 3166-1 alpha-2 format, for the country or
   * region.</p>
   */
  inline const Aws::String& GetIsoCountryCode() const { return m_isoCountryCode; }
  inline bool IsoCountryCodeHasBeenSet() const { return m_isoCountryCodeHasBeenSet; }
  template <typename IsoCountryCodeT = Aws::String>
  void SetIsoCountryCode(IsoCountryCodeT&& value) {
    m_isoCountryCodeHasBeenSet = true;
    m_isoCountryCode = std::forward<IsoCountryCodeT>(value);
  }
  template <typename IsoCountryCodeT = Aws::String>
  NotifyCountryInformation& WithIsoCountryCode(IsoCountryCodeT&& value) {
    SetIsoCountryCode(std::forward<IsoCountryCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the country.</p>
   */
  inline const Aws::String& GetCountryName() const { return m_countryName; }
  inline bool CountryNameHasBeenSet() const { return m_countryNameHasBeenSet; }
  template <typename CountryNameT = Aws::String>
  void SetCountryName(CountryNameT&& value) {
    m_countryNameHasBeenSet = true;
    m_countryName = std::forward<CountryNameT>(value);
  }
  template <typename CountryNameT = Aws::String>
  NotifyCountryInformation& WithCountryName(CountryNameT&& value) {
    SetCountryName(std::forward<CountryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of supported channels for the country. Supported values include
   * <code>SMS</code> and <code>VOICE</code>.</p>
   */
  inline const Aws::Vector<NumberCapability>& GetSupportedChannels() const { return m_supportedChannels; }
  inline bool SupportedChannelsHasBeenSet() const { return m_supportedChannelsHasBeenSet; }
  template <typename SupportedChannelsT = Aws::Vector<NumberCapability>>
  void SetSupportedChannels(SupportedChannelsT&& value) {
    m_supportedChannelsHasBeenSet = true;
    m_supportedChannels = std::forward<SupportedChannelsT>(value);
  }
  template <typename SupportedChannelsT = Aws::Vector<NumberCapability>>
  NotifyCountryInformation& WithSupportedChannels(SupportedChannelsT&& value) {
    SetSupportedChannels(std::forward<SupportedChannelsT>(value));
    return *this;
  }
  inline NotifyCountryInformation& AddSupportedChannels(NumberCapability value) {
    m_supportedChannelsHasBeenSet = true;
    m_supportedChannels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of supported use cases for the country.</p>
   */
  inline const Aws::Vector<NotifyConfigurationUseCase>& GetSupportedUseCases() const { return m_supportedUseCases; }
  inline bool SupportedUseCasesHasBeenSet() const { return m_supportedUseCasesHasBeenSet; }
  template <typename SupportedUseCasesT = Aws::Vector<NotifyConfigurationUseCase>>
  void SetSupportedUseCases(SupportedUseCasesT&& value) {
    m_supportedUseCasesHasBeenSet = true;
    m_supportedUseCases = std::forward<SupportedUseCasesT>(value);
  }
  template <typename SupportedUseCasesT = Aws::Vector<NotifyConfigurationUseCase>>
  NotifyCountryInformation& WithSupportedUseCases(SupportedUseCasesT&& value) {
    SetSupportedUseCases(std::forward<SupportedUseCasesT>(value));
    return *this;
  }
  inline NotifyCountryInformation& AddSupportedUseCases(NotifyConfigurationUseCase value) {
    m_supportedUseCasesHasBeenSet = true;
    m_supportedUseCases.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of supported tiers for the country.</p>
   */
  inline const Aws::Vector<NotifyConfigurationTier>& GetSupportedTiers() const { return m_supportedTiers; }
  inline bool SupportedTiersHasBeenSet() const { return m_supportedTiersHasBeenSet; }
  template <typename SupportedTiersT = Aws::Vector<NotifyConfigurationTier>>
  void SetSupportedTiers(SupportedTiersT&& value) {
    m_supportedTiersHasBeenSet = true;
    m_supportedTiers = std::forward<SupportedTiersT>(value);
  }
  template <typename SupportedTiersT = Aws::Vector<NotifyConfigurationTier>>
  NotifyCountryInformation& WithSupportedTiers(SupportedTiersT&& value) {
    SetSupportedTiers(std::forward<SupportedTiersT>(value));
    return *this;
  }
  inline NotifyCountryInformation& AddSupportedTiers(NotifyConfigurationTier value) {
    m_supportedTiersHasBeenSet = true;
    m_supportedTiers.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether a customer-owned identity is required to send notify messages to this
   * country.</p>
   */
  inline bool GetCustomerOwnedIdentityRequired() const { return m_customerOwnedIdentityRequired; }
  inline bool CustomerOwnedIdentityRequiredHasBeenSet() const { return m_customerOwnedIdentityRequiredHasBeenSet; }
  inline void SetCustomerOwnedIdentityRequired(bool value) {
    m_customerOwnedIdentityRequiredHasBeenSet = true;
    m_customerOwnedIdentityRequired = value;
  }
  inline NotifyCountryInformation& WithCustomerOwnedIdentityRequired(bool value) {
    SetCustomerOwnedIdentityRequired(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_isoCountryCode;

  Aws::String m_countryName;

  Aws::Vector<NumberCapability> m_supportedChannels;

  Aws::Vector<NotifyConfigurationUseCase> m_supportedUseCases;

  Aws::Vector<NotifyConfigurationTier> m_supportedTiers;

  bool m_customerOwnedIdentityRequired{false};
  bool m_isoCountryCodeHasBeenSet = false;
  bool m_countryNameHasBeenSet = false;
  bool m_supportedChannelsHasBeenSet = false;
  bool m_supportedUseCasesHasBeenSet = false;
  bool m_supportedTiersHasBeenSet = false;
  bool m_customerOwnedIdentityRequiredHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
