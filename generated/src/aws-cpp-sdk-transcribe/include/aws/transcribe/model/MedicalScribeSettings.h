﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/VocabularyFilterMethod.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Makes it possible to control how your Medical Scribe job is processed using a
   * <code>MedicalScribeSettings</code> object. Specify
   * <code>ChannelIdentification</code> if <code>ChannelDefinitions</code> are set.
   * Enabled <code>ShowSpeakerLabels</code> if <code>ChannelIdentification</code> and
   * <code>ChannelDefinitions</code> are not set. One and only one of
   * <code>ChannelIdentification</code> and <code>ShowSpeakerLabels</code> must be
   * set. If <code>ShowSpeakerLabels</code> is set, <code>MaxSpeakerLabels</code>
   * must also be set. Use <code>Settings</code> to specify a vocabulary or
   * vocabulary filter or both using <code>VocabularyName</code>,
   * <code>VocabularyFilterName</code>. <code>VocabularyFilterMethod</code> must be
   * specified if <code>VocabularyFilterName</code> is set. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/MedicalScribeSettings">AWS
   * API Reference</a></p>
   */
  class MedicalScribeSettings
  {
  public:
    AWS_TRANSCRIBESERVICE_API MedicalScribeSettings();
    AWS_TRANSCRIBESERVICE_API MedicalScribeSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API MedicalScribeSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Enables speaker partitioning (diarization) in your Medical Scribe output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool GetShowSpeakerLabels() const{ return m_showSpeakerLabels; }

    /**
     * <p>Enables speaker partitioning (diarization) in your Medical Scribe output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline bool ShowSpeakerLabelsHasBeenSet() const { return m_showSpeakerLabelsHasBeenSet; }

    /**
     * <p>Enables speaker partitioning (diarization) in your Medical Scribe output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline void SetShowSpeakerLabels(bool value) { m_showSpeakerLabelsHasBeenSet = true; m_showSpeakerLabels = value; }

    /**
     * <p>Enables speaker partitioning (diarization) in your Medical Scribe output.
     * Speaker partitioning labels the speech from individual speakers in your media
     * file.</p> <p>If you enable <code>ShowSpeakerLabels</code> in your request, you
     * must also include <code>MaxSpeakerLabels</code>.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/diarization.html">Partitioning
     * speakers (diarization)</a>.</p>
     */
    inline MedicalScribeSettings& WithShowSpeakerLabels(bool value) { SetShowSpeakerLabels(value); return *this;}


    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline int GetMaxSpeakerLabels() const{ return m_maxSpeakerLabels; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline bool MaxSpeakerLabelsHasBeenSet() const { return m_maxSpeakerLabelsHasBeenSet; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline void SetMaxSpeakerLabels(int value) { m_maxSpeakerLabelsHasBeenSet = true; m_maxSpeakerLabels = value; }

    /**
     * <p>Specify the maximum number of speakers you want to partition in your
     * media.</p> <p>Note that if your media contains more speakers than the specified
     * number, multiple speakers are treated as a single speaker.</p> <p>If you specify
     * the <code>MaxSpeakerLabels</code> field, you must set the
     * <code>ShowSpeakerLabels</code> field to true.</p>
     */
    inline MedicalScribeSettings& WithMaxSpeakerLabels(int value) { SetMaxSpeakerLabels(value); return *this;}


    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool GetChannelIdentification() const{ return m_channelIdentification; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline bool ChannelIdentificationHasBeenSet() const { return m_channelIdentificationHasBeenSet; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline void SetChannelIdentification(bool value) { m_channelIdentificationHasBeenSet = true; m_channelIdentification = value; }

    /**
     * <p>Enables channel identification in multi-channel audio.</p> <p>Channel
     * identification transcribes the audio on each channel independently, then appends
     * the output for each channel into one transcript.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/channel-id.html">Transcribing
     * multi-channel audio</a>.</p>
     */
    inline MedicalScribeSettings& WithChannelIdentification(bool value) { SetChannelIdentification(value); return *this;}


    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline MedicalScribeSettings& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline MedicalScribeSettings& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary you want to include in your Medical Scribe
     * request. Custom vocabulary names are case sensitive.</p>
     */
    inline MedicalScribeSettings& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline const Aws::String& GetVocabularyFilterName() const{ return m_vocabularyFilterName; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline bool VocabularyFilterNameHasBeenSet() const { return m_vocabularyFilterNameHasBeenSet; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const Aws::String& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = value; }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(Aws::String&& value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName = std::move(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline void SetVocabularyFilterName(const char* value) { m_vocabularyFilterNameHasBeenSet = true; m_vocabularyFilterName.assign(value); }

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline MedicalScribeSettings& WithVocabularyFilterName(const Aws::String& value) { SetVocabularyFilterName(value); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline MedicalScribeSettings& WithVocabularyFilterName(Aws::String&& value) { SetVocabularyFilterName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom vocabulary filter you want to include in your Medical
     * Scribe request. Custom vocabulary filter names are case sensitive.</p> <p>Note
     * that if you include <code>VocabularyFilterName</code> in your request, you must
     * also include <code>VocabularyFilterMethod</code>.</p>
     */
    inline MedicalScribeSettings& WithVocabularyFilterName(const char* value) { SetVocabularyFilterName(value); return *this;}


    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline const VocabularyFilterMethod& GetVocabularyFilterMethod() const{ return m_vocabularyFilterMethod; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline bool VocabularyFilterMethodHasBeenSet() const { return m_vocabularyFilterMethodHasBeenSet; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(const VocabularyFilterMethod& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = value; }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline void SetVocabularyFilterMethod(VocabularyFilterMethod&& value) { m_vocabularyFilterMethodHasBeenSet = true; m_vocabularyFilterMethod = std::move(value); }

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline MedicalScribeSettings& WithVocabularyFilterMethod(const VocabularyFilterMethod& value) { SetVocabularyFilterMethod(value); return *this;}

    /**
     * <p>Specify how you want your custom vocabulary filter applied to your
     * transcript.</p> <p>To replace words with <code>***</code>, choose
     * <code>mask</code>.</p> <p>To delete words, choose <code>remove</code>.</p> <p>To
     * flag words without changing them, choose <code>tag</code>.</p>
     */
    inline MedicalScribeSettings& WithVocabularyFilterMethod(VocabularyFilterMethod&& value) { SetVocabularyFilterMethod(std::move(value)); return *this;}

  private:

    bool m_showSpeakerLabels;
    bool m_showSpeakerLabelsHasBeenSet = false;

    int m_maxSpeakerLabels;
    bool m_maxSpeakerLabelsHasBeenSet = false;

    bool m_channelIdentification;
    bool m_channelIdentificationHasBeenSet = false;

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    Aws::String m_vocabularyFilterName;
    bool m_vocabularyFilterNameHasBeenSet = false;

    VocabularyFilterMethod m_vocabularyFilterMethod;
    bool m_vocabularyFilterMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
