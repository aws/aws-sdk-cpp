/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/event/EventStreamDecoder.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/polly/model/StartSpeechSynthesisStreamActionStream.h>
#include <aws/polly/model/StartSpeechSynthesisStreamHandler.h>
#include <aws/polly/model/VoiceId.h>

#include <memory>
#include <utility>

namespace Aws {
namespace Polly {
namespace Model {

/**
 */
class StartSpeechSynthesisStreamRequest : public PollyRequest {
 public:
  AWS_POLLY_API StartSpeechSynthesisStreamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartSpeechSynthesisStream"; }

  inline virtual bool IsEventStreamRequest() const override { return true; }
  inline virtual bool HasEventStreamResponse() const override { return true; }
  // SerializePayload will not be invoked.
  // This request is sent by encoding its data in event-streams which is sent as IOStream via GetBody()
  AWS_POLLY_API Aws::String SerializePayload() const override { return {}; }
  AWS_POLLY_API std::shared_ptr<Aws::IOStream> GetBody() const override;
  AWS_POLLY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Underlying Event Stream Decoder.
   */
  inline Aws::Utils::Event::EventStreamDecoder& GetEventStreamDecoder() { return m_decoder; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline StartSpeechSynthesisStreamHandler& GetEventStreamHandler() { return m_handler; }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline void SetEventStreamHandler(const StartSpeechSynthesisStreamHandler& value) {
    m_handler = value;
    m_decoder.ResetEventStreamHandler(&m_handler);
  }

  /**
   * Underlying Event Stream Handler which is used to define callback functions.
   */
  inline StartSpeechSynthesisStreamRequest& WithEventStreamHandler(const StartSpeechSynthesisStreamHandler& value) {
    SetEventStreamHandler(value);
    return *this;
  }

  ///@{
  /**
   * <p>Specifies the engine for Amazon Polly to use when processing input text for
   * speech synthesis. Currently, only the <code>generative</code> engine is
   * supported. If you specify a voice that the selected engine doesn't support,
   * Amazon Polly returns an error.</p>
   */
  inline Engine GetEngine() const { return m_engine; }
  inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
  inline void SetEngine(Engine value) {
    m_engineHasBeenSet = true;
    m_engine = value;
  }
  inline StartSpeechSynthesisStreamRequest& WithEngine(Engine value) {
    SetEngine(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional parameter that sets the language code for the speech synthesis
   * request. Specify this parameter only when using a bilingual voice. If a
   * bilingual voice is used and no language code is specified, Amazon Polly uses the
   * default language of the bilingual voice.</p>
   */
  inline LanguageCode GetLanguageCode() const { return m_languageCode; }
  inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
  inline void SetLanguageCode(LanguageCode value) {
    m_languageCodeHasBeenSet = true;
    m_languageCode = value;
  }
  inline StartSpeechSynthesisStreamRequest& WithLanguageCode(LanguageCode value) {
    SetLanguageCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of one or more pronunciation lexicons for the service to apply
   * during synthesis. Amazon Polly applies lexicons only when the lexicon language
   * matches the voice language.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLexiconNames() const { return m_lexiconNames; }
  inline bool LexiconNamesHasBeenSet() const { return m_lexiconNamesHasBeenSet; }
  template <typename LexiconNamesT = Aws::Vector<Aws::String>>
  void SetLexiconNames(LexiconNamesT&& value) {
    m_lexiconNamesHasBeenSet = true;
    m_lexiconNames = std::forward<LexiconNamesT>(value);
  }
  template <typename LexiconNamesT = Aws::Vector<Aws::String>>
  StartSpeechSynthesisStreamRequest& WithLexiconNames(LexiconNamesT&& value) {
    SetLexiconNames(std::forward<LexiconNamesT>(value));
    return *this;
  }
  template <typename LexiconNamesT = Aws::String>
  StartSpeechSynthesisStreamRequest& AddLexiconNames(LexiconNamesT&& value) {
    m_lexiconNamesHasBeenSet = true;
    m_lexiconNames.emplace_back(std::forward<LexiconNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio format for the synthesized speech. Currently, Amazon Polly does not
   * support JSON speech marks.</p>
   */
  inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(OutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline StartSpeechSynthesisStreamRequest& WithOutputFormat(OutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The audio frequency, specified in Hz.</p>
   */
  inline const Aws::String& GetSampleRate() const { return m_sampleRate; }
  inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
  template <typename SampleRateT = Aws::String>
  void SetSampleRate(SampleRateT&& value) {
    m_sampleRateHasBeenSet = true;
    m_sampleRate = std::forward<SampleRateT>(value);
  }
  template <typename SampleRateT = Aws::String>
  StartSpeechSynthesisStreamRequest& WithSampleRate(SampleRateT&& value) {
    SetSampleRate(std::forward<SampleRateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The voice to use in synthesis. To get a list of available voice IDs, use the
   * <a
   * href="https://docs.aws.amazon.com/polly/latest/API/API_DescribeVoices.html">DescribeVoices</a>
   * operation.</p>
   */
  inline VoiceId GetVoiceId() const { return m_voiceId; }
  inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
  inline void SetVoiceId(VoiceId value) {
    m_voiceIdHasBeenSet = true;
    m_voiceId = value;
  }
  inline StartSpeechSynthesisStreamRequest& WithVoiceId(VoiceId value) {
    SetVoiceId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The input event stream that contains text events and stream control
   * events.</p>
   */
  AWS_POLLY_API std::shared_ptr<StartSpeechSynthesisStreamActionStream> GetActionStream() const { return m_actionStream; }
  AWS_POLLY_API void SetActionStream(const std::shared_ptr<StartSpeechSynthesisStreamActionStream>& value) {
    m_actionStreamHasBeenSet = true;
    m_actionStream = value;
  }
  AWS_POLLY_API StartSpeechSynthesisStreamRequest& WithActionStream(const std::shared_ptr<StartSpeechSynthesisStreamActionStream>& value) {
    SetActionStream(value);
    return *this;
  }

  ///@}
 private:
  Engine m_engine{Engine::NOT_SET};

  LanguageCode m_languageCode{LanguageCode::NOT_SET};

  Aws::Vector<Aws::String> m_lexiconNames;

  OutputFormat m_outputFormat{OutputFormat::NOT_SET};

  Aws::String m_sampleRate;

  VoiceId m_voiceId{VoiceId::NOT_SET};

  std::shared_ptr<StartSpeechSynthesisStreamActionStream> m_actionStream;
  StartSpeechSynthesisStreamHandler m_handler;
  Aws::Utils::Event::EventStreamDecoder m_decoder{Utils::Event::EventStreamDecoder(&m_handler)};

  bool m_engineHasBeenSet = false;
  bool m_languageCodeHasBeenSet = false;
  bool m_lexiconNamesHasBeenSet = false;
  bool m_outputFormatHasBeenSet = false;
  bool m_sampleRateHasBeenSet = false;
  bool m_voiceIdHasBeenSet = false;
  bool m_actionStreamHasBeenSet = false;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
