/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/SpeechMarkType.h>
#include <utility>

namespace Aws
{
namespace Polly
{
namespace Model
{

  /**
   */
  class SynthesizeSpeechRequest : public PollyRequest
  {
  public:
    AWS_POLLY_API SynthesizeSpeechRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SynthesizeSpeech"; }

    AWS_POLLY_API Aws::String SerializePayload() const override;

  protected:
    AWS_POLLY_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Specifies the engine (<code>standard</code>, <code>neural</code>,
     * <code>long-form</code>, or <code>generative</code>) for Amazon Polly to use when
     * processing input text for speech synthesis. Provide an engine that is supported
     * by the voice you select. If you don't provide an engine, the standard engine is
     * selected by default. If a chosen voice isn't supported by the standard engine,
     * this will result in an error. For information on Amazon Polly voices and which
     * voices are available for each engine, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/voicelist.html">Available
     * Voices</a>.</p>
     */
    inline Engine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(Engine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline SynthesizeSpeechRequest& WithEngine(Engine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional language code for the Synthesize Speech request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly uses the default language
     * of the bilingual voice. The default language for any voice is the one returned
     * by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline SynthesizeSpeechRequest& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. For information about storing lexicons,
     * see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_PutLexicon.html">PutLexicon</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const { return m_lexiconNames; }
    inline bool LexiconNamesHasBeenSet() const { return m_lexiconNamesHasBeenSet; }
    template<typename LexiconNamesT = Aws::Vector<Aws::String>>
    void SetLexiconNames(LexiconNamesT&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = std::forward<LexiconNamesT>(value); }
    template<typename LexiconNamesT = Aws::Vector<Aws::String>>
    SynthesizeSpeechRequest& WithLexiconNames(LexiconNamesT&& value) { SetLexiconNames(std::forward<LexiconNamesT>(value)); return *this;}
    template<typename LexiconNamesT = Aws::String>
    SynthesizeSpeechRequest& AddLexiconNames(LexiconNamesT&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.emplace_back(std::forward<LexiconNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     * <p>When pcm is used, the content returned is audio/pcm in a signed 16-bit, 1
     * channel (mono), little-endian format. </p>
     */
    inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline SynthesizeSpeechRequest& WithOutputFormat(OutputFormat value) { SetOutputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", "24000", "44100" and "48000". The
     * default value for standard voices is "22050". The default value for neural
     * voices is "24000". The default value for long-form voices is "24000". The
     * default value for generative voices is "24000".</p> <p>Valid values for pcm are
     * "8000" and "16000" The default value is "16000". </p>
     */
    inline const Aws::String& GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    template<typename SampleRateT = Aws::String>
    void SetSampleRate(SampleRateT&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::forward<SampleRateT>(value); }
    template<typename SampleRateT = Aws::String>
    SynthesizeSpeechRequest& WithSampleRate(SampleRateT&& value) { SetSampleRate(std::forward<SampleRateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline const Aws::Vector<SpeechMarkType>& GetSpeechMarkTypes() const { return m_speechMarkTypes; }
    inline bool SpeechMarkTypesHasBeenSet() const { return m_speechMarkTypesHasBeenSet; }
    template<typename SpeechMarkTypesT = Aws::Vector<SpeechMarkType>>
    void SetSpeechMarkTypes(SpeechMarkTypesT&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes = std::forward<SpeechMarkTypesT>(value); }
    template<typename SpeechMarkTypesT = Aws::Vector<SpeechMarkType>>
    SynthesizeSpeechRequest& WithSpeechMarkTypes(SpeechMarkTypesT&& value) { SetSpeechMarkTypes(std::forward<SpeechMarkTypesT>(value)); return *this;}
    inline SynthesizeSpeechRequest& AddSpeechMarkTypes(SpeechMarkType value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Input text to synthesize. If you specify <code>ssml</code> as the
     * <code>TextType</code>, follow the SSML format for the input text. </p>
     */
    inline const Aws::String& GetText() const { return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    template<typename TextT = Aws::String>
    void SetText(TextT&& value) { m_textHasBeenSet = true; m_text = std::forward<TextT>(value); }
    template<typename TextT = Aws::String>
    SynthesizeSpeechRequest& WithText(TextT&& value) { SetText(std::forward<TextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the input text is plain text or SSML. The default value is
     * plain text. For more information, see <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/ssml.html">Using SSML</a>.</p>
     */
    inline TextType GetTextType() const { return m_textType; }
    inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }
    inline void SetTextType(TextType value) { m_textTypeHasBeenSet = true; m_textType = value; }
    inline SynthesizeSpeechRequest& WithTextType(TextType value) { SetTextType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Voice ID to use for the synthesis. You can get a list of available voice IDs
     * by calling the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation. </p>
     */
    inline VoiceId GetVoiceId() const { return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(VoiceId value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline SynthesizeSpeechRequest& WithVoiceId(VoiceId value) { SetVoiceId(value); return *this;}
    ///@}
  private:

    Engine m_engine{Engine::NOT_SET};
    bool m_engineHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet = false;

    OutputFormat m_outputFormat{OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    Aws::Vector<SpeechMarkType> m_speechMarkTypes;
    bool m_speechMarkTypesHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    TextType m_textType{TextType::NOT_SET};
    bool m_textTypeHasBeenSet = false;

    VoiceId m_voiceId{VoiceId::NOT_SET};
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
