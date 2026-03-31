/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/event/EventStreamHandler.h>
#include <aws/polly/PollyErrors.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/AudioEvent.h>
#include <aws/polly/model/StartSpeechSynthesisStreamInitialResponse.h>
#include <aws/polly/model/StreamClosedEvent.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class StartSpeechSynthesisStreamEventType { INITIAL_RESPONSE, AUDIOEVENT, STREAMCLOSEDEVENT, UNKNOWN };

class StartSpeechSynthesisStreamHandler : public Aws::Utils::Event::EventStreamHandler {
  typedef std::function<void(const StartSpeechSynthesisStreamInitialResponse&)> StartSpeechSynthesisStreamInitialResponseCallback;
  typedef std::function<void(const StartSpeechSynthesisStreamInitialResponse&, const Utils::Event::InitialResponseType)>
      StartSpeechSynthesisStreamInitialResponseCallbackEx;
  typedef std::function<void(const AudioEvent&)> AudioEventCallback;
  typedef std::function<void(const StreamClosedEvent&)> StreamClosedEventCallback;
  typedef std::function<void(const Aws::Client::AWSError<PollyErrors>& error)> ErrorCallback;

 public:
  AWS_POLLY_API StartSpeechSynthesisStreamHandler();
  AWS_POLLY_API StartSpeechSynthesisStreamHandler& operator=(const StartSpeechSynthesisStreamHandler&) = default;
  AWS_POLLY_API StartSpeechSynthesisStreamHandler(const StartSpeechSynthesisStreamHandler&) = default;

  AWS_POLLY_API virtual void OnEvent() override;

  ///@{
  /**
   * Sets an initial response callback. This callback gets called on the initial StartSpeechSynthesisStream Operation response.
   *   This can be either "initial-response" decoded event frame or decoded HTTP headers received on connection.
   *   This callback may get called more than once (i.e. on connection headers received and then on the initial-response event received).
   * @param callback
   */
  inline void SetInitialResponseCallbackEx(const StartSpeechSynthesisStreamInitialResponseCallbackEx& callback) {
    m_onInitialResponse = callback;
  }
  /**
   * Sets an initial response callback (a legacy one that does not distinguish whether response originates from headers or from the event).
   */
  inline void SetInitialResponseCallback(const StartSpeechSynthesisStreamInitialResponseCallback& noArgCallback) {
    m_onInitialResponse = [noArgCallback](const StartSpeechSynthesisStreamInitialResponse& rs, const Utils::Event::InitialResponseType) {
      return noArgCallback(rs);
    };
  }
  ///@}
  inline void SetAudioEventCallback(const AudioEventCallback& callback) { m_onAudioEvent = callback; }
  inline void SetStreamClosedEventCallback(const StreamClosedEventCallback& callback) { m_onStreamClosedEvent = callback; }
  inline void SetOnErrorCallback(const ErrorCallback& callback) { m_onError = callback; }

  inline StartSpeechSynthesisStreamInitialResponseCallbackEx& GetInitialResponseCallbackEx() { return m_onInitialResponse; }

 private:
  AWS_POLLY_API void HandleEventInMessage();
  AWS_POLLY_API void HandleErrorInMessage();
  AWS_POLLY_API void MarshallError(const Aws::String& errorCode, const Aws::String& errorMessage);

  StartSpeechSynthesisStreamInitialResponseCallbackEx m_onInitialResponse;
  AudioEventCallback m_onAudioEvent;
  StreamClosedEventCallback m_onStreamClosedEvent;
  ErrorCallback m_onError;
};

namespace StartSpeechSynthesisStreamEventMapper {
AWS_POLLY_API StartSpeechSynthesisStreamEventType GetStartSpeechSynthesisStreamEventTypeForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForStartSpeechSynthesisStreamEventType(StartSpeechSynthesisStreamEventType value);
}  // namespace StartSpeechSynthesisStreamEventMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
