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
  class StartSpeechSynthesisTaskRequest : public PollyRequest
  {
  public:
    AWS_POLLY_API StartSpeechSynthesisTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSpeechSynthesisTask"; }

    AWS_POLLY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the engine (<code>standard</code>, <code>neural</code>,
     * <code>long-form</code> or <code>generative</code>) for Amazon Polly to use when
     * processing input text for speech synthesis. Using a voice that is not supported
     * for the engine selected will result in an error.</p>
     */
    inline const Engine& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Engine& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Engine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithEngine(const Engine& value) { SetEngine(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithEngine(Engine&& value) { SetEngine(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional language code for the Speech Synthesis request. This is only
     * necessary if using a bilingual voice, such as Aditi, which can be used for
     * either Indian English (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is
     * used and no language code is specified, Amazon Polly uses the default language
     * of the bilingual voice. The default language for any voice is the one returned
     * by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const{ return m_lexiconNames; }
    inline bool LexiconNamesHasBeenSet() const { return m_lexiconNamesHasBeenSet; }
    inline void SetLexiconNames(const Aws::Vector<Aws::String>& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = value; }
    inline void SetLexiconNames(Aws::Vector<Aws::String>&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithLexiconNames(const Aws::Vector<Aws::String>& value) { SetLexiconNames(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithLexiconNames(Aws::Vector<Aws::String>&& value) { SetLexiconNames(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& AddLexiconNames(const Aws::String& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }
    inline StartSpeechSynthesisTaskRequest& AddLexiconNames(Aws::String&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(std::move(value)); return *this; }
    inline StartSpeechSynthesisTaskRequest& AddLexiconNames(const char* value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 bucket name to which the output file will be saved.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }
    inline StartSpeechSynthesisTaskRequest& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key prefix for the output speech file.</p>
     */
    inline const Aws::String& GetOutputS3KeyPrefix() const{ return m_outputS3KeyPrefix; }
    inline bool OutputS3KeyPrefixHasBeenSet() const { return m_outputS3KeyPrefixHasBeenSet; }
    inline void SetOutputS3KeyPrefix(const Aws::String& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = value; }
    inline void SetOutputS3KeyPrefix(Aws::String&& value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix = std::move(value); }
    inline void SetOutputS3KeyPrefix(const char* value) { m_outputS3KeyPrefixHasBeenSet = true; m_outputS3KeyPrefix.assign(value); }
    inline StartSpeechSynthesisTaskRequest& WithOutputS3KeyPrefix(const Aws::String& value) { SetOutputS3KeyPrefix(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithOutputS3KeyPrefix(Aws::String&& value) { SetOutputS3KeyPrefix(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithOutputS3KeyPrefix(const char* value) { SetOutputS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The audio frequency specified in Hz.</p> <p>The valid values for mp3 and
     * ogg_vorbis are "8000", "16000", "22050", and "24000". The default value for
     * standard voices is "22050". The default value for neural voices is "24000". The
     * default value for long-form voices is "24000". The default value for generative
     * voices is "24000".</p> <p>Valid values for pcm are "8000" and "16000" The
     * default value is "16000". </p>
     */
    inline const Aws::String& GetSampleRate() const{ return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    inline void SetSampleRate(const Aws::String& value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }
    inline void SetSampleRate(Aws::String&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::move(value); }
    inline void SetSampleRate(const char* value) { m_sampleRateHasBeenSet = true; m_sampleRate.assign(value); }
    inline StartSpeechSynthesisTaskRequest& WithSampleRate(const Aws::String& value) { SetSampleRate(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithSampleRate(Aws::String&& value) { SetSampleRate(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithSampleRate(const char* value) { SetSampleRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const{ return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    inline void SetSnsTopicArn(const Aws::String& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = value; }
    inline void SetSnsTopicArn(Aws::String&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::move(value); }
    inline void SetSnsTopicArn(const char* value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn.assign(value); }
    inline StartSpeechSynthesisTaskRequest& WithSnsTopicArn(const Aws::String& value) { SetSnsTopicArn(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithSnsTopicArn(Aws::String&& value) { SetSnsTopicArn(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithSnsTopicArn(const char* value) { SetSnsTopicArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of speech marks returned for the input text.</p>
     */
    inline const Aws::Vector<SpeechMarkType>& GetSpeechMarkTypes() const{ return m_speechMarkTypes; }
    inline bool SpeechMarkTypesHasBeenSet() const { return m_speechMarkTypesHasBeenSet; }
    inline void SetSpeechMarkTypes(const Aws::Vector<SpeechMarkType>& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes = value; }
    inline void SetSpeechMarkTypes(Aws::Vector<SpeechMarkType>&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithSpeechMarkTypes(const Aws::Vector<SpeechMarkType>& value) { SetSpeechMarkTypes(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithSpeechMarkTypes(Aws::Vector<SpeechMarkType>&& value) { SetSpeechMarkTypes(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& AddSpeechMarkTypes(const SpeechMarkType& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(value); return *this; }
    inline StartSpeechSynthesisTaskRequest& AddSpeechMarkTypes(SpeechMarkType&& value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input text to synthesize. If you specify ssml as the TextType, follow the
     * SSML format for the input text. </p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline StartSpeechSynthesisTaskRequest& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline const TextType& GetTextType() const{ return m_textType; }
    inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }
    inline void SetTextType(const TextType& value) { m_textTypeHasBeenSet = true; m_textType = value; }
    inline void SetTextType(TextType&& value) { m_textTypeHasBeenSet = true; m_textType = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithTextType(const TextType& value) { SetTextType(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithTextType(TextType&& value) { SetTextType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline const VoiceId& GetVoiceId() const{ return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(const VoiceId& value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline void SetVoiceId(VoiceId&& value) { m_voiceIdHasBeenSet = true; m_voiceId = std::move(value); }
    inline StartSpeechSynthesisTaskRequest& WithVoiceId(const VoiceId& value) { SetVoiceId(value); return *this;}
    inline StartSpeechSynthesisTaskRequest& WithVoiceId(VoiceId&& value) { SetVoiceId(std::move(value)); return *this;}
    ///@}
  private:

    Engine m_engine;
    bool m_engineHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet = false;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;

    Aws::String m_outputS3KeyPrefix;
    bool m_outputS3KeyPrefixHasBeenSet = false;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Vector<SpeechMarkType> m_speechMarkTypes;
    bool m_speechMarkTypesHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    TextType m_textType;
    bool m_textTypeHasBeenSet = false;

    VoiceId m_voiceId;
    bool m_voiceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
