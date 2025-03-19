/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/model/Engine.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/model/TaskStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/polly/model/OutputFormat.h>
#include <aws/polly/model/TextType.h>
#include <aws/polly/model/VoiceId.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/polly/model/SpeechMarkType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Polly
{
namespace Model
{

  /**
   * <p>SynthesisTask object that provides information about a speech synthesis
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/SynthesisTask">AWS
   * API Reference</a></p>
   */
  class SynthesisTask
  {
  public:
    AWS_POLLY_API SynthesisTask() = default;
    AWS_POLLY_API SynthesisTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API SynthesisTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the engine (<code>standard</code>, <code>neural</code>,
     * <code>long-form</code> or <code>generative</code>) for Amazon Polly to use when
     * processing input text for speech synthesis. Using a voice that is not supported
     * for the engine selected will result in an error.</p>
     */
    inline Engine GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(Engine value) { m_engineHasBeenSet = true; m_engine = value; }
    inline SynthesisTask& WithEngine(Engine value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Polly generated identifier for a speech synthesis task.</p>
     */
    inline const Aws::String& GetTaskId() const { return m_taskId; }
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
    template<typename TaskIdT = Aws::String>
    void SetTaskId(TaskIdT&& value) { m_taskIdHasBeenSet = true; m_taskId = std::forward<TaskIdT>(value); }
    template<typename TaskIdT = Aws::String>
    SynthesisTask& WithTaskId(TaskIdT&& value) { SetTaskId(std::forward<TaskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current status of the individual speech synthesis task.</p>
     */
    inline TaskStatus GetTaskStatus() const { return m_taskStatus; }
    inline bool TaskStatusHasBeenSet() const { return m_taskStatusHasBeenSet; }
    inline void SetTaskStatus(TaskStatus value) { m_taskStatusHasBeenSet = true; m_taskStatus = value; }
    inline SynthesisTask& WithTaskStatus(TaskStatus value) { SetTaskStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the current status of a specific speech synthesis task, including
     * errors if the task has failed.</p>
     */
    inline const Aws::String& GetTaskStatusReason() const { return m_taskStatusReason; }
    inline bool TaskStatusReasonHasBeenSet() const { return m_taskStatusReasonHasBeenSet; }
    template<typename TaskStatusReasonT = Aws::String>
    void SetTaskStatusReason(TaskStatusReasonT&& value) { m_taskStatusReasonHasBeenSet = true; m_taskStatusReason = std::forward<TaskStatusReasonT>(value); }
    template<typename TaskStatusReasonT = Aws::String>
    SynthesisTask& WithTaskStatusReason(TaskStatusReasonT&& value) { SetTaskStatusReason(std::forward<TaskStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pathway for the output speech file.</p>
     */
    inline const Aws::String& GetOutputUri() const { return m_outputUri; }
    inline bool OutputUriHasBeenSet() const { return m_outputUriHasBeenSet; }
    template<typename OutputUriT = Aws::String>
    void SetOutputUri(OutputUriT&& value) { m_outputUriHasBeenSet = true; m_outputUri = std::forward<OutputUriT>(value); }
    template<typename OutputUriT = Aws::String>
    SynthesisTask& WithOutputUri(OutputUriT&& value) { SetOutputUri(std::forward<OutputUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp for the time the synthesis task was started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    SynthesisTask& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of billable characters synthesized.</p>
     */
    inline int GetRequestCharacters() const { return m_requestCharacters; }
    inline bool RequestCharactersHasBeenSet() const { return m_requestCharactersHasBeenSet; }
    inline void SetRequestCharacters(int value) { m_requestCharactersHasBeenSet = true; m_requestCharacters = value; }
    inline SynthesisTask& WithRequestCharacters(int value) { SetRequestCharacters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN for the SNS topic optionally used for providing status notification for a
     * speech synthesis task.</p>
     */
    inline const Aws::String& GetSnsTopicArn() const { return m_snsTopicArn; }
    inline bool SnsTopicArnHasBeenSet() const { return m_snsTopicArnHasBeenSet; }
    template<typename SnsTopicArnT = Aws::String>
    void SetSnsTopicArn(SnsTopicArnT&& value) { m_snsTopicArnHasBeenSet = true; m_snsTopicArn = std::forward<SnsTopicArnT>(value); }
    template<typename SnsTopicArnT = Aws::String>
    SynthesisTask& WithSnsTopicArn(SnsTopicArnT&& value) { SetSnsTopicArn(std::forward<SnsTopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of one or more pronunciation lexicon names you want the service to apply
     * during synthesis. Lexicons are applied only if the language of the lexicon is
     * the same as the language of the voice. </p>
     */
    inline const Aws::Vector<Aws::String>& GetLexiconNames() const { return m_lexiconNames; }
    inline bool LexiconNamesHasBeenSet() const { return m_lexiconNamesHasBeenSet; }
    template<typename LexiconNamesT = Aws::Vector<Aws::String>>
    void SetLexiconNames(LexiconNamesT&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames = std::forward<LexiconNamesT>(value); }
    template<typename LexiconNamesT = Aws::Vector<Aws::String>>
    SynthesisTask& WithLexiconNames(LexiconNamesT&& value) { SetLexiconNames(std::forward<LexiconNamesT>(value)); return *this;}
    template<typename LexiconNamesT = Aws::String>
    SynthesisTask& AddLexiconNames(LexiconNamesT&& value) { m_lexiconNamesHasBeenSet = true; m_lexiconNames.emplace_back(std::forward<LexiconNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The format in which the returned output will be encoded. For audio stream,
     * this will be mp3, ogg_vorbis, or pcm. For speech marks, this will be json. </p>
     */
    inline OutputFormat GetOutputFormat() const { return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(OutputFormat value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline SynthesisTask& WithOutputFormat(OutputFormat value) { SetOutputFormat(value); return *this;}
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
    inline const Aws::String& GetSampleRate() const { return m_sampleRate; }
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }
    template<typename SampleRateT = Aws::String>
    void SetSampleRate(SampleRateT&& value) { m_sampleRateHasBeenSet = true; m_sampleRate = std::forward<SampleRateT>(value); }
    template<typename SampleRateT = Aws::String>
    SynthesisTask& WithSampleRate(SampleRateT&& value) { SetSampleRate(std::forward<SampleRateT>(value)); return *this;}
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
    SynthesisTask& WithSpeechMarkTypes(SpeechMarkTypesT&& value) { SetSpeechMarkTypes(std::forward<SpeechMarkTypesT>(value)); return *this;}
    inline SynthesisTask& AddSpeechMarkTypes(SpeechMarkType value) { m_speechMarkTypesHasBeenSet = true; m_speechMarkTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the input text is plain text or SSML. The default value is
     * plain text. </p>
     */
    inline TextType GetTextType() const { return m_textType; }
    inline bool TextTypeHasBeenSet() const { return m_textTypeHasBeenSet; }
    inline void SetTextType(TextType value) { m_textTypeHasBeenSet = true; m_textType = value; }
    inline SynthesisTask& WithTextType(TextType value) { SetTextType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Voice ID to use for the synthesis. </p>
     */
    inline VoiceId GetVoiceId() const { return m_voiceId; }
    inline bool VoiceIdHasBeenSet() const { return m_voiceIdHasBeenSet; }
    inline void SetVoiceId(VoiceId value) { m_voiceIdHasBeenSet = true; m_voiceId = value; }
    inline SynthesisTask& WithVoiceId(VoiceId value) { SetVoiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional language code for a synthesis task. This is only necessary if using
     * a bilingual voice, such as Aditi, which can be used for either Indian English
     * (en-IN) or Hindi (hi-IN). </p> <p>If a bilingual voice is used and no language
     * code is specified, Amazon Polly uses the default language of the bilingual
     * voice. The default language for any voice is the one returned by the <a
     * href="https://docs.aws.amazon.com/polly/latest/dg/API_DescribeVoices.html">DescribeVoices</a>
     * operation for the <code>LanguageCode</code> parameter. For example, if no
     * language code is specified, Aditi will use Indian English rather than Hindi.</p>
     */
    inline LanguageCode GetLanguageCode() const { return m_languageCode; }
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }
    inline void SetLanguageCode(LanguageCode value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }
    inline SynthesisTask& WithLanguageCode(LanguageCode value) { SetLanguageCode(value); return *this;}
    ///@}
  private:

    Engine m_engine{Engine::NOT_SET};
    bool m_engineHasBeenSet = false;

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;

    TaskStatus m_taskStatus{TaskStatus::NOT_SET};
    bool m_taskStatusHasBeenSet = false;

    Aws::String m_taskStatusReason;
    bool m_taskStatusReasonHasBeenSet = false;

    Aws::String m_outputUri;
    bool m_outputUriHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    int m_requestCharacters{0};
    bool m_requestCharactersHasBeenSet = false;

    Aws::String m_snsTopicArn;
    bool m_snsTopicArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_lexiconNames;
    bool m_lexiconNamesHasBeenSet = false;

    OutputFormat m_outputFormat{OutputFormat::NOT_SET};
    bool m_outputFormatHasBeenSet = false;

    Aws::String m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    Aws::Vector<SpeechMarkType> m_speechMarkTypes;
    bool m_speechMarkTypesHasBeenSet = false;

    TextType m_textType{TextType::NOT_SET};
    bool m_textTypeHasBeenSet = false;

    VoiceId m_voiceId{VoiceId::NOT_SET};
    bool m_voiceIdHasBeenSet = false;

    LanguageCode m_languageCode{LanguageCode::NOT_SET};
    bool m_languageCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
