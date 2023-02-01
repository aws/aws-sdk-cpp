/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/model/LanguageCode.h>
#include <aws/core/utils/DateTime.h>
#include <aws/transcribe/model/VocabularyState.h>
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
   * <p>Provides information about a custom vocabulary, including the language of the
   * custom vocabulary, when it was last modified, its name, and the processing
   * state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/VocabularyInfo">AWS
   * API Reference</a></p>
   */
  class VocabularyInfo
  {
  public:
    AWS_TRANSCRIBESERVICE_API VocabularyInfo();
    AWS_TRANSCRIBESERVICE_API VocabularyInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API VocabularyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetVocabularyName() const{ return m_vocabularyName; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline bool VocabularyNameHasBeenSet() const { return m_vocabularyNameHasBeenSet; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyName(const Aws::String& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = value; }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyName(Aws::String&& value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName = std::move(value); }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline void SetVocabularyName(const char* value) { m_vocabularyNameHasBeenSet = true; m_vocabularyName.assign(value); }

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyInfo& WithVocabularyName(const Aws::String& value) { SetVocabularyName(value); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyInfo& WithVocabularyName(Aws::String&& value) { SetVocabularyName(std::move(value)); return *this;}

    /**
     * <p>A unique name, chosen by you, for your custom vocabulary. This name is case
     * sensitive, cannot contain spaces, and must be unique within an Amazon Web
     * Services account.</p>
     */
    inline VocabularyInfo& WithVocabularyName(const char* value) { SetVocabularyName(value); return *this;}


    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline VocabularyInfo& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p>The language code used to create your custom vocabulary. Each custom
     * vocabulary must contain terms in only one language.</p> <p>A custom vocabulary
     * can only be used to transcribe files in the same language as the custom
     * vocabulary. For example, if you create a custom vocabulary using US English
     * (<code>en-US</code>), you can only apply this custom vocabulary to files that
     * contain English audio.</p>
     */
    inline VocabularyInfo& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline VocabularyInfo& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time the specified custom vocabulary was last modified.</p>
     * <p>Timestamps are in the format <code>YYYY-MM-DD'T'HH:MM:SS.SSSSSS-UTC</code>.
     * For example, <code>2022-05-04T12:32:58.761000-07:00</code> represents 12:32 PM
     * UTC-7 on May 4, 2022.</p>
     */
    inline VocabularyInfo& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline const VocabularyState& GetVocabularyState() const{ return m_vocabularyState; }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline bool VocabularyStateHasBeenSet() const { return m_vocabularyStateHasBeenSet; }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(const VocabularyState& value) { m_vocabularyStateHasBeenSet = true; m_vocabularyState = value; }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline void SetVocabularyState(VocabularyState&& value) { m_vocabularyStateHasBeenSet = true; m_vocabularyState = std::move(value); }

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline VocabularyInfo& WithVocabularyState(const VocabularyState& value) { SetVocabularyState(value); return *this;}

    /**
     * <p>The processing state of your custom vocabulary. If the state is
     * <code>READY</code>, you can use the custom vocabulary in a
     * <code>StartTranscriptionJob</code> request.</p>
     */
    inline VocabularyInfo& WithVocabularyState(VocabularyState&& value) { SetVocabularyState(std::move(value)); return *this;}

  private:

    Aws::String m_vocabularyName;
    bool m_vocabularyNameHasBeenSet = false;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    VocabularyState m_vocabularyState;
    bool m_vocabularyStateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
