/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/AudioEvent.h>
#include <aws/polly/model/ServiceQuotaExceededException.h>
#include <aws/polly/model/StreamClosedEvent.h>
#include <aws/polly/model/ThrottlingException.h>
#include <aws/polly/model/ValidationException.h>

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
 * <p>Outbound event stream that contains synthesized audio data and stream status
 * events.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/StartSpeechSynthesisStreamEventStream">AWS
 * API Reference</a></p>
 */
class StartSpeechSynthesisStreamEventStream {
 public:
  AWS_POLLY_API StartSpeechSynthesisStreamEventStream() = default;
  AWS_POLLY_API StartSpeechSynthesisStreamEventStream(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API StartSpeechSynthesisStreamEventStream& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An audio event containing synthesized speech.</p>
   */
  inline const AudioEvent& GetAudioEvent() const { return m_audioEvent; }
  inline bool AudioEventHasBeenSet() const { return m_audioEventHasBeenSet; }
  template <typename AudioEventT = AudioEvent>
  void SetAudioEvent(AudioEventT&& value) {
    m_audioEventHasBeenSet = true;
    m_audioEvent = std::forward<AudioEventT>(value);
  }
  template <typename AudioEventT = AudioEvent>
  StartSpeechSynthesisStreamEventStream& WithAudioEvent(AudioEventT&& value) {
    SetAudioEvent(std::forward<AudioEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An event, with summary information, indicating the stream has closed.</p>
   */
  inline const StreamClosedEvent& GetStreamClosedEvent() const { return m_streamClosedEvent; }
  inline bool StreamClosedEventHasBeenSet() const { return m_streamClosedEventHasBeenSet; }
  template <typename StreamClosedEventT = StreamClosedEvent>
  void SetStreamClosedEvent(StreamClosedEventT&& value) {
    m_streamClosedEventHasBeenSet = true;
    m_streamClosedEvent = std::forward<StreamClosedEventT>(value);
  }
  template <typename StreamClosedEventT = StreamClosedEvent>
  StartSpeechSynthesisStreamEventStream& WithStreamClosedEvent(StreamClosedEventT&& value) {
    SetStreamClosedEvent(std::forward<StreamClosedEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An exception indicating the input failed validation.</p>
   */
  inline const ValidationException& GetValidationException() const { return m_validationException; }
  inline bool ValidationExceptionHasBeenSet() const { return m_validationExceptionHasBeenSet; }
  template <typename ValidationExceptionT = ValidationException>
  void SetValidationException(ValidationExceptionT&& value) {
    m_validationExceptionHasBeenSet = true;
    m_validationException = std::forward<ValidationExceptionT>(value);
  }
  template <typename ValidationExceptionT = ValidationException>
  StartSpeechSynthesisStreamEventStream& WithValidationException(ValidationExceptionT&& value) {
    SetValidationException(std::forward<ValidationExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An exception indicating a service quota would be exceeded.</p>
   */
  inline const ServiceQuotaExceededException& GetServiceQuotaExceededException() const { return m_serviceQuotaExceededException; }
  inline bool ServiceQuotaExceededExceptionHasBeenSet() const { return m_serviceQuotaExceededExceptionHasBeenSet; }
  template <typename ServiceQuotaExceededExceptionT = ServiceQuotaExceededException>
  void SetServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    m_serviceQuotaExceededExceptionHasBeenSet = true;
    m_serviceQuotaExceededException = std::forward<ServiceQuotaExceededExceptionT>(value);
  }
  template <typename ServiceQuotaExceededExceptionT = ServiceQuotaExceededException>
  StartSpeechSynthesisStreamEventStream& WithServiceQuotaExceededException(ServiceQuotaExceededExceptionT&& value) {
    SetServiceQuotaExceededException(std::forward<ServiceQuotaExceededExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PollyError& GetServiceFailureException() const { return m_serviceFailureException; }
  inline bool ServiceFailureExceptionHasBeenSet() const { return m_serviceFailureExceptionHasBeenSet; }
  template <typename ServiceFailureExceptionT = PollyError>
  void SetServiceFailureException(ServiceFailureExceptionT&& value) {
    m_serviceFailureExceptionHasBeenSet = true;
    m_serviceFailureException = std::forward<ServiceFailureExceptionT>(value);
  }
  template <typename ServiceFailureExceptionT = PollyError>
  StartSpeechSynthesisStreamEventStream& WithServiceFailureException(ServiceFailureExceptionT&& value) {
    SetServiceFailureException(std::forward<ServiceFailureExceptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An exception indicating the request was throttled.</p>
   */
  inline const ThrottlingException& GetThrottlingException() const { return m_throttlingException; }
  inline bool ThrottlingExceptionHasBeenSet() const { return m_throttlingExceptionHasBeenSet; }
  template <typename ThrottlingExceptionT = ThrottlingException>
  void SetThrottlingException(ThrottlingExceptionT&& value) {
    m_throttlingExceptionHasBeenSet = true;
    m_throttlingException = std::forward<ThrottlingExceptionT>(value);
  }
  template <typename ThrottlingExceptionT = ThrottlingException>
  StartSpeechSynthesisStreamEventStream& WithThrottlingException(ThrottlingExceptionT&& value) {
    SetThrottlingException(std::forward<ThrottlingExceptionT>(value));
    return *this;
  }
  ///@}
 private:
  AudioEvent m_audioEvent;

  StreamClosedEvent m_streamClosedEvent;

  ValidationException m_validationException;

  ServiceQuotaExceededException m_serviceQuotaExceededException;

  PollyError m_serviceFailureException;

  ThrottlingException m_throttlingException;
  bool m_audioEventHasBeenSet = false;
  bool m_streamClosedEventHasBeenSet = false;
  bool m_validationExceptionHasBeenSet = false;
  bool m_serviceQuotaExceededExceptionHasBeenSet = false;
  bool m_serviceFailureExceptionHasBeenSet = false;
  bool m_throttlingExceptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
