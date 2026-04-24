/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationTier.h>
#include <aws/pinpoint-sms-voice-v2/model/NotifyConfigurationUseCase.h>
#include <aws/pinpoint-sms-voice-v2/model/NumberCapability.h>

#include <utility>

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

/**
 */
class ListNotifyCountriesRequest : public PinpointSMSVoiceV2Request {
 public:
  AWS_PINPOINTSMSVOICEV2_API ListNotifyCountriesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListNotifyCountries"; }

  AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

  AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>An array of channels to filter the results by.</p>
   */
  inline const Aws::Vector<NumberCapability>& GetChannels() const { return m_channels; }
  inline bool ChannelsHasBeenSet() const { return m_channelsHasBeenSet; }
  template <typename ChannelsT = Aws::Vector<NumberCapability>>
  void SetChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels = std::forward<ChannelsT>(value);
  }
  template <typename ChannelsT = Aws::Vector<NumberCapability>>
  ListNotifyCountriesRequest& WithChannels(ChannelsT&& value) {
    SetChannels(std::forward<ChannelsT>(value));
    return *this;
  }
  inline ListNotifyCountriesRequest& AddChannels(NumberCapability value) {
    m_channelsHasBeenSet = true;
    m_channels.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of use cases to filter the results by.</p>
   */
  inline const Aws::Vector<NotifyConfigurationUseCase>& GetUseCases() const { return m_useCases; }
  inline bool UseCasesHasBeenSet() const { return m_useCasesHasBeenSet; }
  template <typename UseCasesT = Aws::Vector<NotifyConfigurationUseCase>>
  void SetUseCases(UseCasesT&& value) {
    m_useCasesHasBeenSet = true;
    m_useCases = std::forward<UseCasesT>(value);
  }
  template <typename UseCasesT = Aws::Vector<NotifyConfigurationUseCase>>
  ListNotifyCountriesRequest& WithUseCases(UseCasesT&& value) {
    SetUseCases(std::forward<UseCasesT>(value));
    return *this;
  }
  inline ListNotifyCountriesRequest& AddUseCases(NotifyConfigurationUseCase value) {
    m_useCasesHasBeenSet = true;
    m_useCases.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tier to filter the results by.</p>
   */
  inline NotifyConfigurationTier GetTier() const { return m_tier; }
  inline bool TierHasBeenSet() const { return m_tierHasBeenSet; }
  inline void SetTier(NotifyConfigurationTier value) {
    m_tierHasBeenSet = true;
    m_tier = value;
  }
  inline ListNotifyCountriesRequest& WithTier(NotifyConfigurationTier value) {
    SetTier(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to be used for the next set of paginated results. You don't need to
   * supply a value for this field in the initial request.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListNotifyCountriesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per each request.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListNotifyCountriesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<NumberCapability> m_channels;

  Aws::Vector<NotifyConfigurationUseCase> m_useCases;

  NotifyConfigurationTier m_tier{NotifyConfigurationTier::NOT_SET};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_channelsHasBeenSet = false;
  bool m_useCasesHasBeenSet = false;
  bool m_tierHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
